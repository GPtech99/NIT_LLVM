#include "nit__modelize_property.sep.0.h"
/* method modelize_property#ToolContext#modelize_property_phase for (self: ToolContext): Phase */
val* nit__modelize_property___ToolContext___modelize_property_phase(val* self) {
val* var /* : Phase */;
val* var1 /* : Phase */;
var1 = self->attrs[COLOR_nit__modelize_property__ToolContext___modelize_property_phase].val; /* _modelize_property_phase on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelize_property_phase");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 24);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property#ToolContext#modelize_property_phase= for (self: ToolContext, Phase) */
void nit__modelize_property___ToolContext___modelize_property_phase_61d(val* self, val* p0) {
self->attrs[COLOR_nit__modelize_property__ToolContext___modelize_property_phase].val = p0; /* _modelize_property_phase on <self:ToolContext> */
RET_LABEL:;
}
/* method modelize_property#ModelizePropertyPhase#process_nmodule for (self: ModelizePropertyPhase, AModule) */
void nit__modelize_property___nit__modelize_property__ModelizePropertyPhase___nit__phase__Phase__process_nmodule(val* self, val* p0) {
val* var_nmodule /* var nmodule: AModule */;
val* var /* : ANodes[AClassdef] */;
val* var_ /* var : ANodes[AClassdef] */;
val* var1 /* : Iterator[nullable Object] */;
val* var_2 /* var : Iterator[AClassdef] */;
short int var3 /* : Bool */;
val* var4 /* : nullable Object */;
val* var_nclassdef /* var nclassdef: AClassdef */;
val* var5 /* : nullable Array[AClassdef] */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var8 /* : ToolContext */;
val* var9 /* : ModelBuilder */;
var_nmodule = p0;
{
var = ((val*(*)(val* self))(var_nmodule->class->vft[COLOR_nit__parser_nodes__AModule__n_classdefs]))(var_nmodule); /* n_classdefs on <var_nmodule:AModule>*/
}
var_ = var;
{
var1 = ((val*(*)(val* self))(var_->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:ANodes[AClassdef]>*/
}
var_2 = var1;
for(;;) {
{
var3 = ((short int(*)(val* self))((((long)var_2&3)?class_info[((long)var_2&3)]:var_2->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_2); /* is_ok on <var_2:Iterator[AClassdef]>*/
}
if (var3){
{
var4 = ((val*(*)(val* self))((((long)var_2&3)?class_info[((long)var_2&3)]:var_2->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_2); /* item on <var_2:Iterator[AClassdef]>*/
}
var_nclassdef = var4;
{
var5 = ((val*(*)(val* self))(var_nclassdef->class->vft[COLOR_nit__modelize_class__AClassdef__all_defs]))(var_nclassdef); /* all_defs on <var_nclassdef:AClassdef>*/
}
if (var5 == NULL) {
var6 = 1; /* is null */
} else {
var6 = 0; /* arg is null but recv is not */
}
if (0) {
var7 = ((short int(*)(val* self, val* p0))(var5->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var5, ((val*)NULL)); /* == on <var5:nullable Array[AClassdef]>*/
var6 = var7;
}
if (var6){
goto BREAK_label;
} else {
}
{
var8 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__phase__Phase__toolcontext]))(self); /* toolcontext on <self:ModelizePropertyPhase>*/
}
{
var9 = ((val*(*)(val* self))(var8->class->vft[COLOR_nit__modelbuilder_base__ToolContext__modelbuilder]))(var8); /* modelbuilder on <var8:ToolContext>*/
}
{
((void(*)(val* self, val* p0))(var9->class->vft[COLOR_nit__modelize_property__ModelBuilder__build_properties]))(var9, var_nclassdef); /* build_properties on <var9:ModelBuilder>*/
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_2&3)?class_info[((long)var_2&3)]:var_2->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_2); /* next on <var_2:Iterator[AClassdef]>*/
}
} else {
goto BREAK_label10;
}
}
BREAK_label10: (void)0;
{
((void(*)(val* self))((((long)var_2&3)?class_info[((long)var_2&3)]:var_2->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_2); /* finish on <var_2:Iterator[AClassdef]>*/
}
RET_LABEL:;
}
/* method modelize_property#ModelBuilder#mpropdef2npropdef for (self: ModelBuilder): HashMap[MPropDef, APropdef] */
val* nit__modelize_property___ModelBuilder___mpropdef2npropdef(val* self) {
val* var /* : HashMap[MPropDef, APropdef] */;
val* var1 /* : HashMap[MPropDef, APropdef] */;
var1 = self->attrs[COLOR_nit__modelize_property__ModelBuilder___mpropdef2npropdef].val; /* _mpropdef2npropdef on <self:ModelBuilder> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef2npropdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 40);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property#ModelBuilder#mpropdef2npropdef= for (self: ModelBuilder, HashMap[MPropDef, APropdef]) */
void nit__modelize_property___ModelBuilder___mpropdef2npropdef_61d(val* self, val* p0) {
self->attrs[COLOR_nit__modelize_property__ModelBuilder___mpropdef2npropdef].val = p0; /* _mpropdef2npropdef on <self:ModelBuilder> */
RET_LABEL:;
}
/* method modelize_property#ModelBuilder#mpropdef2node for (self: ModelBuilder, MPropDef): nullable ANode */
val* nit__modelize_property___ModelBuilder___mpropdef2node(val* self, val* p0) {
val* var /* : nullable ANode */;
val* var_mpropdef /* var mpropdef: MPropDef */;
val* var1 /* : HashMap[MPropDef, APropdef] */;
val* var2 /* : nullable Object */;
val* var_res /* var res: nullable Object */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var5 /* : ToolContext */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
int cltype;
int idtype;
short int var_ /* var : Bool */;
val* var8 /* : MProperty */;
short int var9 /* : Bool */;
val* var10 /* : HashMap[MClassDef, AClassdef] */;
val* var11 /* : MClassDef */;
val* var12 /* : nullable Object */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
var_mpropdef = p0;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__modelize_property__ModelBuilder__mpropdef2npropdef]))(self); /* mpropdef2npropdef on <self:ModelBuilder>*/
}
{
var2 = ((val*(*)(val* self, val* p0))(var1->class->vft[COLOR_standard__abstract_collection__MapRead__get_or_null]))(var1, var_mpropdef); /* get_or_null on <var1:HashMap[MPropDef, APropdef]>*/
}
var_res = var2;
if (var_res == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (0) {
var4 = ((short int(*)(val* self, val* p0))(var_res->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_res, ((val*)NULL)); /* != on <var_res:nullable Object(nullable APropdef)>*/
var3 = var4;
}
if (var3){
{
var5 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__toolcontext]))(self); /* toolcontext on <self:ModelBuilder>*/
}
{
((void(*)(val* self, val* p0))(var5->class->vft[COLOR_nit__phase__ToolContext__run_phases_on_npropdef]))(var5, var_res); /* run_phases_on_npropdef on <var5:ToolContext>*/
}
var = var_res;
goto RET_LABEL;
} else {
}
/* <var_mpropdef:MPropDef> isa MMethodDef */
cltype = type_nit__MMethodDef.color;
idtype = type_nit__MMethodDef.id;
if(cltype >= var_mpropdef->type->table_size) {
var7 = 0;
} else {
var7 = var_mpropdef->type->type_table[cltype] == idtype;
}
var_ = var7;
if (var7){
{
var8 = ((val*(*)(val* self))(var_mpropdef->class->vft[COLOR_nit__model__MPropDef__mproperty]))(var_mpropdef); /* mproperty on <var_mpropdef:MPropDef(MMethodDef)>*/
}
{
var9 = ((short int(*)(val* self))(var8->class->vft[COLOR_nit__model__MMethod__is_root_init]))(var8); /* is_root_init on <var8:MProperty(MMethod)>*/
}
var6 = var9;
} else {
var6 = var_;
}
if (var6){
{
var10 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__modelize_class__ModelBuilder__mclassdef2nclassdef]))(self); /* mclassdef2nclassdef on <self:ModelBuilder>*/
}
{
var11 = ((val*(*)(val* self))(var_mpropdef->class->vft[COLOR_nit__model__MPropDef__mclassdef]))(var_mpropdef); /* mclassdef on <var_mpropdef:MPropDef(MMethodDef)>*/
}
{
var12 = ((val*(*)(val* self, val* p0))(var10->class->vft[COLOR_standard__abstract_collection__MapRead__get_or_null]))(var10, var11); /* get_or_null on <var10:HashMap[MClassDef, AClassdef]>*/
}
var_res = var12;
if (var_res == NULL) {
var13 = 0; /* is null */
} else {
var13 = 1; /* arg is null and recv is not */
}
if (0) {
var14 = ((short int(*)(val* self, val* p0))(var_res->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_res, ((val*)NULL)); /* != on <var_res:nullable Object(nullable AClassdef)>*/
var13 = var14;
}
if (var13){
var = var_res;
goto RET_LABEL;
} else {
}
} else {
}
var = ((val*)NULL);
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelize_property#ModelBuilder#collect_attr_propdef for (self: ModelBuilder, MClassDef): Array[AAttrPropdef] */
val* nit__modelize_property___ModelBuilder___collect_attr_propdef(val* self, val* p0) {
val* var /* : Array[AAttrPropdef] */;
val* var_mclassdef /* var mclassdef: MClassDef */;
val* var1 /* : Array[AAttrPropdef] */;
val* var_res /* var res: Array[AAttrPropdef] */;
val* var2 /* : HashMap[MClassDef, AClassdef] */;
val* var3 /* : nullable Object */;
val* var_n /* var n: nullable AClassdef */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var6 /* : ANodes[APropdef] */;
val* var_ /* var : ANodes[APropdef] */;
val* var7 /* : Iterator[nullable Object] */;
val* var_8 /* var : Iterator[APropdef] */;
short int var9 /* : Bool */;
val* var10 /* : nullable Object */;
val* var_npropdef /* var npropdef: APropdef */;
short int var11 /* : Bool */;
int cltype;
int idtype;
val* var12 /* : ToolContext */;
var_mclassdef = p0;
var1 = NEW_standard__Array(&type_standard__Array__nit__AAttrPropdef);
{
((void(*)(val* self))(var1->class->vft[COLOR_standard__kernel__Object__init]))(var1); /* init on <var1:Array[AAttrPropdef]>*/
}
var_res = var1;
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__modelize_class__ModelBuilder__mclassdef2nclassdef]))(self); /* mclassdef2nclassdef on <self:ModelBuilder>*/
}
{
var3 = ((val*(*)(val* self, val* p0))(var2->class->vft[COLOR_standard__abstract_collection__MapRead__get_or_null]))(var2, var_mclassdef); /* get_or_null on <var2:HashMap[MClassDef, AClassdef]>*/
}
var_n = var3;
if (var_n == NULL) {
var4 = 1; /* is null */
} else {
var4 = 0; /* arg is null but recv is not */
}
if (0) {
var5 = ((short int(*)(val* self, val* p0))(var_n->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_n, ((val*)NULL)); /* == on <var_n:nullable AClassdef>*/
var4 = var5;
}
if (var4){
var = var_res;
goto RET_LABEL;
} else {
}
{
var6 = ((val*(*)(val* self))(var_n->class->vft[COLOR_nit__parser_nodes__AClassdef__n_propdefs]))(var_n); /* n_propdefs on <var_n:nullable AClassdef(AClassdef)>*/
}
var_ = var6;
{
var7 = ((val*(*)(val* self))(var_->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:ANodes[APropdef]>*/
}
var_8 = var7;
for(;;) {
{
var9 = ((short int(*)(val* self))((((long)var_8&3)?class_info[((long)var_8&3)]:var_8->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_8); /* is_ok on <var_8:Iterator[APropdef]>*/
}
if (var9){
{
var10 = ((val*(*)(val* self))((((long)var_8&3)?class_info[((long)var_8&3)]:var_8->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_8); /* item on <var_8:Iterator[APropdef]>*/
}
var_npropdef = var10;
/* <var_npropdef:APropdef> isa AAttrPropdef */
cltype = type_nit__AAttrPropdef.color;
idtype = type_nit__AAttrPropdef.id;
if(cltype >= var_npropdef->type->table_size) {
var11 = 0;
} else {
var11 = var_npropdef->type->type_table[cltype] == idtype;
}
if (var11){
{
var12 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__toolcontext]))(self); /* toolcontext on <self:ModelBuilder>*/
}
{
((void(*)(val* self, val* p0))(var12->class->vft[COLOR_nit__phase__ToolContext__run_phases_on_npropdef]))(var12, var_npropdef); /* run_phases_on_npropdef on <var12:ToolContext>*/
}
{
((void(*)(val* self, val* p0))(var_res->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_res, var_npropdef); /* add on <var_res:Array[AAttrPropdef]>*/
}
} else {
}
{
((void(*)(val* self))((((long)var_8&3)?class_info[((long)var_8&3)]:var_8->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_8); /* next on <var_8:Iterator[APropdef]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_8&3)?class_info[((long)var_8&3)]:var_8->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_8); /* finish on <var_8:Iterator[APropdef]>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelize_property#ModelBuilder#build_properties for (self: ModelBuilder, AClassdef) */
void nit__modelize_property___ModelBuilder___build_properties(val* self, val* p0) {
val* var_nclassdef /* var nclassdef: AClassdef */;
short int var /* : Bool */;
val* var1 /* : nullable MClassDef */;
val* var_mclassdef /* var mclassdef: nullable MClassDef */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var4 /* : nullable POSetElement[MClassDef] */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var7 /* : nullable POSetElement[MClassDef] */;
val* var8 /* : Collection[nullable Object] */;
val* var_ /* var : Collection[MClassDef] */;
val* var9 /* : Iterator[nullable Object] */;
val* var_10 /* var : Iterator[MClassDef] */;
short int var11 /* : Bool */;
val* var12 /* : nullable Object */;
val* var_superclassdef /* var superclassdef: MClassDef */;
val* var13 /* : HashMap[MClassDef, AClassdef] */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
val* var16 /* : HashMap[MClassDef, AClassdef] */;
val* var17 /* : nullable Object */;
val* var19 /* : nullable Array[AClassdef] */;
val* var_20 /* var : nullable Array[AClassdef] */;
val* var21 /* : Iterator[nullable Object] */;
val* var_22 /* var : ArrayIterator[AClassdef] */;
short int var23 /* : Bool */;
val* var24 /* : nullable Object */;
val* var_nclassdef2 /* var nclassdef2: AClassdef */;
val* var25 /* : ANodes[APropdef] */;
val* var_26 /* var : ANodes[APropdef] */;
val* var27 /* : Iterator[nullable Object] */;
val* var_28 /* var : Iterator[APropdef] */;
short int var29 /* : Bool */;
val* var30 /* : nullable Object */;
val* var_npropdef /* var npropdef: APropdef */;
val* var32 /* : ANodes[APropdef] */;
val* var_33 /* var : ANodes[APropdef] */;
val* var34 /* : Iterator[nullable Object] */;
val* var_35 /* var : Iterator[APropdef] */;
short int var36 /* : Bool */;
val* var37 /* : nullable Object */;
val* var_npropdef38 /* var npropdef: APropdef */;
val* var40 /* : ANodes[APropdef] */;
val* var_41 /* var : ANodes[APropdef] */;
val* var42 /* : Iterator[nullable Object] */;
val* var_43 /* var : Iterator[APropdef] */;
short int var44 /* : Bool */;
val* var45 /* : nullable Object */;
val* var_npropdef46 /* var npropdef: APropdef */;
short int var47 /* : Bool */;
int cltype;
int idtype;
short int var48 /* : Bool */;
val* var50 /* : nullable MPropDef */;
val* var_mpropdef /* var mpropdef: nullable MVirtualTypeDef */;
short int var51 /* : Bool */;
short int var52 /* : Bool */;
val* var53 /* : nullable MType */;
short int var54 /* : Bool */;
short int var55 /* : Bool */;
val* var56 /* : MProperty */;
val* var57 /* : MClassType */;
val* var58 /* : MModule */;
short int var59 /* : Bool */;
short int var60 /* : Bool */;
val* var61 /* : MModule */;
val* var62 /* : Model */;
val* var63 /* : MNullType */;
val* var65 /* : ANodes[APropdef] */;
val* var_66 /* var : ANodes[APropdef] */;
val* var67 /* : Iterator[nullable Object] */;
val* var_68 /* var : Iterator[APropdef] */;
short int var69 /* : Bool */;
val* var70 /* : nullable Object */;
val* var_npropdef71 /* var npropdef: APropdef */;
short int var72 /* : Bool */;
int cltype73;
int idtype74;
short int var75 /* : Bool */;
val* var78 /* : ANodes[APropdef] */;
val* var_79 /* var : ANodes[APropdef] */;
val* var80 /* : Iterator[nullable Object] */;
val* var_81 /* var : Iterator[APropdef] */;
short int var82 /* : Bool */;
val* var83 /* : nullable Object */;
val* var_npropdef84 /* var npropdef: APropdef */;
short int var85 /* : Bool */;
int cltype86;
int idtype87;
var_nclassdef = p0;
{
var = ((short int(*)(val* self))(var_nclassdef->class->vft[COLOR_nit__modelize_property__AClassdef__build_properties_is_done]))(var_nclassdef); /* build_properties_is_done on <var_nclassdef:AClassdef>*/
}
if (var){
goto RET_LABEL;
} else {
}
{
((void(*)(val* self, short int p0))(var_nclassdef->class->vft[COLOR_nit__modelize_property__AClassdef__build_properties_is_done_61d]))(var_nclassdef, 1); /* build_properties_is_done= on <var_nclassdef:AClassdef>*/
}
{
var1 = ((val*(*)(val* self))(var_nclassdef->class->vft[COLOR_nit__modelize_class__AClassdef__mclassdef]))(var_nclassdef); /* mclassdef on <var_nclassdef:AClassdef>*/
}
var_mclassdef = var1;
if (var_mclassdef == NULL) {
var2 = 1; /* is null */
} else {
var2 = 0; /* arg is null but recv is not */
}
if (0) {
var3 = ((short int(*)(val* self, val* p0))(var_mclassdef->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_mclassdef, ((val*)NULL)); /* == on <var_mclassdef:nullable MClassDef>*/
var2 = var3;
}
if (var2){
goto RET_LABEL;
} else {
}
{
var4 = ((val*(*)(val* self))(var_mclassdef->class->vft[COLOR_nit__model__MClassDef__in_hierarchy]))(var_mclassdef); /* in_hierarchy on <var_mclassdef:nullable MClassDef(MClassDef)>*/
}
if (var4 == NULL) {
var5 = 1; /* is null */
} else {
var5 = 0; /* arg is null but recv is not */
}
if (0) {
var6 = ((short int(*)(val* self, val* p0))(var4->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var4, ((val*)NULL)); /* == on <var4:nullable POSetElement[MClassDef]>*/
var5 = var6;
}
if (var5){
goto RET_LABEL;
} else {
}
{
var7 = ((val*(*)(val* self))(var_mclassdef->class->vft[COLOR_nit__model__MClassDef__in_hierarchy]))(var_mclassdef); /* in_hierarchy on <var_mclassdef:nullable MClassDef(MClassDef)>*/
}
if (var7 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 92);
fatal_exit(1);
} else {
var8 = ((val*(*)(val* self))(var7->class->vft[COLOR_poset__POSetElement__direct_greaters]))(var7); /* direct_greaters on <var7:nullable POSetElement[MClassDef]>*/
}
var_ = var8;
{
var9 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Collection[MClassDef]>*/
}
var_10 = var9;
for(;;) {
{
var11 = ((short int(*)(val* self))((((long)var_10&3)?class_info[((long)var_10&3)]:var_10->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_10); /* is_ok on <var_10:Iterator[MClassDef]>*/
}
if (var11){
{
var12 = ((val*(*)(val* self))((((long)var_10&3)?class_info[((long)var_10&3)]:var_10->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_10); /* item on <var_10:Iterator[MClassDef]>*/
}
var_superclassdef = var12;
{
var13 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__modelize_class__ModelBuilder__mclassdef2nclassdef]))(self); /* mclassdef2nclassdef on <self:ModelBuilder>*/
}
{
var14 = ((short int(*)(val* self, val* p0))(var13->class->vft[COLOR_standard__abstract_collection__MapRead__has_key]))(var13, var_superclassdef); /* has_key on <var13:HashMap[MClassDef, AClassdef]>*/
}
var15 = !var14;
if (var15){
goto BREAK_label;
} else {
}
{
var16 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__modelize_class__ModelBuilder__mclassdef2nclassdef]))(self); /* mclassdef2nclassdef on <self:ModelBuilder>*/
}
{
var17 = ((val*(*)(val* self, val* p0))(var16->class->vft[COLOR_standard__abstract_collection__MapRead___91d_93d]))(var16, var_superclassdef); /* [] on <var16:HashMap[MClassDef, AClassdef]>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__modelize_property__ModelBuilder__build_properties]))(self, var17); /* build_properties on <self:ModelBuilder>*/
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_10&3)?class_info[((long)var_10&3)]:var_10->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_10); /* next on <var_10:Iterator[MClassDef]>*/
}
} else {
goto BREAK_label18;
}
}
BREAK_label18: (void)0;
{
((void(*)(val* self))((((long)var_10&3)?class_info[((long)var_10&3)]:var_10->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_10); /* finish on <var_10:Iterator[MClassDef]>*/
}
{
((void(*)(val* self, val* p0, val* p1))(var_mclassdef->class->vft[COLOR_nit__modelize_property__MClassDef__build_self_type]))(var_mclassdef, self, var_nclassdef); /* build_self_type on <var_mclassdef:nullable MClassDef(MClassDef)>*/
}
{
var19 = ((val*(*)(val* self))(var_nclassdef->class->vft[COLOR_nit__modelize_class__AClassdef__all_defs]))(var_nclassdef); /* all_defs on <var_nclassdef:AClassdef>*/
}
var_20 = var19;
if (var_20 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 98);
fatal_exit(1);
} else {
var21 = ((val*(*)(val* self))(var_20->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_20); /* iterator on <var_20:nullable Array[AClassdef]>*/
}
var_22 = var21;
for(;;) {
{
var23 = ((short int(*)(val* self))(var_22->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_22); /* is_ok on <var_22:ArrayIterator[AClassdef]>*/
}
if (var23){
{
var24 = ((val*(*)(val* self))(var_22->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_22); /* item on <var_22:ArrayIterator[AClassdef]>*/
}
var_nclassdef2 = var24;
{
var25 = ((val*(*)(val* self))(var_nclassdef2->class->vft[COLOR_nit__parser_nodes__AClassdef__n_propdefs]))(var_nclassdef2); /* n_propdefs on <var_nclassdef2:AClassdef>*/
}
var_26 = var25;
{
var27 = ((val*(*)(val* self))(var_26->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_26); /* iterator on <var_26:ANodes[APropdef]>*/
}
var_28 = var27;
for(;;) {
{
var29 = ((short int(*)(val* self))((((long)var_28&3)?class_info[((long)var_28&3)]:var_28->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_28); /* is_ok on <var_28:Iterator[APropdef]>*/
}
if (var29){
{
var30 = ((val*(*)(val* self))((((long)var_28&3)?class_info[((long)var_28&3)]:var_28->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_28); /* item on <var_28:Iterator[APropdef]>*/
}
var_npropdef = var30;
{
((void(*)(val* self, val* p0, val* p1))(var_npropdef->class->vft[COLOR_nit__modelize_property__APropdef__build_property]))(var_npropdef, self, var_mclassdef); /* build_property on <var_npropdef:APropdef>*/
}
{
((void(*)(val* self))((((long)var_28&3)?class_info[((long)var_28&3)]:var_28->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_28); /* next on <var_28:Iterator[APropdef]>*/
}
} else {
goto BREAK_label31;
}
}
BREAK_label31: (void)0;
{
((void(*)(val* self))((((long)var_28&3)?class_info[((long)var_28&3)]:var_28->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_28); /* finish on <var_28:Iterator[APropdef]>*/
}
{
var32 = ((val*(*)(val* self))(var_nclassdef2->class->vft[COLOR_nit__parser_nodes__AClassdef__n_propdefs]))(var_nclassdef2); /* n_propdefs on <var_nclassdef2:AClassdef>*/
}
var_33 = var32;
{
var34 = ((val*(*)(val* self))(var_33->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_33); /* iterator on <var_33:ANodes[APropdef]>*/
}
var_35 = var34;
for(;;) {
{
var36 = ((short int(*)(val* self))((((long)var_35&3)?class_info[((long)var_35&3)]:var_35->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_35); /* is_ok on <var_35:Iterator[APropdef]>*/
}
if (var36){
{
var37 = ((val*(*)(val* self))((((long)var_35&3)?class_info[((long)var_35&3)]:var_35->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_35); /* item on <var_35:Iterator[APropdef]>*/
}
var_npropdef38 = var37;
{
((void(*)(val* self, val* p0))(var_npropdef38->class->vft[COLOR_nit__modelize_property__APropdef__build_signature]))(var_npropdef38, self); /* build_signature on <var_npropdef38:APropdef>*/
}
{
((void(*)(val* self))((((long)var_35&3)?class_info[((long)var_35&3)]:var_35->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_35); /* next on <var_35:Iterator[APropdef]>*/
}
} else {
goto BREAK_label39;
}
}
BREAK_label39: (void)0;
{
((void(*)(val* self))((((long)var_35&3)?class_info[((long)var_35&3)]:var_35->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_35); /* finish on <var_35:Iterator[APropdef]>*/
}
{
var40 = ((val*(*)(val* self))(var_nclassdef2->class->vft[COLOR_nit__parser_nodes__AClassdef__n_propdefs]))(var_nclassdef2); /* n_propdefs on <var_nclassdef2:AClassdef>*/
}
var_41 = var40;
{
var42 = ((val*(*)(val* self))(var_41->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_41); /* iterator on <var_41:ANodes[APropdef]>*/
}
var_43 = var42;
for(;;) {
{
var44 = ((short int(*)(val* self))((((long)var_43&3)?class_info[((long)var_43&3)]:var_43->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_43); /* is_ok on <var_43:Iterator[APropdef]>*/
}
if (var44){
{
var45 = ((val*(*)(val* self))((((long)var_43&3)?class_info[((long)var_43&3)]:var_43->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_43); /* item on <var_43:Iterator[APropdef]>*/
}
var_npropdef46 = var45;
/* <var_npropdef46:APropdef> isa ATypePropdef */
cltype = type_nit__ATypePropdef.color;
idtype = type_nit__ATypePropdef.id;
if(cltype >= var_npropdef46->type->table_size) {
var47 = 0;
} else {
var47 = var_npropdef46->type->type_table[cltype] == idtype;
}
var48 = !var47;
if (var48){
goto BREAK_label49;
} else {
}
{
var50 = ((val*(*)(val* self))(var_npropdef46->class->vft[COLOR_nit__modelize_property__APropdef__mpropdef]))(var_npropdef46); /* mpropdef on <var_npropdef46:APropdef(ATypePropdef)>*/
}
var_mpropdef = var50;
if (var_mpropdef == NULL) {
var51 = 1; /* is null */
} else {
var51 = 0; /* arg is null but recv is not */
}
if (0) {
var52 = ((short int(*)(val* self, val* p0))(var_mpropdef->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_mpropdef, ((val*)NULL)); /* == on <var_mpropdef:nullable MVirtualTypeDef>*/
var51 = var52;
}
if (var51){
goto BREAK_label49;
} else {
}
{
var53 = ((val*(*)(val* self))(var_mpropdef->class->vft[COLOR_nit__model__MVirtualTypeDef__bound]))(var_mpropdef); /* bound on <var_mpropdef:nullable MVirtualTypeDef(MVirtualTypeDef)>*/
}
if (var53 == NULL) {
var54 = 1; /* is null */
} else {
var54 = 0; /* arg is null but recv is not */
}
if (0) {
var55 = ((short int(*)(val* self, val* p0))(var53->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var53, ((val*)NULL)); /* == on <var53:nullable MType>*/
var54 = var55;
}
if (var54){
goto BREAK_label49;
} else {
}
{
var56 = ((val*(*)(val* self))(var_mpropdef->class->vft[COLOR_nit__model__MPropDef__mproperty]))(var_mpropdef); /* mproperty on <var_mpropdef:nullable MVirtualTypeDef(MVirtualTypeDef)>*/
}
{
var57 = ((val*(*)(val* self))(var_mclassdef->class->vft[COLOR_nit__model__MClassDef__bound_mtype]))(var_mclassdef); /* bound_mtype on <var_mclassdef:nullable MClassDef(MClassDef)>*/
}
{
var58 = ((val*(*)(val* self))(var_mclassdef->class->vft[COLOR_nit__model__MClassDef__mmodule]))(var_mclassdef); /* mmodule on <var_mclassdef:nullable MClassDef(MClassDef)>*/
}
{
var59 = ((short int(*)(val* self, val* p0, val* p1, val* p2, val* p3))(self->class->vft[COLOR_nit__modelize_property__ModelBuilder__check_virtual_types_circularity]))(self, var_npropdef46, var56, var57, var58); /* check_virtual_types_circularity on <self:ModelBuilder>*/
}
var60 = !var59;
if (var60){
{
var61 = ((val*(*)(val* self))(var_mclassdef->class->vft[COLOR_nit__model__MClassDef__mmodule]))(var_mclassdef); /* mmodule on <var_mclassdef:nullable MClassDef(MClassDef)>*/
}
{
var62 = ((val*(*)(val* self))(var61->class->vft[COLOR_nit__model_base__MEntity__model]))(var61); /* model on <var61:MModule>*/
}
{
var63 = ((val*(*)(val* self))(var62->class->vft[COLOR_nit__model__Model__null_type]))(var62); /* null_type on <var62:Model>*/
}
{
((void(*)(val* self, val* p0))(var_mpropdef->class->vft[COLOR_nit__model__MVirtualTypeDef__bound_61d]))(var_mpropdef, var63); /* bound= on <var_mpropdef:nullable MVirtualTypeDef(MVirtualTypeDef)>*/
}
} else {
}
BREAK_label49: (void)0;
{
((void(*)(val* self))((((long)var_43&3)?class_info[((long)var_43&3)]:var_43->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_43); /* next on <var_43:Iterator[APropdef]>*/
}
} else {
goto BREAK_label64;
}
}
BREAK_label64: (void)0;
{
((void(*)(val* self))((((long)var_43&3)?class_info[((long)var_43&3)]:var_43->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_43); /* finish on <var_43:Iterator[APropdef]>*/
}
{
var65 = ((val*(*)(val* self))(var_nclassdef2->class->vft[COLOR_nit__parser_nodes__AClassdef__n_propdefs]))(var_nclassdef2); /* n_propdefs on <var_nclassdef2:AClassdef>*/
}
var_66 = var65;
{
var67 = ((val*(*)(val* self))(var_66->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_66); /* iterator on <var_66:ANodes[APropdef]>*/
}
var_68 = var67;
for(;;) {
{
var69 = ((short int(*)(val* self))((((long)var_68&3)?class_info[((long)var_68&3)]:var_68->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_68); /* is_ok on <var_68:Iterator[APropdef]>*/
}
if (var69){
{
var70 = ((val*(*)(val* self))((((long)var_68&3)?class_info[((long)var_68&3)]:var_68->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_68); /* item on <var_68:Iterator[APropdef]>*/
}
var_npropdef71 = var70;
/* <var_npropdef71:APropdef> isa ATypePropdef */
cltype73 = type_nit__ATypePropdef.color;
idtype74 = type_nit__ATypePropdef.id;
if(cltype73 >= var_npropdef71->type->table_size) {
var72 = 0;
} else {
var72 = var_npropdef71->type->type_table[cltype73] == idtype74;
}
var75 = !var72;
if (var75){
goto BREAK_label76;
} else {
}
{
((void(*)(val* self, val* p0))(var_npropdef71->class->vft[COLOR_nit__modelize_property__APropdef__check_signature]))(var_npropdef71, self); /* check_signature on <var_npropdef71:APropdef(ATypePropdef)>*/
}
BREAK_label76: (void)0;
{
((void(*)(val* self))((((long)var_68&3)?class_info[((long)var_68&3)]:var_68->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_68); /* next on <var_68:Iterator[APropdef]>*/
}
} else {
goto BREAK_label77;
}
}
BREAK_label77: (void)0;
{
((void(*)(val* self))((((long)var_68&3)?class_info[((long)var_68&3)]:var_68->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_68); /* finish on <var_68:Iterator[APropdef]>*/
}
{
var78 = ((val*(*)(val* self))(var_nclassdef2->class->vft[COLOR_nit__parser_nodes__AClassdef__n_propdefs]))(var_nclassdef2); /* n_propdefs on <var_nclassdef2:AClassdef>*/
}
var_79 = var78;
{
var80 = ((val*(*)(val* self))(var_79->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_79); /* iterator on <var_79:ANodes[APropdef]>*/
}
var_81 = var80;
for(;;) {
{
var82 = ((short int(*)(val* self))((((long)var_81&3)?class_info[((long)var_81&3)]:var_81->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_81); /* is_ok on <var_81:Iterator[APropdef]>*/
}
if (var82){
{
var83 = ((val*(*)(val* self))((((long)var_81&3)?class_info[((long)var_81&3)]:var_81->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_81); /* item on <var_81:Iterator[APropdef]>*/
}
var_npropdef84 = var83;
/* <var_npropdef84:APropdef> isa ATypePropdef */
cltype86 = type_nit__ATypePropdef.color;
idtype87 = type_nit__ATypePropdef.id;
if(cltype86 >= var_npropdef84->type->table_size) {
var85 = 0;
} else {
var85 = var_npropdef84->type->type_table[cltype86] == idtype87;
}
if (var85){
goto BREAK_label88;
} else {
}
{
((void(*)(val* self, val* p0))(var_npropdef84->class->vft[COLOR_nit__modelize_property__APropdef__check_signature]))(var_npropdef84, self); /* check_signature on <var_npropdef84:APropdef>*/
}
BREAK_label88: (void)0;
{
((void(*)(val* self))((((long)var_81&3)?class_info[((long)var_81&3)]:var_81->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_81); /* next on <var_81:Iterator[APropdef]>*/
}
} else {
goto BREAK_label89;
}
}
BREAK_label89: (void)0;
{
((void(*)(val* self))((((long)var_81&3)?class_info[((long)var_81&3)]:var_81->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_81); /* finish on <var_81:Iterator[APropdef]>*/
}
{
((void(*)(val* self))(var_22->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_22); /* next on <var_22:ArrayIterator[AClassdef]>*/
}
} else {
goto BREAK_label90;
}
}
BREAK_label90: (void)0;
{
((void(*)(val* self))(var_22->class->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_22); /* finish on <var_22:ArrayIterator[AClassdef]>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__modelize_property__ModelBuilder__process_default_constructors]))(self, var_nclassdef); /* process_default_constructors on <self:ModelBuilder>*/
}
RET_LABEL:;
}
/* method modelize_property#ModelBuilder#the_root_init_mmethod for (self: ModelBuilder): nullable MMethod */
val* nit__modelize_property___ModelBuilder___the_root_init_mmethod(val* self) {
val* var /* : nullable MMethod */;
val* var1 /* : nullable MMethod */;
var1 = self->attrs[COLOR_nit__modelize_property__ModelBuilder___the_root_init_mmethod].val; /* _the_root_init_mmethod on <self:ModelBuilder> */
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property#ModelBuilder#the_root_init_mmethod= for (self: ModelBuilder, nullable MMethod) */
void nit__modelize_property___ModelBuilder___the_root_init_mmethod_61d(val* self, val* p0) {
self->attrs[COLOR_nit__modelize_property__ModelBuilder___the_root_init_mmethod].val = p0; /* _the_root_init_mmethod on <self:ModelBuilder> */
RET_LABEL:;
}
/* method modelize_property#ModelBuilder#process_default_constructors for (self: ModelBuilder, AClassdef) */
void nit__modelize_property___ModelBuilder___process_default_constructors(val* self, val* p0) {
val* var_nclassdef /* var nclassdef: AClassdef */;
val* var /* : nullable MClassDef */;
val* var_mclassdef /* var mclassdef: MClassDef */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var4 /* : MClass */;
val* var5 /* : String */;
static val* varonce;
val* var6 /* : String */;
char* var7 /* : NativeString */;
val* var8 /* : FlatString */;
short int var9 /* : Bool */;
short int var_ /* var : Bool */;
val* var10 /* : nullable MMethod */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
val* var13 /* : MMethod */;
static val* varonce14;
val* var15 /* : String */;
char* var16 /* : NativeString */;
val* var17 /* : FlatString */;
val* var18 /* : MClass */;
val* var19 /* : MVisibility */;
val* var_mprop /* var mprop: MMethod */;
val* var20 /* : MMethodDef */;
val* var21 /* : Location */;
val* var_mpropdef /* var mpropdef: MMethodDef */;
val* var22 /* : Array[MParameter] */;
val* var_mparameters /* var mparameters: Array[MParameter] */;
val* var23 /* : MSignature */;
val* var_msignature /* var msignature: MSignature */;
val* var24 /* : ToolContext */;
val* var26 /* : NativeArray[String] */;
static val* varonce25;
static val* varonce27;
val* var28 /* : String */;
char* var29 /* : NativeString */;
val* var30 /* : FlatString */;
val* var31 /* : String */;
val* var32 /* : String */;
val* var33 /* : String */;
val* var34 /* : String */;
val* var35 /* : MClass */;
val* var36 /* : MClassKind */;
short int var37 /* : Bool */;
short int var38 /* : Bool */;
val* var_defined_init /* var defined_init: nullable MMethodDef */;
val* var39 /* : Array[MPropDef] */;
val* var_40 /* var : Array[MPropDef] */;
val* var41 /* : Iterator[nullable Object] */;
val* var_42 /* var : ArrayIterator[MPropDef] */;
short int var43 /* : Bool */;
val* var44 /* : nullable Object */;
val* var_mpropdef45 /* var mpropdef: MPropDef */;
short int var46 /* : Bool */;
int cltype;
int idtype;
short int var47 /* : Bool */;
val* var48 /* : MProperty */;
short int var49 /* : Bool */;
short int var50 /* : Bool */;
val* var51 /* : MProperty */;
short int var52 /* : Bool */;
short int var53 /* : Bool */;
short int var54 /* : Bool */;
val* var55 /* : MProperty */;
val* var56 /* : String */;
static val* varonce57;
val* var58 /* : String */;
char* var59 /* : NativeString */;
val* var60 /* : FlatString */;
short int var61 /* : Bool */;
short int var63 /* : Bool */;
int cltype64;
int idtype65;
short int var66 /* : Bool */;
val* var67 /* : Array[MParameter] */;
val* var_mparameters68 /* var mparameters: Array[MParameter] */;
val* var69 /* : Array[MProperty] */;
val* var_initializers /* var initializers: Array[MProperty] */;
val* var70 /* : ANodes[APropdef] */;
val* var_71 /* var : ANodes[APropdef] */;
val* var72 /* : Iterator[nullable Object] */;
val* var_73 /* var : Iterator[APropdef] */;
short int var74 /* : Bool */;
val* var75 /* : nullable Object */;
val* var_npropdef /* var npropdef: APropdef */;
short int var76 /* : Bool */;
int cltype77;
int idtype78;
val* var79 /* : nullable MPropDef */;
short int var80 /* : Bool */;
short int var81 /* : Bool */;
static val* varonce82;
val* var83 /* : String */;
char* var84 /* : NativeString */;
val* var85 /* : FlatString */;
val* var86 /* : nullable AAnnotation */;
val* var_at /* var at: nullable AAnnotation */;
short int var87 /* : Bool */;
short int var88 /* : Bool */;
val* var90 /* : nullable MPropDef */;
val* var91 /* : nullable MSignature */;
val* var_sig /* var sig: nullable MSignature */;
short int var92 /* : Bool */;
short int var93 /* : Bool */;
val* var94 /* : nullable MPropDef */;
short int var95 /* : Bool */;
short int var96 /* : Bool */;
static val* varonce97;
val* var98 /* : String */;
char* var99 /* : NativeString */;
val* var100 /* : FlatString */;
val* var101 /* : Array[MParameter] */;
val* var_102 /* var : Array[MParameter] */;
val* var103 /* : Iterator[nullable Object] */;
val* var_104 /* var : ArrayIterator[MParameter] */;
short int var105 /* : Bool */;
val* var106 /* : nullable Object */;
val* var_param /* var param: MParameter */;
val* var107 /* : MType */;
val* var_ret_type /* var ret_type: MType */;
val* var108 /* : MParameter */;
val* var109 /* : String */;
short int var110 /* : Bool */;
int cltype111;
int idtype112;
val* var_mparameter /* var mparameter: MParameter */;
val* var114 /* : nullable MPropDef */;
val* var115 /* : MProperty */;
val* var116 /* : nullable MPropDef */;
val* var117 /* : MProperty */;
short int var118 /* : Bool */;
int cltype119;
int idtype120;
val* var121 /* : nullable MPropDef */;
short int var122 /* : Bool */;
short int var123 /* : Bool */;
short int var124 /* : Bool */;
static val* varonce125;
val* var126 /* : String */;
char* var127 /* : NativeString */;
val* var128 /* : FlatString */;
val* var129 /* : nullable AAnnotation */;
val* var_atautoinit /* var atautoinit: nullable AAnnotation */;
short int var130 /* : Bool */;
short int var131 /* : Bool */;
val* var132 /* : nullable MMethodDef */;
val* var133 /* : MProperty */;
val* var134 /* : nullable MMethodDef */;
val* var135 /* : MProperty */;
short int var136 /* : Bool */;
val* var137 /* : nullable MPropDef */;
val* var138 /* : MProperty */;
val* var139 /* : String */;
val* var140 /* : Text */;
val* var_paramname /* var paramname: String */;
val* var141 /* : nullable MPropDef */;
val* var142 /* : nullable MType */;
val* var_ret_type143 /* var ret_type: nullable MType */;
short int var144 /* : Bool */;
short int var145 /* : Bool */;
val* var146 /* : MParameter */;
short int var147 /* : Bool */;
int cltype148;
int idtype149;
val* var_mparameter150 /* var mparameter: MParameter */;
val* var151 /* : nullable MMethodDef */;
val* var_msetter /* var msetter: nullable MMethodDef */;
short int var152 /* : Bool */;
short int var153 /* : Bool */;
val* var154 /* : nullable MPropDef */;
val* var155 /* : MProperty */;
val* var156 /* : nullable MPropDef */;
val* var157 /* : MProperty */;
val* var158 /* : MProperty */;
val* var159 /* : MProperty */;
val* var161 /* : nullable MMethod */;
short int var162 /* : Bool */;
short int var163 /* : Bool */;
val* var164 /* : nullable MMethod */;
val* var165 /* : MModule */;
val* var166 /* : MClassType */;
val* var167 /* : Array[MPropDef] */;
val* var_spropdefs /* var spropdefs: Array[MMethodDef] */;
short int var168 /* : Bool */;
val* var169 /* : ToolContext */;
val* var170 /* : Location */;
val* var172 /* : NativeArray[String] */;
static val* varonce171;
static val* varonce173;
val* var174 /* : String */;
char* var175 /* : NativeString */;
val* var176 /* : FlatString */;
static val* varonce177;
val* var178 /* : String */;
char* var179 /* : NativeString */;
val* var180 /* : FlatString */;
static val* varonce181;
val* var182 /* : String */;
char* var183 /* : NativeString */;
val* var184 /* : FlatString */;
val* var185 /* : String */;
val* var186 /* : nullable MMethod */;
val* var187 /* : MClassDef */;
val* var188 /* : String */;
val* var189 /* : String */;
val* var190 /* : Message */;
static val* varonce191;
val* var192 /* : String */;
char* var193 /* : NativeString */;
val* var194 /* : FlatString */;
val* var195 /* : nullable AAnnotation */;
val* var_autoinit /* var autoinit: nullable AAnnotation */;
static val* varonce196;
val* var197 /* : String */;
char* var198 /* : NativeString */;
val* var199 /* : FlatString */;
val* var200 /* : nullable AAnnotation */;
val* var_noautoinit /* var noautoinit: nullable AAnnotation */;
short int var201 /* : Bool */;
short int var202 /* : Bool */;
short int var203 /* : Bool */;
short int var204 /* : Bool */;
static val* varonce205;
val* var206 /* : String */;
char* var207 /* : NativeString */;
val* var208 /* : FlatString */;
val* var209 /* : ANodes[AExpr] */;
short int var210 /* : Bool */;
static val* varonce211;
val* var212 /* : String */;
char* var213 /* : NativeString */;
val* var214 /* : FlatString */;
val* var215 /* : ANodes[AExpr] */;
val* var_216 /* var : ANodes[AExpr] */;
val* var217 /* : Iterator[nullable Object] */;
val* var_218 /* var : Iterator[AExpr] */;
short int var219 /* : Bool */;
val* var220 /* : nullable Object */;
val* var_narg /* var narg: AExpr */;
val* var221 /* : nullable String */;
val* var_id /* var id: nullable String */;
short int var222 /* : Bool */;
short int var223 /* : Bool */;
static val* varonce224;
val* var225 /* : String */;
char* var226 /* : NativeString */;
val* var227 /* : FlatString */;
static val* varonce228;
val* var229 /* : String */;
char* var230 /* : NativeString */;
val* var231 /* : FlatString */;
val* var232 /* : String */;
val* var233 /* : nullable MProperty */;
val* var_p /* var p: nullable MProperty */;
short int var234 /* : Bool */;
short int var235 /* : Bool */;
val* var236 /* : nullable MProperty */;
short int var237 /* : Bool */;
short int var238 /* : Bool */;
val* var240 /* : NativeArray[String] */;
static val* varonce239;
static val* varonce241;
val* var242 /* : String */;
char* var243 /* : NativeString */;
val* var244 /* : FlatString */;
static val* varonce245;
val* var246 /* : String */;
char* var247 /* : NativeString */;
val* var248 /* : FlatString */;
val* var249 /* : String */;
short int var250 /* : Bool */;
short int var251 /* : Bool */;
val* var253 /* : NativeArray[String] */;
static val* varonce252;
static val* varonce254;
val* var255 /* : String */;
char* var256 /* : NativeString */;
val* var257 /* : FlatString */;
static val* varonce258;
val* var259 /* : String */;
char* var260 /* : NativeString */;
val* var261 /* : FlatString */;
val* var262 /* : String */;
val* var263 /* : String */;
val* var264 /* : MPropDef */;
val* var_pd /* var pd: MPropDef */;
short int var265 /* : Bool */;
int cltype266;
int idtype267;
val* var268 /* : nullable MSignature */;
val* var269 /* : MClass */;
val* var270 /* : MClassType */;
val* var271 /* : MClassType */;
val* var272 /* : MModule */;
val* var273 /* : MType */;
val* var_sig274 /* var sig: MSignature */;
val* var275 /* : Array[MParameter] */;
val* var_276 /* var : Array[MParameter] */;
val* var277 /* : Iterator[nullable Object] */;
val* var_278 /* var : ArrayIterator[MParameter] */;
short int var279 /* : Bool */;
val* var280 /* : nullable Object */;
val* var_param281 /* var param: MParameter */;
short int var282 /* : Bool */;
short int var283 /* : Bool */;
short int var284 /* : Bool */;
short int var_285 /* var : Bool */;
val* var286 /* : MType */;
short int var287 /* : Bool */;
int cltype288;
int idtype289;
val* var290 /* : MParameter */;
val* var291 /* : String */;
val* var292 /* : MType */;
short int var293 /* : Bool */;
short int var296 /* : Bool */;
short int var297 /* : Bool */;
short int var298 /* : Bool */;
static val* varonce299;
val* var300 /* : String */;
char* var301 /* : NativeString */;
val* var302 /* : FlatString */;
static val* varonce303;
val* var304 /* : String */;
char* var305 /* : NativeString */;
val* var306 /* : FlatString */;
val* var307 /* : nullable Object */;
val* var_longest /* var longest: MMethodDef */;
long var308 /* : Int */;
short int var309 /* : Bool */;
short int var311 /* : Bool */;
int cltype312;
int idtype313;
const char* var_class_name;
short int var314 /* : Bool */;
val* var_315 /* var : Array[MMethodDef] */;
val* var316 /* : Iterator[nullable Object] */;
val* var_317 /* var : ArrayIterator[MMethodDef] */;
short int var318 /* : Bool */;
val* var319 /* : nullable Object */;
val* var_spd /* var spd: MMethodDef */;
val* var320 /* : Array[MProperty] */;
long var321 /* : Int */;
val* var322 /* : Array[MProperty] */;
long var323 /* : Int */;
short int var324 /* : Bool */;
short int var326 /* : Bool */;
int cltype327;
int idtype328;
const char* var_class_name329;
short int var330 /* : Bool */;
val* var_332 /* var : Array[MMethodDef] */;
val* var333 /* : Iterator[nullable Object] */;
val* var_334 /* var : ArrayIterator[MMethodDef] */;
short int var335 /* : Bool */;
val* var336 /* : nullable Object */;
val* var_spd337 /* var spd: MMethodDef */;
long var_i /* var i: Int */;
val* var338 /* : Array[MProperty] */;
val* var_339 /* var : Array[MProperty] */;
val* var340 /* : Iterator[nullable Object] */;
val* var_341 /* var : ArrayIterator[MProperty] */;
short int var342 /* : Bool */;
val* var343 /* : nullable Object */;
val* var_p344 /* var p: MProperty */;
val* var345 /* : Array[MProperty] */;
val* var346 /* : nullable Object */;
short int var347 /* : Bool */;
val* var349 /* : NativeArray[String] */;
static val* varonce348;
static val* varonce350;
val* var351 /* : String */;
char* var352 /* : NativeString */;
val* var353 /* : FlatString */;
static val* varonce354;
val* var355 /* : String */;
char* var356 /* : NativeString */;
val* var357 /* : FlatString */;
static val* varonce358;
val* var359 /* : String */;
char* var360 /* : NativeString */;
val* var361 /* : FlatString */;
static val* varonce362;
val* var363 /* : String */;
char* var364 /* : NativeString */;
val* var365 /* : FlatString */;
static val* varonce366;
val* var367 /* : String */;
char* var368 /* : NativeString */;
val* var369 /* : FlatString */;
val* var370 /* : String */;
val* var371 /* : Array[MProperty] */;
static val* varonce372;
val* var373 /* : String */;
char* var374 /* : NativeString */;
val* var375 /* : FlatString */;
val* var376 /* : String */;
val* var377 /* : String */;
val* var378 /* : Array[MProperty] */;
static val* varonce379;
val* var380 /* : String */;
char* var381 /* : NativeString */;
val* var382 /* : FlatString */;
val* var383 /* : String */;
val* var384 /* : String */;
long var385 /* : Int */;
short int var387 /* : Bool */;
int cltype388;
int idtype389;
const char* var_class_name390;
long var391 /* : Int */;
short int var394 /* : Bool */;
short int var395 /* : Bool */;
long var396 /* : Int */;
short int var397 /* : Bool */;
short int var399 /* : Bool */;
short int var_400 /* var : Bool */;
short int var401 /* : Bool */;
short int var_402 /* var : Bool */;
short int var403 /* : Bool */;
short int var404 /* : Bool */;
val* var405 /* : ToolContext */;
val* var407 /* : NativeArray[String] */;
static val* varonce406;
static val* varonce408;
val* var409 /* : String */;
char* var410 /* : NativeString */;
val* var411 /* : FlatString */;
val* var412 /* : String */;
val* var413 /* : String */;
val* var414 /* : String */;
val* var415 /* : MClass */;
val* var416 /* : Array[MProperty] */;
long var417 /* : Int */;
short int var418 /* : Bool */;
short int var420 /* : Bool */;
int cltype421;
int idtype422;
const char* var_class_name423;
short int var424 /* : Bool */;
val* var425 /* : nullable MSignature */;
val* var426 /* : Array[MParameter] */;
val* var427 /* : Array[MProperty] */;
short int var428 /* : Bool */;
short int var429 /* : Bool */;
val* var430 /* : Array[MProperty] */;
val* var431 /* : MSignature */;
val* var_msignature432 /* var msignature: MSignature */;
val* var433 /* : ToolContext */;
val* var435 /* : NativeArray[String] */;
static val* varonce434;
static val* varonce436;
val* var437 /* : String */;
char* var438 /* : NativeString */;
val* var439 /* : FlatString */;
val* var440 /* : String */;
val* var441 /* : String */;
val* var442 /* : String */;
val* var443 /* : String */;
val* var444 /* : MClass */;
val* var445 /* : nullable MMethod */;
val* var_mprop446 /* var mprop: MMethod */;
val* var447 /* : MMethodDef */;
val* var448 /* : Location */;
val* var_mpropdef449 /* var mpropdef: MMethodDef */;
val* var450 /* : Array[MProperty] */;
val* var451 /* : MSignature */;
val* var_msignature452 /* var msignature: MSignature */;
val* var453 /* : MSignature */;
val* var454 /* : Array[MParameter] */;
val* var455 /* : ToolContext */;
val* var457 /* : NativeArray[String] */;
static val* varonce456;
static val* varonce458;
val* var459 /* : String */;
char* var460 /* : NativeString */;
val* var461 /* : FlatString */;
val* var462 /* : String */;
val* var463 /* : String */;
val* var464 /* : String */;
val* var465 /* : String */;
val* var466 /* : MClass */;
var_nclassdef = p0;
{
var = ((val*(*)(val* self))(var_nclassdef->class->vft[COLOR_nit__modelize_class__AClassdef__mclassdef]))(var_nclassdef); /* mclassdef on <var_nclassdef:AClassdef>*/
}
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 139);
fatal_exit(1);
}
var_mclassdef = var;
{
var1 = ((short int(*)(val* self))(var_mclassdef->class->vft[COLOR_nit__model__MClassDef__is_intro]))(var_mclassdef); /* is_intro on <var_mclassdef:MClassDef>*/
}
var2 = !var1;
if (var2){
goto RET_LABEL;
} else {
}
{
var4 = ((val*(*)(val* self))(var_mclassdef->class->vft[COLOR_nit__model__MClassDef__mclass]))(var_mclassdef); /* mclass on <var_mclassdef:MClassDef>*/
}
{
var5 = ((val*(*)(val* self))(var4->class->vft[COLOR_nit__model_base__MEntity__name]))(var4); /* name on <var4:MClass>*/
}
if (likely(varonce!=NULL)) {
var6 = varonce;
} else {
var7 = "Object";
var8 = standard___standard__NativeString___to_s_with_length(var7, 6l);
var6 = var8;
varonce = var6;
}
{
var9 = ((short int(*)(val* self, val* p0))(var5->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var5, var6); /* == on <var5:String>*/
}
var_ = var9;
if (var9){
{
var10 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__modelize_property__ModelBuilder__the_root_init_mmethod]))(self); /* the_root_init_mmethod on <self:ModelBuilder>*/
}
if (var10 == NULL) {
var11 = 1; /* is null */
} else {
var11 = 0; /* arg is null but recv is not */
}
if (0) {
var12 = ((short int(*)(val* self, val* p0))(var10->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var10, ((val*)NULL)); /* == on <var10:nullable MMethod>*/
var11 = var12;
}
var3 = var11;
} else {
var3 = var_;
}
if (var3){
var13 = NEW_nit__MMethod(&type_nit__MMethod);
if (likely(varonce14!=NULL)) {
var15 = varonce14;
} else {
var16 = "init";
var17 = standard___standard__NativeString___to_s_with_length(var16, 4l);
var15 = var17;
varonce14 = var15;
}
{
var18 = ((val*(*)(val* self))(var_mclassdef->class->vft[COLOR_nit__model__MClassDef__mclass]))(var_mclassdef); /* mclass on <var_mclassdef:MClassDef>*/
}
{
var19 = ((val*(*)(val* self))(var18->class->vft[COLOR_nit__model__MClass__visibility]))(var18); /* visibility on <var18:MClass>*/
}
{
((void(*)(val* self, val* p0))(var13->class->vft[COLOR_nit__model__MProperty__intro_mclassdef_61d]))(var13, var_mclassdef); /* intro_mclassdef= on <var13:MMethod>*/
}
{
((void(*)(val* self, val* p0))(var13->class->vft[COLOR_nit__model__MProperty__name_61d]))(var13, var15); /* name= on <var13:MMethod>*/
}
{
((void(*)(val* self, val* p0))(var13->class->vft[COLOR_nit__model__MProperty__visibility_61d]))(var13, var19); /* visibility= on <var13:MMethod>*/
}
{
((void(*)(val* self))(var13->class->vft[COLOR_standard__kernel__Object__init]))(var13); /* init on <var13:MMethod>*/
}
var_mprop = var13;
{
((void(*)(val* self, short int p0))(var_mprop->class->vft[COLOR_nit__model__MMethod__is_root_init_61d]))(var_mprop, 1); /* is_root_init= on <var_mprop:MMethod>*/
}
var20 = NEW_nit__MMethodDef(&type_nit__MMethodDef);
{
var21 = ((val*(*)(val* self))(var_nclassdef->class->vft[COLOR_nit__parser_nodes__ANode__location]))(var_nclassdef); /* location on <var_nclassdef:AClassdef>*/
}
{
((void(*)(val* self, val* p0))(var20->class->vft[COLOR_nit__model__MPropDef__mclassdef_61d]))(var20, var_mclassdef); /* mclassdef= on <var20:MMethodDef>*/
}
{
((void(*)(val* self, val* p0))(var20->class->vft[COLOR_nit__model__MPropDef__mproperty_61d]))(var20, var_mprop); /* mproperty= on <var20:MMethodDef>*/
}
{
((void(*)(val* self, val* p0))(var20->class->vft[COLOR_nit__model__MPropDef__location_61d]))(var20, var21); /* location= on <var20:MMethodDef>*/
}
{
((void(*)(val* self))(var20->class->vft[COLOR_standard__kernel__Object__init]))(var20); /* init on <var20:MMethodDef>*/
}
var_mpropdef = var20;
var22 = NEW_standard__Array(&type_standard__Array__nit__MParameter);
{
((void(*)(val* self))(var22->class->vft[COLOR_standard__kernel__Object__init]))(var22); /* init on <var22:Array[MParameter]>*/
}
var_mparameters = var22;
var23 = NEW_nit__MSignature(&type_nit__MSignature);
{
((void(*)(val* self, val* p0))(var23->class->vft[COLOR_nit__model__MSignature__mparameters_61d]))(var23, var_mparameters); /* mparameters= on <var23:MSignature>*/
}
{
((void(*)(val* self, val* p0))(var23->class->vft[COLOR_nit__model__MSignature__return_mtype_61d]))(var23, ((val*)NULL)); /* return_mtype= on <var23:MSignature>*/
}
{
((void(*)(val* self))(var23->class->vft[COLOR_standard__kernel__Object__init]))(var23); /* init on <var23:MSignature>*/
}
var_msignature = var23;
{
((void(*)(val* self, val* p0))(var_mpropdef->class->vft[COLOR_nit__model__MMethodDef__msignature_61d]))(var_mpropdef, var_msignature); /* msignature= on <var_mpropdef:MMethodDef>*/
}
{
((void(*)(val* self, val* p0))(var_mpropdef->class->vft[COLOR_nit__model__MMethodDef__new_msignature_61d]))(var_mpropdef, var_msignature); /* new_msignature= on <var_mpropdef:MMethodDef>*/
}
{
((void(*)(val* self, short int p0))(var_mprop->class->vft[COLOR_nit__model__MMethod__is_init_61d]))(var_mprop, 1); /* is_init= on <var_mprop:MMethod>*/
}
{
((void(*)(val* self, val* p0))(var_nclassdef->class->vft[COLOR_nit__modelize_property__AClassdef__mfree_init_61d]))(var_nclassdef, var_mpropdef); /* mfree_init= on <var_nclassdef:AClassdef>*/
}
{
var24 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__toolcontext]))(self); /* toolcontext on <self:ModelBuilder>*/
}
if (unlikely(varonce25==NULL)) {
var26 = NEW_standard__NativeArray(4l, &type_standard__NativeArray__standard__String);
if (likely(varonce27!=NULL)) {
var28 = varonce27;
} else {
var29 = " gets a free empty constructor ";
var30 = standard___standard__NativeString___to_s_with_length(var29, 31l);
var28 = var30;
varonce27 = var28;
}
((struct instance_standard__NativeArray*)var26)->values[1]=var28;
} else {
var26 = varonce25;
varonce25 = NULL;
}
{
var31 = ((val*(*)(val* self))(var_mclassdef->class->vft[COLOR_standard__string__Object__to_s]))(var_mclassdef); /* to_s on <var_mclassdef:MClassDef>*/
}
((struct instance_standard__NativeArray*)var26)->values[0]=var31;
{
var32 = ((val*(*)(val* self))(var_mpropdef->class->vft[COLOR_standard__string__Object__to_s]))(var_mpropdef); /* to_s on <var_mpropdef:MMethodDef>*/
}
((struct instance_standard__NativeArray*)var26)->values[2]=var32;
{
var33 = ((val*(*)(val* self))(var_msignature->class->vft[COLOR_standard__string__Object__to_s]))(var_msignature); /* to_s on <var_msignature:MSignature>*/
}
((struct instance_standard__NativeArray*)var26)->values[3]=var33;
{
var34 = ((val*(*)(val* self))(var26->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var26); /* native_to_s on <var26:NativeArray[String]>*/
}
varonce25 = var26;
{
((void(*)(val* self, val* p0, long p1))(var24->class->vft[COLOR_nit__toolcontext__ToolContext__info]))(var24, var34, 3l); /* info on <var24:ToolContext>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__modelize_property__ModelBuilder__the_root_init_mmethod_61d]))(self, var_mprop); /* the_root_init_mmethod= on <self:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
{
var35 = ((val*(*)(val* self))(var_mclassdef->class->vft[COLOR_nit__model__MClassDef__mclass]))(var_mclassdef); /* mclass on <var_mclassdef:MClassDef>*/
}
{
var36 = ((val*(*)(val* self))(var35->class->vft[COLOR_nit__model__MClass__kind]))(var35); /* kind on <var35:MClass>*/
}
{
var37 = ((short int(*)(val* self))(var36->class->vft[COLOR_nit__model__MClassKind__need_init]))(var36); /* need_init on <var36:MClassKind>*/
}
var38 = !var37;
if (var38){
goto RET_LABEL;
} else {
}
var_defined_init = ((val*)NULL);
{
var39 = ((val*(*)(val* self))(var_mclassdef->class->vft[COLOR_nit__model__MClassDef__mpropdefs]))(var_mclassdef); /* mpropdefs on <var_mclassdef:MClassDef>*/
}
var_40 = var39;
{
var41 = ((val*(*)(val* self))(var_40->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_40); /* iterator on <var_40:Array[MPropDef]>*/
}
var_42 = var41;
for(;;) {
{
var43 = ((short int(*)(val* self))(var_42->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_42); /* is_ok on <var_42:ArrayIterator[MPropDef]>*/
}
if (var43){
{
var44 = ((val*(*)(val* self))(var_42->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_42); /* item on <var_42:ArrayIterator[MPropDef]>*/
}
var_mpropdef45 = var44;
/* <var_mpropdef45:MPropDef> isa MMethodDef */
cltype = type_nit__MMethodDef.color;
idtype = type_nit__MMethodDef.id;
if(cltype >= var_mpropdef45->type->table_size) {
var46 = 0;
} else {
var46 = var_mpropdef45->type->type_table[cltype] == idtype;
}
var47 = !var46;
if (var47){
goto BREAK_label;
} else {
}
{
var48 = ((val*(*)(val* self))(var_mpropdef45->class->vft[COLOR_nit__model__MPropDef__mproperty]))(var_mpropdef45); /* mproperty on <var_mpropdef45:MPropDef(MMethodDef)>*/
}
{
var49 = ((short int(*)(val* self))(var48->class->vft[COLOR_nit__model__MMethod__is_init]))(var48); /* is_init on <var48:MProperty(MMethod)>*/
}
var50 = !var49;
if (var50){
goto BREAK_label;
} else {
}
{
var51 = ((val*(*)(val* self))(var_mpropdef45->class->vft[COLOR_nit__model__MPropDef__mproperty]))(var_mpropdef45); /* mproperty on <var_mpropdef45:MPropDef(MMethodDef)>*/
}
{
var52 = ((short int(*)(val* self))(var51->class->vft[COLOR_nit__model__MMethod__is_root_init]))(var51); /* is_root_init on <var51:MProperty(MMethod)>*/
}
if (var52){
if (var_defined_init == NULL) {
var53 = 1; /* is null */
} else {
var53 = 0; /* arg is null but recv is not */
}
if (0) {
var54 = ((short int(*)(val* self, val* p0))(var_defined_init->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_defined_init, ((val*)NULL)); /* == on <var_defined_init:nullable MMethodDef>*/
var53 = var54;
}
if (unlikely(!var53)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 170);
fatal_exit(1);
}
var_defined_init = var_mpropdef45;
} else {
{
var55 = ((val*(*)(val* self))(var_mpropdef45->class->vft[COLOR_nit__model__MPropDef__mproperty]))(var_mpropdef45); /* mproperty on <var_mpropdef45:MPropDef(MMethodDef)>*/
}
{
var56 = ((val*(*)(val* self))(var55->class->vft[COLOR_nit__model_base__MEntity__name]))(var55); /* name on <var55:MProperty(MMethod)>*/
}
if (likely(varonce57!=NULL)) {
var58 = varonce57;
} else {
var59 = "init";
var60 = standard___standard__NativeString___to_s_with_length(var59, 4l);
var58 = var60;
varonce57 = var58;
}
{
var61 = ((short int(*)(val* self, val* p0))(var56->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var56, var58); /* == on <var56:String>*/
}
if (var61){
goto RET_LABEL;
} else {
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))(var_42->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_42); /* next on <var_42:ArrayIterator[MPropDef]>*/
}
} else {
goto BREAK_label62;
}
}
BREAK_label62: (void)0;
{
((void(*)(val* self))(var_42->class->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_42); /* finish on <var_42:ArrayIterator[MPropDef]>*/
}
/* <var_nclassdef:AClassdef> isa AStdClassdef */
cltype64 = type_nit__AStdClassdef.color;
idtype65 = type_nit__AStdClassdef.id;
if(cltype64 >= var_nclassdef->type->table_size) {
var63 = 0;
} else {
var63 = var_nclassdef->type->type_table[cltype64] == idtype65;
}
var66 = !var63;
if (var66){
goto RET_LABEL;
} else {
}
var67 = NEW_standard__Array(&type_standard__Array__nit__MParameter);
{
((void(*)(val* self))(var67->class->vft[COLOR_standard__kernel__Object__init]))(var67); /* init on <var67:Array[MParameter]>*/
}
var_mparameters68 = var67;
var69 = NEW_standard__Array(&type_standard__Array__nit__MProperty);
{
((void(*)(val* self))(var69->class->vft[COLOR_standard__kernel__Object__init]))(var69); /* init on <var69:Array[MProperty]>*/
}
var_initializers = var69;
{
var70 = ((val*(*)(val* self))(var_nclassdef->class->vft[COLOR_nit__parser_nodes__AClassdef__n_propdefs]))(var_nclassdef); /* n_propdefs on <var_nclassdef:AClassdef(AStdClassdef)>*/
}
var_71 = var70;
{
var72 = ((val*(*)(val* self))(var_71->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_71); /* iterator on <var_71:ANodes[APropdef]>*/
}
var_73 = var72;
for(;;) {
{
var74 = ((short int(*)(val* self))((((long)var_73&3)?class_info[((long)var_73&3)]:var_73->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_73); /* is_ok on <var_73:Iterator[APropdef]>*/
}
if (var74){
{
var75 = ((val*(*)(val* self))((((long)var_73&3)?class_info[((long)var_73&3)]:var_73->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_73); /* item on <var_73:Iterator[APropdef]>*/
}
var_npropdef = var75;
/* <var_npropdef:APropdef> isa AMethPropdef */
cltype77 = type_nit__AMethPropdef.color;
idtype78 = type_nit__AMethPropdef.id;
if(cltype77 >= var_npropdef->type->table_size) {
var76 = 0;
} else {
var76 = var_npropdef->type->type_table[cltype77] == idtype78;
}
if (var76){
{
var79 = ((val*(*)(val* self))(var_npropdef->class->vft[COLOR_nit__modelize_property__APropdef__mpropdef]))(var_npropdef); /* mpropdef on <var_npropdef:APropdef(AMethPropdef)>*/
}
if (var79 == NULL) {
var80 = 1; /* is null */
} else {
var80 = 0; /* arg is null but recv is not */
}
if (0) {
var81 = ((short int(*)(val* self, val* p0))(var79->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var79, ((val*)NULL)); /* == on <var79:nullable MPropDef(nullable MMethodDef)>*/
var80 = var81;
}
if (var80){
goto RET_LABEL;
} else {
}
if (likely(varonce82!=NULL)) {
var83 = varonce82;
} else {
var84 = "autoinit";
var85 = standard___standard__NativeString___to_s_with_length(var84, 8l);
var83 = var85;
varonce82 = var83;
}
{
var86 = ((val*(*)(val* self, val* p0, val* p1))(var_npropdef->class->vft[COLOR_nit__annotation__Prod__get_single_annotation]))(var_npropdef, var83, self); /* get_single_annotation on <var_npropdef:APropdef(AMethPropdef)>*/
}
var_at = var86;
if (var_at == NULL) {
var87 = 1; /* is null */
} else {
var87 = 0; /* arg is null but recv is not */
}
if (0) {
var88 = ((short int(*)(val* self, val* p0))(var_at->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_at, ((val*)NULL)); /* == on <var_at:nullable AAnnotation>*/
var87 = var88;
}
if (var87){
goto BREAK_label89;
} else {
}
{
var90 = ((val*(*)(val* self))(var_npropdef->class->vft[COLOR_nit__modelize_property__APropdef__mpropdef]))(var_npropdef); /* mpropdef on <var_npropdef:APropdef(AMethPropdef)>*/
}
if (var90 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 189);
fatal_exit(1);
} else {
var91 = ((val*(*)(val* self))(var90->class->vft[COLOR_nit__model__MMethodDef__msignature]))(var90); /* msignature on <var90:nullable MPropDef(nullable MMethodDef)>*/
}
var_sig = var91;
if (var_sig == NULL) {
var92 = 1; /* is null */
} else {
var92 = 0; /* arg is null but recv is not */
}
if (0) {
var93 = ((short int(*)(val* self, val* p0))(var_sig->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_sig, ((val*)NULL)); /* == on <var_sig:nullable MSignature>*/
var92 = var93;
}
if (var92){
goto BREAK_label89;
} else {
}
{
var94 = ((val*(*)(val* self))(var_npropdef->class->vft[COLOR_nit__modelize_property__APropdef__mpropdef]))(var_npropdef); /* mpropdef on <var_npropdef:APropdef(AMethPropdef)>*/
}
if (var94 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 192);
fatal_exit(1);
} else {
var95 = ((short int(*)(val* self))(var94->class->vft[COLOR_nit__model__MPropDef__is_intro]))(var94); /* is_intro on <var94:nullable MPropDef(nullable MMethodDef)>*/
}
var96 = !var95;
if (var96){
if (likely(varonce97!=NULL)) {
var98 = varonce97;
} else {
var99 = "Error: `autoinit` cannot be set on redefinitions.";
var100 = standard___standard__NativeString___to_s_with_length(var99, 49l);
var98 = var100;
varonce97 = var98;
}
{
((void(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__error]))(self, var_at, var98); /* error on <self:ModelBuilder>*/
}
goto BREAK_label89;
} else {
}
{
var101 = ((val*(*)(val* self))(var_sig->class->vft[COLOR_nit__model__MSignature__mparameters]))(var_sig); /* mparameters on <var_sig:nullable MSignature(MSignature)>*/
}
var_102 = var101;
{
var103 = ((val*(*)(val* self))(var_102->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_102); /* iterator on <var_102:Array[MParameter]>*/
}
var_104 = var103;
for(;;) {
{
var105 = ((short int(*)(val* self))(var_104->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_104); /* is_ok on <var_104:ArrayIterator[MParameter]>*/
}
if (var105){
{
var106 = ((val*(*)(val* self))(var_104->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_104); /* item on <var_104:ArrayIterator[MParameter]>*/
}
var_param = var106;
{
var107 = ((val*(*)(val* self))(var_param->class->vft[COLOR_nit__model__MParameter__mtype]))(var_param); /* mtype on <var_param:MParameter>*/
}
var_ret_type = var107;
var108 = NEW_nit__MParameter(&type_nit__MParameter);
{
var109 = ((val*(*)(val* self))(var_param->class->vft[COLOR_nit__model_base__MEntity__name]))(var_param); /* name on <var_param:MParameter>*/
}
/* <var_ret_type:MType> isa MNullableType */
cltype111 = type_nit__MNullableType.color;
idtype112 = type_nit__MNullableType.id;
if(cltype111 >= var_ret_type->type->table_size) {
var110 = 0;
} else {
var110 = var_ret_type->type->type_table[cltype111] == idtype112;
}
{
((void(*)(val* self, val* p0))(var108->class->vft[COLOR_nit__model__MParameter__name_61d]))(var108, var109); /* name= on <var108:MParameter>*/
}
{
((void(*)(val* self, val* p0))(var108->class->vft[COLOR_nit__model__MParameter__mtype_61d]))(var108, var_ret_type); /* mtype= on <var108:MParameter>*/
}
{
((void(*)(val* self, short int p0))(var108->class->vft[COLOR_nit__model__MParameter__is_vararg_61d]))(var108, 0); /* is_vararg= on <var108:MParameter>*/
}
{
((void(*)(val* self, short int p0))(var108->class->vft[COLOR_nit__model__MParameter__is_default_61d]))(var108, var110); /* is_default= on <var108:MParameter>*/
}
{
((void(*)(val* self))(var108->class->vft[COLOR_standard__kernel__Object__init]))(var108); /* init on <var108:MParameter>*/
}
var_mparameter = var108;
{
((void(*)(val* self, val* p0))(var_mparameters68->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_mparameters68, var_mparameter); /* add on <var_mparameters68:Array[MParameter]>*/
}
{
((void(*)(val* self))(var_104->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_104); /* next on <var_104:ArrayIterator[MParameter]>*/
}
} else {
goto BREAK_label113;
}
}
BREAK_label113: (void)0;
{
((void(*)(val* self))(var_104->class->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_104); /* finish on <var_104:ArrayIterator[MParameter]>*/
}
{
var114 = ((val*(*)(val* self))(var_npropdef->class->vft[COLOR_nit__modelize_property__APropdef__mpropdef]))(var_npropdef); /* mpropdef on <var_npropdef:APropdef(AMethPropdef)>*/
}
if (var114 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 202);
fatal_exit(1);
} else {
var115 = ((val*(*)(val* self))(var114->class->vft[COLOR_nit__model__MPropDef__mproperty]))(var114); /* mproperty on <var114:nullable MPropDef(nullable MMethodDef)>*/
}
{
((void(*)(val* self, val* p0))(var_initializers->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_initializers, var115); /* add on <var_initializers:Array[MProperty]>*/
}
{
var116 = ((val*(*)(val* self))(var_npropdef->class->vft[COLOR_nit__modelize_property__APropdef__mpropdef]))(var_npropdef); /* mpropdef on <var_npropdef:APropdef(AMethPropdef)>*/
}
if (var116 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 203);
fatal_exit(1);
} else {
var117 = ((val*(*)(val* self))(var116->class->vft[COLOR_nit__model__MPropDef__mproperty]))(var116); /* mproperty on <var116:nullable MPropDef(nullable MMethodDef)>*/
}
{
((void(*)(val* self, short int p0))(var117->class->vft[COLOR_nit__model__MProperty__is_autoinit_61d]))(var117, 1); /* is_autoinit= on <var117:MProperty(MMethod)>*/
}
} else {
}
/* <var_npropdef:APropdef> isa AAttrPropdef */
cltype119 = type_nit__AAttrPropdef.color;
idtype120 = type_nit__AAttrPropdef.id;
if(cltype119 >= var_npropdef->type->table_size) {
var118 = 0;
} else {
var118 = var_npropdef->type->type_table[cltype119] == idtype120;
}
if (var118){
{
var121 = ((val*(*)(val* self))(var_npropdef->class->vft[COLOR_nit__modelize_property__APropdef__mpropdef]))(var_npropdef); /* mpropdef on <var_npropdef:APropdef(AAttrPropdef)>*/
}
if (var121 == NULL) {
var122 = 1; /* is null */
} else {
var122 = 0; /* arg is null but recv is not */
}
if (0) {
var123 = ((short int(*)(val* self, val* p0))(var121->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var121, ((val*)NULL)); /* == on <var121:nullable MPropDef(nullable MAttributeDef)>*/
var122 = var123;
}
if (var122){
goto RET_LABEL;
} else {
}
{
var124 = ((short int(*)(val* self))(var_npropdef->class->vft[COLOR_nit__modelize_property__AAttrPropdef__noinit]))(var_npropdef); /* noinit on <var_npropdef:APropdef(AAttrPropdef)>*/
}
if (var124){
goto BREAK_label89;
} else {
}
if (likely(varonce125!=NULL)) {
var126 = varonce125;
} else {
var127 = "autoinit";
var128 = standard___standard__NativeString___to_s_with_length(var127, 8l);
var126 = var128;
varonce125 = var126;
}
{
var129 = ((val*(*)(val* self, val* p0, val* p1))(var_npropdef->class->vft[COLOR_nit__annotation__Prod__get_single_annotation]))(var_npropdef, var126, self); /* get_single_annotation on <var_npropdef:APropdef(AAttrPropdef)>*/
}
var_atautoinit = var129;
if (var_atautoinit == NULL) {
var130 = 0; /* is null */
} else {
var130 = 1; /* arg is null and recv is not */
}
if (0) {
var131 = ((short int(*)(val* self, val* p0))(var_atautoinit->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_atautoinit, ((val*)NULL)); /* != on <var_atautoinit:nullable AAnnotation>*/
var130 = var131;
}
if (var130){
{
var132 = ((val*(*)(val* self))(var_npropdef->class->vft[COLOR_nit__modelize_property__AAttrPropdef__mreadpropdef]))(var_npropdef); /* mreadpropdef on <var_npropdef:APropdef(AAttrPropdef)>*/
}
if (var132 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 212);
fatal_exit(1);
} else {
var133 = ((val*(*)(val* self))(var132->class->vft[COLOR_nit__model__MPropDef__mproperty]))(var132); /* mproperty on <var132:nullable MMethodDef>*/
}
{
((void(*)(val* self, val* p0))(var_initializers->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_initializers, var133); /* add on <var_initializers:Array[MProperty]>*/
}
{
var134 = ((val*(*)(val* self))(var_npropdef->class->vft[COLOR_nit__modelize_property__AAttrPropdef__mreadpropdef]))(var_npropdef); /* mreadpropdef on <var_npropdef:APropdef(AAttrPropdef)>*/
}
if (var134 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 213);
fatal_exit(1);
} else {
var135 = ((val*(*)(val* self))(var134->class->vft[COLOR_nit__model__MPropDef__mproperty]))(var134); /* mproperty on <var134:nullable MMethodDef>*/
}
{
((void(*)(val* self, short int p0))(var135->class->vft[COLOR_nit__model__MProperty__is_autoinit_61d]))(var135, 1); /* is_autoinit= on <var135:MProperty(MMethod)>*/
}
goto BREAK_label89;
} else {
}
{
var136 = ((short int(*)(val* self))(var_npropdef->class->vft[COLOR_nit__modelize_property__AAttrPropdef__has_value]))(var_npropdef); /* has_value on <var_npropdef:APropdef(AAttrPropdef)>*/
}
if (var136){
goto BREAK_label89;
} else {
}
{
var137 = ((val*(*)(val* self))(var_npropdef->class->vft[COLOR_nit__modelize_property__APropdef__mpropdef]))(var_npropdef); /* mpropdef on <var_npropdef:APropdef(AAttrPropdef)>*/
}
if (var137 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 217);
fatal_exit(1);
} else {
var138 = ((val*(*)(val* self))(var137->class->vft[COLOR_nit__model__MPropDef__mproperty]))(var137); /* mproperty on <var137:nullable MPropDef(nullable MAttributeDef)>*/
}
{
var139 = ((val*(*)(val* self))(var138->class->vft[COLOR_nit__model_base__MEntity__name]))(var138); /* name on <var138:MProperty(MAttribute)>*/
}
{
var140 = ((val*(*)(val* self, long p0))(var139->class->vft[COLOR_standard__string__Text__substring_from]))(var139, 1l); /* substring_from on <var139:String>*/
}
var_paramname = var140;
{
var141 = ((val*(*)(val* self))(var_npropdef->class->vft[COLOR_nit__modelize_property__APropdef__mpropdef]))(var_npropdef); /* mpropdef on <var_npropdef:APropdef(AAttrPropdef)>*/
}
if (var141 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 218);
fatal_exit(1);
} else {
var142 = ((val*(*)(val* self))(var141->class->vft[COLOR_nit__model__MAttributeDef__static_mtype]))(var141); /* static_mtype on <var141:nullable MPropDef(nullable MAttributeDef)>*/
}
var_ret_type143 = var142;
if (var_ret_type143 == NULL) {
var144 = 1; /* is null */
} else {
var144 = 0; /* arg is null but recv is not */
}
if (0) {
var145 = ((short int(*)(val* self, val* p0))(var_ret_type143->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_ret_type143, ((val*)NULL)); /* == on <var_ret_type143:nullable MType>*/
var144 = var145;
}
if (var144){
goto RET_LABEL;
} else {
}
var146 = NEW_nit__MParameter(&type_nit__MParameter);
/* <var_ret_type143:nullable MType(MType)> isa MNullableType */
cltype148 = type_nit__MNullableType.color;
idtype149 = type_nit__MNullableType.id;
if(cltype148 >= var_ret_type143->type->table_size) {
var147 = 0;
} else {
var147 = var_ret_type143->type->type_table[cltype148] == idtype149;
}
{
((void(*)(val* self, val* p0))(var146->class->vft[COLOR_nit__model__MParameter__name_61d]))(var146, var_paramname); /* name= on <var146:MParameter>*/
}
{
((void(*)(val* self, val* p0))(var146->class->vft[COLOR_nit__model__MParameter__mtype_61d]))(var146, var_ret_type143); /* mtype= on <var146:MParameter>*/
}
{
((void(*)(val* self, short int p0))(var146->class->vft[COLOR_nit__model__MParameter__is_vararg_61d]))(var146, 0); /* is_vararg= on <var146:MParameter>*/
}
{
((void(*)(val* self, short int p0))(var146->class->vft[COLOR_nit__model__MParameter__is_default_61d]))(var146, var147); /* is_default= on <var146:MParameter>*/
}
{
((void(*)(val* self))(var146->class->vft[COLOR_standard__kernel__Object__init]))(var146); /* init on <var146:MParameter>*/
}
var_mparameter150 = var146;
{
((void(*)(val* self, val* p0))(var_mparameters68->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_mparameters68, var_mparameter150); /* add on <var_mparameters68:Array[MParameter]>*/
}
{
var151 = ((val*(*)(val* self))(var_npropdef->class->vft[COLOR_nit__modelize_property__AAttrPropdef__mwritepropdef]))(var_npropdef); /* mwritepropdef on <var_npropdef:APropdef(AAttrPropdef)>*/
}
var_msetter = var151;
if (var_msetter == NULL) {
var152 = 1; /* is null */
} else {
var152 = 0; /* arg is null but recv is not */
}
if (0) {
var153 = ((short int(*)(val* self, val* p0))(var_msetter->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_msetter, ((val*)NULL)); /* == on <var_msetter:nullable MMethodDef>*/
var152 = var153;
}
if (var152){
{
var154 = ((val*(*)(val* self))(var_npropdef->class->vft[COLOR_nit__modelize_property__APropdef__mpropdef]))(var_npropdef); /* mpropdef on <var_npropdef:APropdef(AAttrPropdef)>*/
}
if (var154 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 225);
fatal_exit(1);
} else {
var155 = ((val*(*)(val* self))(var154->class->vft[COLOR_nit__model__MPropDef__mproperty]))(var154); /* mproperty on <var154:nullable MPropDef(nullable MAttributeDef)>*/
}
{
((void(*)(val* self, val* p0))(var_initializers->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_initializers, var155); /* add on <var_initializers:Array[MProperty]>*/
}
{
var156 = ((val*(*)(val* self))(var_npropdef->class->vft[COLOR_nit__modelize_property__APropdef__mpropdef]))(var_npropdef); /* mpropdef on <var_npropdef:APropdef(AAttrPropdef)>*/
}
if (var156 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 226);
fatal_exit(1);
} else {
var157 = ((val*(*)(val* self))(var156->class->vft[COLOR_nit__model__MPropDef__mproperty]))(var156); /* mproperty on <var156:nullable MPropDef(nullable MAttributeDef)>*/
}
{
((void(*)(val* self, short int p0))(var157->class->vft[COLOR_nit__model__MProperty__is_autoinit_61d]))(var157, 1); /* is_autoinit= on <var157:MProperty(MAttribute)>*/
}
} else {
{
var158 = ((val*(*)(val* self))(var_msetter->class->vft[COLOR_nit__model__MPropDef__mproperty]))(var_msetter); /* mproperty on <var_msetter:nullable MMethodDef(MMethodDef)>*/
}
{
((void(*)(val* self, val* p0))(var_initializers->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_initializers, var158); /* add on <var_initializers:Array[MProperty]>*/
}
{
var159 = ((val*(*)(val* self))(var_msetter->class->vft[COLOR_nit__model__MPropDef__mproperty]))(var_msetter); /* mproperty on <var_msetter:nullable MMethodDef(MMethodDef)>*/
}
{
((void(*)(val* self, short int p0))(var159->class->vft[COLOR_nit__model__MProperty__is_autoinit_61d]))(var159, 1); /* is_autoinit= on <var159:MProperty(MMethod)>*/
}
}
} else {
}
BREAK_label89: (void)0;
{
((void(*)(val* self))((((long)var_73&3)?class_info[((long)var_73&3)]:var_73->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_73); /* next on <var_73:Iterator[APropdef]>*/
}
} else {
goto BREAK_label160;
}
}
BREAK_label160: (void)0;
{
((void(*)(val* self))((((long)var_73&3)?class_info[((long)var_73&3)]:var_73->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_73); /* finish on <var_73:Iterator[APropdef]>*/
}
{
var161 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__modelize_property__ModelBuilder__the_root_init_mmethod]))(self); /* the_root_init_mmethod on <self:ModelBuilder>*/
}
if (var161 == NULL) {
var162 = 1; /* is null */
} else {
var162 = 0; /* arg is null but recv is not */
}
if (0) {
var163 = ((short int(*)(val* self, val* p0))(var161->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var161, ((val*)NULL)); /* == on <var161:nullable MMethod>*/
var162 = var163;
}
if (var162){
goto RET_LABEL;
} else {
}
{
var164 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__modelize_property__ModelBuilder__the_root_init_mmethod]))(self); /* the_root_init_mmethod on <self:ModelBuilder>*/
}
{
var165 = ((val*(*)(val* self))(var_mclassdef->class->vft[COLOR_nit__model__MClassDef__mmodule]))(var_mclassdef); /* mmodule on <var_mclassdef:MClassDef>*/
}
{
var166 = ((val*(*)(val* self))(var_mclassdef->class->vft[COLOR_nit__model__MClassDef__bound_mtype]))(var_mclassdef); /* bound_mtype on <var_mclassdef:MClassDef>*/
}
if (var164 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 238);
fatal_exit(1);
} else {
var167 = ((val*(*)(val* self, val* p0, val* p1))(var164->class->vft[COLOR_nit__model__MProperty__lookup_super_definitions]))(var164, var165, var166); /* lookup_super_definitions on <var164:nullable MMethod>*/
}
var_spropdefs = var167;
{
var168 = ((short int(*)(val* self))(var_spropdefs->class->vft[COLOR_standard__abstract_collection__Collection__is_empty]))(var_spropdefs); /* is_empty on <var_spropdefs:Array[MMethodDef]>*/
}
if (var168){
{
var169 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__toolcontext]))(self); /* toolcontext on <self:ModelBuilder>*/
}
{
var170 = ((val*(*)(val* self))(var_nclassdef->class->vft[COLOR_nit__parser_nodes__ANode__location]))(var_nclassdef); /* location on <var_nclassdef:AClassdef(AStdClassdef)>*/
}
if (unlikely(varonce171==NULL)) {
var172 = NEW_standard__NativeArray(5l, &type_standard__NativeArray__standard__String);
if (likely(varonce173!=NULL)) {
var174 = varonce173;
} else {
var175 = "Error: `";
var176 = standard___standard__NativeString___to_s_with_length(var175, 8l);
var174 = var176;
varonce173 = var174;
}
((struct instance_standard__NativeArray*)var172)->values[0]=var174;
if (likely(varonce177!=NULL)) {
var178 = varonce177;
} else {
var179 = "` does not specialize `";
var180 = standard___standard__NativeString___to_s_with_length(var179, 23l);
var178 = var180;
varonce177 = var178;
}
((struct instance_standard__NativeArray*)var172)->values[2]=var178;
if (likely(varonce181!=NULL)) {
var182 = varonce181;
} else {
var183 = "`. Possible duplication of the root class `Object`?";
var184 = standard___standard__NativeString___to_s_with_length(var183, 51l);
var182 = var184;
varonce181 = var182;
}
((struct instance_standard__NativeArray*)var172)->values[4]=var182;
} else {
var172 = varonce171;
varonce171 = NULL;
}
{
var185 = ((val*(*)(val* self))(var_mclassdef->class->vft[COLOR_standard__string__Object__to_s]))(var_mclassdef); /* to_s on <var_mclassdef:MClassDef>*/
}
((struct instance_standard__NativeArray*)var172)->values[1]=var185;
{
var186 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__modelize_property__ModelBuilder__the_root_init_mmethod]))(self); /* the_root_init_mmethod on <self:ModelBuilder>*/
}
if (var186 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 240);
fatal_exit(1);
} else {
var187 = ((val*(*)(val* self))(var186->class->vft[COLOR_nit__model__MProperty__intro_mclassdef]))(var186); /* intro_mclassdef on <var186:nullable MMethod>*/
}
{
var188 = ((val*(*)(val* self))(var187->class->vft[COLOR_standard__string__Object__to_s]))(var187); /* to_s on <var187:MClassDef>*/
}
((struct instance_standard__NativeArray*)var172)->values[3]=var188;
{
var189 = ((val*(*)(val* self))(var172->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var172); /* native_to_s on <var172:NativeArray[String]>*/
}
varonce171 = var172;
{
var190 = ((val*(*)(val* self, val* p0, val* p1))(var169->class->vft[COLOR_nit__toolcontext__ToolContext__error]))(var169, var170, var189); /* error on <var169:ToolContext>*/
}
goto RET_LABEL;
} else {
}
if (likely(varonce191!=NULL)) {
var192 = varonce191;
} else {
var193 = "autoinit";
var194 = standard___standard__NativeString___to_s_with_length(var193, 8l);
var192 = var194;
varonce191 = var192;
}
{
var195 = ((val*(*)(val* self, val* p0, val* p1))(var_nclassdef->class->vft[COLOR_nit__annotation__Prod__get_single_annotation]))(var_nclassdef, var192, self); /* get_single_annotation on <var_nclassdef:AClassdef(AStdClassdef)>*/
}
var_autoinit = var195;
if (likely(varonce196!=NULL)) {
var197 = varonce196;
} else {
var198 = "noautoinit";
var199 = standard___standard__NativeString___to_s_with_length(var198, 10l);
var197 = var199;
varonce196 = var197;
}
{
var200 = ((val*(*)(val* self, val* p0, val* p1))(var_nclassdef->class->vft[COLOR_nit__annotation__Prod__get_single_annotation]))(var_nclassdef, var197, self); /* get_single_annotation on <var_nclassdef:AClassdef(AStdClassdef)>*/
}
var_noautoinit = var200;
if (var_autoinit == NULL) {
var201 = 0; /* is null */
} else {
var201 = 1; /* arg is null and recv is not */
}
if (0) {
var202 = ((short int(*)(val* self, val* p0))(var_autoinit->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_autoinit, ((val*)NULL)); /* != on <var_autoinit:nullable AAnnotation>*/
var201 = var202;
}
if (var201){
{
((void(*)(val* self))(var_mparameters68->class->vft[COLOR_standard__abstract_collection__RemovableCollection__clear]))(var_mparameters68); /* clear on <var_mparameters68:Array[MParameter]>*/
}
{
((void(*)(val* self))(var_initializers->class->vft[COLOR_standard__abstract_collection__RemovableCollection__clear]))(var_initializers); /* clear on <var_initializers:Array[MProperty]>*/
}
if (var_noautoinit == NULL) {
var203 = 0; /* is null */
} else {
var203 = 1; /* arg is null and recv is not */
}
if (0) {
var204 = ((short int(*)(val* self, val* p0))(var_noautoinit->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_noautoinit, ((val*)NULL)); /* != on <var_noautoinit:nullable AAnnotation>*/
var203 = var204;
}
if (var203){
if (likely(varonce205!=NULL)) {
var206 = varonce205;
} else {
var207 = "Error: `autoinit` and `noautoinit` are incompatible.";
var208 = standard___standard__NativeString___to_s_with_length(var207, 52l);
var206 = var208;
varonce205 = var206;
}
{
((void(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__error]))(self, var_autoinit, var206); /* error on <self:ModelBuilder>*/
}
} else {
}
{
var209 = ((val*(*)(val* self))(var_autoinit->class->vft[COLOR_nit__parser_nodes__AAnnotation__n_args]))(var_autoinit); /* n_args on <var_autoinit:nullable AAnnotation(AAnnotation)>*/
}
{
var210 = ((short int(*)(val* self))(var209->class->vft[COLOR_standard__abstract_collection__Collection__is_empty]))(var209); /* is_empty on <var209:ANodes[AExpr]>*/
}
if (var210){
if (likely(varonce211!=NULL)) {
var212 = varonce211;
} else {
var213 = "Syntax Error: `autoinit` expects method identifiers, use `noautoinit` to clear all autoinits.";
var214 = standard___standard__NativeString___to_s_with_length(var213, 93l);
var212 = var214;
varonce211 = var212;
}
{
((void(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__error]))(self, var_autoinit, var212); /* error on <self:ModelBuilder>*/
}
} else {
}
{
var215 = ((val*(*)(val* self))(var_autoinit->class->vft[COLOR_nit__parser_nodes__AAnnotation__n_args]))(var_autoinit); /* n_args on <var_autoinit:nullable AAnnotation(AAnnotation)>*/
}
var_216 = var215;
{
var217 = ((val*(*)(val* self))(var_216->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_216); /* iterator on <var_216:ANodes[AExpr]>*/
}
var_218 = var217;
for(;;) {
{
var219 = ((short int(*)(val* self))((((long)var_218&3)?class_info[((long)var_218&3)]:var_218->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_218); /* is_ok on <var_218:Iterator[AExpr]>*/
}
if (var219){
{
var220 = ((val*(*)(val* self))((((long)var_218&3)?class_info[((long)var_218&3)]:var_218->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_218); /* item on <var_218:Iterator[AExpr]>*/
}
var_narg = var220;
{
var221 = ((val*(*)(val* self))(var_narg->class->vft[COLOR_nit__literal__AExpr__as_id]))(var_narg); /* as_id on <var_narg:AExpr>*/
}
var_id = var221;
if (var_id == NULL) {
var222 = 1; /* is null */
} else {
var222 = 0; /* arg is null but recv is not */
}
if (0) {
var223 = ((short int(*)(val* self, val* p0))(var_id->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_id, ((val*)NULL)); /* == on <var_id:nullable String>*/
var222 = var223;
}
if (var222){
if (likely(varonce224!=NULL)) {
var225 = varonce224;
} else {
var226 = "Syntax Error: `autoinit` expects method identifiers.";
var227 = standard___standard__NativeString___to_s_with_length(var226, 52l);
var225 = var227;
varonce224 = var225;
}
{
((void(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__error]))(self, var_narg, var225); /* error on <self:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
if (likely(varonce228!=NULL)) {
var229 = varonce228;
} else {
var230 = "=";
var231 = standard___standard__NativeString___to_s_with_length(var230, 1l);
var229 = var231;
varonce228 = var229;
}
{
var232 = ((val*(*)(val* self, val* p0))(var_id->class->vft[COLOR_standard__string__String___43d]))(var_id, var229); /* + on <var_id:nullable String(String)>*/
}
{
var233 = ((val*(*)(val* self, val* p0, val* p1, val* p2))(self->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__try_get_mproperty_by_name]))(self, var_narg, var_mclassdef, var232); /* try_get_mproperty_by_name on <self:ModelBuilder>*/
}
var_p = var233;
if (var_p == NULL) {
var234 = 1; /* is null */
} else {
var234 = 0; /* arg is null but recv is not */
}
if (0) {
var235 = ((short int(*)(val* self, val* p0))(var_p->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_p, ((val*)NULL)); /* == on <var_p:nullable MProperty>*/
var234 = var235;
}
if (var234){
{
var236 = ((val*(*)(val* self, val* p0, val* p1, val* p2))(self->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__try_get_mproperty_by_name]))(self, var_narg, var_mclassdef, var_id); /* try_get_mproperty_by_name on <self:ModelBuilder>*/
}
var_p = var236;
} else {
}
if (var_p == NULL) {
var237 = 1; /* is null */
} else {
var237 = 0; /* arg is null but recv is not */
}
if (0) {
var238 = ((short int(*)(val* self, val* p0))(var_p->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_p, ((val*)NULL)); /* == on <var_p:nullable MProperty>*/
var237 = var238;
}
if (var237){
if (unlikely(varonce239==NULL)) {
var240 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce241!=NULL)) {
var242 = varonce241;
} else {
var243 = "Error: unknown method `";
var244 = standard___standard__NativeString___to_s_with_length(var243, 23l);
var242 = var244;
varonce241 = var242;
}
((struct instance_standard__NativeArray*)var240)->values[0]=var242;
if (likely(varonce245!=NULL)) {
var246 = varonce245;
} else {
var247 = "`";
var248 = standard___standard__NativeString___to_s_with_length(var247, 1l);
var246 = var248;
varonce245 = var246;
}
((struct instance_standard__NativeArray*)var240)->values[2]=var246;
} else {
var240 = varonce239;
varonce239 = NULL;
}
((struct instance_standard__NativeArray*)var240)->values[1]=var_id;
{
var249 = ((val*(*)(val* self))(var240->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var240); /* native_to_s on <var240:NativeArray[String]>*/
}
varonce239 = var240;
{
((void(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__error]))(self, var_narg, var249); /* error on <self:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
{
var250 = ((short int(*)(val* self))(var_p->class->vft[COLOR_nit__model__MProperty__is_autoinit]))(var_p); /* is_autoinit on <var_p:nullable MProperty(MProperty)>*/
}
var251 = !var250;
if (var251){
if (unlikely(varonce252==NULL)) {
var253 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce254!=NULL)) {
var255 = varonce254;
} else {
var256 = "Error: `";
var257 = standard___standard__NativeString___to_s_with_length(var256, 8l);
var255 = var257;
varonce254 = var255;
}
((struct instance_standard__NativeArray*)var253)->values[0]=var255;
if (likely(varonce258!=NULL)) {
var259 = varonce258;
} else {
var260 = "` is not an autoinit method";
var261 = standard___standard__NativeString___to_s_with_length(var260, 27l);
var259 = var261;
varonce258 = var259;
}
((struct instance_standard__NativeArray*)var253)->values[2]=var259;
} else {
var253 = varonce252;
varonce252 = NULL;
}
{
var262 = ((val*(*)(val* self))(var_p->class->vft[COLOR_standard__string__Object__to_s]))(var_p); /* to_s on <var_p:nullable MProperty(MProperty)>*/
}
((struct instance_standard__NativeArray*)var253)->values[1]=var262;
{
var263 = ((val*(*)(val* self))(var253->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var253); /* native_to_s on <var253:NativeArray[String]>*/
}
varonce252 = var253;
{
((void(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__error]))(self, var_narg, var263); /* error on <self:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
{
((void(*)(val* self, val* p0))(var_initializers->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_initializers, var_p); /* add on <var_initializers:Array[MProperty]>*/
}
{
var264 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__model__MProperty__intro]))(var_p); /* intro on <var_p:nullable MProperty(MProperty)>*/
}
var_pd = var264;
/* <var_pd:MPropDef> isa MMethodDef */
cltype266 = type_nit__MMethodDef.color;
idtype267 = type_nit__MMethodDef.id;
if(cltype266 >= var_pd->type->table_size) {
var265 = 0;
} else {
var265 = var_pd->type->type_table[cltype266] == idtype267;
}
if (var265){
{
var268 = ((val*(*)(val* self))(var_pd->class->vft[COLOR_nit__model__MMethodDef__msignature]))(var_pd); /* msignature on <var_pd:MPropDef(MMethodDef)>*/
}
{
var269 = ((val*(*)(val* self))(var_mclassdef->class->vft[COLOR_nit__model__MClassDef__mclass]))(var_mclassdef); /* mclass on <var_mclassdef:MClassDef>*/
}
{
var270 = ((val*(*)(val* self))(var269->class->vft[COLOR_nit__model__MClass__mclass_type]))(var269); /* mclass_type on <var269:MClass>*/
}
{
var271 = ((val*(*)(val* self))(var_mclassdef->class->vft[COLOR_nit__model__MClassDef__bound_mtype]))(var_mclassdef); /* bound_mtype on <var_mclassdef:MClassDef>*/
}
{
var272 = ((val*(*)(val* self))(var_mclassdef->class->vft[COLOR_nit__model__MClassDef__mmodule]))(var_mclassdef); /* mmodule on <var_mclassdef:MClassDef>*/
}
if (var268 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 288);
fatal_exit(1);
} else {
var273 = ((val*(*)(val* self, val* p0, val* p1, val* p2, short int p3))(var268->class->vft[COLOR_nit__model__MType__resolve_for]))(var268, var270, var271, var272, 0); /* resolve_for on <var268:nullable MSignature>*/
}
var_sig274 = var273;
{
var275 = ((val*(*)(val* self))(var_sig274->class->vft[COLOR_nit__model__MSignature__mparameters]))(var_sig274); /* mparameters on <var_sig274:MSignature>*/
}
var_276 = var275;
{
var277 = ((val*(*)(val* self))(var_276->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_276); /* iterator on <var_276:Array[MParameter]>*/
}
var_278 = var277;
for(;;) {
{
var279 = ((short int(*)(val* self))(var_278->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_278); /* is_ok on <var_278:ArrayIterator[MParameter]>*/
}
if (var279){
{
var280 = ((val*(*)(val* self))(var_278->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_278); /* item on <var_278:ArrayIterator[MParameter]>*/
}
var_param281 = var280;
{
var283 = ((short int(*)(val* self))(var_param281->class->vft[COLOR_nit__model__MParameter__is_default]))(var_param281); /* is_default on <var_param281:MParameter>*/
}
var284 = !var283;
var_285 = var284;
if (var284){
{
var286 = ((val*(*)(val* self))(var_param281->class->vft[COLOR_nit__model__MParameter__mtype]))(var_param281); /* mtype on <var_param281:MParameter>*/
}
/* <var286:MType> isa MNullableType */
cltype288 = type_nit__MNullableType.color;
idtype289 = type_nit__MNullableType.id;
if(cltype288 >= var286->type->table_size) {
var287 = 0;
} else {
var287 = var286->type->type_table[cltype288] == idtype289;
}
var282 = var287;
} else {
var282 = var_285;
}
if (var282){
var290 = NEW_nit__MParameter(&type_nit__MParameter);
{
var291 = ((val*(*)(val* self))(var_param281->class->vft[COLOR_nit__model_base__MEntity__name]))(var_param281); /* name on <var_param281:MParameter>*/
}
{
var292 = ((val*(*)(val* self))(var_param281->class->vft[COLOR_nit__model__MParameter__mtype]))(var_param281); /* mtype on <var_param281:MParameter>*/
}
{
var293 = ((short int(*)(val* self))(var_param281->class->vft[COLOR_nit__model__MParameter__is_vararg]))(var_param281); /* is_vararg on <var_param281:MParameter>*/
}
{
((void(*)(val* self, val* p0))(var290->class->vft[COLOR_nit__model__MParameter__name_61d]))(var290, var291); /* name= on <var290:MParameter>*/
}
{
((void(*)(val* self, val* p0))(var290->class->vft[COLOR_nit__model__MParameter__mtype_61d]))(var290, var292); /* mtype= on <var290:MParameter>*/
}
{
((void(*)(val* self, short int p0))(var290->class->vft[COLOR_nit__model__MParameter__is_vararg_61d]))(var290, var293); /* is_vararg= on <var290:MParameter>*/
}
{
((void(*)(val* self, short int p0))(var290->class->vft[COLOR_nit__model__MParameter__is_default_61d]))(var290, 1); /* is_default= on <var290:MParameter>*/
}
{
((void(*)(val* self))(var290->class->vft[COLOR_standard__kernel__Object__init]))(var290); /* init on <var290:MParameter>*/
}
var_param281 = var290;
} else {
}
{
((void(*)(val* self, val* p0))(var_mparameters68->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_mparameters68, var_param281); /* add on <var_mparameters68:Array[MParameter]>*/
}
{
((void(*)(val* self))(var_278->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_278); /* next on <var_278:ArrayIterator[MParameter]>*/
}
} else {
goto BREAK_label294;
}
}
BREAK_label294: (void)0;
{
((void(*)(val* self))(var_278->class->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_278); /* finish on <var_278:ArrayIterator[MParameter]>*/
}
} else {
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 298);
fatal_exit(1);
}
{
((void(*)(val* self))((((long)var_218&3)?class_info[((long)var_218&3)]:var_218->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_218); /* next on <var_218:Iterator[AExpr]>*/
}
} else {
goto BREAK_label295;
}
}
BREAK_label295: (void)0;
{
((void(*)(val* self))((((long)var_218&3)?class_info[((long)var_218&3)]:var_218->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_218); /* finish on <var_218:Iterator[AExpr]>*/
}
} else {
if (var_noautoinit == NULL) {
var296 = 0; /* is null */
} else {
var296 = 1; /* arg is null and recv is not */
}
if (0) {
var297 = ((short int(*)(val* self, val* p0))(var_noautoinit->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_noautoinit, ((val*)NULL)); /* != on <var_noautoinit:nullable AAnnotation>*/
var296 = var297;
}
if (var296){
{
var298 = ((short int(*)(val* self))(var_initializers->class->vft[COLOR_standard__abstract_collection__Collection__is_empty]))(var_initializers); /* is_empty on <var_initializers:Array[MProperty]>*/
}
if (var298){
if (likely(varonce299!=NULL)) {
var300 = varonce299;
} else {
var301 = "useless-noautoinit";
var302 = standard___standard__NativeString___to_s_with_length(var301, 18l);
var300 = var302;
varonce299 = var300;
}
if (likely(varonce303!=NULL)) {
var304 = varonce303;
} else {
var305 = "Warning: the list of autoinit is already empty.";
var306 = standard___standard__NativeString___to_s_with_length(var305, 47l);
var304 = var306;
varonce303 = var304;
}
{
((void(*)(val* self, val* p0, val* p1, val* p2))(self->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__warning]))(self, var_noautoinit, var300, var304); /* warning on <self:ModelBuilder>*/
}
} else {
}
{
((void(*)(val* self))(var_mparameters68->class->vft[COLOR_standard__abstract_collection__RemovableCollection__clear]))(var_mparameters68); /* clear on <var_mparameters68:Array[MParameter]>*/
}
{
((void(*)(val* self))(var_initializers->class->vft[COLOR_standard__abstract_collection__RemovableCollection__clear]))(var_initializers); /* clear on <var_initializers:Array[MProperty]>*/
}
} else {
{
var307 = ((val*(*)(val* self))(var_spropdefs->class->vft[COLOR_standard__abstract_collection__Collection__first]))(var_spropdefs); /* first on <var_spropdefs:Array[MMethodDef]>*/
}
var_longest = var307;
{
var308 = ((long(*)(val* self))(var_spropdefs->class->vft[COLOR_standard__abstract_collection__Collection__length]))(var_spropdefs); /* length on <var_spropdefs:Array[MMethodDef]>*/
}
{
{ /* Inline kernel#Int#> (var308,1l) on <var308:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var311 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var311)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 425);
fatal_exit(1);
}
var314 = var308 > 1l;
var309 = var314;
goto RET_LABEL310;
RET_LABEL310:(void)0;
}
}
if (var309){
var_315 = var_spropdefs;
{
var316 = ((val*(*)(val* self))(var_315->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_315); /* iterator on <var_315:Array[MMethodDef]>*/
}
var_317 = var316;
for(;;) {
{
var318 = ((short int(*)(val* self))(var_317->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_317); /* is_ok on <var_317:ArrayIterator[MMethodDef]>*/
}
if (var318){
{
var319 = ((val*(*)(val* self))(var_317->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_317); /* item on <var_317:ArrayIterator[MMethodDef]>*/
}
var_spd = var319;
{
var320 = ((val*(*)(val* self))(var_spd->class->vft[COLOR_nit__model__MMethodDef__initializers]))(var_spd); /* initializers on <var_spd:MMethodDef>*/
}
{
var321 = ((long(*)(val* self))(var320->class->vft[COLOR_standard__abstract_collection__Collection__length]))(var320); /* length on <var320:Array[MProperty]>*/
}
{
var322 = ((val*(*)(val* self))(var_longest->class->vft[COLOR_nit__model__MMethodDef__initializers]))(var_longest); /* initializers on <var_longest:MMethodDef>*/
}
{
var323 = ((long(*)(val* self))(var322->class->vft[COLOR_standard__abstract_collection__Collection__length]))(var322); /* length on <var322:Array[MProperty]>*/
}
{
{ /* Inline kernel#Int#> (var321,var323) on <var321:Int> */
/* Covariant cast for argument 0 (i) <var323:Int> isa OTHER */
/* <var323:Int> isa OTHER */
var326 = 1; /* easy <var323:Int> isa OTHER*/
if (unlikely(!var326)) {
var_class_name329 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name329);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 425);
fatal_exit(1);
}
var330 = var321 > var323;
var324 = var330;
goto RET_LABEL325;
RET_LABEL325:(void)0;
}
}
if (var324){
var_longest = var_spd;
} else {
}
{
((void(*)(val* self))(var_317->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_317); /* next on <var_317:ArrayIterator[MMethodDef]>*/
}
} else {
goto BREAK_label331;
}
}
BREAK_label331: (void)0;
{
((void(*)(val* self))(var_317->class->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_317); /* finish on <var_317:ArrayIterator[MMethodDef]>*/
}
var_332 = var_spropdefs;
{
var333 = ((val*(*)(val* self))(var_332->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_332); /* iterator on <var_332:Array[MMethodDef]>*/
}
var_334 = var333;
for(;;) {
{
var335 = ((short int(*)(val* self))(var_334->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_334); /* is_ok on <var_334:ArrayIterator[MMethodDef]>*/
}
if (var335){
{
var336 = ((val*(*)(val* self))(var_334->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_334); /* item on <var_334:ArrayIterator[MMethodDef]>*/
}
var_spd337 = var336;
var_i = 0l;
{
var338 = ((val*(*)(val* self))(var_spd337->class->vft[COLOR_nit__model__MMethodDef__initializers]))(var_spd337); /* initializers on <var_spd337:MMethodDef>*/
}
var_339 = var338;
{
var340 = ((val*(*)(val* self))(var_339->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_339); /* iterator on <var_339:Array[MProperty]>*/
}
var_341 = var340;
for(;;) {
{
var342 = ((short int(*)(val* self))(var_341->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_341); /* is_ok on <var_341:ArrayIterator[MProperty]>*/
}
if (var342){
{
var343 = ((val*(*)(val* self))(var_341->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_341); /* item on <var_341:ArrayIterator[MProperty]>*/
}
var_p344 = var343;
{
var345 = ((val*(*)(val* self))(var_longest->class->vft[COLOR_nit__model__MMethodDef__initializers]))(var_longest); /* initializers on <var_longest:MMethodDef>*/
}
{
var346 = ((val*(*)(val* self, long p0))(var345->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var345, var_i); /* [] on <var345:Array[MProperty]>*/
}
{
var347 = ((short int(*)(val* self, val* p0))(var_p344->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_p344, var346); /* != on <var_p344:MProperty>*/
}
if (var347){
if (unlikely(varonce348==NULL)) {
var349 = NEW_standard__NativeArray(9l, &type_standard__NativeArray__standard__String);
if (likely(varonce350!=NULL)) {
var351 = varonce350;
} else {
var352 = "Error: conflict for inherited inits ";
var353 = standard___standard__NativeString___to_s_with_length(var352, 36l);
var351 = var353;
varonce350 = var351;
}
((struct instance_standard__NativeArray*)var349)->values[0]=var351;
if (likely(varonce354!=NULL)) {
var355 = varonce354;
} else {
var356 = "(";
var357 = standard___standard__NativeString___to_s_with_length(var356, 1l);
var355 = var357;
varonce354 = var355;
}
((struct instance_standard__NativeArray*)var349)->values[2]=var355;
if (likely(varonce358!=NULL)) {
var359 = varonce358;
} else {
var360 = ") and ";
var361 = standard___standard__NativeString___to_s_with_length(var360, 6l);
var359 = var361;
varonce358 = var359;
}
((struct instance_standard__NativeArray*)var349)->values[4]=var359;
if (likely(varonce362!=NULL)) {
var363 = varonce362;
} else {
var364 = "(";
var365 = standard___standard__NativeString___to_s_with_length(var364, 1l);
var363 = var365;
varonce362 = var363;
}
((struct instance_standard__NativeArray*)var349)->values[6]=var363;
if (likely(varonce366!=NULL)) {
var367 = varonce366;
} else {
var368 = ")";
var369 = standard___standard__NativeString___to_s_with_length(var368, 1l);
var367 = var369;
varonce366 = var367;
}
((struct instance_standard__NativeArray*)var349)->values[8]=var367;
} else {
var349 = varonce348;
varonce348 = NULL;
}
{
var370 = ((val*(*)(val* self))(var_spd337->class->vft[COLOR_standard__string__Object__to_s]))(var_spd337); /* to_s on <var_spd337:MMethodDef>*/
}
((struct instance_standard__NativeArray*)var349)->values[1]=var370;
{
var371 = ((val*(*)(val* self))(var_spd337->class->vft[COLOR_nit__model__MMethodDef__initializers]))(var_spd337); /* initializers on <var_spd337:MMethodDef>*/
}
if (likely(varonce372!=NULL)) {
var373 = varonce372;
} else {
var374 = ", ";
var375 = standard___standard__NativeString___to_s_with_length(var374, 2l);
var373 = var375;
varonce372 = var373;
}
{
var376 = ((val*(*)(val* self, val* p0))(var371->class->vft[COLOR_standard__string__Collection__join]))(var371, var373); /* join on <var371:Array[MProperty]>*/
}
((struct instance_standard__NativeArray*)var349)->values[3]=var376;
{
var377 = ((val*(*)(val* self))(var_longest->class->vft[COLOR_standard__string__Object__to_s]))(var_longest); /* to_s on <var_longest:MMethodDef>*/
}
((struct instance_standard__NativeArray*)var349)->values[5]=var377;
{
var378 = ((val*(*)(val* self))(var_longest->class->vft[COLOR_nit__model__MMethodDef__initializers]))(var_longest); /* initializers on <var_longest:MMethodDef>*/
}
if (likely(varonce379!=NULL)) {
var380 = varonce379;
} else {
var381 = ", ";
var382 = standard___standard__NativeString___to_s_with_length(var381, 2l);
var380 = var382;
varonce379 = var380;
}
{
var383 = ((val*(*)(val* self, val* p0))(var378->class->vft[COLOR_standard__string__Collection__join]))(var378, var380); /* join on <var378:Array[MProperty]>*/
}
((struct instance_standard__NativeArray*)var349)->values[7]=var383;
{
var384 = ((val*(*)(val* self))(var349->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var349); /* native_to_s on <var349:NativeArray[String]>*/
}
varonce348 = var349;
{
((void(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__error]))(self, var_nclassdef, var384); /* error on <self:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel#Int#+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var387 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var387)) {
var_class_name390 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name390);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var391 = var_i + 1l;
var385 = var391;
goto RET_LABEL386;
RET_LABEL386:(void)0;
}
}
var_i = var385;
{
((void(*)(val* self))(var_341->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_341); /* next on <var_341:ArrayIterator[MProperty]>*/
}
} else {
goto BREAK_label392;
}
}
BREAK_label392: (void)0;
{
((void(*)(val* self))(var_341->class->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_341); /* finish on <var_341:ArrayIterator[MProperty]>*/
}
{
((void(*)(val* self))(var_334->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_334); /* next on <var_334:ArrayIterator[MMethodDef]>*/
}
} else {
goto BREAK_label393;
}
}
BREAK_label393: (void)0;
{
((void(*)(val* self))(var_334->class->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_334); /* finish on <var_334:ArrayIterator[MMethodDef]>*/
}
} else {
}
{
var396 = ((long(*)(val* self))(var_spropdefs->class->vft[COLOR_standard__abstract_collection__Collection__length]))(var_spropdefs); /* length on <var_spropdefs:Array[MMethodDef]>*/
}
{
{ /* Inline kernel#Int#== (var396,1l) on <var396:Int> */
var399 = var396 == 1l;
var397 = var399;
goto RET_LABEL398;
RET_LABEL398:(void)0;
}
}
var_400 = var397;
if (var397){
{
var401 = ((short int(*)(val* self))(var_mparameters68->class->vft[COLOR_standard__abstract_collection__Collection__is_empty]))(var_mparameters68); /* is_empty on <var_mparameters68:Array[MParameter]>*/
}
var395 = var401;
} else {
var395 = var_400;
}
var_402 = var395;
if (var395){
if (var_defined_init == NULL) {
var403 = 1; /* is null */
} else {
var403 = 0; /* arg is null but recv is not */
}
if (0) {
var404 = ((short int(*)(val* self, val* p0))(var_defined_init->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_defined_init, ((val*)NULL)); /* == on <var_defined_init:nullable MMethodDef>*/
var403 = var404;
}
var394 = var403;
} else {
var394 = var_402;
}
if (var394){
{
var405 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__toolcontext]))(self); /* toolcontext on <self:ModelBuilder>*/
}
if (unlikely(varonce406==NULL)) {
var407 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce408!=NULL)) {
var409 = varonce408;
} else {
var410 = " inherits the basic constructor ";
var411 = standard___standard__NativeString___to_s_with_length(var410, 32l);
var409 = var411;
varonce408 = var409;
}
((struct instance_standard__NativeArray*)var407)->values[1]=var409;
} else {
var407 = varonce406;
varonce406 = NULL;
}
{
var412 = ((val*(*)(val* self))(var_mclassdef->class->vft[COLOR_standard__string__Object__to_s]))(var_mclassdef); /* to_s on <var_mclassdef:MClassDef>*/
}
((struct instance_standard__NativeArray*)var407)->values[0]=var412;
{
var413 = ((val*(*)(val* self))(var_longest->class->vft[COLOR_standard__string__Object__to_s]))(var_longest); /* to_s on <var_longest:MMethodDef>*/
}
((struct instance_standard__NativeArray*)var407)->values[2]=var413;
{
var414 = ((val*(*)(val* self))(var407->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var407); /* native_to_s on <var407:NativeArray[String]>*/
}
varonce406 = var407;
{
((void(*)(val* self, val* p0, long p1))(var405->class->vft[COLOR_nit__toolcontext__ToolContext__info]))(var405, var414, 3l); /* info on <var405:ToolContext>*/
}
{
var415 = ((val*(*)(val* self))(var_mclassdef->class->vft[COLOR_nit__model__MClassDef__mclass]))(var_mclassdef); /* mclass on <var_mclassdef:MClassDef>*/
}
{
((void(*)(val* self, val* p0))(var415->class->vft[COLOR_nit__modelize_property__MClass__root_init_61d]))(var415, var_longest); /* root_init= on <var415:MClass>*/
}
goto RET_LABEL;
} else {
}
{
var416 = ((val*(*)(val* self))(var_longest->class->vft[COLOR_nit__model__MMethodDef__initializers]))(var_longest); /* initializers on <var_longest:MMethodDef>*/
}
{
var417 = ((long(*)(val* self))(var416->class->vft[COLOR_standard__abstract_collection__Collection__length]))(var416); /* length on <var416:Array[MProperty]>*/
}
{
{ /* Inline kernel#Int#> (var417,0l) on <var417:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var420 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var420)) {
var_class_name423 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name423);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 425);
fatal_exit(1);
}
var424 = var417 > 0l;
var418 = var424;
goto RET_LABEL419;
RET_LABEL419:(void)0;
}
}
if (var418){
{
var425 = ((val*(*)(val* self))(var_longest->class->vft[COLOR_nit__model__MMethodDef__new_msignature]))(var_longest); /* new_msignature on <var_longest:MMethodDef>*/
}
if (var425 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 341);
fatal_exit(1);
} else {
var426 = ((val*(*)(val* self))(var425->class->vft[COLOR_nit__model__MSignature__mparameters]))(var425); /* mparameters on <var425:nullable MSignature>*/
}
{
((void(*)(val* self, val* p0))(var_mparameters68->class->vft[COLOR_standard__abstract_collection__Sequence__prepend]))(var_mparameters68, var426); /* prepend on <var_mparameters68:Array[MParameter]>*/
}
{
var427 = ((val*(*)(val* self))(var_longest->class->vft[COLOR_nit__model__MMethodDef__initializers]))(var_longest); /* initializers on <var_longest:MMethodDef>*/
}
{
((void(*)(val* self, val* p0))(var_initializers->class->vft[COLOR_standard__abstract_collection__Sequence__prepend]))(var_initializers, var427); /* prepend on <var_initializers:Array[MProperty]>*/
}
} else {
}
}
}
if (var_defined_init == NULL) {
var428 = 0; /* is null */
} else {
var428 = 1; /* arg is null and recv is not */
}
if (0) {
var429 = ((short int(*)(val* self, val* p0))(var_defined_init->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_defined_init, ((val*)NULL)); /* != on <var_defined_init:nullable MMethodDef>*/
var428 = var429;
}
if (var428){
{
var430 = ((val*(*)(val* self))(var_defined_init->class->vft[COLOR_nit__model__MMethodDef__initializers]))(var_defined_init); /* initializers on <var_defined_init:nullable MMethodDef(MMethodDef)>*/
}
{
((void(*)(val* self, val* p0))(var430->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add_all]))(var430, var_initializers); /* add_all on <var430:Array[MProperty]>*/
}
var431 = NEW_nit__MSignature(&type_nit__MSignature);
{
((void(*)(val* self, val* p0))(var431->class->vft[COLOR_nit__model__MSignature__mparameters_61d]))(var431, var_mparameters68); /* mparameters= on <var431:MSignature>*/
}
{
((void(*)(val* self, val* p0))(var431->class->vft[COLOR_nit__model__MSignature__return_mtype_61d]))(var431, ((val*)NULL)); /* return_mtype= on <var431:MSignature>*/
}
{
((void(*)(val* self))(var431->class->vft[COLOR_standard__kernel__Object__init]))(var431); /* init on <var431:MSignature>*/
}
var_msignature432 = var431;
{
((void(*)(val* self, val* p0))(var_defined_init->class->vft[COLOR_nit__model__MMethodDef__new_msignature_61d]))(var_defined_init, var_msignature432); /* new_msignature= on <var_defined_init:nullable MMethodDef(MMethodDef)>*/
}
{
var433 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__toolcontext]))(self); /* toolcontext on <self:ModelBuilder>*/
}
if (unlikely(varonce434==NULL)) {
var435 = NEW_standard__NativeArray(4l, &type_standard__NativeArray__standard__String);
if (likely(varonce436!=NULL)) {
var437 = varonce436;
} else {
var438 = " extends its basic constructor signature to ";
var439 = standard___standard__NativeString___to_s_with_length(var438, 44l);
var437 = var439;
varonce436 = var437;
}
((struct instance_standard__NativeArray*)var435)->values[1]=var437;
} else {
var435 = varonce434;
varonce434 = NULL;
}
{
var440 = ((val*(*)(val* self))(var_mclassdef->class->vft[COLOR_standard__string__Object__to_s]))(var_mclassdef); /* to_s on <var_mclassdef:MClassDef>*/
}
((struct instance_standard__NativeArray*)var435)->values[0]=var440;
{
var441 = ((val*(*)(val* self))(var_defined_init->class->vft[COLOR_standard__string__Object__to_s]))(var_defined_init); /* to_s on <var_defined_init:nullable MMethodDef(MMethodDef)>*/
}
((struct instance_standard__NativeArray*)var435)->values[2]=var441;
{
var442 = ((val*(*)(val* self))(var_msignature432->class->vft[COLOR_standard__string__Object__to_s]))(var_msignature432); /* to_s on <var_msignature432:MSignature>*/
}
((struct instance_standard__NativeArray*)var435)->values[3]=var442;
{
var443 = ((val*(*)(val* self))(var435->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var435); /* native_to_s on <var435:NativeArray[String]>*/
}
varonce434 = var435;
{
((void(*)(val* self, val* p0, long p1))(var433->class->vft[COLOR_nit__toolcontext__ToolContext__info]))(var433, var443, 3l); /* info on <var433:ToolContext>*/
}
{
var444 = ((val*(*)(val* self))(var_mclassdef->class->vft[COLOR_nit__model__MClassDef__mclass]))(var_mclassdef); /* mclass on <var_mclassdef:MClassDef>*/
}
{
((void(*)(val* self, val* p0))(var444->class->vft[COLOR_nit__modelize_property__MClass__root_init_61d]))(var444, var_defined_init); /* root_init= on <var444:MClass>*/
}
goto RET_LABEL;
} else {
}
{
var445 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__modelize_property__ModelBuilder__the_root_init_mmethod]))(self); /* the_root_init_mmethod on <self:ModelBuilder>*/
}
if (unlikely(var445 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 357);
fatal_exit(1);
}
var_mprop446 = var445;
var447 = NEW_nit__MMethodDef(&type_nit__MMethodDef);
{
var448 = ((val*(*)(val* self))(var_nclassdef->class->vft[COLOR_nit__parser_nodes__ANode__location]))(var_nclassdef); /* location on <var_nclassdef:AClassdef(AStdClassdef)>*/
}
{
((void(*)(val* self, val* p0))(var447->class->vft[COLOR_nit__model__MPropDef__mclassdef_61d]))(var447, var_mclassdef); /* mclassdef= on <var447:MMethodDef>*/
}
{
((void(*)(val* self, val* p0))(var447->class->vft[COLOR_nit__model__MPropDef__mproperty_61d]))(var447, var_mprop446); /* mproperty= on <var447:MMethodDef>*/
}
{
((void(*)(val* self, val* p0))(var447->class->vft[COLOR_nit__model__MPropDef__location_61d]))(var447, var448); /* location= on <var447:MMethodDef>*/
}
{
((void(*)(val* self))(var447->class->vft[COLOR_standard__kernel__Object__init]))(var447); /* init on <var447:MMethodDef>*/
}
var_mpropdef449 = var447;
{
((void(*)(val* self, short int p0))(var_mpropdef449->class->vft[COLOR_nit__modelize_property__MPropDef__has_supercall_61d]))(var_mpropdef449, 1); /* has_supercall= on <var_mpropdef449:MMethodDef>*/
}
{
var450 = ((val*(*)(val* self))(var_mpropdef449->class->vft[COLOR_nit__model__MMethodDef__initializers]))(var_mpropdef449); /* initializers on <var_mpropdef449:MMethodDef>*/
}
{
((void(*)(val* self, val* p0))(var450->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add_all]))(var450, var_initializers); /* add_all on <var450:Array[MProperty]>*/
}
var451 = NEW_nit__MSignature(&type_nit__MSignature);
{
((void(*)(val* self, val* p0))(var451->class->vft[COLOR_nit__model__MSignature__mparameters_61d]))(var451, var_mparameters68); /* mparameters= on <var451:MSignature>*/
}
{
((void(*)(val* self, val* p0))(var451->class->vft[COLOR_nit__model__MSignature__return_mtype_61d]))(var451, ((val*)NULL)); /* return_mtype= on <var451:MSignature>*/
}
{
((void(*)(val* self))(var451->class->vft[COLOR_standard__kernel__Object__init]))(var451); /* init on <var451:MSignature>*/
}
var_msignature452 = var451;
{
((void(*)(val* self, val* p0))(var_mpropdef449->class->vft[COLOR_nit__model__MMethodDef__new_msignature_61d]))(var_mpropdef449, var_msignature452); /* new_msignature= on <var_mpropdef449:MMethodDef>*/
}
var453 = NEW_nit__MSignature(&type_nit__MSignature);
var454 = NEW_standard__Array(&type_standard__Array__nit__MParameter);
{
((void(*)(val* self))(var454->class->vft[COLOR_standard__kernel__Object__init]))(var454); /* init on <var454:Array[MParameter]>*/
}
{
((void(*)(val* self, val* p0))(var453->class->vft[COLOR_nit__model__MSignature__mparameters_61d]))(var453, var454); /* mparameters= on <var453:MSignature>*/
}
{
((void(*)(val* self, val* p0))(var453->class->vft[COLOR_nit__model__MSignature__return_mtype_61d]))(var453, ((val*)NULL)); /* return_mtype= on <var453:MSignature>*/
}
{
((void(*)(val* self))(var453->class->vft[COLOR_standard__kernel__Object__init]))(var453); /* init on <var453:MSignature>*/
}
{
((void(*)(val* self, val* p0))(var_mpropdef449->class->vft[COLOR_nit__model__MMethodDef__msignature_61d]))(var_mpropdef449, var453); /* msignature= on <var_mpropdef449:MMethodDef>*/
}
{
((void(*)(val* self, val* p0))(var_nclassdef->class->vft[COLOR_nit__modelize_property__AClassdef__mfree_init_61d]))(var_nclassdef, var_mpropdef449); /* mfree_init= on <var_nclassdef:AClassdef(AStdClassdef)>*/
}
{
var455 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__toolcontext]))(self); /* toolcontext on <self:ModelBuilder>*/
}
if (unlikely(varonce456==NULL)) {
var457 = NEW_standard__NativeArray(4l, &type_standard__NativeArray__standard__String);
if (likely(varonce458!=NULL)) {
var459 = varonce458;
} else {
var460 = " gets a free constructor for attributes ";
var461 = standard___standard__NativeString___to_s_with_length(var460, 40l);
var459 = var461;
varonce458 = var459;
}
((struct instance_standard__NativeArray*)var457)->values[1]=var459;
} else {
var457 = varonce456;
varonce456 = NULL;
}
{
var462 = ((val*(*)(val* self))(var_mclassdef->class->vft[COLOR_standard__string__Object__to_s]))(var_mclassdef); /* to_s on <var_mclassdef:MClassDef>*/
}
((struct instance_standard__NativeArray*)var457)->values[0]=var462;
{
var463 = ((val*(*)(val* self))(var_mpropdef449->class->vft[COLOR_standard__string__Object__to_s]))(var_mpropdef449); /* to_s on <var_mpropdef449:MMethodDef>*/
}
((struct instance_standard__NativeArray*)var457)->values[2]=var463;
{
var464 = ((val*(*)(val* self))(var_msignature452->class->vft[COLOR_standard__string__Object__to_s]))(var_msignature452); /* to_s on <var_msignature452:MSignature>*/
}
((struct instance_standard__NativeArray*)var457)->values[3]=var464;
{
var465 = ((val*(*)(val* self))(var457->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var457); /* native_to_s on <var457:NativeArray[String]>*/
}
varonce456 = var457;
{
((void(*)(val* self, val* p0, long p1))(var455->class->vft[COLOR_nit__toolcontext__ToolContext__info]))(var455, var465, 3l); /* info on <var455:ToolContext>*/
}
{
var466 = ((val*(*)(val* self))(var_mclassdef->class->vft[COLOR_nit__model__MClassDef__mclass]))(var_mclassdef); /* mclass on <var_mclassdef:MClassDef>*/
}
{
((void(*)(val* self, val* p0))(var466->class->vft[COLOR_nit__modelize_property__MClass__root_init_61d]))(var466, var_mpropdef449); /* root_init= on <var466:MClass>*/
}
RET_LABEL:;
}
/* method modelize_property#ModelBuilder#check_visibility for (self: ModelBuilder, ANode, MType, MPropDef) */
void nit__modelize_property___ModelBuilder___check_visibility(val* self, val* p0, val* p1, val* p2) {
val* var_node /* var node: ANode */;
val* var_mtype /* var mtype: MType */;
val* var_mpropdef /* var mpropdef: MPropDef */;
val* var /* : MClassDef */;
val* var1 /* : MModule */;
val* var_mmodule /* var mmodule: MModule */;
val* var2 /* : MProperty */;
val* var_mproperty /* var mproperty: MProperty */;
val* var_vis_type /* var vis_type: nullable MVisibility */;
val* var_mmodule_type /* var mmodule_type: nullable MModule */;
val* var3 /* : MType */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var5 /* : MClass */;
val* var6 /* : MVisibility */;
val* var7 /* : MClass */;
val* var8 /* : MClassDef */;
val* var9 /* : MModule */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var13 /* : MVirtualTypeProp */;
val* var14 /* : MVisibility */;
val* var15 /* : MVirtualTypeProp */;
val* var16 /* : MClassDef */;
val* var17 /* : MModule */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
val* var24 /* : NativeArray[String] */;
static val* varonce;
static val* varonce25;
val* var26 /* : String */;
char* var27 /* : NativeString */;
val* var28 /* : FlatString */;
val* var29 /* : String */;
val* var30 /* : String */;
short int var31 /* : Bool */;
short int var32 /* : Bool */;
short int var33 /* : Bool */;
short int var34 /* : Bool */;
val* var35 /* : MVisibility */;
val* var_vis_module_type /* var vis_module_type: MVisibility */;
val* var36 /* : MVisibility */;
short int var37 /* : Bool */;
val* var39 /* : NativeArray[String] */;
static val* varonce38;
static val* varonce40;
val* var41 /* : String */;
char* var42 /* : NativeString */;
val* var43 /* : FlatString */;
static val* varonce44;
val* var45 /* : String */;
char* var46 /* : NativeString */;
val* var47 /* : FlatString */;
static val* varonce48;
val* var49 /* : String */;
char* var50 /* : NativeString */;
val* var51 /* : FlatString */;
static val* varonce52;
val* var53 /* : String */;
char* var54 /* : NativeString */;
val* var55 /* : FlatString */;
static val* varonce56;
val* var57 /* : String */;
char* var58 /* : NativeString */;
val* var59 /* : FlatString */;
val* var60 /* : MVisibility */;
val* var61 /* : String */;
val* var62 /* : String */;
val* var63 /* : String */;
val* var64 /* : String */;
val* var65 /* : String */;
val* var66 /* : MVisibility */;
short int var67 /* : Bool */;
val* var69 /* : NativeArray[String] */;
static val* varonce68;
static val* varonce70;
val* var71 /* : String */;
char* var72 /* : NativeString */;
val* var73 /* : FlatString */;
static val* varonce74;
val* var75 /* : String */;
char* var76 /* : NativeString */;
val* var77 /* : FlatString */;
static val* varonce78;
val* var79 /* : String */;
char* var80 /* : NativeString */;
val* var81 /* : FlatString */;
static val* varonce82;
val* var83 /* : String */;
char* var84 /* : NativeString */;
val* var85 /* : FlatString */;
static val* varonce86;
val* var87 /* : String */;
char* var88 /* : NativeString */;
val* var89 /* : FlatString */;
static val* varonce90;
val* var91 /* : String */;
char* var92 /* : NativeString */;
val* var93 /* : FlatString */;
val* var94 /* : MVisibility */;
val* var95 /* : String */;
val* var96 /* : String */;
val* var97 /* : String */;
val* var98 /* : String */;
val* var99 /* : String */;
val* var100 /* : String */;
short int var101 /* : Bool */;
int cltype102;
int idtype103;
val* var104 /* : ANodes[AType] */;
val* var_ /* var : ANodes[AType] */;
val* var105 /* : Iterator[nullable Object] */;
val* var_106 /* var : Iterator[AType] */;
short int var107 /* : Bool */;
val* var108 /* : nullable Object */;
val* var_a /* var a: AType */;
val* var109 /* : nullable MType */;
val* var_t /* var t: nullable MType */;
short int var110 /* : Bool */;
short int var111 /* : Bool */;
short int var113 /* : Bool */;
int cltype114;
int idtype115;
val* var116 /* : Array[MType] */;
val* var_117 /* var : Array[MType] */;
val* var118 /* : Iterator[nullable Object] */;
val* var_119 /* var : ArrayIterator[MType] */;
short int var120 /* : Bool */;
val* var121 /* : nullable Object */;
val* var_t122 /* var t: MType */;
var_node = p0;
var_mtype = p1;
var_mpropdef = p2;
{
var = ((val*(*)(val* self))(var_mpropdef->class->vft[COLOR_nit__model__MPropDef__mclassdef]))(var_mpropdef); /* mclassdef on <var_mpropdef:MPropDef>*/
}
{
var1 = ((val*(*)(val* self))(var->class->vft[COLOR_nit__model__MClassDef__mmodule]))(var); /* mmodule on <var:MClassDef>*/
}
var_mmodule = var1;
{
var2 = ((val*(*)(val* self))(var_mpropdef->class->vft[COLOR_nit__model__MPropDef__mproperty]))(var_mpropdef); /* mproperty on <var_mpropdef:MPropDef>*/
}
var_mproperty = var2;
var_vis_type = ((val*)NULL);
var_mmodule_type = ((val*)NULL);
{
var3 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nit__model__MType__undecorate]))(var_mtype); /* undecorate on <var_mtype:MType>*/
}
var_mtype = var3;
/* <var_mtype:MType> isa MClassType */
cltype = type_nit__MClassType.color;
idtype = type_nit__MClassType.id;
if(cltype >= var_mtype->type->table_size) {
var4 = 0;
} else {
var4 = var_mtype->type->type_table[cltype] == idtype;
}
if (var4){
{
var5 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nit__model__MClassType__mclass]))(var_mtype); /* mclass on <var_mtype:MType(MClassType)>*/
}
{
var6 = ((val*(*)(val* self))(var5->class->vft[COLOR_nit__model__MClass__visibility]))(var5); /* visibility on <var5:MClass>*/
}
var_vis_type = var6;
{
var7 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nit__model__MClassType__mclass]))(var_mtype); /* mclass on <var_mtype:MType(MClassType)>*/
}
{
var8 = ((val*(*)(val* self))(var7->class->vft[COLOR_nit__model__MClass__intro]))(var7); /* intro on <var7:MClass>*/
}
{
var9 = ((val*(*)(val* self))(var8->class->vft[COLOR_nit__model__MClassDef__mmodule]))(var8); /* mmodule on <var8:MClassDef>*/
}
var_mmodule_type = var9;
} else {
/* <var_mtype:MType> isa MVirtualType */
cltype11 = type_nit__MVirtualType.color;
idtype12 = type_nit__MVirtualType.id;
if(cltype11 >= var_mtype->type->table_size) {
var10 = 0;
} else {
var10 = var_mtype->type->type_table[cltype11] == idtype12;
}
if (var10){
{
var13 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nit__model__MVirtualType__mproperty]))(var_mtype); /* mproperty on <var_mtype:MType(MVirtualType)>*/
}
{
var14 = ((val*(*)(val* self))(var13->class->vft[COLOR_nit__model__MProperty__visibility]))(var13); /* visibility on <var13:MVirtualTypeProp>*/
}
var_vis_type = var14;
{
var15 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nit__model__MVirtualType__mproperty]))(var_mtype); /* mproperty on <var_mtype:MType(MVirtualType)>*/
}
{
var16 = ((val*(*)(val* self))(var15->class->vft[COLOR_nit__model__MProperty__intro_mclassdef]))(var15); /* intro_mclassdef on <var15:MVirtualTypeProp>*/
}
{
var17 = ((val*(*)(val* self))(var16->class->vft[COLOR_nit__model__MClassDef__mmodule]))(var16); /* mmodule on <var16:MClassDef>*/
}
var_mmodule_type = var17;
} else {
/* <var_mtype:MType> isa MParameterType */
cltype19 = type_nit__MParameterType.color;
idtype20 = type_nit__MParameterType.id;
if(cltype19 >= var_mtype->type->table_size) {
var18 = 0;
} else {
var18 = var_mtype->type->type_table[cltype19] == idtype20;
}
if (var18){
} else {
/* <var_mtype:MType> isa MNullType */
cltype22 = type_nit__MNullType.color;
idtype23 = type_nit__MNullType.id;
if(cltype22 >= var_mtype->type->table_size) {
var21 = 0;
} else {
var21 = var_mtype->type->type_table[cltype22] == idtype23;
}
if (var21){
} else {
if (unlikely(varonce==NULL)) {
var24 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce25!=NULL)) {
var26 = varonce25;
} else {
var27 = "Unexpected type ";
var28 = standard___standard__NativeString___to_s_with_length(var27, 16l);
var26 = var28;
varonce25 = var26;
}
((struct instance_standard__NativeArray*)var24)->values[0]=var26;
} else {
var24 = varonce;
varonce = NULL;
}
{
var29 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_standard__string__Object__to_s]))(var_mtype); /* to_s on <var_mtype:MType>*/
}
((struct instance_standard__NativeArray*)var24)->values[1]=var29;
{
var30 = ((val*(*)(val* self))(var24->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var24); /* native_to_s on <var24:NativeArray[String]>*/
}
varonce = var24;
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__debug]))(var_node, var30); /* debug on <var_node:ANode>*/
}
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 392);
fatal_exit(1);
}
}
}
}
if (var_vis_type == NULL) {
var31 = 0; /* is null */
} else {
var31 = 1; /* arg is null and recv is not */
}
if (0) {
var32 = ((short int(*)(val* self, val* p0))(var_vis_type->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_vis_type, ((val*)NULL)); /* != on <var_vis_type:nullable MVisibility>*/
var31 = var32;
}
if (var31){
if (var_mmodule_type == NULL) {
var33 = 0; /* is null */
} else {
var33 = 1; /* arg is null and recv is not */
}
if (0) {
var34 = ((short int(*)(val* self, val* p0))(var_mmodule_type->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_mmodule_type, ((val*)NULL)); /* != on <var_mmodule_type:nullable MModule>*/
var33 = var34;
}
if (unlikely(!var33)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 396);
fatal_exit(1);
}
{
var35 = ((val*(*)(val* self, val* p0))(var_mmodule->class->vft[COLOR_nit__mmodule__MModule__visibility_for]))(var_mmodule, var_mmodule_type); /* visibility_for on <var_mmodule:MModule>*/
}
var_vis_module_type = var35;
{
var36 = ((val*(*)(val* self))(var_mproperty->class->vft[COLOR_nit__model__MProperty__visibility]))(var_mproperty); /* visibility on <var_mproperty:MProperty>*/
}
{
var37 = ((short int(*)(val* self, val* p0))(var36->class->vft[COLOR_standard__kernel__Comparable___62d]))(var36, var_vis_type); /* > on <var36:MVisibility>*/
}
if (var37){
if (unlikely(varonce38==NULL)) {
var39 = NEW_standard__NativeArray(9l, &type_standard__NativeArray__standard__String);
if (likely(varonce40!=NULL)) {
var41 = varonce40;
} else {
var42 = "Error: the ";
var43 = standard___standard__NativeString___to_s_with_length(var42, 11l);
var41 = var43;
varonce40 = var41;
}
((struct instance_standard__NativeArray*)var39)->values[0]=var41;
if (likely(varonce44!=NULL)) {
var45 = varonce44;
} else {
var46 = " property `";
var47 = standard___standard__NativeString___to_s_with_length(var46, 11l);
var45 = var47;
varonce44 = var45;
}
((struct instance_standard__NativeArray*)var39)->values[2]=var45;
if (likely(varonce48!=NULL)) {
var49 = varonce48;
} else {
var50 = "` cannot contain the ";
var51 = standard___standard__NativeString___to_s_with_length(var50, 21l);
var49 = var51;
varonce48 = var49;
}
((struct instance_standard__NativeArray*)var39)->values[4]=var49;
if (likely(varonce52!=NULL)) {
var53 = varonce52;
} else {
var54 = " type `";
var55 = standard___standard__NativeString___to_s_with_length(var54, 7l);
var53 = var55;
varonce52 = var53;
}
((struct instance_standard__NativeArray*)var39)->values[6]=var53;
if (likely(varonce56!=NULL)) {
var57 = varonce56;
} else {
var58 = "`.";
var59 = standard___standard__NativeString___to_s_with_length(var58, 2l);
var57 = var59;
varonce56 = var57;
}
((struct instance_standard__NativeArray*)var39)->values[8]=var57;
} else {
var39 = varonce38;
varonce38 = NULL;
}
{
var60 = ((val*(*)(val* self))(var_mproperty->class->vft[COLOR_nit__model__MProperty__visibility]))(var_mproperty); /* visibility on <var_mproperty:MProperty>*/
}
{
var61 = ((val*(*)(val* self))(var60->class->vft[COLOR_standard__string__Object__to_s]))(var60); /* to_s on <var60:MVisibility>*/
}
((struct instance_standard__NativeArray*)var39)->values[1]=var61;
{
var62 = ((val*(*)(val* self))(var_mproperty->class->vft[COLOR_standard__string__Object__to_s]))(var_mproperty); /* to_s on <var_mproperty:MProperty>*/
}
((struct instance_standard__NativeArray*)var39)->values[3]=var62;
{
var63 = ((val*(*)(val* self))(var_vis_type->class->vft[COLOR_standard__string__Object__to_s]))(var_vis_type); /* to_s on <var_vis_type:nullable MVisibility(MVisibility)>*/
}
((struct instance_standard__NativeArray*)var39)->values[5]=var63;
{
var64 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_standard__string__Object__to_s]))(var_mtype); /* to_s on <var_mtype:MType>*/
}
((struct instance_standard__NativeArray*)var39)->values[7]=var64;
{
var65 = ((val*(*)(val* self))(var39->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var39); /* native_to_s on <var39:NativeArray[String]>*/
}
varonce38 = var39;
{
((void(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__error]))(self, var_node, var65); /* error on <self:ModelBuilder>*/
}
goto RET_LABEL;
} else {
{
var66 = ((val*(*)(val* self))(var_mproperty->class->vft[COLOR_nit__model__MProperty__visibility]))(var_mproperty); /* visibility on <var_mproperty:MProperty>*/
}
{
var67 = ((short int(*)(val* self, val* p0))(var66->class->vft[COLOR_standard__kernel__Comparable___62d]))(var66, var_vis_module_type); /* > on <var66:MVisibility>*/
}
if (var67){
if (unlikely(varonce68==NULL)) {
var69 = NEW_standard__NativeArray(11l, &type_standard__NativeArray__standard__String);
if (likely(varonce70!=NULL)) {
var71 = varonce70;
} else {
var72 = "Error: the ";
var73 = standard___standard__NativeString___to_s_with_length(var72, 11l);
var71 = var73;
varonce70 = var71;
}
((struct instance_standard__NativeArray*)var69)->values[0]=var71;
if (likely(varonce74!=NULL)) {
var75 = varonce74;
} else {
var76 = " property `";
var77 = standard___standard__NativeString___to_s_with_length(var76, 11l);
var75 = var77;
varonce74 = var75;
}
((struct instance_standard__NativeArray*)var69)->values[2]=var75;
if (likely(varonce78!=NULL)) {
var79 = varonce78;
} else {
var80 = "` cannot contain the type `";
var81 = standard___standard__NativeString___to_s_with_length(var80, 27l);
var79 = var81;
varonce78 = var79;
}
((struct instance_standard__NativeArray*)var69)->values[4]=var79;
if (likely(varonce82!=NULL)) {
var83 = varonce82;
} else {
var84 = "` from the ";
var85 = standard___standard__NativeString___to_s_with_length(var84, 11l);
var83 = var85;
varonce82 = var83;
}
((struct instance_standard__NativeArray*)var69)->values[6]=var83;
if (likely(varonce86!=NULL)) {
var87 = varonce86;
} else {
var88 = " module `";
var89 = standard___standard__NativeString___to_s_with_length(var88, 9l);
var87 = var89;
varonce86 = var87;
}
((struct instance_standard__NativeArray*)var69)->values[8]=var87;
if (likely(varonce90!=NULL)) {
var91 = varonce90;
} else {
var92 = "`.";
var93 = standard___standard__NativeString___to_s_with_length(var92, 2l);
var91 = var93;
varonce90 = var91;
}
((struct instance_standard__NativeArray*)var69)->values[10]=var91;
} else {
var69 = varonce68;
varonce68 = NULL;
}
{
var94 = ((val*(*)(val* self))(var_mproperty->class->vft[COLOR_nit__model__MProperty__visibility]))(var_mproperty); /* visibility on <var_mproperty:MProperty>*/
}
{
var95 = ((val*(*)(val* self))(var94->class->vft[COLOR_standard__string__Object__to_s]))(var94); /* to_s on <var94:MVisibility>*/
}
((struct instance_standard__NativeArray*)var69)->values[1]=var95;
{
var96 = ((val*(*)(val* self))(var_mproperty->class->vft[COLOR_standard__string__Object__to_s]))(var_mproperty); /* to_s on <var_mproperty:MProperty>*/
}
((struct instance_standard__NativeArray*)var69)->values[3]=var96;
{
var97 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_standard__string__Object__to_s]))(var_mtype); /* to_s on <var_mtype:MType>*/
}
((struct instance_standard__NativeArray*)var69)->values[5]=var97;
{
var98 = ((val*(*)(val* self))(var_vis_module_type->class->vft[COLOR_standard__string__Object__to_s]))(var_vis_module_type); /* to_s on <var_vis_module_type:MVisibility>*/
}
((struct instance_standard__NativeArray*)var69)->values[7]=var98;
{
var99 = ((val*(*)(val* self))(var_mmodule_type->class->vft[COLOR_standard__string__Object__to_s]))(var_mmodule_type); /* to_s on <var_mmodule_type:nullable MModule(MModule)>*/
}
((struct instance_standard__NativeArray*)var69)->values[9]=var99;
{
var100 = ((val*(*)(val* self))(var69->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var69); /* native_to_s on <var69:NativeArray[String]>*/
}
varonce68 = var69;
{
((void(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__error]))(self, var_node, var100); /* error on <self:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
}
} else {
}
/* <var_node:ANode> isa AType */
cltype102 = type_nit__AType.color;
idtype103 = type_nit__AType.id;
if(cltype102 >= var_node->type->table_size) {
var101 = 0;
} else {
var101 = var_node->type->type_table[cltype102] == idtype103;
}
if (var101){
{
var104 = ((val*(*)(val* self))(var_node->class->vft[COLOR_nit__parser_nodes__AType__n_types]))(var_node); /* n_types on <var_node:ANode(AType)>*/
}
var_ = var104;
{
var105 = ((val*(*)(val* self))(var_->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:ANodes[AType]>*/
}
var_106 = var105;
for(;;) {
{
var107 = ((short int(*)(val* self))((((long)var_106&3)?class_info[((long)var_106&3)]:var_106->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_106); /* is_ok on <var_106:Iterator[AType]>*/
}
if (var107){
{
var108 = ((val*(*)(val* self))((((long)var_106&3)?class_info[((long)var_106&3)]:var_106->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_106); /* item on <var_106:Iterator[AType]>*/
}
var_a = var108;
{
var109 = ((val*(*)(val* self))(var_a->class->vft[COLOR_nit__modelbuilder_base__AType__mtype]))(var_a); /* mtype on <var_a:AType>*/
}
var_t = var109;
if (var_t == NULL) {
var110 = 1; /* is null */
} else {
var110 = 0; /* arg is null but recv is not */
}
if (0) {
var111 = ((short int(*)(val* self, val* p0))(var_t->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_t, ((val*)NULL)); /* == on <var_t:nullable MType>*/
var110 = var111;
}
if (var110){
goto BREAK_label;
} else {
}
{
((void(*)(val* self, val* p0, val* p1, val* p2))(self->class->vft[COLOR_nit__modelize_property__ModelBuilder__check_visibility]))(self, var_a, var_t, var_mpropdef); /* check_visibility on <self:ModelBuilder>*/
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_106&3)?class_info[((long)var_106&3)]:var_106->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_106); /* next on <var_106:Iterator[AType]>*/
}
} else {
goto BREAK_label112;
}
}
BREAK_label112: (void)0;
{
((void(*)(val* self))((((long)var_106&3)?class_info[((long)var_106&3)]:var_106->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_106); /* finish on <var_106:Iterator[AType]>*/
}
} else {
/* <var_mtype:MType> isa MGenericType */
cltype114 = type_nit__MGenericType.color;
idtype115 = type_nit__MGenericType.id;
if(cltype114 >= var_mtype->type->table_size) {
var113 = 0;
} else {
var113 = var_mtype->type->type_table[cltype114] == idtype115;
}
if (var113){
{
var116 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nit__model__MClassType__arguments]))(var_mtype); /* arguments on <var_mtype:MType(MGenericType)>*/
}
var_117 = var116;
{
var118 = ((val*(*)(val* self))(var_117->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_117); /* iterator on <var_117:Array[MType]>*/
}
var_119 = var118;
for(;;) {
{
var120 = ((short int(*)(val* self))(var_119->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_119); /* is_ok on <var_119:ArrayIterator[MType]>*/
}
if (var120){
{
var121 = ((val*(*)(val* self))(var_119->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_119); /* item on <var_119:ArrayIterator[MType]>*/
}
var_t122 = var121;
{
((void(*)(val* self, val* p0, val* p1, val* p2))(self->class->vft[COLOR_nit__modelize_property__ModelBuilder__check_visibility]))(self, var_node, var_t122, var_mpropdef); /* check_visibility on <self:ModelBuilder>*/
}
{
((void(*)(val* self))(var_119->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_119); /* next on <var_119:ArrayIterator[MType]>*/
}
} else {
goto BREAK_label123;
}
}
BREAK_label123: (void)0;
{
((void(*)(val* self))(var_119->class->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_119); /* finish on <var_119:ArrayIterator[MType]>*/
}
} else {
}
}
RET_LABEL:;
}
/* method modelize_property#ModelBuilder#check_virtual_types_circularity for (self: ModelBuilder, ANode, MVirtualTypeProp, MType, MModule): Bool */
short int nit__modelize_property___ModelBuilder___check_virtual_types_circularity(val* self, val* p0, val* p1, val* p2, val* p3) {
short int var /* : Bool */;
val* var_node /* var node: ANode */;
val* var_mproperty /* var mproperty: MVirtualTypeProp */;
val* var_recv /* var recv: MType */;
val* var_mmodule /* var mmodule: MModule */;
val* var1 /* : MVirtualType */;
val* var_mtype /* var mtype: MVirtualType */;
val* var2 /* : POSet[MType] */;
val* var_poset /* var poset: POSet[MType] */;
val* var3 /* : List[MType] */;
val* var_todo /* var todo: List[MType] */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var6 /* : nullable Object */;
val* var_t /* var t: MType */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
int cltype;
int idtype;
val* var10 /* : Array[MType] */;
val* var_ /* var : Array[MType] */;
val* var11 /* : MType */;
val* var_nexts /* var nexts: nullable Object */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
val* var15 /* : Array[MType] */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
val* var19 /* : MVirtualTypeProp */;
val* var_vt /* var vt: MVirtualTypeProp */;
val* var20 /* : Array[MPropDef] */;
val* var_defs /* var defs: Array[MVirtualTypeDef] */;
short int var21 /* : Bool */;
short int var22 /* : Bool */;
val* var23 /* : Array[MType] */;
val* var_24 /* var : Array[MVirtualTypeDef] */;
val* var25 /* : Iterator[nullable Object] */;
val* var_26 /* var : ArrayIterator[MVirtualTypeDef] */;
short int var27 /* : Bool */;
val* var28 /* : nullable Object */;
val* var_d /* var d: MVirtualTypeDef */;
val* var29 /* : nullable Object */;
val* var30 /* : nullable MType */;
val* var_next /* var next: nullable MType */;
short int var31 /* : Bool */;
short int var32 /* : Bool */;
short int var34 /* : Bool */;
int cltype35;
int idtype36;
short int var37 /* : Bool */;
int cltype38;
int idtype39;
val* var_40 /* var : Array[MType] */;
val* var41 /* : Iterator[nullable Object] */;
val* var_42 /* var : ArrayIterator[MType] */;
short int var43 /* : Bool */;
val* var44 /* : nullable Object */;
val* var_next45 /* var next: MType */;
short int var46 /* : Bool */;
short int var47 /* : Bool */;
val* var48 /* : NativeArray[String] */;
static val* varonce;
static val* varonce49;
val* var50 /* : String */;
char* var51 /* : NativeString */;
val* var52 /* : FlatString */;
static val* varonce53;
val* var54 /* : String */;
char* var55 /* : NativeString */;
val* var56 /* : FlatString */;
static val* varonce57;
val* var58 /* : String */;
char* var59 /* : NativeString */;
val* var60 /* : FlatString */;
val* var61 /* : String */;
val* var62 /* : String */;
val* var63 /* : String */;
val* var65 /* : NativeArray[String] */;
static val* varonce64;
static val* varonce66;
val* var67 /* : String */;
char* var68 /* : NativeString */;
val* var69 /* : FlatString */;
static val* varonce70;
val* var71 /* : String */;
char* var72 /* : NativeString */;
val* var73 /* : FlatString */;
static val* varonce74;
val* var75 /* : String */;
char* var76 /* : NativeString */;
val* var77 /* : FlatString */;
static val* varonce78;
val* var79 /* : String */;
char* var80 /* : NativeString */;
val* var81 /* : FlatString */;
val* var82 /* : String */;
val* var83 /* : String */;
val* var84 /* : String */;
val* var85 /* : String */;
var_node = p0;
var_mproperty = p1;
var_recv = p2;
var_mmodule = p3;
{
var1 = ((val*(*)(val* self))(var_mproperty->class->vft[COLOR_nit__model__MVirtualTypeProp__mvirtualtype]))(var_mproperty); /* mvirtualtype on <var_mproperty:MVirtualTypeProp>*/
}
var_mtype = var1;
var2 = NEW_poset__POSet(&type_poset__POSet__nit__MType);
{
((void(*)(val* self))(var2->class->vft[COLOR_standard__kernel__Object__init]))(var2); /* init on <var2:POSet[MType]>*/
}
var_poset = var2;
var3 = NEW_standard__List(&type_standard__List__nit__MType);
{
((void(*)(val* self))(var3->class->vft[COLOR_standard__kernel__Object__init]))(var3); /* init on <var3:List[MType]>*/
}
var_todo = var3;
{
((void(*)(val* self, val* p0))(var_todo->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_todo, var_mtype); /* add on <var_todo:List[MType]>*/
}
for(;;) {
{
var4 = ((short int(*)(val* self))(var_todo->class->vft[COLOR_standard__abstract_collection__Collection__is_empty]))(var_todo); /* is_empty on <var_todo:List[MType]>*/
}
var5 = !var4;
if (var5){
{
var6 = ((val*(*)(val* self))(var_todo->class->vft[COLOR_standard__abstract_collection__Sequence__pop]))(var_todo); /* pop on <var_todo:List[MType]>*/
}
var_t = var6;
{
var7 = ((short int(*)(val* self))(var_t->class->vft[COLOR_nit__model__MType__need_anchor]))(var_t); /* need_anchor on <var_t:MType>*/
}
var8 = !var7;
if (var8){
goto BREAK_label;
} else {
}
/* <var_t:MType> isa MNullableType */
cltype = type_nit__MNullableType.color;
idtype = type_nit__MNullableType.id;
if(cltype >= var_t->type->table_size) {
var9 = 0;
} else {
var9 = var_t->type->type_table[cltype] == idtype;
}
if (var9){
var10 = NEW_standard__Array(&type_standard__Array__nit__MType);
{
((void(*)(val* self, long p0))(var10->class->vft[COLOR_standard__array__Array__with_capacity]))(var10, 1l); /* with_capacity on <var10:Array[MType]>*/
}
var_ = var10;
{
var11 = ((val*(*)(val* self))(var_t->class->vft[COLOR_nit__model__MProxyType__mtype]))(var_t); /* mtype on <var_t:MType(MNullableType)>*/
}
{
((void(*)(val* self, val* p0))(var_->class->vft[COLOR_standard__abstract_collection__Sequence__push]))(var_, var11); /* push on <var_:Array[MType]>*/
}
var_nexts = var_;
} else {
/* <var_t:MType> isa MGenericType */
cltype13 = type_nit__MGenericType.color;
idtype14 = type_nit__MGenericType.id;
if(cltype13 >= var_t->type->table_size) {
var12 = 0;
} else {
var12 = var_t->type->type_table[cltype13] == idtype14;
}
if (var12){
{
var15 = ((val*(*)(val* self))(var_t->class->vft[COLOR_nit__model__MClassType__arguments]))(var_t); /* arguments on <var_t:MType(MGenericType)>*/
}
var_nexts = var15;
} else {
/* <var_t:MType> isa MVirtualType */
cltype17 = type_nit__MVirtualType.color;
idtype18 = type_nit__MVirtualType.id;
if(cltype17 >= var_t->type->table_size) {
var16 = 0;
} else {
var16 = var_t->type->type_table[cltype17] == idtype18;
}
if (var16){
{
var19 = ((val*(*)(val* self))(var_t->class->vft[COLOR_nit__model__MVirtualType__mproperty]))(var_t); /* mproperty on <var_t:MType(MVirtualType)>*/
}
var_vt = var19;
{
var20 = ((val*(*)(val* self, val* p0, val* p1))(var_vt->class->vft[COLOR_nit__model__MProperty__lookup_definitions]))(var_vt, var_mmodule, var_recv); /* lookup_definitions on <var_vt:MVirtualTypeProp>*/
}
var_defs = var20;
{
var21 = ((short int(*)(val* self))(var_defs->class->vft[COLOR_standard__abstract_collection__Collection__is_empty]))(var_defs); /* is_empty on <var_defs:Array[MVirtualTypeDef]>*/
}
var22 = !var21;
if (unlikely(!var22)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 450);
fatal_exit(1);
}
var23 = NEW_standard__Array(&type_standard__Array__nit__MType);
{
((void(*)(val* self))(var23->class->vft[COLOR_standard__kernel__Object__init]))(var23); /* init on <var23:Array[MType]>*/
}
var_nexts = var23;
var_24 = var_defs;
{
var25 = ((val*(*)(val* self))(var_24->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_24); /* iterator on <var_24:Array[MVirtualTypeDef]>*/
}
var_26 = var25;
for(;;) {
{
var27 = ((short int(*)(val* self))(var_26->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_26); /* is_ok on <var_26:ArrayIterator[MVirtualTypeDef]>*/
}
if (var27){
{
var28 = ((val*(*)(val* self))(var_26->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_26); /* item on <var_26:ArrayIterator[MVirtualTypeDef]>*/
}
var_d = var28;
{
var29 = ((val*(*)(val* self))(var_defs->class->vft[COLOR_standard__abstract_collection__Collection__first]))(var_defs); /* first on <var_defs:Array[MVirtualTypeDef]>*/
}
{
var30 = ((val*(*)(val* self))(var29->class->vft[COLOR_nit__model__MVirtualTypeDef__bound]))(var29); /* bound on <var29:nullable Object(MVirtualTypeDef)>*/
}
var_next = var30;
if (var_next == NULL) {
var31 = 1; /* is null */
} else {
var31 = 0; /* arg is null but recv is not */
}
if (0) {
var32 = ((short int(*)(val* self, val* p0))(var_next->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_next, ((val*)NULL)); /* == on <var_next:nullable MType>*/
var31 = var32;
}
if (var31){
var = 0;
goto RET_LABEL;
} else {
}
{
((void(*)(val* self, val* p0))(var_nexts->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_nexts, var_next); /* add on <var_nexts:nullable Object(Array[MType])>*/
}
{
((void(*)(val* self))(var_26->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_26); /* next on <var_26:ArrayIterator[MVirtualTypeDef]>*/
}
} else {
goto BREAK_label33;
}
}
BREAK_label33: (void)0;
{
((void(*)(val* self))(var_26->class->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_26); /* finish on <var_26:ArrayIterator[MVirtualTypeDef]>*/
}
} else {
/* <var_t:MType> isa MClassType */
cltype35 = type_nit__MClassType.color;
idtype36 = type_nit__MClassType.id;
if(cltype35 >= var_t->type->table_size) {
var34 = 0;
} else {
var34 = var_t->type->type_table[cltype35] == idtype36;
}
if (var34){
goto BREAK_label;
} else {
/* <var_t:MType> isa MParameterType */
cltype38 = type_nit__MParameterType.color;
idtype39 = type_nit__MParameterType.id;
if(cltype38 >= var_t->type->table_size) {
var37 = 0;
} else {
var37 = var_t->type->type_table[cltype38] == idtype39;
}
if (var37){
goto BREAK_label;
} else {
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 464);
fatal_exit(1);
}
}
}
}
}
var_40 = var_nexts;
{
var41 = ((val*(*)(val* self))(var_40->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_40); /* iterator on <var_40:Array[MType]>*/
}
var_42 = var41;
for(;;) {
{
var43 = ((short int(*)(val* self))(var_42->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_42); /* is_ok on <var_42:ArrayIterator[MType]>*/
}
if (var43){
{
var44 = ((val*(*)(val* self))(var_42->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_42); /* item on <var_42:ArrayIterator[MType]>*/
}
var_next45 = var44;
{
var46 = ((short int(*)(val* self, val* p0, val* p1))(var_poset->class->vft[COLOR_poset__POSet__has_edge]))(var_poset, var_next45, var_t); /* has_edge on <var_poset:POSet[MType]>*/
}
if (var46){
{
var47 = ((short int(*)(val* self, val* p0))(var_mtype->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_mtype, var_next45); /* == on <var_mtype:MVirtualType>*/
}
if (var47){
if (unlikely(varonce==NULL)) {
var48 = NEW_standard__NativeArray(5l, &type_standard__NativeArray__standard__String);
if (likely(varonce49!=NULL)) {
var50 = varonce49;
} else {
var51 = "Error: circularity of virtual type definition: ";
var52 = standard___standard__NativeString___to_s_with_length(var51, 47l);
var50 = var52;
varonce49 = var50;
}
((struct instance_standard__NativeArray*)var48)->values[0]=var50;
if (likely(varonce53!=NULL)) {
var54 = varonce53;
} else {
var55 = " <-> ";
var56 = standard___standard__NativeString___to_s_with_length(var55, 5l);
var54 = var56;
varonce53 = var54;
}
((struct instance_standard__NativeArray*)var48)->values[2]=var54;
if (likely(varonce57!=NULL)) {
var58 = varonce57;
} else {
var59 = ".";
var60 = standard___standard__NativeString___to_s_with_length(var59, 1l);
var58 = var60;
varonce57 = var58;
}
((struct instance_standard__NativeArray*)var48)->values[4]=var58;
} else {
var48 = varonce;
varonce = NULL;
}
{
var61 = ((val*(*)(val* self))(var_next45->class->vft[COLOR_standard__string__Object__to_s]))(var_next45); /* to_s on <var_next45:MType>*/
}
((struct instance_standard__NativeArray*)var48)->values[1]=var61;
{
var62 = ((val*(*)(val* self))(var_t->class->vft[COLOR_standard__string__Object__to_s]))(var_t); /* to_s on <var_t:MType>*/
}
((struct instance_standard__NativeArray*)var48)->values[3]=var62;
{
var63 = ((val*(*)(val* self))(var48->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var48); /* native_to_s on <var48:NativeArray[String]>*/
}
varonce = var48;
{
((void(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__error]))(self, var_node, var63); /* error on <self:ModelBuilder>*/
}
} else {
if (unlikely(varonce64==NULL)) {
var65 = NEW_standard__NativeArray(7l, &type_standard__NativeArray__standard__String);
if (likely(varonce66!=NULL)) {
var67 = varonce66;
} else {
var68 = "Error: circularity of virtual type definition: ";
var69 = standard___standard__NativeString___to_s_with_length(var68, 47l);
var67 = var69;
varonce66 = var67;
}
((struct instance_standard__NativeArray*)var65)->values[0]=var67;
if (likely(varonce70!=NULL)) {
var71 = varonce70;
} else {
var72 = " -> ";
var73 = standard___standard__NativeString___to_s_with_length(var72, 4l);
var71 = var73;
varonce70 = var71;
}
((struct instance_standard__NativeArray*)var65)->values[2]=var71;
if (likely(varonce74!=NULL)) {
var75 = varonce74;
} else {
var76 = " <-> ";
var77 = standard___standard__NativeString___to_s_with_length(var76, 5l);
var75 = var77;
varonce74 = var75;
}
((struct instance_standard__NativeArray*)var65)->values[4]=var75;
if (likely(varonce78!=NULL)) {
var79 = varonce78;
} else {
var80 = ".";
var81 = standard___standard__NativeString___to_s_with_length(var80, 1l);
var79 = var81;
varonce78 = var79;
}
((struct instance_standard__NativeArray*)var65)->values[6]=var79;
} else {
var65 = varonce64;
varonce64 = NULL;
}
{
var82 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_standard__string__Object__to_s]))(var_mtype); /* to_s on <var_mtype:MVirtualType>*/
}
((struct instance_standard__NativeArray*)var65)->values[1]=var82;
{
var83 = ((val*(*)(val* self))(var_next45->class->vft[COLOR_standard__string__Object__to_s]))(var_next45); /* to_s on <var_next45:MType>*/
}
((struct instance_standard__NativeArray*)var65)->values[3]=var83;
{
var84 = ((val*(*)(val* self))(var_t->class->vft[COLOR_standard__string__Object__to_s]))(var_t); /* to_s on <var_t:MType>*/
}
((struct instance_standard__NativeArray*)var65)->values[5]=var84;
{
var85 = ((val*(*)(val* self))(var65->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var65); /* native_to_s on <var65:NativeArray[String]>*/
}
varonce64 = var65;
{
((void(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__error]))(self, var_node, var85); /* error on <self:ModelBuilder>*/
}
}
var = 0;
goto RET_LABEL;
} else {
{
((void(*)(val* self, val* p0, val* p1))(var_poset->class->vft[COLOR_poset__POSet__add_edge]))(var_poset, var_t, var_next45); /* add_edge on <var_poset:POSet[MType]>*/
}
{
((void(*)(val* self, val* p0))(var_todo->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_todo, var_next45); /* add on <var_todo:List[MType]>*/
}
}
{
((void(*)(val* self))(var_42->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_42); /* next on <var_42:ArrayIterator[MType]>*/
}
} else {
goto BREAK_label86;
}
}
BREAK_label86: (void)0;
{
((void(*)(val* self))(var_42->class->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_42); /* finish on <var_42:ArrayIterator[MType]>*/
}
} else {
goto BREAK_label87;
}
BREAK_label: (void)0;
}
BREAK_label87: (void)0;
var = 1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelize_property#MPropDef#has_supercall for (self: MPropDef): Bool */
short int nit__modelize_property___MPropDef___has_supercall(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nit__modelize_property__MPropDef___has_supercall].s; /* _has_supercall on <self:MPropDef> */
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property#MPropDef#has_supercall= for (self: MPropDef, Bool) */
void nit__modelize_property___MPropDef___has_supercall_61d(val* self, short int p0) {
self->attrs[COLOR_nit__modelize_property__MPropDef___has_supercall].s = p0; /* _has_supercall on <self:MPropDef> */
RET_LABEL:;
}
/* method modelize_property#AClassdef#build_properties_is_done for (self: AClassdef): Bool */
short int nit__modelize_property___AClassdef___build_properties_is_done(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nit__modelize_property__AClassdef___build_properties_is_done].s; /* _build_properties_is_done on <self:AClassdef> */
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property#AClassdef#build_properties_is_done= for (self: AClassdef, Bool) */
void nit__modelize_property___AClassdef___build_properties_is_done_61d(val* self, short int p0) {
self->attrs[COLOR_nit__modelize_property__AClassdef___build_properties_is_done].s = p0; /* _build_properties_is_done on <self:AClassdef> */
RET_LABEL:;
}
/* method modelize_property#AClassdef#mfree_init for (self: AClassdef): nullable MMethodDef */
val* nit__modelize_property___AClassdef___mfree_init(val* self) {
val* var /* : nullable MMethodDef */;
val* var1 /* : nullable MMethodDef */;
var1 = self->attrs[COLOR_nit__modelize_property__AClassdef___mfree_init].val; /* _mfree_init on <self:AClassdef> */
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property#AClassdef#mfree_init= for (self: AClassdef, nullable MMethodDef) */
void nit__modelize_property___AClassdef___mfree_init_61d(val* self, val* p0) {
self->attrs[COLOR_nit__modelize_property__AClassdef___mfree_init].val = p0; /* _mfree_init on <self:AClassdef> */
RET_LABEL:;
}
/* method modelize_property#MClass#root_init for (self: MClass): nullable MMethodDef */
val* nit__modelize_property___MClass___root_init(val* self) {
val* var /* : nullable MMethodDef */;
val* var1 /* : nullable MMethodDef */;
var1 = self->attrs[COLOR_nit__modelize_property__MClass___root_init].val; /* _root_init on <self:MClass> */
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property#MClass#root_init= for (self: MClass, nullable MMethodDef) */
void nit__modelize_property___MClass___root_init_61d(val* self, val* p0) {
self->attrs[COLOR_nit__modelize_property__MClass___root_init].val = p0; /* _root_init on <self:MClass> */
RET_LABEL:;
}
/* method modelize_property#MClassDef#mprop2npropdef for (self: MClassDef): Map[MProperty, APropdef] */
val* nit__modelize_property___MClassDef___mprop2npropdef(val* self) {
val* var /* : Map[MProperty, APropdef] */;
val* var1 /* : Map[MProperty, APropdef] */;
var1 = self->attrs[COLOR_nit__modelize_property__MClassDef___mprop2npropdef].val; /* _mprop2npropdef on <self:MClassDef> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mprop2npropdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 510);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property#MClassDef#mprop2npropdef= for (self: MClassDef, Map[MProperty, APropdef]) */
void nit__modelize_property___MClassDef___mprop2npropdef_61d(val* self, val* p0) {
self->attrs[COLOR_nit__modelize_property__MClassDef___mprop2npropdef].val = p0; /* _mprop2npropdef on <self:MClassDef> */
RET_LABEL:;
}
/* method modelize_property#MClassDef#build_self_type for (self: MClassDef, ModelBuilder, AClassdef) */
void nit__modelize_property___MClassDef___build_self_type(val* self, val* p0, val* p1) {
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
val* var_nclassdef /* var nclassdef: AClassdef */;
short int var /* : Bool */;
short int var1 /* : Bool */;
static val* varonce;
val* var2 /* : String */;
char* var3 /* : NativeString */;
val* var4 /* : FlatString */;
val* var_name /* var name: String */;
val* var5 /* : nullable MProperty */;
val* var_mprop /* var mprop: nullable MProperty */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
int cltype;
int idtype;
short int var9 /* : Bool */;
val* var10 /* : MPropDef */;
val* var_intro /* var intro: MVirtualTypeDef */;
val* var11 /* : MClassDef */;
val* var_intro_mclassdef /* var intro_mclassdef: MClassDef */;
short int var12 /* : Bool */;
val* var13 /* : HashMap[MPropDef, APropdef] */;
val* var14 /* : nullable Object */;
val* var_nintro /* var nintro: APropdef */;
val* var15 /* : MClass */;
val* var16 /* : String */;
static val* varonce17;
val* var18 /* : String */;
char* var19 /* : NativeString */;
val* var20 /* : FlatString */;
short int var21 /* : Bool */;
static val* varonce22;
val* var23 /* : String */;
char* var24 /* : NativeString */;
val* var25 /* : FlatString */;
val* var26 /* : MVisibility */;
val* var27 /* : Sys */;
val* var28 /* : MVisibility */;
short int var29 /* : Bool */;
static val* varonce30;
val* var31 /* : String */;
char* var32 /* : NativeString */;
val* var33 /* : FlatString */;
short int var34 /* : Bool */;
static val* varonce35;
val* var36 /* : String */;
char* var37 /* : NativeString */;
val* var38 /* : FlatString */;
val* var39 /* : MVirtualTypeDef */;
val* var40 /* : Location */;
val* var_mpropdef /* var mpropdef: MVirtualTypeDef */;
val* var41 /* : MClass */;
val* var42 /* : MClassType */;
var_modelbuilder = p0;
var_nclassdef = p1;
{
var = ((short int(*)(val* self))(self->class->vft[COLOR_nit__model__MClassDef__is_intro]))(self); /* is_intro on <self:MClassDef>*/
}
var1 = !var;
if (var1){
goto RET_LABEL;
} else {
}
if (likely(varonce!=NULL)) {
var2 = varonce;
} else {
var3 = "SELF";
var4 = standard___standard__NativeString___to_s_with_length(var3, 4l);
var2 = var4;
varonce = var2;
}
var_name = var2;
{
var5 = ((val*(*)(val* self, val* p0, val* p1, val* p2))(var_modelbuilder->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__try_get_mproperty_by_name]))(var_modelbuilder, var_nclassdef, self, var_name); /* try_get_mproperty_by_name on <var_modelbuilder:ModelBuilder>*/
}
var_mprop = var5;
if (var_mprop == NULL) {
var6 = 1; /* is null */
} else {
var6 = 0; /* arg is null but recv is not */
}
if (0) {
var7 = ((short int(*)(val* self, val* p0))(var_mprop->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_mprop, ((val*)NULL)); /* == on <var_mprop:nullable MProperty>*/
var6 = var7;
}
if (var6){
goto RET_LABEL;
} else {
}
/* <var_mprop:nullable MProperty(MProperty)> isa MVirtualTypeProp */
cltype = type_nit__MVirtualTypeProp.color;
idtype = type_nit__MVirtualTypeProp.id;
if(cltype >= var_mprop->type->table_size) {
var8 = 0;
} else {
var8 = var_mprop->type->type_table[cltype] == idtype;
}
var9 = !var8;
if (var9){
goto RET_LABEL;
} else {
}
{
var10 = ((val*(*)(val* self))(var_mprop->class->vft[COLOR_nit__model__MProperty__intro]))(var_mprop); /* intro on <var_mprop:nullable MProperty(MVirtualTypeProp)>*/
}
var_intro = var10;
{
var11 = ((val*(*)(val* self))(var_intro->class->vft[COLOR_nit__model__MPropDef__mclassdef]))(var_intro); /* mclassdef on <var_intro:MVirtualTypeDef>*/
}
var_intro_mclassdef = var11;
{
var12 = ((short int(*)(val* self, val* p0))(var_intro_mclassdef->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_intro_mclassdef, self); /* == on <var_intro_mclassdef:MClassDef>*/
}
if (var12){
{
var13 = ((val*(*)(val* self))(var_modelbuilder->class->vft[COLOR_nit__modelize_property__ModelBuilder__mpropdef2npropdef]))(var_modelbuilder); /* mpropdef2npropdef on <var_modelbuilder:ModelBuilder>*/
}
{
var14 = ((val*(*)(val* self, val* p0))(var13->class->vft[COLOR_standard__abstract_collection__MapRead___91d_93d]))(var13, var_intro); /* [] on <var13:HashMap[MPropDef, APropdef]>*/
}
var_nintro = var14;
{
var15 = ((val*(*)(val* self))(var_intro_mclassdef->class->vft[COLOR_nit__model__MClassDef__mclass]))(var_intro_mclassdef); /* mclass on <var_intro_mclassdef:MClassDef>*/
}
{
var16 = ((val*(*)(val* self))(var15->class->vft[COLOR_nit__model_base__MEntity__name]))(var15); /* name on <var15:MClass>*/
}
if (likely(varonce17!=NULL)) {
var18 = varonce17;
} else {
var19 = "Object";
var20 = standard___standard__NativeString___to_s_with_length(var19, 6l);
var18 = var20;
varonce17 = var18;
}
{
var21 = ((short int(*)(val* self, val* p0))(var16->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var16, var18); /* != on <var16:String>*/
}
if (var21){
if (likely(varonce22!=NULL)) {
var23 = varonce22;
} else {
var24 = "Error: the virtual type `SELF` must be declared in `Object`.";
var25 = standard___standard__NativeString___to_s_with_length(var24, 60l);
var23 = var25;
varonce22 = var23;
}
{
((void(*)(val* self, val* p0, val* p1))(var_modelbuilder->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__error]))(var_modelbuilder, var_nintro, var23); /* error on <var_modelbuilder:ModelBuilder>*/
}
} else {
}
{
var26 = ((val*(*)(val* self))(var_mprop->class->vft[COLOR_nit__model__MProperty__visibility]))(var_mprop); /* visibility on <var_mprop:nullable MProperty(MVirtualTypeProp)>*/
}
var27 = glob_sys;
{
var28 = ((val*(*)(val* self))(var27->class->vft[COLOR_nit__model_base__Sys__public_visibility]))(var27); /* public_visibility on <var27:Sys>*/
}
{
var29 = ((short int(*)(val* self, val* p0))(var26->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var26, var28); /* != on <var26:MVisibility>*/
}
if (var29){
if (likely(varonce30!=NULL)) {
var31 = varonce30;
} else {
var32 = "Error: the virtual type `SELF` must be public.";
var33 = standard___standard__NativeString___to_s_with_length(var32, 46l);
var31 = var33;
varonce30 = var31;
}
{
((void(*)(val* self, val* p0, val* p1))(var_modelbuilder->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__error]))(var_modelbuilder, var_nintro, var31); /* error on <var_modelbuilder:ModelBuilder>*/
}
} else {
}
{
var34 = ((short int(*)(val* self))(var_intro->class->vft[COLOR_nit__model__MVirtualTypeDef__is_fixed]))(var_intro); /* is_fixed on <var_intro:MVirtualTypeDef>*/
}
if (var34){
if (likely(varonce35!=NULL)) {
var36 = varonce35;
} else {
var37 = "Error: the virtual type `SELF` cannot be fixed.";
var38 = standard___standard__NativeString___to_s_with_length(var37, 47l);
var36 = var38;
varonce35 = var36;
}
{
((void(*)(val* self, val* p0, val* p1))(var_modelbuilder->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__error]))(var_modelbuilder, var_nintro, var36); /* error on <var_modelbuilder:ModelBuilder>*/
}
} else {
}
goto RET_LABEL;
} else {
}
var39 = NEW_nit__MVirtualTypeDef(&type_nit__MVirtualTypeDef);
{
var40 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MClassDef__location]))(self); /* location on <self:MClassDef>*/
}
{
((void(*)(val* self, val* p0))(var39->class->vft[COLOR_nit__model__MPropDef__mclassdef_61d]))(var39, self); /* mclassdef= on <var39:MVirtualTypeDef>*/
}
{
((void(*)(val* self, val* p0))(var39->class->vft[COLOR_nit__model__MPropDef__mproperty_61d]))(var39, var_mprop); /* mproperty= on <var39:MVirtualTypeDef>*/
}
{
((void(*)(val* self, val* p0))(var39->class->vft[COLOR_nit__model__MPropDef__location_61d]))(var39, var40); /* location= on <var39:MVirtualTypeDef>*/
}
{
((void(*)(val* self))(var39->class->vft[COLOR_standard__kernel__Object__init]))(var39); /* init on <var39:MVirtualTypeDef>*/
}
var_mpropdef = var39;
{
var41 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MClassDef__mclass]))(self); /* mclass on <self:MClassDef>*/
}
{
var42 = ((val*(*)(val* self))(var41->class->vft[COLOR_nit__model__MClass__mclass_type]))(var41); /* mclass_type on <var41:MClass>*/
}
{
((void(*)(val* self, val* p0))(var_mpropdef->class->vft[COLOR_nit__model__MVirtualTypeDef__bound_61d]))(var_mpropdef, var42); /* bound= on <var_mpropdef:MVirtualTypeDef>*/
}
RET_LABEL:;
}
/* method modelize_property#APropdef#mpropdef for (self: APropdef): nullable MPropDef */
val* nit__modelize_property___APropdef___mpropdef(val* self) {
val* var /* : nullable MPropDef */;
val* var1 /* : nullable MPropDef */;
var1 = self->attrs[COLOR_nit__modelize_property__APropdef___mpropdef].val; /* _mpropdef on <self:APropdef> */
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property#APropdef#mpropdef= for (self: APropdef, nullable MPropDef) */
void nit__modelize_property___APropdef___mpropdef_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (mpropdef) <p0:nullable MPropDef> isa nullable MPROPDEF */
/* <p0:nullable MPropDef> isa nullable MPROPDEF */
type_struct = self->type->resolution_table->types[COLOR_nullable__nit__modelize_property__APropdef__MPROPDEF];
cltype = type_struct->color;
idtype = type_struct->id;
if(p0 == NULL) {
var = 1;
} else {
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable MPROPDEF", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 563);
fatal_exit(1);
}
self->attrs[COLOR_nit__modelize_property__APropdef___mpropdef].val = p0; /* _mpropdef on <self:APropdef> */
RET_LABEL:;
}
/* method modelize_property#APropdef#build_property for (self: APropdef, ModelBuilder, MClassDef) */
void nit__modelize_property___APropdef___build_property(val* self, val* p0, val* p1) {
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
val* var_mclassdef /* var mclassdef: MClassDef */;
var_modelbuilder = p0;
var_mclassdef = p1;
RET_LABEL:;
}
/* method modelize_property#APropdef#build_signature for (self: APropdef, ModelBuilder) */
void nit__modelize_property___APropdef___build_signature(val* self, val* p0) {
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
var_modelbuilder = p0;
RET_LABEL:;
}
/* method modelize_property#APropdef#check_signature for (self: APropdef, ModelBuilder) */
void nit__modelize_property___APropdef___check_signature(val* self, val* p0) {
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
var_modelbuilder = p0;
RET_LABEL:;
}
/* method modelize_property#APropdef#new_property_visibility for (self: APropdef, ModelBuilder, MClassDef, nullable AVisibility): MVisibility */
val* nit__modelize_property___APropdef___new_property_visibility(val* self, val* p0, val* p1, val* p2) {
val* var /* : MVisibility */;
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
val* var_mclassdef /* var mclassdef: MClassDef */;
val* var_nvisibility /* var nvisibility: nullable AVisibility */;
val* var1 /* : Sys */;
val* var2 /* : MVisibility */;
val* var_mvisibility /* var mvisibility: MVisibility */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var5 /* : MVisibility */;
val* var6 /* : Sys */;
val* var7 /* : MVisibility */;
short int var8 /* : Bool */;
static val* varonce;
val* var9 /* : String */;
char* var10 /* : NativeString */;
val* var11 /* : FlatString */;
val* var12 /* : Sys */;
val* var13 /* : MVisibility */;
val* var14 /* : MClass */;
val* var15 /* : MVisibility */;
val* var16 /* : Sys */;
val* var17 /* : MVisibility */;
short int var18 /* : Bool */;
val* var19 /* : Sys */;
val* var20 /* : MVisibility */;
short int var21 /* : Bool */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
static val* varonce24;
val* var25 /* : String */;
char* var26 /* : NativeString */;
val* var27 /* : FlatString */;
val* var28 /* : Sys */;
val* var29 /* : MVisibility */;
short int var30 /* : Bool */;
short int var31 /* : Bool */;
short int var32 /* : Bool */;
static val* varonce33;
val* var34 /* : String */;
char* var35 /* : NativeString */;
val* var36 /* : FlatString */;
static val* varonce37;
val* var38 /* : String */;
char* var39 /* : NativeString */;
val* var40 /* : FlatString */;
val* var41 /* : Sys */;
val* var42 /* : MVisibility */;
var_modelbuilder = p0;
var_mclassdef = p1;
var_nvisibility = p2;
var1 = glob_sys;
{
var2 = ((val*(*)(val* self))(var1->class->vft[COLOR_nit__model_base__Sys__public_visibility]))(var1); /* public_visibility on <var1:Sys>*/
}
var_mvisibility = var2;
if (var_nvisibility == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (0) {
var4 = ((short int(*)(val* self, val* p0))(var_nvisibility->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_nvisibility, ((val*)NULL)); /* != on <var_nvisibility:nullable AVisibility>*/
var3 = var4;
}
if (var3){
{
var5 = ((val*(*)(val* self))(var_nvisibility->class->vft[COLOR_nit__modelbuilder_base__AVisibility__mvisibility]))(var_nvisibility); /* mvisibility on <var_nvisibility:nullable AVisibility(AVisibility)>*/
}
var_mvisibility = var5;
var6 = glob_sys;
{
var7 = ((val*(*)(val* self))(var6->class->vft[COLOR_nit__model_base__Sys__intrude_visibility]))(var6); /* intrude_visibility on <var6:Sys>*/
}
{
var8 = ((short int(*)(val* self, val* p0))(var_mvisibility->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_mvisibility, var7); /* == on <var_mvisibility:MVisibility>*/
}
if (var8){
if (likely(varonce!=NULL)) {
var9 = varonce;
} else {
var10 = "Error: `intrude` is not a legal visibility for properties.";
var11 = standard___standard__NativeString___to_s_with_length(var10, 58l);
var9 = var11;
varonce = var9;
}
{
((void(*)(val* self, val* p0, val* p1))(var_modelbuilder->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__error]))(var_modelbuilder, var_nvisibility, var9); /* error on <var_modelbuilder:ModelBuilder>*/
}
var12 = glob_sys;
{
var13 = ((val*(*)(val* self))(var12->class->vft[COLOR_nit__model_base__Sys__public_visibility]))(var12); /* public_visibility on <var12:Sys>*/
}
var_mvisibility = var13;
} else {
}
} else {
}
{
var14 = ((val*(*)(val* self))(var_mclassdef->class->vft[COLOR_nit__model__MClassDef__mclass]))(var_mclassdef); /* mclass on <var_mclassdef:MClassDef>*/
}
{
var15 = ((val*(*)(val* self))(var14->class->vft[COLOR_nit__model__MClass__visibility]))(var14); /* visibility on <var14:MClass>*/
}
var16 = glob_sys;
{
var17 = ((val*(*)(val* self))(var16->class->vft[COLOR_nit__model_base__Sys__private_visibility]))(var16); /* private_visibility on <var16:Sys>*/
}
{
var18 = ((short int(*)(val* self, val* p0))(var15->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var15, var17); /* == on <var15:MVisibility>*/
}
if (var18){
var19 = glob_sys;
{
var20 = ((val*(*)(val* self))(var19->class->vft[COLOR_nit__model_base__Sys__protected_visibility]))(var19); /* protected_visibility on <var19:Sys>*/
}
{
var21 = ((short int(*)(val* self, val* p0))(var_mvisibility->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_mvisibility, var20); /* == on <var_mvisibility:MVisibility>*/
}
if (var21){
if (var_nvisibility == NULL) {
var22 = 0; /* is null */
} else {
var22 = 1; /* arg is null and recv is not */
}
if (0) {
var23 = ((short int(*)(val* self, val* p0))(var_nvisibility->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_nvisibility, ((val*)NULL)); /* != on <var_nvisibility:nullable AVisibility>*/
var22 = var23;
}
if (unlikely(!var22)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 581);
fatal_exit(1);
}
if (likely(varonce24!=NULL)) {
var25 = varonce24;
} else {
var26 = "Error: `private` is the only legal visibility for properties in a private class.";
var27 = standard___standard__NativeString___to_s_with_length(var26, 80l);
var25 = var27;
varonce24 = var25;
}
{
((void(*)(val* self, val* p0, val* p1))(var_modelbuilder->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__error]))(var_modelbuilder, var_nvisibility, var25); /* error on <var_modelbuilder:ModelBuilder>*/
}
} else {
var28 = glob_sys;
{
var29 = ((val*(*)(val* self))(var28->class->vft[COLOR_nit__model_base__Sys__private_visibility]))(var28); /* private_visibility on <var28:Sys>*/
}
{
var30 = ((short int(*)(val* self, val* p0))(var_mvisibility->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_mvisibility, var29); /* == on <var_mvisibility:MVisibility>*/
}
if (var30){
if (var_nvisibility == NULL) {
var31 = 0; /* is null */
} else {
var31 = 1; /* arg is null and recv is not */
}
if (0) {
var32 = ((short int(*)(val* self, val* p0))(var_nvisibility->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_nvisibility, ((val*)NULL)); /* != on <var_nvisibility:nullable AVisibility>*/
var31 = var32;
}
if (unlikely(!var31)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 584);
fatal_exit(1);
}
if (likely(varonce33!=NULL)) {
var34 = varonce33;
} else {
var35 = "useless-visibility";
var36 = standard___standard__NativeString___to_s_with_length(var35, 18l);
var34 = var36;
varonce33 = var34;
}
if (likely(varonce37!=NULL)) {
var38 = varonce37;
} else {
var39 = "Warning: `private` is superfluous since the only legal visibility for properties in a private class is private.";
var40 = standard___standard__NativeString___to_s_with_length(var39, 111l);
var38 = var40;
varonce37 = var38;
}
{
((void(*)(val* self, val* p0, val* p1, val* p2))(var_modelbuilder->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__advice]))(var_modelbuilder, var_nvisibility, var34, var38); /* advice on <var_modelbuilder:ModelBuilder>*/
}
} else {
}
}
var41 = glob_sys;
{
var42 = ((val*(*)(val* self))(var41->class->vft[COLOR_nit__model_base__Sys__private_visibility]))(var41); /* private_visibility on <var41:Sys>*/
}
var_mvisibility = var42;
} else {
}
var = var_mvisibility;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelize_property#APropdef#set_doc for (self: APropdef, MPropDef, ModelBuilder) */
void nit__modelize_property___APropdef___set_doc(val* self, val* p0, val* p1) {
val* var_mpropdef /* var mpropdef: MPropDef */;
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
val* var /* : nullable ADoc */;
val* var_ndoc /* var ndoc: nullable ADoc */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : MDoc */;
val* var_mdoc /* var mdoc: MDoc */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var_ /* var : Bool */;
val* var6 /* : MProperty */;
val* var7 /* : MVisibility */;
val* var8 /* : Sys */;
val* var9 /* : MVisibility */;
short int var10 /* : Bool */;
static val* varonce;
val* var11 /* : String */;
char* var12 /* : NativeString */;
val* var13 /* : FlatString */;
val* var15 /* : NativeArray[String] */;
static val* varonce14;
static val* varonce16;
val* var17 /* : String */;
char* var18 /* : NativeString */;
val* var19 /* : FlatString */;
static val* varonce20;
val* var21 /* : String */;
char* var22 /* : NativeString */;
val* var23 /* : FlatString */;
val* var24 /* : MProperty */;
val* var25 /* : String */;
val* var26 /* : String */;
static val* varonce27;
val* var28 /* : String */;
char* var29 /* : NativeString */;
val* var30 /* : FlatString */;
val* var31 /* : nullable AAnnotation */;
val* var_at_deprecated /* var at_deprecated: nullable AAnnotation */;
short int var32 /* : Bool */;
short int var33 /* : Bool */;
short int var34 /* : Bool */;
short int var35 /* : Bool */;
static val* varonce36;
val* var37 /* : String */;
char* var38 /* : NativeString */;
val* var39 /* : FlatString */;
val* var40 /* : MDeprecationInfo */;
val* var_info /* var info: MDeprecationInfo */;
val* var41 /* : nullable ADoc */;
short int var42 /* : Bool */;
short int var43 /* : Bool */;
val* var44 /* : MDoc */;
val* var45 /* : MProperty */;
var_mpropdef = p0;
var_modelbuilder = p1;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ADefinition__n_doc]))(self); /* n_doc on <self:APropdef>*/
}
var_ndoc = var;
if (var_ndoc == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (0) {
var2 = ((short int(*)(val* self, val* p0))(var_ndoc->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_ndoc, ((val*)NULL)); /* != on <var_ndoc:nullable ADoc>*/
var1 = var2;
}
if (var1){
{
var3 = ((val*(*)(val* self))(var_ndoc->class->vft[COLOR_nit__modelbuilder_base__ADoc__to_mdoc]))(var_ndoc); /* to_mdoc on <var_ndoc:nullable ADoc(ADoc)>*/
}
var_mdoc = var3;
{
((void(*)(val* self, val* p0))(var_mpropdef->class->vft[COLOR_nit__mdoc__MEntity__mdoc_61d]))(var_mpropdef, var_mdoc); /* mdoc= on <var_mpropdef:MPropDef>*/
}
{
((void(*)(val* self, val* p0))(var_mdoc->class->vft[COLOR_nit__mdoc__MDoc__original_mentity_61d]))(var_mdoc, var_mpropdef); /* original_mentity= on <var_mdoc:MDoc>*/
}
} else {
{
var5 = ((short int(*)(val* self))(var_mpropdef->class->vft[COLOR_nit__model__MPropDef__is_intro]))(var_mpropdef); /* is_intro on <var_mpropdef:MPropDef>*/
}
var_ = var5;
if (var5){
{
var6 = ((val*(*)(val* self))(var_mpropdef->class->vft[COLOR_nit__model__MPropDef__mproperty]))(var_mpropdef); /* mproperty on <var_mpropdef:MPropDef>*/
}
{
var7 = ((val*(*)(val* self))(var6->class->vft[COLOR_nit__model__MProperty__visibility]))(var6); /* visibility on <var6:MProperty>*/
}
var8 = glob_sys;
{
var9 = ((val*(*)(val* self))(var8->class->vft[COLOR_nit__model_base__Sys__protected_visibility]))(var8); /* protected_visibility on <var8:Sys>*/
}
{
var10 = ((short int(*)(val* self, val* p0))(var7->class->vft[COLOR_standard__kernel__Comparable___62d_61d]))(var7, var9); /* >= on <var7:MVisibility>*/
}
var4 = var10;
} else {
var4 = var_;
}
if (var4){
if (likely(varonce!=NULL)) {
var11 = varonce;
} else {
var12 = "missing-doc";
var13 = standard___standard__NativeString___to_s_with_length(var12, 11l);
var11 = var13;
varonce = var11;
}
if (unlikely(varonce14==NULL)) {
var15 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce16!=NULL)) {
var17 = varonce16;
} else {
var18 = "Documentation warning: Undocumented property `";
var19 = standard___standard__NativeString___to_s_with_length(var18, 46l);
var17 = var19;
varonce16 = var17;
}
((struct instance_standard__NativeArray*)var15)->values[0]=var17;
if (likely(varonce20!=NULL)) {
var21 = varonce20;
} else {
var22 = "`";
var23 = standard___standard__NativeString___to_s_with_length(var22, 1l);
var21 = var23;
varonce20 = var21;
}
((struct instance_standard__NativeArray*)var15)->values[2]=var21;
} else {
var15 = varonce14;
varonce14 = NULL;
}
{
var24 = ((val*(*)(val* self))(var_mpropdef->class->vft[COLOR_nit__model__MPropDef__mproperty]))(var_mpropdef); /* mproperty on <var_mpropdef:MPropDef>*/
}
{
var25 = ((val*(*)(val* self))(var24->class->vft[COLOR_standard__string__Object__to_s]))(var24); /* to_s on <var24:MProperty>*/
}
((struct instance_standard__NativeArray*)var15)->values[1]=var25;
{
var26 = ((val*(*)(val* self))(var15->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var15); /* native_to_s on <var15:NativeArray[String]>*/
}
varonce14 = var15;
{
((void(*)(val* self, val* p0, val* p1, val* p2))(var_modelbuilder->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__advice]))(var_modelbuilder, self, var11, var26); /* advice on <var_modelbuilder:ModelBuilder>*/
}
} else {
}
}
if (likely(varonce27!=NULL)) {
var28 = varonce27;
} else {
var29 = "deprecated";
var30 = standard___standard__NativeString___to_s_with_length(var29, 10l);
var28 = var30;
varonce27 = var28;
}
{
var31 = ((val*(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__annotation__Prod__get_single_annotation]))(self, var28, var_modelbuilder); /* get_single_annotation on <self:APropdef>*/
}
var_at_deprecated = var31;
if (var_at_deprecated == NULL) {
var32 = 0; /* is null */
} else {
var32 = 1; /* arg is null and recv is not */
}
if (0) {
var33 = ((short int(*)(val* self, val* p0))(var_at_deprecated->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_at_deprecated, ((val*)NULL)); /* != on <var_at_deprecated:nullable AAnnotation>*/
var32 = var33;
}
if (var32){
{
var34 = ((short int(*)(val* self))(var_mpropdef->class->vft[COLOR_nit__model__MPropDef__is_intro]))(var_mpropdef); /* is_intro on <var_mpropdef:MPropDef>*/
}
var35 = !var34;
if (var35){
if (likely(varonce36!=NULL)) {
var37 = varonce36;
} else {
var38 = "Error: method redefinition cannot be deprecated.";
var39 = standard___standard__NativeString___to_s_with_length(var38, 48l);
var37 = var39;
varonce36 = var37;
}
{
((void(*)(val* self, val* p0, val* p1))(var_modelbuilder->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__error]))(var_modelbuilder, self, var37); /* error on <var_modelbuilder:ModelBuilder>*/
}
} else {
var40 = NEW_nit__MDeprecationInfo(&type_nit__MDeprecationInfo);
{
((void(*)(val* self))(var40->class->vft[COLOR_standard__kernel__Object__init]))(var40); /* init on <var40:MDeprecationInfo>*/
}
var_info = var40;
{
var41 = ((val*(*)(val* self))(var_at_deprecated->class->vft[COLOR_nit__parser_nodes__ADefinition__n_doc]))(var_at_deprecated); /* n_doc on <var_at_deprecated:nullable AAnnotation(AAnnotation)>*/
}
var_ndoc = var41;
if (var_ndoc == NULL) {
var42 = 0; /* is null */
} else {
var42 = 1; /* arg is null and recv is not */
}
if (0) {
var43 = ((short int(*)(val* self, val* p0))(var_ndoc->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_ndoc, ((val*)NULL)); /* != on <var_ndoc:nullable ADoc>*/
var42 = var43;
}
if (var42){
{
var44 = ((val*(*)(val* self))(var_ndoc->class->vft[COLOR_nit__modelbuilder_base__ADoc__to_mdoc]))(var_ndoc); /* to_mdoc on <var_ndoc:nullable ADoc(ADoc)>*/
}
{
((void(*)(val* self, val* p0))(var_info->class->vft[COLOR_nit__mdoc__MDeprecationInfo__mdoc_61d]))(var_info, var44); /* mdoc= on <var_info:MDeprecationInfo>*/
}
} else {
}
{
var45 = ((val*(*)(val* self))(var_mpropdef->class->vft[COLOR_nit__model__MPropDef__mproperty]))(var_mpropdef); /* mproperty on <var_mpropdef:MPropDef>*/
}
{
((void(*)(val* self, val* p0))(var45->class->vft[COLOR_nit__mdoc__MEntity__deprecation_61d]))(var45, var_info); /* deprecation= on <var45:MProperty>*/
}
}
} else {
}
RET_LABEL:;
}
/* method modelize_property#APropdef#check_redef_property_visibility for (self: APropdef, ModelBuilder, nullable AVisibility, MProperty) */
void nit__modelize_property___APropdef___check_redef_property_visibility(val* self, val* p0, val* p1, val* p2) {
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
val* var_nvisibility /* var nvisibility: nullable AVisibility */;
val* var_mprop /* var mprop: MProperty */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var2 /* : MVisibility */;
val* var_mvisibility /* var mvisibility: MVisibility */;
short int var3 /* : Bool */;
val* var4 /* : MVisibility */;
short int var5 /* : Bool */;
short int var_ /* var : Bool */;
val* var6 /* : Sys */;
val* var7 /* : MVisibility */;
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
static val* varonce18;
val* var19 /* : String */;
char* var20 /* : NativeString */;
val* var21 /* : FlatString */;
val* var22 /* : MVisibility */;
val* var23 /* : String */;
val* var24 /* : String */;
val* var25 /* : String */;
var_modelbuilder = p0;
var_nvisibility = p1;
var_mprop = p2;
if (var_nvisibility == NULL) {
var = 1; /* is null */
} else {
var = 0; /* arg is null but recv is not */
}
if (0) {
var1 = ((short int(*)(val* self, val* p0))(var_nvisibility->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_nvisibility, ((val*)NULL)); /* == on <var_nvisibility:nullable AVisibility>*/
var = var1;
}
if (var){
goto RET_LABEL;
} else {
}
{
var2 = ((val*(*)(val* self))(var_nvisibility->class->vft[COLOR_nit__modelbuilder_base__AVisibility__mvisibility]))(var_nvisibility); /* mvisibility on <var_nvisibility:nullable AVisibility(AVisibility)>*/
}
var_mvisibility = var2;
{
var4 = ((val*(*)(val* self))(var_mprop->class->vft[COLOR_nit__model__MProperty__visibility]))(var_mprop); /* visibility on <var_mprop:MProperty>*/
}
{
var5 = ((short int(*)(val* self, val* p0))(var_mvisibility->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_mvisibility, var4); /* != on <var_mvisibility:MVisibility>*/
}
var_ = var5;
if (var5){
var6 = glob_sys;
{
var7 = ((val*(*)(val* self))(var6->class->vft[COLOR_nit__model_base__Sys__public_visibility]))(var6); /* public_visibility on <var6:Sys>*/
}
{
var8 = ((short int(*)(val* self, val* p0))(var_mvisibility->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_mvisibility, var7); /* != on <var_mvisibility:MVisibility>*/
}
var3 = var8;
} else {
var3 = var_;
}
if (var3){
if (unlikely(varonce==NULL)) {
var9 = NEW_standard__NativeArray(5l, &type_standard__NativeArray__standard__String);
if (likely(varonce10!=NULL)) {
var11 = varonce10;
} else {
var12 = "Error: redefinition changed the visibility from `";
var13 = standard___standard__NativeString___to_s_with_length(var12, 49l);
var11 = var13;
varonce10 = var11;
}
((struct instance_standard__NativeArray*)var9)->values[0]=var11;
if (likely(varonce14!=NULL)) {
var15 = varonce14;
} else {
var16 = "` to `";
var17 = standard___standard__NativeString___to_s_with_length(var16, 6l);
var15 = var17;
varonce14 = var15;
}
((struct instance_standard__NativeArray*)var9)->values[2]=var15;
if (likely(varonce18!=NULL)) {
var19 = varonce18;
} else {
var20 = "`.";
var21 = standard___standard__NativeString___to_s_with_length(var20, 2l);
var19 = var21;
varonce18 = var19;
}
((struct instance_standard__NativeArray*)var9)->values[4]=var19;
} else {
var9 = varonce;
varonce = NULL;
}
{
var22 = ((val*(*)(val* self))(var_mprop->class->vft[COLOR_nit__model__MProperty__visibility]))(var_mprop); /* visibility on <var_mprop:MProperty>*/
}
{
var23 = ((val*(*)(val* self))(var22->class->vft[COLOR_standard__string__Object__to_s]))(var22); /* to_s on <var22:MVisibility>*/
}
((struct instance_standard__NativeArray*)var9)->values[1]=var23;
{
var24 = ((val*(*)(val* self))(var_mvisibility->class->vft[COLOR_standard__string__Object__to_s]))(var_mvisibility); /* to_s on <var_mvisibility:MVisibility>*/
}
((struct instance_standard__NativeArray*)var9)->values[3]=var24;
{
var25 = ((val*(*)(val* self))(var9->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var9); /* native_to_s on <var9:NativeArray[String]>*/
}
varonce = var9;
{
((void(*)(val* self, val* p0, val* p1))(var_modelbuilder->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__error]))(var_modelbuilder, var_nvisibility, var25); /* error on <var_modelbuilder:ModelBuilder>*/
}
} else {
}
RET_LABEL:;
}
/* method modelize_property#APropdef#check_redef_keyword for (self: APropdef, ModelBuilder, MClassDef, nullable Token, Bool, MProperty): Bool */
short int nit__modelize_property___APropdef___check_redef_keyword(val* self, val* p0, val* p1, val* p2, short int p3, val* p4) {
short int var /* : Bool */;
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
val* var_mclassdef /* var mclassdef: MClassDef */;
val* var_kwredef /* var kwredef: nullable Token */;
short int var_need_redef /* var need_redef: Bool */;
val* var_mprop /* var mprop: MProperty */;
val* var1 /* : Map[MProperty, APropdef] */;
short int var2 /* : Bool */;
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
static val* varonce12;
val* var13 /* : String */;
char* var14 /* : NativeString */;
val* var15 /* : FlatString */;
static val* varonce16;
val* var17 /* : String */;
char* var18 /* : NativeString */;
val* var19 /* : FlatString */;
val* var20 /* : String */;
val* var21 /* : MClass */;
val* var22 /* : String */;
val* var23 /* : Map[MProperty, APropdef] */;
val* var24 /* : nullable Object */;
val* var25 /* : Location */;
long var26 /* : Int */;
val* var27 /* : String */;
val* var28 /* : String */;
short int var29 /* : Bool */;
short int var30 /* : Bool */;
int cltype;
int idtype;
short int var_ /* var : Bool */;
short int var31 /* : Bool */;
short int var32 /* : Bool */;
short int var33 /* : Bool */;
val* var35 /* : NativeArray[String] */;
static val* varonce34;
static val* varonce36;
val* var37 /* : String */;
char* var38 /* : NativeString */;
val* var39 /* : FlatString */;
static val* varonce40;
val* var41 /* : String */;
char* var42 /* : NativeString */;
val* var43 /* : FlatString */;
static val* varonce44;
val* var45 /* : String */;
char* var46 /* : NativeString */;
val* var47 /* : FlatString */;
val* var48 /* : MClass */;
val* var49 /* : String */;
val* var50 /* : String */;
val* var51 /* : String */;
short int var52 /* : Bool */;
val* var53 /* : MClassDef */;
val* var54 /* : MModule */;
val* var55 /* : nullable MGroup */;
short int var56 /* : Bool */;
short int var57 /* : Bool */;
short int var_58 /* var : Bool */;
val* var59 /* : MVisibility */;
val* var60 /* : Sys */;
val* var61 /* : MVisibility */;
short int var62 /* : Bool */;
val* var63 /* : Model */;
val* var64 /* : String */;
val* var65 /* : nullable Array[MProperty] */;
val* var_others /* var others: nullable Array[MProperty] */;
short int var66 /* : Bool */;
short int var67 /* : Bool */;
val* var_68 /* var : Array[MProperty] */;
val* var69 /* : Iterator[nullable Object] */;
val* var_70 /* var : ArrayIterator[MProperty] */;
short int var71 /* : Bool */;
val* var72 /* : nullable Object */;
val* var_other /* var other: MProperty */;
short int var73 /* : Bool */;
short int var74 /* : Bool */;
short int var75 /* : Bool */;
short int var76 /* : Bool */;
short int var77 /* : Bool */;
short int var_78 /* var : Bool */;
val* var79 /* : MClassDef */;
val* var80 /* : MModule */;
val* var81 /* : nullable MGroup */;
short int var82 /* : Bool */;
short int var83 /* : Bool */;
short int var_84 /* var : Bool */;
val* var85 /* : MClassDef */;
val* var86 /* : MModule */;
val* var87 /* : nullable MGroup */;
val* var88 /* : MProject */;
val* var89 /* : MClassDef */;
val* var90 /* : MModule */;
val* var91 /* : nullable MGroup */;
val* var92 /* : MProject */;
short int var93 /* : Bool */;
short int var_94 /* var : Bool */;
val* var95 /* : MClassDef */;
val* var96 /* : MClass */;
val* var97 /* : String */;
val* var98 /* : MClassDef */;
val* var99 /* : MClass */;
val* var100 /* : String */;
short int var101 /* : Bool */;
short int var_102 /* var : Bool */;
val* var103 /* : MVisibility */;
val* var104 /* : Sys */;
val* var105 /* : MVisibility */;
short int var106 /* : Bool */;
static val* varonce107;
val* var108 /* : String */;
char* var109 /* : NativeString */;
val* var110 /* : FlatString */;
val* var112 /* : NativeArray[String] */;
static val* varonce111;
static val* varonce113;
val* var114 /* : String */;
char* var115 /* : NativeString */;
val* var116 /* : FlatString */;
static val* varonce117;
val* var118 /* : String */;
char* var119 /* : NativeString */;
val* var120 /* : FlatString */;
static val* varonce121;
val* var122 /* : String */;
char* var123 /* : NativeString */;
val* var124 /* : FlatString */;
static val* varonce125;
val* var126 /* : String */;
char* var127 /* : NativeString */;
val* var128 /* : FlatString */;
val* var129 /* : String */;
val* var130 /* : MClassDef */;
val* var131 /* : MModule */;
val* var132 /* : String */;
val* var133 /* : MClassDef */;
val* var134 /* : MClass */;
val* var135 /* : String */;
val* var136 /* : String */;
short int var137 /* : Bool */;
val* var139 /* : NativeArray[String] */;
static val* varonce138;
static val* varonce140;
val* var141 /* : String */;
char* var142 /* : NativeString */;
val* var143 /* : FlatString */;
static val* varonce144;
val* var145 /* : String */;
char* var146 /* : NativeString */;
val* var147 /* : FlatString */;
static val* varonce148;
val* var149 /* : String */;
char* var150 /* : NativeString */;
val* var151 /* : FlatString */;
val* var152 /* : MClass */;
val* var153 /* : String */;
val* var154 /* : String */;
val* var155 /* : String */;
var_modelbuilder = p0;
var_mclassdef = p1;
var_kwredef = p2;
var_need_redef = p3;
var_mprop = p4;
{
var1 = ((val*(*)(val* self))(var_mclassdef->class->vft[COLOR_nit__modelize_property__MClassDef__mprop2npropdef]))(var_mclassdef); /* mprop2npropdef on <var_mclassdef:MClassDef>*/
}
{
var2 = ((short int(*)(val* self, val* p0))((((long)var1&3)?class_info[((long)var1&3)]:var1->class)->vft[COLOR_standard__abstract_collection__MapRead__has_key]))(var1, var_mprop); /* has_key on <var1:Map[MProperty, APropdef]>*/
}
if (var2){
if (unlikely(varonce==NULL)) {
var3 = NEW_standard__NativeArray(7l, &type_standard__NativeArray__standard__String);
if (likely(varonce4!=NULL)) {
var5 = varonce4;
} else {
var6 = "Error: a property `";
var7 = standard___standard__NativeString___to_s_with_length(var6, 19l);
var5 = var7;
varonce4 = var5;
}
((struct instance_standard__NativeArray*)var3)->values[0]=var5;
if (likely(varonce8!=NULL)) {
var9 = varonce8;
} else {
var10 = "` is already defined in class `";
var11 = standard___standard__NativeString___to_s_with_length(var10, 31l);
var9 = var11;
varonce8 = var9;
}
((struct instance_standard__NativeArray*)var3)->values[2]=var9;
if (likely(varonce12!=NULL)) {
var13 = varonce12;
} else {
var14 = "` at line ";
var15 = standard___standard__NativeString___to_s_with_length(var14, 10l);
var13 = var15;
varonce12 = var13;
}
((struct instance_standard__NativeArray*)var3)->values[4]=var13;
if (likely(varonce16!=NULL)) {
var17 = varonce16;
} else {
var18 = ".";
var19 = standard___standard__NativeString___to_s_with_length(var18, 1l);
var17 = var19;
varonce16 = var17;
}
((struct instance_standard__NativeArray*)var3)->values[6]=var17;
} else {
var3 = varonce;
varonce = NULL;
}
{
var20 = ((val*(*)(val* self))(var_mprop->class->vft[COLOR_standard__string__Object__to_s]))(var_mprop); /* to_s on <var_mprop:MProperty>*/
}
((struct instance_standard__NativeArray*)var3)->values[1]=var20;
{
var21 = ((val*(*)(val* self))(var_mclassdef->class->vft[COLOR_nit__model__MClassDef__mclass]))(var_mclassdef); /* mclass on <var_mclassdef:MClassDef>*/
}
{
var22 = ((val*(*)(val* self))(var21->class->vft[COLOR_standard__string__Object__to_s]))(var21); /* to_s on <var21:MClass>*/
}
((struct instance_standard__NativeArray*)var3)->values[3]=var22;
{
var23 = ((val*(*)(val* self))(var_mclassdef->class->vft[COLOR_nit__modelize_property__MClassDef__mprop2npropdef]))(var_mclassdef); /* mprop2npropdef on <var_mclassdef:MClassDef>*/
}
{
var24 = ((val*(*)(val* self, val* p0))((((long)var23&3)?class_info[((long)var23&3)]:var23->class)->vft[COLOR_standard__abstract_collection__MapRead___91d_93d]))(var23, var_mprop); /* [] on <var23:Map[MProperty, APropdef]>*/
}
{
var25 = ((val*(*)(val* self))(var24->class->vft[COLOR_nit__parser_nodes__ANode__location]))(var24); /* location on <var24:nullable Object(APropdef)>*/
}
{
var26 = ((long(*)(val* self))(var25->class->vft[COLOR_nit__location__Location__line_start]))(var25); /* line_start on <var25:Location>*/
}
var27 = standard__string___Int___Object__to_s(var26);
((struct instance_standard__NativeArray*)var3)->values[5]=var27;
{
var28 = ((val*(*)(val* self))(var3->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var3); /* native_to_s on <var3:NativeArray[String]>*/
}
varonce = var3;
{
((void(*)(val* self, val* p0, val* p1))(var_modelbuilder->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__error]))(var_modelbuilder, self, var28); /* error on <var_modelbuilder:ModelBuilder>*/
}
var = 0;
goto RET_LABEL;
} else {
}
/* <var_mprop:MProperty> isa MMethod */
cltype = type_nit__MMethod.color;
idtype = type_nit__MMethod.id;
if(cltype >= var_mprop->type->table_size) {
var30 = 0;
} else {
var30 = var_mprop->type->type_table[cltype] == idtype;
}
var_ = var30;
if (var30){
{
var31 = ((short int(*)(val* self))(var_mprop->class->vft[COLOR_nit__model__MMethod__is_root_init]))(var_mprop); /* is_root_init on <var_mprop:MProperty(MMethod)>*/
}
var29 = var31;
} else {
var29 = var_;
}
if (var29){
var = 1;
goto RET_LABEL;
} else {
}
if (var_kwredef == NULL) {
var32 = 1; /* is null */
} else {
var32 = 0; /* arg is null but recv is not */
}
if (0) {
var33 = ((short int(*)(val* self, val* p0))(var_kwredef->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_kwredef, ((val*)NULL)); /* == on <var_kwredef:nullable Token>*/
var32 = var33;
}
if (var32){
if (var_need_redef){
if (unlikely(varonce34==NULL)) {
var35 = NEW_standard__NativeArray(5l, &type_standard__NativeArray__standard__String);
if (likely(varonce36!=NULL)) {
var37 = varonce36;
} else {
var38 = "Redef Error: `";
var39 = standard___standard__NativeString___to_s_with_length(var38, 14l);
var37 = var39;
varonce36 = var37;
}
((struct instance_standard__NativeArray*)var35)->values[0]=var37;
if (likely(varonce40!=NULL)) {
var41 = varonce40;
} else {
var42 = "::";
var43 = standard___standard__NativeString___to_s_with_length(var42, 2l);
var41 = var43;
varonce40 = var41;
}
((struct instance_standard__NativeArray*)var35)->values[2]=var41;
if (likely(varonce44!=NULL)) {
var45 = varonce44;
} else {
var46 = "` is an inherited property. To redefine it, add the `redef` keyword.";
var47 = standard___standard__NativeString___to_s_with_length(var46, 68l);
var45 = var47;
varonce44 = var45;
}
((struct instance_standard__NativeArray*)var35)->values[4]=var45;
} else {
var35 = varonce34;
varonce34 = NULL;
}
{
var48 = ((val*(*)(val* self))(var_mclassdef->class->vft[COLOR_nit__model__MClassDef__mclass]))(var_mclassdef); /* mclass on <var_mclassdef:MClassDef>*/
}
{
var49 = ((val*(*)(val* self))(var48->class->vft[COLOR_standard__string__Object__to_s]))(var48); /* to_s on <var48:MClass>*/
}
((struct instance_standard__NativeArray*)var35)->values[1]=var49;
{
var50 = ((val*(*)(val* self))(var_mprop->class->vft[COLOR_nit__model_base__MEntity__name]))(var_mprop); /* name on <var_mprop:MProperty>*/
}
((struct instance_standard__NativeArray*)var35)->values[3]=var50;
{
var51 = ((val*(*)(val* self))(var35->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var35); /* native_to_s on <var35:NativeArray[String]>*/
}
varonce34 = var35;
{
((void(*)(val* self, val* p0, val* p1))(var_modelbuilder->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__error]))(var_modelbuilder, self, var51); /* error on <var_modelbuilder:ModelBuilder>*/
}
var = 0;
goto RET_LABEL;
} else {
}
{
var53 = ((val*(*)(val* self))(var_mprop->class->vft[COLOR_nit__model__MProperty__intro_mclassdef]))(var_mprop); /* intro_mclassdef on <var_mprop:MProperty>*/
}
{
var54 = ((val*(*)(val* self))(var53->class->vft[COLOR_nit__model__MClassDef__mmodule]))(var53); /* mmodule on <var53:MClassDef>*/
}
{
var55 = ((val*(*)(val* self))(var54->class->vft[COLOR_nit__mmodule__MModule__mgroup]))(var54); /* mgroup on <var54:MModule>*/
}
if (var55 == NULL) {
var56 = 0; /* is null */
} else {
var56 = 1; /* arg is null and recv is not */
}
if (0) {
var57 = ((short int(*)(val* self, val* p0))(var55->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var55, ((val*)NULL)); /* != on <var55:nullable MGroup>*/
var56 = var57;
}
var_58 = var56;
if (var56){
{
var59 = ((val*(*)(val* self))(var_mprop->class->vft[COLOR_nit__model__MProperty__visibility]))(var_mprop); /* visibility on <var_mprop:MProperty>*/
}
var60 = glob_sys;
{
var61 = ((val*(*)(val* self))(var60->class->vft[COLOR_nit__model_base__Sys__protected_visibility]))(var60); /* protected_visibility on <var60:Sys>*/
}
{
var62 = ((short int(*)(val* self, val* p0))(var59->class->vft[COLOR_standard__kernel__Comparable___62d_61d]))(var59, var61); /* >= on <var59:MVisibility>*/
}
var52 = var62;
} else {
var52 = var_58;
}
if (var52){
{
var63 = ((val*(*)(val* self))(var_modelbuilder->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__model]))(var_modelbuilder); /* model on <var_modelbuilder:ModelBuilder>*/
}
{
var64 = ((val*(*)(val* self))(var_mprop->class->vft[COLOR_nit__model_base__MEntity__name]))(var_mprop); /* name on <var_mprop:MProperty>*/
}
{
var65 = ((val*(*)(val* self, val* p0))(var63->class->vft[COLOR_nit__model__Model__get_mproperties_by_name]))(var63, var64); /* get_mproperties_by_name on <var63:Model>*/
}
var_others = var65;
if (var_others == NULL) {
var66 = 0; /* is null */
} else {
var66 = 1; /* arg is null and recv is not */
}
if (0) {
var67 = ((short int(*)(val* self, val* p0))(var_others->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_others, ((val*)NULL)); /* != on <var_others:nullable Array[MProperty]>*/
var66 = var67;
}
if (var66){
var_68 = var_others;
{
var69 = ((val*(*)(val* self))(var_68->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_68); /* iterator on <var_68:Array[MProperty]>*/
}
var_70 = var69;
for(;;) {
{
var71 = ((short int(*)(val* self))(var_70->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_70); /* is_ok on <var_70:ArrayIterator[MProperty]>*/
}
if (var71){
{
var72 = ((val*(*)(val* self))(var_70->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_70); /* item on <var_70:ArrayIterator[MProperty]>*/
}
var_other = var72;
{
var77 = ((short int(*)(val* self, val* p0))(var_other->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_other, var_mprop); /* != on <var_other:MProperty>*/
}
var_78 = var77;
if (var77){
{
var79 = ((val*(*)(val* self))(var_other->class->vft[COLOR_nit__model__MProperty__intro_mclassdef]))(var_other); /* intro_mclassdef on <var_other:MProperty>*/
}
{
var80 = ((val*(*)(val* self))(var79->class->vft[COLOR_nit__model__MClassDef__mmodule]))(var79); /* mmodule on <var79:MClassDef>*/
}
{
var81 = ((val*(*)(val* self))(var80->class->vft[COLOR_nit__mmodule__MModule__mgroup]))(var80); /* mgroup on <var80:MModule>*/
}
if (var81 == NULL) {
var82 = 0; /* is null */
} else {
var82 = 1; /* arg is null and recv is not */
}
if (0) {
var83 = ((short int(*)(val* self, val* p0))(var81->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var81, ((val*)NULL)); /* != on <var81:nullable MGroup>*/
var82 = var83;
}
var76 = var82;
} else {
var76 = var_78;
}
var_84 = var76;
if (var76){
{
var85 = ((val*(*)(val* self))(var_other->class->vft[COLOR_nit__model__MProperty__intro_mclassdef]))(var_other); /* intro_mclassdef on <var_other:MProperty>*/
}
{
var86 = ((val*(*)(val* self))(var85->class->vft[COLOR_nit__model__MClassDef__mmodule]))(var85); /* mmodule on <var85:MClassDef>*/
}
{
var87 = ((val*(*)(val* self))(var86->class->vft[COLOR_nit__mmodule__MModule__mgroup]))(var86); /* mgroup on <var86:MModule>*/
}
if (var87 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 643);
fatal_exit(1);
} else {
var88 = ((val*(*)(val* self))(var87->class->vft[COLOR_nit__mproject__MGroup__mproject]))(var87); /* mproject on <var87:nullable MGroup>*/
}
{
var89 = ((val*(*)(val* self))(var_mprop->class->vft[COLOR_nit__model__MProperty__intro_mclassdef]))(var_mprop); /* intro_mclassdef on <var_mprop:MProperty>*/
}
{
var90 = ((val*(*)(val* self))(var89->class->vft[COLOR_nit__model__MClassDef__mmodule]))(var89); /* mmodule on <var89:MClassDef>*/
}
{
var91 = ((val*(*)(val* self))(var90->class->vft[COLOR_nit__mmodule__MModule__mgroup]))(var90); /* mgroup on <var90:MModule>*/
}
if (var91 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 643);
fatal_exit(1);
} else {
var92 = ((val*(*)(val* self))(var91->class->vft[COLOR_nit__mproject__MGroup__mproject]))(var91); /* mproject on <var91:nullable MGroup>*/
}
{
var93 = ((short int(*)(val* self, val* p0))(var88->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var88, var92); /* == on <var88:MProject>*/
}
var75 = var93;
} else {
var75 = var_84;
}
var_94 = var75;
if (var75){
{
var95 = ((val*(*)(val* self))(var_other->class->vft[COLOR_nit__model__MProperty__intro_mclassdef]))(var_other); /* intro_mclassdef on <var_other:MProperty>*/
}
{
var96 = ((val*(*)(val* self))(var95->class->vft[COLOR_nit__model__MClassDef__mclass]))(var95); /* mclass on <var95:MClassDef>*/
}
{
var97 = ((val*(*)(val* self))(var96->class->vft[COLOR_nit__model_base__MEntity__name]))(var96); /* name on <var96:MClass>*/
}
{
var98 = ((val*(*)(val* self))(var_mprop->class->vft[COLOR_nit__model__MProperty__intro_mclassdef]))(var_mprop); /* intro_mclassdef on <var_mprop:MProperty>*/
}
{
var99 = ((val*(*)(val* self))(var98->class->vft[COLOR_nit__model__MClassDef__mclass]))(var98); /* mclass on <var98:MClassDef>*/
}
{
var100 = ((val*(*)(val* self))(var99->class->vft[COLOR_nit__model_base__MEntity__name]))(var99); /* name on <var99:MClass>*/
}
{
var101 = ((short int(*)(val* self, val* p0))(var97->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var97, var100); /* == on <var97:String>*/
}
var74 = var101;
} else {
var74 = var_94;
}
var_102 = var74;
if (var74){
{
var103 = ((val*(*)(val* self))(var_other->class->vft[COLOR_nit__model__MProperty__visibility]))(var_other); /* visibility on <var_other:MProperty>*/
}
var104 = glob_sys;
{
var105 = ((val*(*)(val* self))(var104->class->vft[COLOR_nit__model_base__Sys__protected_visibility]))(var104); /* protected_visibility on <var104:Sys>*/
}
{
var106 = ((short int(*)(val* self, val* p0))(var103->class->vft[COLOR_standard__kernel__Comparable___62d_61d]))(var103, var105); /* >= on <var103:MVisibility>*/
}
var73 = var106;
} else {
var73 = var_102;
}
if (var73){
if (likely(varonce107!=NULL)) {
var108 = varonce107;
} else {
var109 = "full-name-conflict";
var110 = standard___standard__NativeString___to_s_with_length(var109, 18l);
var108 = var110;
varonce107 = var108;
}
if (unlikely(varonce111==NULL)) {
var112 = NEW_standard__NativeArray(7l, &type_standard__NativeArray__standard__String);
if (likely(varonce113!=NULL)) {
var114 = varonce113;
} else {
var115 = "Warning: A property named `";
var116 = standard___standard__NativeString___to_s_with_length(var115, 27l);
var114 = var116;
varonce113 = var114;
}
((struct instance_standard__NativeArray*)var112)->values[0]=var114;
if (likely(varonce117!=NULL)) {
var118 = varonce117;
} else {
var119 = "` is already defined in module `";
var120 = standard___standard__NativeString___to_s_with_length(var119, 32l);
var118 = var120;
varonce117 = var118;
}
((struct instance_standard__NativeArray*)var112)->values[2]=var118;
if (likely(varonce121!=NULL)) {
var122 = varonce121;
} else {
var123 = "` for the class `";
var124 = standard___standard__NativeString___to_s_with_length(var123, 17l);
var122 = var124;
varonce121 = var122;
}
((struct instance_standard__NativeArray*)var112)->values[4]=var122;
if (likely(varonce125!=NULL)) {
var126 = varonce125;
} else {
var127 = "`.";
var128 = standard___standard__NativeString___to_s_with_length(var127, 2l);
var126 = var128;
varonce125 = var126;
}
((struct instance_standard__NativeArray*)var112)->values[6]=var126;
} else {
var112 = varonce111;
varonce111 = NULL;
}
{
var129 = ((val*(*)(val* self))(var_other->class->vft[COLOR_nit__model_base__MEntity__full_name]))(var_other); /* full_name on <var_other:MProperty>*/
}
((struct instance_standard__NativeArray*)var112)->values[1]=var129;
{
var130 = ((val*(*)(val* self))(var_other->class->vft[COLOR_nit__model__MProperty__intro_mclassdef]))(var_other); /* intro_mclassdef on <var_other:MProperty>*/
}
{
var131 = ((val*(*)(val* self))(var130->class->vft[COLOR_nit__model__MClassDef__mmodule]))(var130); /* mmodule on <var130:MClassDef>*/
}
{
var132 = ((val*(*)(val* self))(var131->class->vft[COLOR_standard__string__Object__to_s]))(var131); /* to_s on <var131:MModule>*/
}
((struct instance_standard__NativeArray*)var112)->values[3]=var132;
{
var133 = ((val*(*)(val* self))(var_other->class->vft[COLOR_nit__model__MProperty__intro_mclassdef]))(var_other); /* intro_mclassdef on <var_other:MProperty>*/
}
{
var134 = ((val*(*)(val* self))(var133->class->vft[COLOR_nit__model__MClassDef__mclass]))(var133); /* mclass on <var133:MClassDef>*/
}
{
var135 = ((val*(*)(val* self))(var134->class->vft[COLOR_nit__model_base__MEntity__name]))(var134); /* name on <var134:MClass>*/
}
((struct instance_standard__NativeArray*)var112)->values[5]=var135;
{
var136 = ((val*(*)(val* self))(var112->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var112); /* native_to_s on <var112:NativeArray[String]>*/
}
varonce111 = var112;
{
((void(*)(val* self, val* p0, val* p1, val* p2))(var_modelbuilder->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__advice]))(var_modelbuilder, self, var108, var136); /* advice on <var_modelbuilder:ModelBuilder>*/
}
goto BREAK_label;
} else {
}
{
((void(*)(val* self))(var_70->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_70); /* next on <var_70:ArrayIterator[MProperty]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))(var_70->class->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_70); /* finish on <var_70:ArrayIterator[MProperty]>*/
}
} else {
}
} else {
}
} else {
var137 = !var_need_redef;
if (var137){
if (unlikely(varonce138==NULL)) {
var139 = NEW_standard__NativeArray(5l, &type_standard__NativeArray__standard__String);
if (likely(varonce140!=NULL)) {
var141 = varonce140;
} else {
var142 = "Error: no property `";
var143 = standard___standard__NativeString___to_s_with_length(var142, 20l);
var141 = var143;
varonce140 = var141;
}
((struct instance_standard__NativeArray*)var139)->values[0]=var141;
if (likely(varonce144!=NULL)) {
var145 = varonce144;
} else {
var146 = "::";
var147 = standard___standard__NativeString___to_s_with_length(var146, 2l);
var145 = var147;
varonce144 = var145;
}
((struct instance_standard__NativeArray*)var139)->values[2]=var145;
if (likely(varonce148!=NULL)) {
var149 = varonce148;
} else {
var150 = "` is inherited. Remove the `redef` keyword to define a new property.";
var151 = standard___standard__NativeString___to_s_with_length(var150, 68l);
var149 = var151;
varonce148 = var149;
}
((struct instance_standard__NativeArray*)var139)->values[4]=var149;
} else {
var139 = varonce138;
varonce138 = NULL;
}
{
var152 = ((val*(*)(val* self))(var_mclassdef->class->vft[COLOR_nit__model__MClassDef__mclass]))(var_mclassdef); /* mclass on <var_mclassdef:MClassDef>*/
}
{
var153 = ((val*(*)(val* self))(var152->class->vft[COLOR_standard__string__Object__to_s]))(var152); /* to_s on <var152:MClass>*/
}
((struct instance_standard__NativeArray*)var139)->values[1]=var153;
{
var154 = ((val*(*)(val* self))(var_mprop->class->vft[COLOR_nit__model_base__MEntity__name]))(var_mprop); /* name on <var_mprop:MProperty>*/
}
((struct instance_standard__NativeArray*)var139)->values[3]=var154;
{
var155 = ((val*(*)(val* self))(var139->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var139); /* native_to_s on <var139:NativeArray[String]>*/
}
varonce138 = var139;
{
((void(*)(val* self, val* p0, val* p1))(var_modelbuilder->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__error]))(var_modelbuilder, self, var155); /* error on <var_modelbuilder:ModelBuilder>*/
}
var = 0;
goto RET_LABEL;
} else {
}
}
var = 1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelize_property#ASignature#is_visited for (self: ASignature): Bool */
short int nit__modelize_property___ASignature___is_visited(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nit__modelize_property__ASignature___is_visited].s; /* _is_visited on <self:ASignature> */
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property#ASignature#is_visited= for (self: ASignature, Bool) */
void nit__modelize_property___ASignature___is_visited_61d(val* self, short int p0) {
self->attrs[COLOR_nit__modelize_property__ASignature___is_visited].s = p0; /* _is_visited on <self:ASignature> */
RET_LABEL:;
}
/* method modelize_property#ASignature#param_names for (self: ASignature): Array[String] */
val* nit__modelize_property___ASignature___param_names(val* self) {
val* var /* : Array[String] */;
val* var1 /* : Array[String] */;
var1 = self->attrs[COLOR_nit__modelize_property__ASignature___param_names].val; /* _param_names on <self:ASignature> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _param_names");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 663);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property#ASignature#param_names= for (self: ASignature, Array[String]) */
void nit__modelize_property___ASignature___param_names_61d(val* self, val* p0) {
self->attrs[COLOR_nit__modelize_property__ASignature___param_names].val = p0; /* _param_names on <self:ASignature> */
RET_LABEL:;
}
/* method modelize_property#ASignature#param_types for (self: ASignature): Array[MType] */
val* nit__modelize_property___ASignature___param_types(val* self) {
val* var /* : Array[MType] */;
val* var1 /* : Array[MType] */;
var1 = self->attrs[COLOR_nit__modelize_property__ASignature___param_types].val; /* _param_types on <self:ASignature> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _param_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 666);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property#ASignature#param_types= for (self: ASignature, Array[MType]) */
void nit__modelize_property___ASignature___param_types_61d(val* self, val* p0) {
self->attrs[COLOR_nit__modelize_property__ASignature___param_types].val = p0; /* _param_types on <self:ASignature> */
RET_LABEL:;
}
/* method modelize_property#ASignature#vararg_rank for (self: ASignature): Int */
long nit__modelize_property___ASignature___vararg_rank(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_nit__modelize_property__ASignature___vararg_rank].l; /* _vararg_rank on <self:ASignature> */
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property#ASignature#vararg_rank= for (self: ASignature, Int) */
void nit__modelize_property___ASignature___vararg_rank_61d(val* self, long p0) {
self->attrs[COLOR_nit__modelize_property__ASignature___vararg_rank].l = p0; /* _vararg_rank on <self:ASignature> */
RET_LABEL:;
}
/* method modelize_property#ASignature#ret_type for (self: ASignature): nullable MType */
val* nit__modelize_property___ASignature___ret_type(val* self) {
val* var /* : nullable MType */;
val* var1 /* : nullable MType */;
var1 = self->attrs[COLOR_nit__modelize_property__ASignature___ret_type].val; /* _ret_type on <self:ASignature> */
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property#ASignature#ret_type= for (self: ASignature, nullable MType) */
void nit__modelize_property___ASignature___ret_type_61d(val* self, val* p0) {
self->attrs[COLOR_nit__modelize_property__ASignature___ret_type].val = p0; /* _ret_type on <self:ASignature> */
RET_LABEL:;
}
/* method modelize_property#ASignature#visit_signature for (self: ASignature, ModelBuilder, MClassDef): Bool */
short int nit__modelize_property___ASignature___visit_signature(val* self, val* p0, val* p1) {
short int var /* : Bool */;
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
val* var_mclassdef /* var mclassdef: MClassDef */;
val* var1 /* : MModule */;
val* var_mmodule /* var mmodule: MModule */;
val* var2 /* : Array[String] */;
val* var_param_names /* var param_names: Array[String] */;
val* var3 /* : Array[MType] */;
val* var_param_types /* var param_types: Array[MType] */;
val* var4 /* : ANodes[AParam] */;
val* var_ /* var : ANodes[AParam] */;
val* var5 /* : Iterator[nullable Object] */;
val* var_6 /* var : Iterator[AParam] */;
short int var7 /* : Bool */;
val* var8 /* : nullable Object */;
val* var_np /* var np: AParam */;
val* var9 /* : TId */;
val* var10 /* : String */;
val* var11 /* : nullable AType */;
val* var_ntype /* var ntype: nullable AType */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
val* var14 /* : nullable MType */;
val* var_mtype /* var mtype: nullable MType */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
long var_i /* var i: Int */;
long var17 /* : Int */;
long var18 /* : Int */;
long var19 /* : Int */;
short int var21 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var22 /* : Int */;
long var_23 /* var : Int */;
short int var24 /* : Bool */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
const char* var_class_name29;
short int var30 /* : Bool */;
long var31 /* : Int */;
val* var32 /* : nullable TDotdotdot */;
short int var33 /* : Bool */;
short int var34 /* : Bool */;
long var35 /* : Int */;
long var36 /* : Int */;
long var38 /* : Int */;
short int var39 /* : Bool */;
short int var41 /* : Bool */;
short int var42 /* : Bool */;
val* var43 /* : NativeArray[String] */;
static val* varonce;
static val* varonce44;
val* var45 /* : String */;
char* var46 /* : NativeString */;
val* var47 /* : FlatString */;
static val* varonce48;
val* var49 /* : String */;
char* var50 /* : NativeString */;
val* var51 /* : FlatString */;
long var52 /* : Int */;
val* var53 /* : nullable Object */;
val* var54 /* : String */;
long var55 /* : Int */;
long var56 /* : Int */;
short int var58 /* : Bool */;
int cltype59;
int idtype60;
const char* var_class_name61;
long var62 /* : Int */;
val* var64 /* : nullable AType */;
val* var_ntype65 /* var ntype: nullable AType */;
short int var66 /* : Bool */;
short int var67 /* : Bool */;
val* var68 /* : nullable MType */;
val* var69 /* : nullable MType */;
short int var70 /* : Bool */;
short int var71 /* : Bool */;
var_modelbuilder = p0;
var_mclassdef = p1;
{
var1 = ((val*(*)(val* self))(var_mclassdef->class->vft[COLOR_nit__model__MClassDef__mmodule]))(var_mclassdef); /* mmodule on <var_mclassdef:MClassDef>*/
}
var_mmodule = var1;
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__modelize_property__ASignature__param_names]))(self); /* param_names on <self:ASignature>*/
}
var_param_names = var2;
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__modelize_property__ASignature__param_types]))(self); /* param_types on <self:ASignature>*/
}
var_param_types = var3;
{
var4 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ASignature__n_params]))(self); /* n_params on <self:ASignature>*/
}
var_ = var4;
{
var5 = ((val*(*)(val* self))(var_->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:ANodes[AParam]>*/
}
var_6 = var5;
for(;;) {
{
var7 = ((short int(*)(val* self))((((long)var_6&3)?class_info[((long)var_6&3)]:var_6->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_6); /* is_ok on <var_6:Iterator[AParam]>*/
}
if (var7){
{
var8 = ((val*(*)(val* self))((((long)var_6&3)?class_info[((long)var_6&3)]:var_6->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_6); /* item on <var_6:Iterator[AParam]>*/
}
var_np = var8;
{
var9 = ((val*(*)(val* self))(var_np->class->vft[COLOR_nit__parser_nodes__AParam__n_id]))(var_np); /* n_id on <var_np:AParam>*/
}
{
var10 = ((val*(*)(val* self))(var9->class->vft[COLOR_nit__parser_nodes__Token__text]))(var9); /* text on <var9:TId>*/
}
{
((void(*)(val* self, val* p0))(var_param_names->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_param_names, var10); /* add on <var_param_names:Array[String]>*/
}
{
var11 = ((val*(*)(val* self))(var_np->class->vft[COLOR_nit__parser_nodes__AParam__n_type]))(var_np); /* n_type on <var_np:AParam>*/
}
var_ntype = var11;
if (var_ntype == NULL) {
var12 = 0; /* is null */
} else {
var12 = 1; /* arg is null and recv is not */
}
if (0) {
var13 = ((short int(*)(val* self, val* p0))(var_ntype->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_ntype, ((val*)NULL)); /* != on <var_ntype:nullable AType>*/
var12 = var13;
}
if (var12){
{
var14 = ((val*(*)(val* self, val* p0, val* p1, val* p2, short int p3))(var_modelbuilder->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__resolve_mtype_unchecked]))(var_modelbuilder, var_mmodule, var_mclassdef, var_ntype, 1); /* resolve_mtype_unchecked on <var_modelbuilder:ModelBuilder>*/
}
var_mtype = var14;
if (var_mtype == NULL) {
var15 = 1; /* is null */
} else {
var15 = 0; /* arg is null but recv is not */
}
if (0) {
var16 = ((short int(*)(val* self, val* p0))(var_mtype->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_mtype, ((val*)NULL)); /* == on <var_mtype:nullable MType>*/
var15 = var16;
}
if (var15){
var = 0;
goto RET_LABEL;
} else {
}
var_i = 0l;
{
var17 = ((long(*)(val* self))(var_param_names->class->vft[COLOR_standard__abstract_collection__Collection__length]))(var_param_names); /* length on <var_param_names:Array[String]>*/
}
{
var18 = ((long(*)(val* self))(var_param_types->class->vft[COLOR_standard__abstract_collection__Collection__length]))(var_param_types); /* length on <var_param_types:Array[MType]>*/
}
{
{ /* Inline kernel#Int#- (var17,var18) on <var17:Int> */
/* Covariant cast for argument 0 (i) <var18:Int> isa OTHER */
/* <var18:Int> isa OTHER */
var21 = 1; /* easy <var18:Int> isa OTHER*/
if (unlikely(!var21)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 429);
fatal_exit(1);
}
var22 = var17 - var18;
var19 = var22;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
}
var_23 = var19;
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
{
((void(*)(val* self, val* p0))(var_param_types->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_param_types, var_mtype); /* add on <var_param_types:Array[MType]>*/
}
var31 = standard___standard__Int___Discrete__successor(var_i, 1l);
var_i = var31;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
var32 = ((val*(*)(val* self))(var_np->class->vft[COLOR_nit__parser_nodes__AParam__n_dotdotdot]))(var_np); /* n_dotdotdot on <var_np:AParam>*/
}
if (var32 == NULL) {
var33 = 0; /* is null */
} else {
var33 = 1; /* arg is null and recv is not */
}
if (0) {
var34 = ((short int(*)(val* self, val* p0))(var32->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var32, ((val*)NULL)); /* != on <var32:nullable TDotdotdot>*/
var33 = var34;
}
if (var33){
{
var35 = ((long(*)(val* self))(self->class->vft[COLOR_nit__modelize_property__ASignature__vararg_rank]))(self); /* vararg_rank on <self:ASignature>*/
}
{
{ /* Inline kernel#Int#unary - (1l) on <1l:Int> */
var38 = -1l;
var36 = var38;
goto RET_LABEL37;
RET_LABEL37:(void)0;
}
}
{
{ /* Inline kernel#Int#!= (var35,var36) on <var35:Int> */
var41 = var35 == var36;
var42 = !var41;
var39 = var42;
goto RET_LABEL40;
RET_LABEL40:(void)0;
}
}
if (var39){
if (unlikely(varonce==NULL)) {
var43 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce44!=NULL)) {
var45 = varonce44;
} else {
var46 = "Error: `";
var47 = standard___standard__NativeString___to_s_with_length(var46, 8l);
var45 = var47;
varonce44 = var45;
}
((struct instance_standard__NativeArray*)var43)->values[0]=var45;
if (likely(varonce48!=NULL)) {
var49 = varonce48;
} else {
var50 = "` is already a vararg";
var51 = standard___standard__NativeString___to_s_with_length(var50, 21l);
var49 = var51;
varonce48 = var49;
}
((struct instance_standard__NativeArray*)var43)->values[2]=var49;
} else {
var43 = varonce;
varonce = NULL;
}
{
var52 = ((long(*)(val* self))(self->class->vft[COLOR_nit__modelize_property__ASignature__vararg_rank]))(self); /* vararg_rank on <self:ASignature>*/
}
{
var53 = ((val*(*)(val* self, long p0))(var_param_names->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var_param_names, var52); /* [] on <var_param_names:Array[String]>*/
}
((struct instance_standard__NativeArray*)var43)->values[1]=var53;
{
var54 = ((val*(*)(val* self))(var43->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var43); /* native_to_s on <var43:NativeArray[String]>*/
}
varonce = var43;
{
((void(*)(val* self, val* p0, val* p1))(var_modelbuilder->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__error]))(var_modelbuilder, var_np, var54); /* error on <var_modelbuilder:ModelBuilder>*/
}
var = 0;
goto RET_LABEL;
} else {
{
var55 = ((long(*)(val* self))(var_param_names->class->vft[COLOR_standard__abstract_collection__Collection__length]))(var_param_names); /* length on <var_param_names:Array[String]>*/
}
{
{ /* Inline kernel#Int#- (var55,1l) on <var55:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var58 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var58)) {
var_class_name61 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name61);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 429);
fatal_exit(1);
}
var62 = var55 - 1l;
var56 = var62;
goto RET_LABEL57;
RET_LABEL57:(void)0;
}
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_nit__modelize_property__ASignature__vararg_rank_61d]))(self, var56); /* vararg_rank= on <self:ASignature>*/
}
}
} else {
}
} else {
}
{
((void(*)(val* self))((((long)var_6&3)?class_info[((long)var_6&3)]:var_6->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_6); /* next on <var_6:Iterator[AParam]>*/
}
} else {
goto BREAK_label63;
}
}
BREAK_label63: (void)0;
{
((void(*)(val* self))((((long)var_6&3)?class_info[((long)var_6&3)]:var_6->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_6); /* finish on <var_6:Iterator[AParam]>*/
}
{
var64 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ASignature__n_type]))(self); /* n_type on <self:ASignature>*/
}
var_ntype65 = var64;
if (var_ntype65 == NULL) {
var66 = 0; /* is null */
} else {
var66 = 1; /* arg is null and recv is not */
}
if (0) {
var67 = ((short int(*)(val* self, val* p0))(var_ntype65->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_ntype65, ((val*)NULL)); /* != on <var_ntype65:nullable AType>*/
var66 = var67;
}
if (var66){
{
var68 = ((val*(*)(val* self, val* p0, val* p1, val* p2, short int p3))(var_modelbuilder->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__resolve_mtype_unchecked]))(var_modelbuilder, var_mmodule, var_mclassdef, var_ntype65, 1); /* resolve_mtype_unchecked on <var_modelbuilder:ModelBuilder>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__modelize_property__ASignature__ret_type_61d]))(self, var68); /* ret_type= on <self:ASignature>*/
}
{
var69 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__modelize_property__ASignature__ret_type]))(self); /* ret_type on <self:ASignature>*/
}
if (var69 == NULL) {
var70 = 1; /* is null */
} else {
var70 = 0; /* arg is null but recv is not */
}
if (0) {
var71 = ((short int(*)(val* self, val* p0))(var69->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var69, ((val*)NULL)); /* == on <var69:nullable MType>*/
var70 = var71;
}
if (var70){
var = 0;
goto RET_LABEL;
} else {
}
} else {
}
{
((void(*)(val* self, short int p0))(self->class->vft[COLOR_nit__modelize_property__ASignature__is_visited_61d]))(self, 1); /* is_visited= on <self:ASignature>*/
}
var = 1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelize_property#ASignature#check_signature for (self: ASignature, ModelBuilder, MClassDef): Bool */
short int nit__modelize_property___ASignature___check_signature(val* self, val* p0, val* p1) {
short int var /* : Bool */;
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
val* var_mclassdef /* var mclassdef: MClassDef */;
short int var_res /* var res: Bool */;
val* var1 /* : ANodes[AParam] */;
val* var_ /* var : ANodes[AParam] */;
val* var2 /* : Iterator[nullable Object] */;
val* var_3 /* var : Iterator[AParam] */;
short int var4 /* : Bool */;
val* var5 /* : nullable Object */;
val* var_np /* var np: AParam */;
val* var6 /* : nullable AType */;
val* var_ntype /* var ntype: nullable AType */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
val* var9 /* : MModule */;
val* var10 /* : nullable MType */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
val* var13 /* : nullable AType */;
val* var_ntype14 /* var ntype: nullable AType */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
val* var17 /* : MModule */;
val* var18 /* : nullable MType */;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
var_modelbuilder = p0;
var_mclassdef = p1;
var_res = 1;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ASignature__n_params]))(self); /* n_params on <self:ASignature>*/
}
var_ = var1;
{
var2 = ((val*(*)(val* self))(var_->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:ANodes[AParam]>*/
}
var_3 = var2;
for(;;) {
{
var4 = ((short int(*)(val* self))((((long)var_3&3)?class_info[((long)var_3&3)]:var_3->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_3); /* is_ok on <var_3:Iterator[AParam]>*/
}
if (var4){
{
var5 = ((val*(*)(val* self))((((long)var_3&3)?class_info[((long)var_3&3)]:var_3->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_3); /* item on <var_3:Iterator[AParam]>*/
}
var_np = var5;
{
var6 = ((val*(*)(val* self))(var_np->class->vft[COLOR_nit__parser_nodes__AParam__n_type]))(var_np); /* n_type on <var_np:AParam>*/
}
var_ntype = var6;
if (var_ntype == NULL) {
var7 = 0; /* is null */
} else {
var7 = 1; /* arg is null and recv is not */
}
if (0) {
var8 = ((short int(*)(val* self, val* p0))(var_ntype->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_ntype, ((val*)NULL)); /* != on <var_ntype:nullable AType>*/
var7 = var8;
}
if (var7){
{
var9 = ((val*(*)(val* self))(var_mclassdef->class->vft[COLOR_nit__model__MClassDef__mmodule]))(var_mclassdef); /* mmodule on <var_mclassdef:MClassDef>*/
}
{
var10 = ((val*(*)(val* self, val* p0, val* p1, val* p2))(var_modelbuilder->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__resolve_mtype]))(var_modelbuilder, var9, var_mclassdef, var_ntype); /* resolve_mtype on <var_modelbuilder:ModelBuilder>*/
}
if (var10 == NULL) {
var11 = 1; /* is null */
} else {
var11 = 0; /* arg is null but recv is not */
}
if (0) {
var12 = ((short int(*)(val* self, val* p0))(var10->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var10, ((val*)NULL)); /* == on <var10:nullable MType>*/
var11 = var12;
}
if (var11){
var_res = 0;
} else {
}
} else {
}
{
((void(*)(val* self))((((long)var_3&3)?class_info[((long)var_3&3)]:var_3->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_3); /* next on <var_3:Iterator[AParam]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_3&3)?class_info[((long)var_3&3)]:var_3->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_3); /* finish on <var_3:Iterator[AParam]>*/
}
{
var13 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ASignature__n_type]))(self); /* n_type on <self:ASignature>*/
}
var_ntype14 = var13;
if (var_ntype14 == NULL) {
var15 = 0; /* is null */
} else {
var15 = 1; /* arg is null and recv is not */
}
if (0) {
var16 = ((short int(*)(val* self, val* p0))(var_ntype14->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_ntype14, ((val*)NULL)); /* != on <var_ntype14:nullable AType>*/
var15 = var16;
}
if (var15){
{
var17 = ((val*(*)(val* self))(var_mclassdef->class->vft[COLOR_nit__model__MClassDef__mmodule]))(var_mclassdef); /* mmodule on <var_mclassdef:MClassDef>*/
}
{
var18 = ((val*(*)(val* self, val* p0, val* p1, val* p2))(var_modelbuilder->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__resolve_mtype]))(var_modelbuilder, var17, var_mclassdef, var_ntype14); /* resolve_mtype on <var_modelbuilder:ModelBuilder>*/
}
if (var18 == NULL) {
var19 = 1; /* is null */
} else {
var19 = 0; /* arg is null but recv is not */
}
if (0) {
var20 = ((short int(*)(val* self, val* p0))(var18->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var18, ((val*)NULL)); /* == on <var18:nullable MType>*/
var19 = var20;
}
if (var19){
var_res = 0;
} else {
}
} else {
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelize_property#AParam#mparameter for (self: AParam): nullable MParameter */
val* nit__modelize_property___AParam___mparameter(val* self) {
val* var /* : nullable MParameter */;
val* var1 /* : nullable MParameter */;
var1 = self->attrs[COLOR_nit__modelize_property__AParam___mparameter].val; /* _mparameter on <self:AParam> */
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property#AParam#mparameter= for (self: AParam, nullable MParameter) */
void nit__modelize_property___AParam___mparameter_61d(val* self, val* p0) {
self->attrs[COLOR_nit__modelize_property__AParam___mparameter].val = p0; /* _mparameter on <self:AParam> */
RET_LABEL:;
}
/* method modelize_property#AMethPropdef#look_like_a_root_init for (self: AMethPropdef, ModelBuilder, MClassDef): Bool */
short int nit__modelize_property___AMethPropdef___look_like_a_root_init(val* self, val* p0, val* p1) {
short int var /* : Bool */;
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
val* var_mclassdef /* var mclassdef: MClassDef */;
val* var1 /* : nullable TKwinit */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var4 /* : nullable AMethid */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
static val* varonce;
val* var7 /* : String */;
char* var8 /* : NativeString */;
val* var9 /* : FlatString */;
val* var10 /* : nullable AAnnotation */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
val* var13 /* : nullable ANode */;
val* var14 /* : nullable ANode */;
short int var15 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var_amod /* var amod: AModule */;
val* var16 /* : nullable AModuledecl */;
val* var_amoddecl /* var amoddecl: nullable AModuledecl */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
static val* varonce19;
val* var20 /* : String */;
char* var21 /* : NativeString */;
val* var22 /* : FlatString */;
val* var23 /* : nullable AAnnotation */;
val* var_old /* var old: nullable AAnnotation */;
short int var24 /* : Bool */;
short int var25 /* : Bool */;
val* var26 /* : nullable ASignature */;
val* var27 /* : ANodes[AParam] */;
long var28 /* : Int */;
short int var29 /* : Bool */;
short int var31 /* : Bool */;
int cltype32;
int idtype33;
const char* var_class_name34;
short int var35 /* : Bool */;
static val* varonce36;
val* var37 /* : String */;
char* var38 /* : NativeString */;
val* var39 /* : FlatString */;
val* var41 /* : NativeArray[String] */;
static val* varonce40;
static val* varonce42;
val* var43 /* : String */;
char* var44 /* : NativeString */;
val* var45 /* : FlatString */;
val* var46 /* : String */;
val* var47 /* : String */;
val* var48 /* : nullable AVisibility */;
short int var49 /* : Bool */;
int cltype50;
int idtype51;
short int var52 /* : Bool */;
static val* varonce53;
val* var54 /* : String */;
char* var55 /* : NativeString */;
val* var56 /* : FlatString */;
val* var58 /* : NativeArray[String] */;
static val* varonce57;
static val* varonce59;
val* var60 /* : String */;
char* var61 /* : NativeString */;
val* var62 /* : FlatString */;
val* var63 /* : String */;
val* var64 /* : String */;
var_modelbuilder = p0;
var_mclassdef = p1;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AMethPropdef__n_kwinit]))(self); /* n_kwinit on <self:AMethPropdef>*/
}
if (var1 == NULL) {
var2 = 1; /* is null */
} else {
var2 = 0; /* arg is null but recv is not */
}
if (0) {
var3 = ((short int(*)(val* self, val* p0))(var1->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var1, ((val*)NULL)); /* == on <var1:nullable TKwinit>*/
var2 = var3;
}
if (var2){
var = 0;
goto RET_LABEL;
} else {
}
{
var4 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AMethPropdef__n_methid]))(self); /* n_methid on <self:AMethPropdef>*/
}
if (var4 == NULL) {
var5 = 0; /* is null */
} else {
var5 = 1; /* arg is null and recv is not */
}
if (0) {
var6 = ((short int(*)(val* self, val* p0))(var4->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var4, ((val*)NULL)); /* != on <var4:nullable AMethid>*/
var5 = var6;
}
if (var5){
var = 0;
goto RET_LABEL;
} else {
}
if (likely(varonce!=NULL)) {
var7 = varonce;
} else {
var8 = "old_style_init";
var9 = standard___standard__NativeString___to_s_with_length(var8, 14l);
var7 = var9;
varonce = var7;
}
{
var10 = ((val*(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__annotation__Prod__get_single_annotation]))(self, var7, var_modelbuilder); /* get_single_annotation on <self:AMethPropdef>*/
}
if (var10 == NULL) {
var11 = 0; /* is null */
} else {
var11 = 1; /* arg is null and recv is not */
}
if (0) {
var12 = ((short int(*)(val* self, val* p0))(var10->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var10, ((val*)NULL)); /* != on <var10:nullable AAnnotation>*/
var11 = var12;
}
if (var11){
var = 0;
goto RET_LABEL;
} else {
}
{
var13 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ANode__parent]))(self); /* parent on <self:AMethPropdef>*/
}
if (var13 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 750);
fatal_exit(1);
} else {
var14 = ((val*(*)(val* self))(var13->class->vft[COLOR_nit__parser_nodes__ANode__parent]))(var13); /* parent on <var13:nullable ANode>*/
}
/* <var14:nullable ANode> isa AModule */
cltype = type_nit__AModule.color;
idtype = type_nit__AModule.id;
if(var14 == NULL) {
var15 = 0;
} else {
if(cltype >= var14->type->table_size) {
var15 = 0;
} else {
var15 = var14->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var15)) {
var_class_name = var14 == NULL ? "null" : var14->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AModule", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 750);
fatal_exit(1);
}
var_amod = var14;
{
var16 = ((val*(*)(val* self))(var_amod->class->vft[COLOR_nit__parser_nodes__AModule__n_moduledecl]))(var_amod); /* n_moduledecl on <var_amod:AModule>*/
}
var_amoddecl = var16;
if (var_amoddecl == NULL) {
var17 = 0; /* is null */
} else {
var17 = 1; /* arg is null and recv is not */
}
if (0) {
var18 = ((short int(*)(val* self, val* p0))(var_amoddecl->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_amoddecl, ((val*)NULL)); /* != on <var_amoddecl:nullable AModuledecl>*/
var17 = var18;
}
if (var17){
if (likely(varonce19!=NULL)) {
var20 = varonce19;
} else {
var21 = "old_style_init";
var22 = standard___standard__NativeString___to_s_with_length(var21, 14l);
var20 = var22;
varonce19 = var20;
}
{
var23 = ((val*(*)(val* self, val* p0, val* p1))(var_amoddecl->class->vft[COLOR_nit__annotation__Prod__get_single_annotation]))(var_amoddecl, var20, var_modelbuilder); /* get_single_annotation on <var_amoddecl:nullable AModuledecl(AModuledecl)>*/
}
var_old = var23;
if (var_old == NULL) {
var24 = 0; /* is null */
} else {
var24 = 1; /* arg is null and recv is not */
}
if (0) {
var25 = ((short int(*)(val* self, val* p0))(var_old->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_old, ((val*)NULL)); /* != on <var_old:nullable AAnnotation>*/
var24 = var25;
}
if (var24){
var = 0;
goto RET_LABEL;
} else {
}
} else {
}
{
var26 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AMethPropdef__n_signature]))(self); /* n_signature on <self:AMethPropdef>*/
}
if (var26 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 757);
fatal_exit(1);
} else {
var27 = ((val*(*)(val* self))(var26->class->vft[COLOR_nit__parser_nodes__ASignature__n_params]))(var26); /* n_params on <var26:nullable ASignature>*/
}
{
var28 = ((long(*)(val* self))(var27->class->vft[COLOR_standard__abstract_collection__Collection__length]))(var27); /* length on <var27:ANodes[AParam]>*/
}
{
{ /* Inline kernel#Int#> (var28,0l) on <var28:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var31 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var31)) {
var_class_name34 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name34);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 425);
fatal_exit(1);
}
var35 = var28 > 0l;
var29 = var35;
goto RET_LABEL30;
RET_LABEL30:(void)0;
}
}
if (var29){
if (likely(varonce36!=NULL)) {
var37 = varonce36;
} else {
var38 = "old-init";
var39 = standard___standard__NativeString___to_s_with_length(var38, 8l);
var37 = var39;
varonce36 = var37;
}
if (unlikely(varonce40==NULL)) {
var41 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce42!=NULL)) {
var43 = varonce42;
} else {
var44 = "Warning: init with signature in ";
var45 = standard___standard__NativeString___to_s_with_length(var44, 32l);
var43 = var45;
varonce42 = var43;
}
((struct instance_standard__NativeArray*)var41)->values[0]=var43;
} else {
var41 = varonce40;
varonce40 = NULL;
}
{
var46 = ((val*(*)(val* self))(var_mclassdef->class->vft[COLOR_standard__string__Object__to_s]))(var_mclassdef); /* to_s on <var_mclassdef:MClassDef>*/
}
((struct instance_standard__NativeArray*)var41)->values[1]=var46;
{
var47 = ((val*(*)(val* self))(var41->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var41); /* native_to_s on <var41:NativeArray[String]>*/
}
varonce40 = var41;
{
((void(*)(val* self, val* p0, val* p1, val* p2))(var_modelbuilder->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__advice]))(var_modelbuilder, self, var37, var47); /* advice on <var_modelbuilder:ModelBuilder>*/
}
var = 0;
goto RET_LABEL;
} else {
}
{
var48 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ADefinition__n_visibility]))(self); /* n_visibility on <self:AMethPropdef>*/
}
/* <var48:nullable AVisibility> isa APublicVisibility */
cltype50 = type_nit__APublicVisibility.color;
idtype51 = type_nit__APublicVisibility.id;
if(var48 == NULL) {
var49 = 0;
} else {
if(cltype50 >= var48->type->table_size) {
var49 = 0;
} else {
var49 = var48->type->type_table[cltype50] == idtype51;
}
}
var52 = !var49;
if (var52){
if (likely(varonce53!=NULL)) {
var54 = varonce53;
} else {
var55 = "old-init";
var56 = standard___standard__NativeString___to_s_with_length(var55, 8l);
var54 = var56;
varonce53 = var54;
}
if (unlikely(varonce57==NULL)) {
var58 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce59!=NULL)) {
var60 = varonce59;
} else {
var61 = "Warning: non-public init in ";
var62 = standard___standard__NativeString___to_s_with_length(var61, 28l);
var60 = var62;
varonce59 = var60;
}
((struct instance_standard__NativeArray*)var58)->values[0]=var60;
} else {
var58 = varonce57;
varonce57 = NULL;
}
{
var63 = ((val*(*)(val* self))(var_mclassdef->class->vft[COLOR_standard__string__Object__to_s]))(var_mclassdef); /* to_s on <var_mclassdef:MClassDef>*/
}
((struct instance_standard__NativeArray*)var58)->values[1]=var63;
{
var64 = ((val*(*)(val* self))(var58->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var58); /* native_to_s on <var58:NativeArray[String]>*/
}
varonce57 = var58;
{
((void(*)(val* self, val* p0, val* p1, val* p2))(var_modelbuilder->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__advice]))(var_modelbuilder, self, var54, var64); /* advice on <var_modelbuilder:ModelBuilder>*/
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
/* method modelize_property#AMethPropdef#build_property for (self: AMethPropdef, ModelBuilder, MClassDef) */
void nit__modelize_property___AMethPropdef___APropdef__build_property(val* self, val* p0, val* p1) {
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
val* var_mclassdef /* var mclassdef: MClassDef */;
val* var /* : nullable TKwinit */;
val* var_n_kwinit /* var n_kwinit: nullable TKwinit */;
val* var1 /* : nullable TKwnew */;
val* var_n_kwnew /* var n_kwnew: nullable TKwnew */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
short int var_ /* var : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
short int var_is_init /* var is_init: Bool */;
val* var7 /* : nullable AMethid */;
val* var_amethodid /* var amethodid: nullable AMethid */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
static val* varonce;
val* var11 /* : String */;
char* var12 /* : NativeString */;
val* var13 /* : FlatString */;
val* var_name /* var name: String */;
val* var_name_node /* var name_node: ANode */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
static val* varonce16;
val* var17 /* : String */;
char* var18 /* : NativeString */;
val* var19 /* : FlatString */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
static val* varonce22;
val* var23 /* : String */;
char* var24 /* : NativeString */;
val* var25 /* : FlatString */;
short int var26 /* : Bool */;
int cltype;
int idtype;
val* var27 /* : TId */;
val* var28 /* : String */;
val* var29 /* : String */;
val* var30 /* : nullable ASignature */;
val* var31 /* : ANodes[AParam] */;
long var32 /* : Int */;
long var_arity /* var arity: Int */;
short int var33 /* : Bool */;
static val* varonce34;
val* var35 /* : String */;
char* var36 /* : NativeString */;
val* var37 /* : FlatString */;
short int var38 /* : Bool */;
short int var_39 /* var : Bool */;
short int var40 /* : Bool */;
short int var42 /* : Bool */;
static val* varonce43;
val* var44 /* : String */;
char* var45 /* : NativeString */;
val* var46 /* : FlatString */;
short int var47 /* : Bool */;
static val* varonce48;
val* var49 /* : String */;
char* var50 /* : NativeString */;
val* var51 /* : FlatString */;
short int var52 /* : Bool */;
short int var_53 /* var : Bool */;
short int var54 /* : Bool */;
short int var56 /* : Bool */;
static val* varonce57;
val* var58 /* : String */;
char* var59 /* : NativeString */;
val* var60 /* : FlatString */;
short int var61 /* : Bool */;
static val* varonce62;
val* var63 /* : String */;
char* var64 /* : NativeString */;
val* var65 /* : FlatString */;
short int var66 /* : Bool */;
short int var_67 /* var : Bool */;
short int var68 /* : Bool */;
short int var70 /* : Bool */;
static val* varonce71;
val* var72 /* : String */;
char* var73 /* : NativeString */;
val* var74 /* : FlatString */;
short int var75 /* : Bool */;
short int var76 /* : Bool */;
short int var_77 /* var : Bool */;
short int var78 /* : Bool */;
short int var80 /* : Bool */;
short int var81 /* : Bool */;
val* var82 /* : nullable ASignature */;
val* var84 /* : NativeArray[String] */;
static val* varonce83;
static val* varonce85;
val* var86 /* : String */;
char* var87 /* : NativeString */;
val* var88 /* : FlatString */;
static val* varonce89;
val* var90 /* : String */;
char* var91 /* : NativeString */;
val* var92 /* : FlatString */;
static val* varonce93;
val* var94 /* : String */;
char* var95 /* : NativeString */;
val* var96 /* : FlatString */;
val* var97 /* : String */;
val* var98 /* : String */;
long var99 /* : Int */;
short int var100 /* : Bool */;
short int var102 /* : Bool */;
int cltype103;
int idtype104;
const char* var_class_name;
short int var105 /* : Bool */;
val* var106 /* : nullable ASignature */;
val* var108 /* : NativeArray[String] */;
static val* varonce107;
static val* varonce109;
val* var110 /* : String */;
char* var111 /* : NativeString */;
val* var112 /* : FlatString */;
static val* varonce113;
val* var114 /* : String */;
char* var115 /* : NativeString */;
val* var116 /* : FlatString */;
static val* varonce117;
val* var118 /* : String */;
char* var119 /* : NativeString */;
val* var120 /* : FlatString */;
static val* varonce121;
val* var122 /* : String */;
char* var123 /* : NativeString */;
val* var124 /* : FlatString */;
long var125 /* : Int */;
val* var126 /* : String */;
val* var127 /* : String */;
val* var128 /* : String */;
short int var129 /* : Bool */;
short int var_look_like_a_root_init /* var look_like_a_root_init: Bool */;
val* var_mprop /* var mprop: nullable MMethod */;
short int var130 /* : Bool */;
short int var131 /* : Bool */;
short int var_132 /* var : Bool */;
val* var133 /* : nullable TKwredef */;
short int var134 /* : Bool */;
short int var135 /* : Bool */;
val* var136 /* : nullable MProperty */;
short int var137 /* : Bool */;
int cltype138;
int idtype139;
const char* var_class_name140;
short int var141 /* : Bool */;
short int var142 /* : Bool */;
short int var143 /* : Bool */;
short int var_144 /* var : Bool */;
val* var145 /* : nullable MMethod */;
val* var146 /* : nullable AExpr */;
val* var_nb /* var nb: nullable AExpr */;
short int var147 /* : Bool */;
short int var148 /* : Bool */;
short int var149 /* : Bool */;
int cltype150;
int idtype151;
short int var_152 /* var : Bool */;
val* var153 /* : ANodes[AExpr] */;
short int var154 /* : Bool */;
short int var_155 /* var : Bool */;
val* var156 /* : nullable ADoc */;
short int var157 /* : Bool */;
short int var158 /* : Bool */;
static val* varonce159;
val* var160 /* : String */;
char* var161 /* : NativeString */;
val* var162 /* : FlatString */;
val* var164 /* : NativeArray[String] */;
static val* varonce163;
static val* varonce165;
val* var166 /* : String */;
char* var167 /* : NativeString */;
val* var168 /* : FlatString */;
val* var169 /* : String */;
val* var170 /* : String */;
short int var171 /* : Bool */;
short int var172 /* : Bool */;
val* var173 /* : nullable AVisibility */;
val* var174 /* : MVisibility */;
val* var_mvisibility /* var mvisibility: MVisibility */;
val* var175 /* : MMethod */;
short int var176 /* : Bool */;
short int var_177 /* var : Bool */;
val* var178 /* : nullable MMethod */;
short int var179 /* : Bool */;
short int var180 /* : Bool */;
short int var181 /* : Bool */;
short int var182 /* : Bool */;
short int var183 /* : Bool */;
val* var184 /* : MClass */;
static val* varonce185;
val* var186 /* : String */;
char* var187 /* : NativeString */;
val* var188 /* : FlatString */;
short int var189 /* : Bool */;
val* var190 /* : nullable TKwredef */;
short int var191 /* : Bool */;
val* var192 /* : nullable TKwredef */;
short int var193 /* : Bool */;
int cltype194;
int idtype195;
short int var196 /* : Bool */;
short int var197 /* : Bool */;
short int var198 /* : Bool */;
val* var199 /* : nullable AVisibility */;
val* var200 /* : Map[MProperty, APropdef] */;
val* var_201 /* var : Map[MProperty, APropdef] */;
val* var202 /* : MapIterator[nullable Object, nullable Object] */;
val* var_203 /* var : MapIterator[MProperty, APropdef] */;
short int var204 /* : Bool */;
val* var205 /* : nullable Object */;
val* var_p /* var p: MProperty */;
val* var206 /* : nullable Object */;
val* var_n /* var n: APropdef */;
short int var207 /* : Bool */;
short int var208 /* : Bool */;
short int var209 /* : Bool */;
short int var_210 /* var : Bool */;
short int var211 /* : Bool */;
int cltype212;
int idtype213;
short int var_214 /* var : Bool */;
val* var215 /* : String */;
short int var216 /* : Bool */;
val* var217 /* : nullable TKwredef */;
short int var218 /* : Bool */;
val* var219 /* : Map[MProperty, APropdef] */;
val* var220 /* : MMethodDef */;
val* var221 /* : Location */;
val* var_mpropdef /* var mpropdef: MMethodDef */;
short int var222 /* : Bool */;
int cltype223;
int idtype224;
const struct type* type_struct;
const char* var_class_name225;
val* var226 /* : HashMap[MPropDef, APropdef] */;
short int var227 /* : Bool */;
val* var228 /* : ToolContext */;
val* var230 /* : NativeArray[String] */;
static val* varonce229;
static val* varonce231;
val* var232 /* : String */;
char* var233 /* : NativeString */;
val* var234 /* : FlatString */;
val* var235 /* : String */;
val* var236 /* : String */;
val* var237 /* : String */;
val* var238 /* : ToolContext */;
val* var240 /* : NativeArray[String] */;
static val* varonce239;
static val* varonce241;
val* var242 /* : String */;
char* var243 /* : NativeString */;
val* var244 /* : FlatString */;
val* var245 /* : String */;
val* var246 /* : String */;
val* var247 /* : String */;
var_modelbuilder = p0;
var_mclassdef = p1;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AMethPropdef__n_kwinit]))(self); /* n_kwinit on <self:AMethPropdef>*/
}
var_n_kwinit = var;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AMethPropdef__n_kwnew]))(self); /* n_kwnew on <self:AMethPropdef>*/
}
var_n_kwnew = var1;
if (var_n_kwinit == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (0) {
var4 = ((short int(*)(val* self, val* p0))(var_n_kwinit->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_n_kwinit, ((val*)NULL)); /* != on <var_n_kwinit:nullable TKwinit>*/
var3 = var4;
}
var_ = var3;
if (var3){
var2 = var_;
} else {
if (var_n_kwnew == NULL) {
var5 = 0; /* is null */
} else {
var5 = 1; /* arg is null and recv is not */
}
if (0) {
var6 = ((short int(*)(val* self, val* p0))(var_n_kwnew->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_n_kwnew, ((val*)NULL)); /* != on <var_n_kwnew:nullable TKwnew>*/
var5 = var6;
}
var2 = var5;
}
var_is_init = var2;
{
var7 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AMethPropdef__n_methid]))(self); /* n_methid on <self:AMethPropdef>*/
}
var_amethodid = var7;
if (var_amethodid == NULL) {
var8 = 1; /* is null */
} else {
var8 = 0; /* arg is null but recv is not */
}
if (0) {
var9 = ((short int(*)(val* self, val* p0))(var_amethodid->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_amethodid, ((val*)NULL)); /* == on <var_amethodid:nullable AMethid>*/
var8 = var9;
}
if (var8){
var10 = !var_is_init;
if (var10){
if (likely(varonce!=NULL)) {
var11 = varonce;
} else {
var12 = "main";
var13 = standard___standard__NativeString___to_s_with_length(var12, 4l);
var11 = var13;
varonce = var11;
}
var_name = var11;
var_name_node = self;
} else {
if (var_n_kwinit == NULL) {
var14 = 0; /* is null */
} else {
var14 = 1; /* arg is null and recv is not */
}
if (0) {
var15 = ((short int(*)(val* self, val* p0))(var_n_kwinit->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_n_kwinit, ((val*)NULL)); /* != on <var_n_kwinit:nullable TKwinit>*/
var14 = var15;
}
if (var14){
if (likely(varonce16!=NULL)) {
var17 = varonce16;
} else {
var18 = "init";
var19 = standard___standard__NativeString___to_s_with_length(var18, 4l);
var17 = var19;
varonce16 = var17;
}
var_name = var17;
var_name_node = var_n_kwinit;
} else {
if (var_n_kwnew == NULL) {
var20 = 0; /* is null */
} else {
var20 = 1; /* arg is null and recv is not */
}
if (0) {
var21 = ((short int(*)(val* self, val* p0))(var_n_kwnew->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_n_kwnew, ((val*)NULL)); /* != on <var_n_kwnew:nullable TKwnew>*/
var20 = var21;
}
if (var20){
if (likely(varonce22!=NULL)) {
var23 = varonce22;
} else {
var24 = "new";
var25 = standard___standard__NativeString___to_s_with_length(var24, 3l);
var23 = var25;
varonce22 = var23;
}
var_name = var23;
var_name_node = var_n_kwnew;
} else {
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 789);
fatal_exit(1);
}
}
}
} else {
/* <var_amethodid:nullable AMethid(AMethid)> isa AIdMethid */
cltype = type_nit__AIdMethid.color;
idtype = type_nit__AIdMethid.id;
if(cltype >= var_amethodid->type->table_size) {
var26 = 0;
} else {
var26 = var_amethodid->type->type_table[cltype] == idtype;
}
if (var26){
{
var27 = ((val*(*)(val* self))(var_amethodid->class->vft[COLOR_nit__parser_nodes__AIdMethid__n_id]))(var_amethodid); /* n_id on <var_amethodid:nullable AMethid(AIdMethid)>*/
}
{
var28 = ((val*(*)(val* self))(var27->class->vft[COLOR_nit__parser_nodes__Token__text]))(var27); /* text on <var27:TId>*/
}
var_name = var28;
var_name_node = var_amethodid;
} else {
{
var29 = ((val*(*)(val* self))(var_amethodid->class->vft[COLOR_nit__parser_work__Prod__collect_text]))(var_amethodid); /* collect_text on <var_amethodid:nullable AMethid(AMethid)>*/
}
var_name = var29;
var_name_node = var_amethodid;
{
var30 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AMethPropdef__n_signature]))(self); /* n_signature on <self:AMethPropdef>*/
}
if (var30 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 799);
fatal_exit(1);
} else {
var31 = ((val*(*)(val* self))(var30->class->vft[COLOR_nit__parser_nodes__ASignature__n_params]))(var30); /* n_params on <var30:nullable ASignature>*/
}
{
var32 = ((long(*)(val* self))(var31->class->vft[COLOR_standard__abstract_collection__Collection__length]))(var31); /* length on <var31:ANodes[AParam]>*/
}
var_arity = var32;
if (likely(varonce34!=NULL)) {
var35 = varonce34;
} else {
var36 = "+";
var37 = standard___standard__NativeString___to_s_with_length(var36, 1l);
var35 = var37;
varonce34 = var35;
}
{
var38 = ((short int(*)(val* self, val* p0))(var_name->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_name, var35); /* == on <var_name:String>*/
}
var_39 = var38;
if (var38){
{
{ /* Inline kernel#Int#== (var_arity,0l) on <var_arity:Int> */
var42 = var_arity == 0l;
var40 = var42;
goto RET_LABEL41;
RET_LABEL41:(void)0;
}
}
var33 = var40;
} else {
var33 = var_39;
}
if (var33){
if (likely(varonce43!=NULL)) {
var44 = varonce43;
} else {
var45 = "unary +";
var46 = standard___standard__NativeString___to_s_with_length(var45, 7l);
var44 = var46;
varonce43 = var44;
}
var_name = var44;
} else {
if (likely(varonce48!=NULL)) {
var49 = varonce48;
} else {
var50 = "-";
var51 = standard___standard__NativeString___to_s_with_length(var50, 1l);
var49 = var51;
varonce48 = var49;
}
{
var52 = ((short int(*)(val* self, val* p0))(var_name->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_name, var49); /* == on <var_name:String>*/
}
var_53 = var52;
if (var52){
{
{ /* Inline kernel#Int#== (var_arity,0l) on <var_arity:Int> */
var56 = var_arity == 0l;
var54 = var56;
goto RET_LABEL55;
RET_LABEL55:(void)0;
}
}
var47 = var54;
} else {
var47 = var_53;
}
if (var47){
if (likely(varonce57!=NULL)) {
var58 = varonce57;
} else {
var59 = "unary -";
var60 = standard___standard__NativeString___to_s_with_length(var59, 7l);
var58 = var60;
varonce57 = var58;
}
var_name = var58;
} else {
if (likely(varonce62!=NULL)) {
var63 = varonce62;
} else {
var64 = "~";
var65 = standard___standard__NativeString___to_s_with_length(var64, 1l);
var63 = var65;
varonce62 = var63;
}
{
var66 = ((short int(*)(val* self, val* p0))(var_name->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_name, var63); /* == on <var_name:String>*/
}
var_67 = var66;
if (var66){
{
{ /* Inline kernel#Int#== (var_arity,0l) on <var_arity:Int> */
var70 = var_arity == 0l;
var68 = var70;
goto RET_LABEL69;
RET_LABEL69:(void)0;
}
}
var61 = var68;
} else {
var61 = var_67;
}
if (var61){
if (likely(varonce71!=NULL)) {
var72 = varonce71;
} else {
var73 = "unary ~";
var74 = standard___standard__NativeString___to_s_with_length(var73, 7l);
var72 = var74;
varonce71 = var72;
}
var_name = var72;
} else {
{
var76 = ((short int(*)(val* self))(var_amethodid->class->vft[COLOR_nit__modelize_property__AMethid__is_binary]))(var_amethodid); /* is_binary on <var_amethodid:nullable AMethid(AMethid)>*/
}
var_77 = var76;
if (var76){
{
{ /* Inline kernel#Int#!= (var_arity,1l) on <var_arity:Int> */
var80 = var_arity == 1l;
var81 = !var80;
var78 = var81;
goto RET_LABEL79;
RET_LABEL79:(void)0;
}
}
var75 = var78;
} else {
var75 = var_77;
}
if (var75){
{
var82 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AMethPropdef__n_signature]))(self); /* n_signature on <self:AMethPropdef>*/
}
if (unlikely(varonce83==NULL)) {
var84 = NEW_standard__NativeArray(5l, &type_standard__NativeArray__standard__String);
if (likely(varonce85!=NULL)) {
var86 = varonce85;
} else {
var87 = "Syntax Error: binary operator `";
var88 = standard___standard__NativeString___to_s_with_length(var87, 31l);
var86 = var88;
varonce85 = var86;
}
((struct instance_standard__NativeArray*)var84)->values[0]=var86;
if (likely(varonce89!=NULL)) {
var90 = varonce89;
} else {
var91 = "` requires exactly one parameter; got ";
var92 = standard___standard__NativeString___to_s_with_length(var91, 38l);
var90 = var92;
varonce89 = var90;
}
((struct instance_standard__NativeArray*)var84)->values[2]=var90;
if (likely(varonce93!=NULL)) {
var94 = varonce93;
} else {
var95 = ".";
var96 = standard___standard__NativeString___to_s_with_length(var95, 1l);
var94 = var96;
varonce93 = var94;
}
((struct instance_standard__NativeArray*)var84)->values[4]=var94;
} else {
var84 = varonce83;
varonce83 = NULL;
}
((struct instance_standard__NativeArray*)var84)->values[1]=var_name;
var97 = standard__string___Int___Object__to_s(var_arity);
((struct instance_standard__NativeArray*)var84)->values[3]=var97;
{
var98 = ((val*(*)(val* self))(var84->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var84); /* native_to_s on <var84:NativeArray[String]>*/
}
varonce83 = var84;
{
((void(*)(val* self, val* p0, val* p1))(var_modelbuilder->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__error]))(var_modelbuilder, var82, var98); /* error on <var_modelbuilder:ModelBuilder>*/
}
} else {
{
var99 = ((long(*)(val* self))(var_amethodid->class->vft[COLOR_nit__modelize_property__AMethid__min_arity]))(var_amethodid); /* min_arity on <var_amethodid:nullable AMethid(AMethid)>*/
}
{
{ /* Inline kernel#Int#> (var99,var_arity) on <var99:Int> */
/* Covariant cast for argument 0 (i) <var_arity:Int> isa OTHER */
/* <var_arity:Int> isa OTHER */
var102 = 1; /* easy <var_arity:Int> isa OTHER*/
if (unlikely(!var102)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 425);
fatal_exit(1);
}
var105 = var99 > var_arity;
var100 = var105;
goto RET_LABEL101;
RET_LABEL101:(void)0;
}
}
if (var100){
{
var106 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AMethPropdef__n_signature]))(self); /* n_signature on <self:AMethPropdef>*/
}
if (unlikely(varonce107==NULL)) {
var108 = NEW_standard__NativeArray(7l, &type_standard__NativeArray__standard__String);
if (likely(varonce109!=NULL)) {
var110 = varonce109;
} else {
var111 = "Syntax Error: `";
var112 = standard___standard__NativeString___to_s_with_length(var111, 15l);
var110 = var112;
varonce109 = var110;
}
((struct instance_standard__NativeArray*)var108)->values[0]=var110;
if (likely(varonce113!=NULL)) {
var114 = varonce113;
} else {
var115 = "` requires at least ";
var116 = standard___standard__NativeString___to_s_with_length(var115, 20l);
var114 = var116;
varonce113 = var114;
}
((struct instance_standard__NativeArray*)var108)->values[2]=var114;
if (likely(varonce117!=NULL)) {
var118 = varonce117;
} else {
var119 = " parameter(s); got ";
var120 = standard___standard__NativeString___to_s_with_length(var119, 19l);
var118 = var120;
varonce117 = var118;
}
((struct instance_standard__NativeArray*)var108)->values[4]=var118;
if (likely(varonce121!=NULL)) {
var122 = varonce121;
} else {
var123 = ".";
var124 = standard___standard__NativeString___to_s_with_length(var123, 1l);
var122 = var124;
varonce121 = var122;
}
((struct instance_standard__NativeArray*)var108)->values[6]=var122;
} else {
var108 = varonce107;
varonce107 = NULL;
}
((struct instance_standard__NativeArray*)var108)->values[1]=var_name;
{
var125 = ((long(*)(val* self))(var_amethodid->class->vft[COLOR_nit__modelize_property__AMethid__min_arity]))(var_amethodid); /* min_arity on <var_amethodid:nullable AMethid(AMethid)>*/
}
var126 = standard__string___Int___Object__to_s(var125);
((struct instance_standard__NativeArray*)var108)->values[3]=var126;
var127 = standard__string___Int___Object__to_s(var_arity);
((struct instance_standard__NativeArray*)var108)->values[5]=var127;
{
var128 = ((val*(*)(val* self))(var108->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var108); /* native_to_s on <var108:NativeArray[String]>*/
}
varonce107 = var108;
{
((void(*)(val* self, val* p0, val* p1))(var_modelbuilder->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__error]))(var_modelbuilder, var106, var128); /* error on <var_modelbuilder:ModelBuilder>*/
}
} else {
}
}
}
}
}
}
}
{
var129 = ((short int(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__modelize_property__AMethPropdef__look_like_a_root_init]))(self, var_modelbuilder, var_mclassdef); /* look_like_a_root_init on <self:AMethPropdef>*/
}
var_look_like_a_root_init = var129;
var_mprop = ((val*)NULL);
var131 = !var_is_init;
var_132 = var131;
if (var131){
var130 = var_132;
} else {
{
var133 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ADefinition__n_kwredef]))(self); /* n_kwredef on <self:AMethPropdef>*/
}
if (var133 == NULL) {
var134 = 0; /* is null */
} else {
var134 = 1; /* arg is null and recv is not */
}
if (0) {
var135 = ((short int(*)(val* self, val* p0))(var133->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var133, ((val*)NULL)); /* != on <var133:nullable TKwredef>*/
var134 = var135;
}
var130 = var134;
}
if (var130){
{
var136 = ((val*(*)(val* self, val* p0, val* p1, val* p2))(var_modelbuilder->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__try_get_mproperty_by_name]))(var_modelbuilder, var_name_node, var_mclassdef, var_name); /* try_get_mproperty_by_name on <var_modelbuilder:ModelBuilder>*/
}
/* <var136:nullable MProperty> isa nullable MMethod */
cltype138 = type_nullable__nit__MMethod.color;
idtype139 = type_nullable__nit__MMethod.id;
if(var136 == NULL) {
var137 = 1;
} else {
if(cltype138 >= var136->type->table_size) {
var137 = 0;
} else {
var137 = var136->type->type_table[cltype138] == idtype139;
}
}
if (unlikely(!var137)) {
var_class_name140 = var136 == NULL ? "null" : var136->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable MMethod", var_class_name140);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 817);
fatal_exit(1);
}
var_mprop = var136;
} else {
}
if (var_mprop == NULL) {
var142 = 1; /* is null */
} else {
var142 = 0; /* arg is null but recv is not */
}
if (0) {
var143 = ((short int(*)(val* self, val* p0))(var_mprop->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_mprop, ((val*)NULL)); /* == on <var_mprop:nullable MMethod>*/
var142 = var143;
}
var_144 = var142;
if (var142){
var141 = var_look_like_a_root_init;
} else {
var141 = var_144;
}
if (var141){
{
var145 = ((val*(*)(val* self))(var_modelbuilder->class->vft[COLOR_nit__modelize_property__ModelBuilder__the_root_init_mmethod]))(var_modelbuilder); /* the_root_init_mmethod on <var_modelbuilder:ModelBuilder>*/
}
var_mprop = var145;
{
var146 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AMethPropdef__n_block]))(self); /* n_block on <self:AMethPropdef>*/
}
var_nb = var146;
/* <var_nb:nullable AExpr> isa ABlockExpr */
cltype150 = type_nit__ABlockExpr.color;
idtype151 = type_nit__ABlockExpr.id;
if(var_nb == NULL) {
var149 = 0;
} else {
if(cltype150 >= var_nb->type->table_size) {
var149 = 0;
} else {
var149 = var_nb->type->type_table[cltype150] == idtype151;
}
}
var_152 = var149;
if (var149){
{
var153 = ((val*(*)(val* self))(var_nb->class->vft[COLOR_nit__parser_nodes__ABlockExpr__n_expr]))(var_nb); /* n_expr on <var_nb:nullable AExpr(ABlockExpr)>*/
}
{
var154 = ((short int(*)(val* self))(var153->class->vft[COLOR_standard__abstract_collection__Collection__is_empty]))(var153); /* is_empty on <var153:ANodes[AExpr]>*/
}
var148 = var154;
} else {
var148 = var_152;
}
var_155 = var148;
if (var148){
{
var156 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ADefinition__n_doc]))(self); /* n_doc on <self:AMethPropdef>*/
}
if (var156 == NULL) {
var157 = 1; /* is null */
} else {
var157 = 0; /* arg is null but recv is not */
}
if (0) {
var158 = ((short int(*)(val* self, val* p0))(var156->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var156, ((val*)NULL)); /* == on <var156:nullable ADoc>*/
var157 = var158;
}
var147 = var157;
} else {
var147 = var_155;
}
if (var147){
if (likely(varonce159!=NULL)) {
var160 = varonce159;
} else {
var161 = "useless-init";
var162 = standard___standard__NativeString___to_s_with_length(var161, 12l);
var160 = var162;
varonce159 = var160;
}
if (unlikely(varonce163==NULL)) {
var164 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce165!=NULL)) {
var166 = varonce165;
} else {
var167 = "Warning: useless empty init in ";
var168 = standard___standard__NativeString___to_s_with_length(var167, 31l);
var166 = var168;
varonce165 = var166;
}
((struct instance_standard__NativeArray*)var164)->values[0]=var166;
} else {
var164 = varonce163;
varonce163 = NULL;
}
{
var169 = ((val*(*)(val* self))(var_mclassdef->class->vft[COLOR_standard__string__Object__to_s]))(var_mclassdef); /* to_s on <var_mclassdef:MClassDef>*/
}
((struct instance_standard__NativeArray*)var164)->values[1]=var169;
{
var170 = ((val*(*)(val* self))(var164->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var164); /* native_to_s on <var164:NativeArray[String]>*/
}
varonce163 = var164;
{
((void(*)(val* self, val* p0, val* p1, val* p2))(var_modelbuilder->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__advice]))(var_modelbuilder, self, var160, var170); /* advice on <var_modelbuilder:ModelBuilder>*/
}
} else {
}
} else {
}
if (var_mprop == NULL) {
var171 = 1; /* is null */
} else {
var171 = 0; /* arg is null but recv is not */
}
if (0) {
var172 = ((short int(*)(val* self, val* p0))(var_mprop->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_mprop, ((val*)NULL)); /* == on <var_mprop:nullable MMethod>*/
var171 = var172;
}
if (var171){
{
var173 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ADefinition__n_visibility]))(self); /* n_visibility on <self:AMethPropdef>*/
}
{
var174 = ((val*(*)(val* self, val* p0, val* p1, val* p2))(self->class->vft[COLOR_nit__modelize_property__APropdef__new_property_visibility]))(self, var_modelbuilder, var_mclassdef, var173); /* new_property_visibility on <self:AMethPropdef>*/
}
var_mvisibility = var174;
var175 = NEW_nit__MMethod(&type_nit__MMethod);
{
((void(*)(val* self, val* p0))(var175->class->vft[COLOR_nit__model__MProperty__intro_mclassdef_61d]))(var175, var_mclassdef); /* intro_mclassdef= on <var175:MMethod>*/
}
{
((void(*)(val* self, val* p0))(var175->class->vft[COLOR_nit__model__MProperty__name_61d]))(var175, var_name); /* name= on <var175:MMethod>*/
}
{
((void(*)(val* self, val* p0))(var175->class->vft[COLOR_nit__model__MProperty__visibility_61d]))(var175, var_mvisibility); /* visibility= on <var175:MMethod>*/
}
{
((void(*)(val* self))(var175->class->vft[COLOR_standard__kernel__Object__init]))(var175); /* init on <var175:MMethod>*/
}
var_mprop = var175;
var_177 = var_look_like_a_root_init;
if (var_look_like_a_root_init){
{
var178 = ((val*(*)(val* self))(var_modelbuilder->class->vft[COLOR_nit__modelize_property__ModelBuilder__the_root_init_mmethod]))(var_modelbuilder); /* the_root_init_mmethod on <var_modelbuilder:ModelBuilder>*/
}
if (var178 == NULL) {
var179 = 1; /* is null */
} else {
var179 = 0; /* arg is null but recv is not */
}
if (0) {
var180 = ((short int(*)(val* self, val* p0))(var178->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var178, ((val*)NULL)); /* == on <var178:nullable MMethod>*/
var179 = var180;
}
var176 = var179;
} else {
var176 = var_177;
}
if (var176){
{
((void(*)(val* self, val* p0))(var_modelbuilder->class->vft[COLOR_nit__modelize_property__ModelBuilder__the_root_init_mmethod_61d]))(var_modelbuilder, var_mprop); /* the_root_init_mmethod= on <var_modelbuilder:ModelBuilder>*/
}
{
((void(*)(val* self, short int p0))(var_mprop->class->vft[COLOR_nit__model__MMethod__is_root_init_61d]))(var_mprop, 1); /* is_root_init= on <var_mprop:nullable MMethod(MMethod)>*/
}
} else {
}
{
((void(*)(val* self, short int p0))(var_mprop->class->vft[COLOR_nit__model__MMethod__is_init_61d]))(var_mprop, var_is_init); /* is_init= on <var_mprop:nullable MMethod(MMethod)>*/
}
if (var_n_kwnew == NULL) {
var181 = 0; /* is null */
} else {
var181 = 1; /* arg is null and recv is not */
}
if (0) {
var182 = ((short int(*)(val* self, val* p0))(var_n_kwnew->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_n_kwnew, ((val*)NULL)); /* != on <var_n_kwnew:nullable TKwnew>*/
var181 = var182;
}
{
((void(*)(val* self, short int p0))(var_mprop->class->vft[COLOR_nit__model__MMethod__is_new_61d]))(var_mprop, var181); /* is_new= on <var_mprop:nullable MMethod(MMethod)>*/
}
{
var183 = ((short int(*)(val* self))(var_mprop->class->vft[COLOR_nit__model__MMethod__is_new]))(var_mprop); /* is_new on <var_mprop:nullable MMethod(MMethod)>*/
}
if (var183){
{
var184 = ((val*(*)(val* self))(var_mclassdef->class->vft[COLOR_nit__model__MClassDef__mclass]))(var_mclassdef); /* mclass on <var_mclassdef:MClassDef>*/
}
{
((void(*)(val* self, short int p0))(var184->class->vft[COLOR_nit__model__MClass__has_new_factory_61d]))(var184, 1); /* has_new_factory= on <var184:MClass>*/
}
} else {
}
if (likely(varonce185!=NULL)) {
var186 = varonce185;
} else {
var187 = "sys";
var188 = standard___standard__NativeString___to_s_with_length(var187, 3l);
var186 = var188;
varonce185 = var186;
}
{
var189 = ((short int(*)(val* self, val* p0))(var_name->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_name, var186); /* == on <var_name:String>*/
}
if (var189){
{
((void(*)(val* self, short int p0))(var_mprop->class->vft[COLOR_nit__model__MMethod__is_toplevel_61d]))(var_mprop, 1); /* is_toplevel= on <var_mprop:nullable MMethod(MMethod)>*/
}
} else {
}
{
var190 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ADefinition__n_kwredef]))(self); /* n_kwredef on <self:AMethPropdef>*/
}
{
var191 = ((short int(*)(val* self, val* p0, val* p1, val* p2, short int p3, val* p4))(self->class->vft[COLOR_nit__modelize_property__APropdef__check_redef_keyword]))(self, var_modelbuilder, var_mclassdef, var190, 0, var_mprop); /* check_redef_keyword on <self:AMethPropdef>*/
}
} else {
{
var192 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ADefinition__n_kwredef]))(self); /* n_kwredef on <self:AMethPropdef>*/
}
/* <self:AMethPropdef> isa AMainMethPropdef */
cltype194 = type_nit__AMainMethPropdef.color;
idtype195 = type_nit__AMainMethPropdef.id;
if(cltype194 >= self->type->table_size) {
var193 = 0;
} else {
var193 = self->type->type_table[cltype194] == idtype195;
}
var196 = !var193;
{
var197 = ((short int(*)(val* self, val* p0, val* p1, val* p2, short int p3, val* p4))(self->class->vft[COLOR_nit__modelize_property__APropdef__check_redef_keyword]))(self, var_modelbuilder, var_mclassdef, var192, var196, var_mprop); /* check_redef_keyword on <self:AMethPropdef>*/
}
var198 = !var197;
if (var198){
goto RET_LABEL;
} else {
}
{
var199 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ADefinition__n_visibility]))(self); /* n_visibility on <self:AMethPropdef>*/
}
{
((void(*)(val* self, val* p0, val* p1, val* p2))(self->class->vft[COLOR_nit__modelize_property__APropdef__check_redef_property_visibility]))(self, var_modelbuilder, var199, var_mprop); /* check_redef_property_visibility on <self:AMethPropdef>*/
}
}
if (var_is_init){
{
var200 = ((val*(*)(val* self))(var_mclassdef->class->vft[COLOR_nit__modelize_property__MClassDef__mprop2npropdef]))(var_mclassdef); /* mprop2npropdef on <var_mclassdef:MClassDef>*/
}
var_201 = var200;
{
var202 = ((val*(*)(val* self))((((long)var_201&3)?class_info[((long)var_201&3)]:var_201->class)->vft[COLOR_standard__abstract_collection__MapRead__iterator]))(var_201); /* iterator on <var_201:Map[MProperty, APropdef]>*/
}
var_203 = var202;
for(;;) {
{
var204 = ((short int(*)(val* self))((((long)var_203&3)?class_info[((long)var_203&3)]:var_203->class)->vft[COLOR_standard__abstract_collection__MapIterator__is_ok]))(var_203); /* is_ok on <var_203:MapIterator[MProperty, APropdef]>*/
}
if (var204){
{
var205 = ((val*(*)(val* self))((((long)var_203&3)?class_info[((long)var_203&3)]:var_203->class)->vft[COLOR_standard__abstract_collection__MapIterator__key]))(var_203); /* key on <var_203:MapIterator[MProperty, APropdef]>*/
}
var_p = var205;
{
var206 = ((val*(*)(val* self))((((long)var_203&3)?class_info[((long)var_203&3)]:var_203->class)->vft[COLOR_standard__abstract_collection__MapIterator__item]))(var_203); /* item on <var_203:MapIterator[MProperty, APropdef]>*/
}
var_n = var206;
{
var209 = ((short int(*)(val* self, val* p0))(var_p->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_p, var_mprop); /* != on <var_p:MProperty>*/
}
var_210 = var209;
if (var209){
/* <var_p:MProperty> isa MMethod */
cltype212 = type_nit__MMethod.color;
idtype213 = type_nit__MMethod.id;
if(cltype212 >= var_p->type->table_size) {
var211 = 0;
} else {
var211 = var_p->type->type_table[cltype212] == idtype213;
}
var208 = var211;
} else {
var208 = var_210;
}
var_214 = var208;
if (var208){
{
var215 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__model_base__MEntity__name]))(var_p); /* name on <var_p:MProperty(MMethod)>*/
}
{
var216 = ((short int(*)(val* self, val* p0))(var215->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var215, var_name); /* == on <var215:String>*/
}
var207 = var216;
} else {
var207 = var_214;
}
if (var207){
{
var217 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ADefinition__n_kwredef]))(self); /* n_kwredef on <self:AMethPropdef>*/
}
{
var218 = ((short int(*)(val* self, val* p0, val* p1, val* p2, short int p3, val* p4))(self->class->vft[COLOR_nit__modelize_property__APropdef__check_redef_keyword]))(self, var_modelbuilder, var_mclassdef, var217, 0, var_p); /* check_redef_keyword on <self:AMethPropdef>*/
}
goto BREAK_label;
} else {
}
{
((void(*)(val* self))((((long)var_203&3)?class_info[((long)var_203&3)]:var_203->class)->vft[COLOR_standard__abstract_collection__MapIterator__next]))(var_203); /* next on <var_203:MapIterator[MProperty, APropdef]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_203&3)?class_info[((long)var_203&3)]:var_203->class)->vft[COLOR_standard__abstract_collection__MapIterator__finish]))(var_203); /* finish on <var_203:MapIterator[MProperty, APropdef]>*/
}
} else {
}
{
var219 = ((val*(*)(val* self))(var_mclassdef->class->vft[COLOR_nit__modelize_property__MClassDef__mprop2npropdef]))(var_mclassdef); /* mprop2npropdef on <var_mclassdef:MClassDef>*/
}
{
((void(*)(val* self, val* p0, val* p1))((((long)var219&3)?class_info[((long)var219&3)]:var219->class)->vft[COLOR_standard__abstract_collection__Map___91d_93d_61d]))(var219, var_mprop, self); /* []= on <var219:Map[MProperty, APropdef]>*/
}
var220 = NEW_nit__MMethodDef(&type_nit__MMethodDef);
{
var221 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ANode__location]))(self); /* location on <self:AMethPropdef>*/
}
{
((void(*)(val* self, val* p0))(var220->class->vft[COLOR_nit__model__MPropDef__mclassdef_61d]))(var220, var_mclassdef); /* mclassdef= on <var220:MMethodDef>*/
}
{
((void(*)(val* self, val* p0))(var220->class->vft[COLOR_nit__model__MPropDef__mproperty_61d]))(var220, var_mprop); /* mproperty= on <var220:MMethodDef>*/
}
{
((void(*)(val* self, val* p0))(var220->class->vft[COLOR_nit__model__MPropDef__location_61d]))(var220, var221); /* location= on <var220:MMethodDef>*/
}
{
((void(*)(val* self))(var220->class->vft[COLOR_standard__kernel__Object__init]))(var220); /* init on <var220:MMethodDef>*/
}
var_mpropdef = var220;
{
((void(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__modelize_property__APropdef__set_doc]))(self, var_mpropdef, var_modelbuilder); /* set_doc on <self:AMethPropdef>*/
}
/* <var_mpropdef:MMethodDef> isa nullable MPROPDEF */
type_struct = self->type->resolution_table->types[COLOR_nullable__nit__modelize_property__APropdef__MPROPDEF];
cltype223 = type_struct->color;
idtype224 = type_struct->id;
if(cltype223 >= var_mpropdef->type->table_size) {
var222 = 0;
} else {
var222 = var_mpropdef->type->type_table[cltype223] == idtype224;
}
if (unlikely(!var222)) {
var_class_name225 = var_mpropdef == NULL ? "null" : var_mpropdef->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable MPROPDEF", var_class_name225);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 858);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__modelize_property__APropdef__mpropdef_61d]))(self, var_mpropdef); /* mpropdef= on <self:AMethPropdef>*/
}
{
var226 = ((val*(*)(val* self))(var_modelbuilder->class->vft[COLOR_nit__modelize_property__ModelBuilder__mpropdef2npropdef]))(var_modelbuilder); /* mpropdef2npropdef on <var_modelbuilder:ModelBuilder>*/
}
{
((void(*)(val* self, val* p0, val* p1))(var226->class->vft[COLOR_standard__abstract_collection__Map___91d_93d_61d]))(var226, var_mpropdef, self); /* []= on <var226:HashMap[MPropDef, APropdef]>*/
}
{
var227 = ((short int(*)(val* self))(var_mpropdef->class->vft[COLOR_nit__model__MPropDef__is_intro]))(var_mpropdef); /* is_intro on <var_mpropdef:MMethodDef>*/
}
if (var227){
{
var228 = ((val*(*)(val* self))(var_modelbuilder->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__toolcontext]))(var_modelbuilder); /* toolcontext on <var_modelbuilder:ModelBuilder>*/
}
if (unlikely(varonce229==NULL)) {
var230 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce231!=NULL)) {
var232 = varonce231;
} else {
var233 = " introduces new method ";
var234 = standard___standard__NativeString___to_s_with_length(var233, 23l);
var232 = var234;
varonce231 = var232;
}
((struct instance_standard__NativeArray*)var230)->values[1]=var232;
} else {
var230 = varonce229;
varonce229 = NULL;
}
{
var235 = ((val*(*)(val* self))(var_mpropdef->class->vft[COLOR_standard__string__Object__to_s]))(var_mpropdef); /* to_s on <var_mpropdef:MMethodDef>*/
}
((struct instance_standard__NativeArray*)var230)->values[0]=var235;
{
var236 = ((val*(*)(val* self))(var_mprop->class->vft[COLOR_nit__model_base__MEntity__full_name]))(var_mprop); /* full_name on <var_mprop:nullable MMethod(MMethod)>*/
}
((struct instance_standard__NativeArray*)var230)->values[2]=var236;
{
var237 = ((val*(*)(val* self))(var230->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var230); /* native_to_s on <var230:NativeArray[String]>*/
}
varonce229 = var230;
{
((void(*)(val* self, val* p0, long p1))(var228->class->vft[COLOR_nit__toolcontext__ToolContext__info]))(var228, var237, 4l); /* info on <var228:ToolContext>*/
}
} else {
{
var238 = ((val*(*)(val* self))(var_modelbuilder->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__toolcontext]))(var_modelbuilder); /* toolcontext on <var_modelbuilder:ModelBuilder>*/
}
if (unlikely(varonce239==NULL)) {
var240 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce241!=NULL)) {
var242 = varonce241;
} else {
var243 = " redefines method ";
var244 = standard___standard__NativeString___to_s_with_length(var243, 18l);
var242 = var244;
varonce241 = var242;
}
((struct instance_standard__NativeArray*)var240)->values[1]=var242;
} else {
var240 = varonce239;
varonce239 = NULL;
}
{
var245 = ((val*(*)(val* self))(var_mpropdef->class->vft[COLOR_standard__string__Object__to_s]))(var_mpropdef); /* to_s on <var_mpropdef:MMethodDef>*/
}
((struct instance_standard__NativeArray*)var240)->values[0]=var245;
{
var246 = ((val*(*)(val* self))(var_mprop->class->vft[COLOR_nit__model_base__MEntity__full_name]))(var_mprop); /* full_name on <var_mprop:nullable MMethod(MMethod)>*/
}
((struct instance_standard__NativeArray*)var240)->values[2]=var246;
{
var247 = ((val*(*)(val* self))(var240->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var240); /* native_to_s on <var240:NativeArray[String]>*/
}
varonce239 = var240;
{
((void(*)(val* self, val* p0, long p1))(var238->class->vft[COLOR_nit__toolcontext__ToolContext__info]))(var238, var247, 4l); /* info on <var238:ToolContext>*/
}
}
RET_LABEL:;
}
/* method modelize_property#AMethPropdef#build_signature for (self: AMethPropdef, ModelBuilder) */
void nit__modelize_property___AMethPropdef___APropdef__build_signature(val* self, val* p0) {
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
val* var /* : nullable MPropDef */;
val* var_mpropdef /* var mpropdef: nullable MMethodDef */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : MClassDef */;
val* var_mclassdef /* var mclassdef: MClassDef */;
val* var4 /* : MModule */;
val* var_mmodule /* var mmodule: MModule */;
val* var5 /* : nullable ASignature */;
val* var_nsig /* var nsig: nullable ASignature */;
short int var6 /* : Bool */;
val* var7 /* : MProperty */;
short int var8 /* : Bool */;
short int var_ /* var : Bool */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
val* var11 /* : MClass */;
val* var12 /* : nullable MMethodDef */;
val* var_root_init /* var root_init: nullable MMethodDef */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
val* var15 /* : nullable MSignature */;
val* var16 /* : Array[MProperty] */;
short int var17 /* : Bool */;
val* var18 /* : Array[MProperty] */;
val* var19 /* : Array[MProperty] */;
short int var20 /* : Bool */;
val* var21 /* : nullable AMethid */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
short int var_24 /* var : Bool */;
val* var25 /* : nullable AMethid */;
short int var26 /* : Bool */;
short int var_accept_special_last_parameter /* var accept_special_last_parameter: Bool */;
short int var27 /* : Bool */;
val* var28 /* : nullable AMethid */;
short int var29 /* : Bool */;
short int var30 /* : Bool */;
short int var_31 /* var : Bool */;
val* var32 /* : nullable AMethid */;
short int var33 /* : Bool */;
short int var_return_is_mandatory /* var return_is_mandatory: Bool */;
val* var34 /* : Array[String] */;
val* var_param_names /* var param_names: Array[String] */;
val* var35 /* : Array[MType] */;
val* var_param_types /* var param_types: Array[MType] */;
long var36 /* : Int */;
long var38 /* : Int */;
long var_vararg_rank /* var vararg_rank: Int */;
val* var_ret_type /* var ret_type: nullable MType */;
short int var39 /* : Bool */;
short int var40 /* : Bool */;
short int var41 /* : Bool */;
short int var42 /* : Bool */;
val* var43 /* : Array[String] */;
val* var44 /* : Array[MType] */;
long var45 /* : Int */;
val* var46 /* : nullable MType */;
val* var_msignature /* var msignature: nullable MSignature */;
short int var47 /* : Bool */;
short int var48 /* : Bool */;
val* var49 /* : MProperty */;
val* var50 /* : MPropDef */;
val* var51 /* : nullable MSignature */;
short int var52 /* : Bool */;
short int var53 /* : Bool */;
val* var54 /* : MClass */;
val* var55 /* : MClassType */;
val* var56 /* : MClassType */;
val* var57 /* : MType */;
long var58 /* : Int */;
long var59 /* : Int */;
short int var60 /* : Bool */;
short int var62 /* : Bool */;
short int var63 /* : Bool */;
short int var64 /* : Bool */;
short int var65 /* : Bool */;
val* var_node /* var node: ANode */;
val* var66 /* : NativeArray[String] */;
static val* varonce;
static val* varonce67;
val* var68 /* : String */;
char* var69 /* : NativeString */;
val* var70 /* : FlatString */;
static val* varonce71;
val* var72 /* : String */;
char* var73 /* : NativeString */;
val* var74 /* : FlatString */;
static val* varonce75;
val* var76 /* : String */;
char* var77 /* : NativeString */;
val* var78 /* : FlatString */;
static val* varonce79;
val* var80 /* : String */;
char* var81 /* : NativeString */;
val* var82 /* : FlatString */;
static val* varonce83;
val* var84 /* : String */;
char* var85 /* : NativeString */;
val* var86 /* : FlatString */;
long var87 /* : Int */;
val* var88 /* : String */;
val* var89 /* : MProperty */;
val* var90 /* : String */;
val* var91 /* : String */;
long var92 /* : Int */;
val* var93 /* : String */;
val* var94 /* : MProperty */;
val* var95 /* : String */;
val* var96 /* : String */;
short int var97 /* : Bool */;
val* var98 /* : MProperty */;
short int var99 /* : Bool */;
short int var_100 /* var : Bool */;
val* var101 /* : MProperty */;
short int var102 /* : Bool */;
short int var103 /* : Bool */;
val* var104 /* : Array[MClassType] */;
val* var_105 /* var : Array[MClassType] */;
val* var106 /* : Iterator[nullable Object] */;
val* var_107 /* var : ArrayIterator[MClassType] */;
short int var108 /* : Bool */;
val* var109 /* : nullable Object */;
val* var_msupertype /* var msupertype: MClassType */;
val* var110 /* : MClassType */;
val* var111 /* : MType */;
val* var112 /* : MProperty */;
val* var113 /* : String */;
val* var114 /* : nullable MProperty */;
val* var_candidate /* var candidate: nullable MProperty */;
short int var115 /* : Bool */;
short int var116 /* : Bool */;
short int var117 /* : Bool */;
short int var118 /* : Bool */;
val* var119 /* : MPropDef */;
short int var120 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var121 /* : nullable MSignature */;
short int var122 /* : Bool */;
short int var123 /* : Bool */;
short int var124 /* : Bool */;
short int var125 /* : Bool */;
short int var126 /* : Bool */;
short int var_127 /* var : Bool */;
long var128 /* : Int */;
long var129 /* : Int */;
short int var130 /* : Bool */;
short int var132 /* : Bool */;
short int var133 /* : Bool */;
short int var_134 /* var : Bool */;
long var135 /* : Int */;
long var136 /* : Int */;
short int var137 /* : Bool */;
short int var139 /* : Bool */;
short int var_140 /* var : Bool */;
long var141 /* : Int */;
short int var142 /* : Bool */;
short int var144 /* : Bool */;
val* var145 /* : Array[MType] */;
val* var146 /* : Array[MParameter] */;
val* var_147 /* var : Array[MParameter] */;
val* var148 /* : Iterator[nullable Object] */;
val* var_149 /* var : ArrayIterator[MParameter] */;
short int var150 /* : Bool */;
val* var151 /* : nullable Object */;
val* var_mparameter /* var mparameter: MParameter */;
val* var152 /* : MType */;
long var154 /* : Int */;
short int var155 /* : Bool */;
short int var156 /* : Bool */;
short int var157 /* : Bool */;
short int var_158 /* var : Bool */;
short int var159 /* : Bool */;
short int var160 /* : Bool */;
val* var161 /* : nullable MType */;
long var162 /* : Int */;
long var163 /* : Int */;
short int var164 /* : Bool */;
short int var166 /* : Bool */;
short int var167 /* : Bool */;
val* var168 /* : ANodes[AParam] */;
long var169 /* : Int */;
val* var170 /* : nullable Object */;
val* var172 /* : NativeArray[String] */;
static val* varonce171;
static val* varonce173;
val* var174 /* : String */;
char* var175 /* : NativeString */;
val* var176 /* : FlatString */;
static val* varonce177;
val* var178 /* : String */;
char* var179 /* : NativeString */;
val* var180 /* : FlatString */;
long var181 /* : Int */;
val* var182 /* : nullable Object */;
val* var183 /* : String */;
val* var184 /* : Array[MParameter] */;
val* var_mparameters /* var mparameters: Array[MParameter] */;
long var_i /* var i: Int */;
long var185 /* : Int */;
long var_186 /* var : Int */;
short int var187 /* : Bool */;
short int var189 /* : Bool */;
int cltype190;
int idtype191;
const char* var_class_name192;
short int var193 /* : Bool */;
short int var_is_default /* var is_default: Bool */;
short int var194 /* : Bool */;
long var195 /* : Int */;
long var197 /* : Int */;
short int var198 /* : Bool */;
short int var200 /* : Bool */;
short int var_201 /* var : Bool */;
val* var202 /* : nullable Object */;
short int var203 /* : Bool */;
int cltype204;
int idtype205;
short int var206 /* : Bool */;
long var207 /* : Int */;
long var208 /* : Int */;
short int var210 /* : Bool */;
int cltype211;
int idtype212;
const char* var_class_name213;
long var214 /* : Int */;
short int var215 /* : Bool */;
short int var217 /* : Bool */;
int cltype218;
int idtype219;
const char* var_class_name220;
short int var221 /* : Bool */;
short int var_222 /* var : Bool */;
val* var223 /* : MParameter */;
val* var224 /* : nullable Object */;
val* var225 /* : nullable Object */;
short int var226 /* : Bool */;
short int var228 /* : Bool */;
val* var_mparameter229 /* var mparameter: MParameter */;
short int var230 /* : Bool */;
short int var231 /* : Bool */;
val* var232 /* : ANodes[AParam] */;
val* var233 /* : nullable Object */;
long var234 /* : Int */;
short int var236 /* : Bool */;
short int var237 /* : Bool */;
short int var238 /* : Bool */;
short int var_239 /* var : Bool */;
val* var240 /* : MProperty */;
short int var241 /* : Bool */;
val* var242 /* : MClass */;
val* var243 /* : MClassType */;
short int var244 /* : Bool */;
short int var245 /* : Bool */;
short int var246 /* : Bool */;
short int var_247 /* var : Bool */;
short int var248 /* : Bool */;
short int var_249 /* var : Bool */;
val* var250 /* : nullable Object */;
short int var251 /* : Bool */;
val* var252 /* : nullable ASignature */;
val* var253 /* : ANodes[AParam] */;
val* var254 /* : nullable Object */;
val* var256 /* : NativeArray[String] */;
static val* varonce255;
static val* varonce257;
val* var258 /* : String */;
char* var259 /* : NativeString */;
val* var260 /* : FlatString */;
static val* varonce261;
val* var262 /* : String */;
char* var263 /* : NativeString */;
val* var264 /* : FlatString */;
static val* varonce265;
val* var266 /* : String */;
char* var267 /* : NativeString */;
val* var268 /* : FlatString */;
val* var269 /* : nullable Object */;
val* var270 /* : String */;
val* var271 /* : MProperty */;
val* var272 /* : String */;
val* var273 /* : String */;
short int var274 /* : Bool */;
short int var275 /* : Bool */;
short int var276 /* : Bool */;
short int var_277 /* var : Bool */;
val* var278 /* : nullable AMethid */;
val* var280 /* : NativeArray[String] */;
static val* varonce279;
static val* varonce281;
val* var282 /* : String */;
char* var283 /* : NativeString */;
val* var284 /* : FlatString */;
static val* varonce285;
val* var286 /* : String */;
char* var287 /* : NativeString */;
val* var288 /* : FlatString */;
val* var289 /* : MProperty */;
val* var290 /* : String */;
val* var291 /* : String */;
val* var292 /* : MSignature */;
static val* varonce293;
val* var294 /* : String */;
char* var295 /* : NativeString */;
val* var296 /* : FlatString */;
val* var297 /* : nullable AAnnotation */;
short int var298 /* : Bool */;
short int var299 /* : Bool */;
static val* varonce300;
val* var301 /* : String */;
char* var302 /* : NativeString */;
val* var303 /* : FlatString */;
val* var304 /* : nullable AAnnotation */;
short int var305 /* : Bool */;
short int var306 /* : Bool */;
short int var307 /* : Bool */;
val* var308 /* : nullable AExternCodeBlock */;
short int var309 /* : Bool */;
short int var310 /* : Bool */;
short int var_311 /* var : Bool */;
static val* varonce312;
val* var313 /* : String */;
char* var314 /* : NativeString */;
val* var315 /* : FlatString */;
val* var316 /* : nullable AAnnotation */;
short int var317 /* : Bool */;
short int var318 /* : Bool */;
static val* varonce319;
val* var320 /* : String */;
char* var321 /* : NativeString */;
val* var322 /* : FlatString */;
val* var323 /* : nullable AAnnotation */;
val* var_at /* var at: nullable AAnnotation */;
short int var324 /* : Bool */;
short int var325 /* : Bool */;
static val* varonce326;
val* var327 /* : String */;
char* var328 /* : NativeString */;
val* var329 /* : FlatString */;
var_modelbuilder = p0;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__modelize_property__APropdef__mpropdef]))(self); /* mpropdef on <self:AMethPropdef>*/
}
var_mpropdef = var;
if (var_mpropdef == NULL) {
var1 = 1; /* is null */
} else {
var1 = 0; /* arg is null but recv is not */
}
if (0) {
var2 = ((short int(*)(val* self, val* p0))(var_mpropdef->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_mpropdef, ((val*)NULL)); /* == on <var_mpropdef:nullable MMethodDef>*/
var1 = var2;
}
if (var1){
goto RET_LABEL;
} else {
}
{
var3 = ((val*(*)(val* self))(var_mpropdef->class->vft[COLOR_nit__model__MPropDef__mclassdef]))(var_mpropdef); /* mclassdef on <var_mpropdef:nullable MMethodDef(MMethodDef)>*/
}
var_mclassdef = var3;
{
var4 = ((val*(*)(val* self))(var_mclassdef->class->vft[COLOR_nit__model__MClassDef__mmodule]))(var_mclassdef); /* mmodule on <var_mclassdef:MClassDef>*/
}
var_mmodule = var4;
{
var5 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AMethPropdef__n_signature]))(self); /* n_signature on <self:AMethPropdef>*/
}
var_nsig = var5;
{
var7 = ((val*(*)(val* self))(var_mpropdef->class->vft[COLOR_nit__model__MPropDef__mproperty]))(var_mpropdef); /* mproperty on <var_mpropdef:nullable MMethodDef(MMethodDef)>*/
}
{
var8 = ((short int(*)(val* self))(var7->class->vft[COLOR_nit__model__MMethod__is_root_init]))(var7); /* is_root_init on <var7:MProperty(MMethod)>*/
}
var_ = var8;
if (var8){
{
var9 = ((short int(*)(val* self))(var_mclassdef->class->vft[COLOR_nit__model__MClassDef__is_intro]))(var_mclassdef); /* is_intro on <var_mclassdef:MClassDef>*/
}
var10 = !var9;
var6 = var10;
} else {
var6 = var_;
}
if (var6){
{
var11 = ((val*(*)(val* self))(var_mclassdef->class->vft[COLOR_nit__model__MClassDef__mclass]))(var_mclassdef); /* mclass on <var_mclassdef:MClassDef>*/
}
{
var12 = ((val*(*)(val* self))(var11->class->vft[COLOR_nit__modelize_property__MClass__root_init]))(var11); /* root_init on <var11:MClass>*/
}
var_root_init = var12;
if (var_root_init == NULL) {
var13 = 0; /* is null */
} else {
var13 = 1; /* arg is null and recv is not */
}
if (0) {
var14 = ((short int(*)(val* self, val* p0))(var_root_init->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_root_init, ((val*)NULL)); /* != on <var_root_init:nullable MMethodDef>*/
var13 = var14;
}
if (var13){
{
var15 = ((val*(*)(val* self))(var_root_init->class->vft[COLOR_nit__model__MMethodDef__new_msignature]))(var_root_init); /* new_msignature on <var_root_init:nullable MMethodDef(MMethodDef)>*/
}
{
((void(*)(val* self, val* p0))(var_mpropdef->class->vft[COLOR_nit__model__MMethodDef__new_msignature_61d]))(var_mpropdef, var15); /* new_msignature= on <var_mpropdef:nullable MMethodDef(MMethodDef)>*/
}
{
var16 = ((val*(*)(val* self))(var_mpropdef->class->vft[COLOR_nit__model__MMethodDef__initializers]))(var_mpropdef); /* initializers on <var_mpropdef:nullable MMethodDef(MMethodDef)>*/
}
{
var17 = ((short int(*)(val* self))(var16->class->vft[COLOR_standard__abstract_collection__Collection__is_empty]))(var16); /* is_empty on <var16:Array[MProperty]>*/
}
if (unlikely(!var17)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 880);
fatal_exit(1);
}
{
var18 = ((val*(*)(val* self))(var_mpropdef->class->vft[COLOR_nit__model__MMethodDef__initializers]))(var_mpropdef); /* initializers on <var_mpropdef:nullable MMethodDef(MMethodDef)>*/
}
{
var19 = ((val*(*)(val* self))(var_root_init->class->vft[COLOR_nit__model__MMethodDef__initializers]))(var_root_init); /* initializers on <var_root_init:nullable MMethodDef(MMethodDef)>*/
}
{
((void(*)(val* self, val* p0))(var18->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add_all]))(var18, var19); /* add_all on <var18:Array[MProperty]>*/
}
} else {
}
} else {
}
{
var21 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AMethPropdef__n_methid]))(self); /* n_methid on <self:AMethPropdef>*/
}
if (var21 == NULL) {
var22 = 1; /* is null */
} else {
var22 = 0; /* arg is null but recv is not */
}
if (0) {
var23 = ((short int(*)(val* self, val* p0))(var21->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var21, ((val*)NULL)); /* == on <var21:nullable AMethid>*/
var22 = var23;
}
var_24 = var22;
if (var22){
var20 = var_24;
} else {
{
var25 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AMethPropdef__n_methid]))(self); /* n_methid on <self:AMethPropdef>*/
}
if (var25 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 885);
fatal_exit(1);
} else {
var26 = ((short int(*)(val* self))(var25->class->vft[COLOR_nit__modelize_property__AMethid__accept_special_last_parameter]))(var25); /* accept_special_last_parameter on <var25:nullable AMethid>*/
}
var20 = var26;
}
var_accept_special_last_parameter = var20;
{
var28 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AMethPropdef__n_methid]))(self); /* n_methid on <self:AMethPropdef>*/
}
if (var28 == NULL) {
var29 = 0; /* is null */
} else {
var29 = 1; /* arg is null and recv is not */
}
if (0) {
var30 = ((short int(*)(val* self, val* p0))(var28->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var28, ((val*)NULL)); /* != on <var28:nullable AMethid>*/
var29 = var30;
}
var_31 = var29;
if (var29){
{
var32 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AMethPropdef__n_methid]))(self); /* n_methid on <self:AMethPropdef>*/
}
if (var32 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 886);
fatal_exit(1);
} else {
var33 = ((short int(*)(val* self))(var32->class->vft[COLOR_nit__modelize_property__AMethid__return_is_mandatory]))(var32); /* return_is_mandatory on <var32:nullable AMethid>*/
}
var27 = var33;
} else {
var27 = var_31;
}
var_return_is_mandatory = var27;
var34 = NEW_standard__Array(&type_standard__Array__standard__String);
{
((void(*)(val* self))(var34->class->vft[COLOR_standard__kernel__Object__init]))(var34); /* init on <var34:Array[String]>*/
}
var_param_names = var34;
var35 = NEW_standard__Array(&type_standard__Array__nit__MType);
{
((void(*)(val* self))(var35->class->vft[COLOR_standard__kernel__Object__init]))(var35); /* init on <var35:Array[MType]>*/
}
var_param_types = var35;
{
{ /* Inline kernel#Int#unary - (1l) on <1l:Int> */
var38 = -1l;
var36 = var38;
goto RET_LABEL37;
RET_LABEL37:(void)0;
}
}
var_vararg_rank = var36;
var_ret_type = ((val*)NULL);
if (var_nsig == NULL) {
var39 = 0; /* is null */
} else {
var39 = 1; /* arg is null and recv is not */
}
if (0) {
var40 = ((short int(*)(val* self, val* p0))(var_nsig->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_nsig, ((val*)NULL)); /* != on <var_nsig:nullable ASignature>*/
var39 = var40;
}
if (var39){
{
var41 = ((short int(*)(val* self, val* p0, val* p1))(var_nsig->class->vft[COLOR_nit__modelize_property__ASignature__visit_signature]))(var_nsig, var_modelbuilder, var_mclassdef); /* visit_signature on <var_nsig:nullable ASignature(ASignature)>*/
}
var42 = !var41;
if (var42){
goto RET_LABEL;
} else {
}
{
var43 = ((val*(*)(val* self))(var_nsig->class->vft[COLOR_nit__modelize_property__ASignature__param_names]))(var_nsig); /* param_names on <var_nsig:nullable ASignature(ASignature)>*/
}
var_param_names = var43;
{
var44 = ((val*(*)(val* self))(var_nsig->class->vft[COLOR_nit__modelize_property__ASignature__param_types]))(var_nsig); /* param_types on <var_nsig:nullable ASignature(ASignature)>*/
}
var_param_types = var44;
{
var45 = ((long(*)(val* self))(var_nsig->class->vft[COLOR_nit__modelize_property__ASignature__vararg_rank]))(var_nsig); /* vararg_rank on <var_nsig:nullable ASignature(ASignature)>*/
}
var_vararg_rank = var45;
{
var46 = ((val*(*)(val* self))(var_nsig->class->vft[COLOR_nit__modelize_property__ASignature__ret_type]))(var_nsig); /* ret_type on <var_nsig:nullable ASignature(ASignature)>*/
}
var_ret_type = var46;
} else {
}
var_msignature = ((val*)NULL);
{
var47 = ((short int(*)(val* self))(var_mpropdef->class->vft[COLOR_nit__model__MPropDef__is_intro]))(var_mpropdef); /* is_intro on <var_mpropdef:nullable MMethodDef(MMethodDef)>*/
}
var48 = !var47;
if (var48){
{
var49 = ((val*(*)(val* self))(var_mpropdef->class->vft[COLOR_nit__model__MPropDef__mproperty]))(var_mpropdef); /* mproperty on <var_mpropdef:nullable MMethodDef(MMethodDef)>*/
}
{
var50 = ((val*(*)(val* self))(var49->class->vft[COLOR_nit__model__MProperty__intro]))(var49); /* intro on <var49:MProperty(MMethod)>*/
}
{
var51 = ((val*(*)(val* self))(var50->class->vft[COLOR_nit__model__MMethodDef__msignature]))(var50); /* msignature on <var50:MPropDef(MMethodDef)>*/
}
var_msignature = var51;
if (var_msignature == NULL) {
var52 = 1; /* is null */
} else {
var52 = 0; /* arg is null but recv is not */
}
if (0) {
var53 = ((short int(*)(val* self, val* p0))(var_msignature->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_msignature, ((val*)NULL)); /* == on <var_msignature:nullable MSignature>*/
var52 = var53;
}
if (var52){
goto RET_LABEL;
} else {
}
{
var54 = ((val*(*)(val* self))(var_mclassdef->class->vft[COLOR_nit__model__MClassDef__mclass]))(var_mclassdef); /* mclass on <var_mclassdef:MClassDef>*/
}
{
var55 = ((val*(*)(val* self))(var54->class->vft[COLOR_nit__model__MClass__mclass_type]))(var54); /* mclass_type on <var54:MClass>*/
}
{
var56 = ((val*(*)(val* self))(var_mclassdef->class->vft[COLOR_nit__model__MClassDef__bound_mtype]))(var_mclassdef); /* bound_mtype on <var_mclassdef:MClassDef>*/
}
{
var57 = ((val*(*)(val* self, val* p0, val* p1, val* p2, short int p3))(var_msignature->class->vft[COLOR_nit__model__MType__resolve_for]))(var_msignature, var55, var56, var_mmodule, 0); /* resolve_for on <var_msignature:nullable MSignature(MSignature)>*/
}
var_msignature = var57;
{
var58 = ((long(*)(val* self))(var_param_names->class->vft[COLOR_standard__abstract_collection__Collection__length]))(var_param_names); /* length on <var_param_names:Array[String]>*/
}
{
var59 = ((long(*)(val* self))(var_msignature->class->vft[COLOR_nit__model__MSignature__arity]))(var_msignature); /* arity on <var_msignature:nullable MSignature(MSignature)>*/
}
{
{ /* Inline kernel#Int#!= (var58,var59) on <var58:Int> */
var62 = var58 == var59;
var63 = !var62;
var60 = var63;
goto RET_LABEL61;
RET_LABEL61:(void)0;
}
}
if (var60){
if (var_nsig == NULL) {
var64 = 0; /* is null */
} else {
var64 = 1; /* arg is null and recv is not */
}
if (0) {
var65 = ((short int(*)(val* self, val* p0))(var_nsig->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_nsig, ((val*)NULL)); /* != on <var_nsig:nullable ASignature>*/
var64 = var65;
}
if (var64){
var_node = var_nsig;
} else {
var_node = self;
}
if (unlikely(varonce==NULL)) {
var66 = NEW_standard__NativeArray(10l, &type_standard__NativeArray__standard__String);
if (likely(varonce67!=NULL)) {
var68 = varonce67;
} else {
var69 = "Redef Error: expected ";
var70 = standard___standard__NativeString___to_s_with_length(var69, 22l);
var68 = var70;
varonce67 = var68;
}
((struct instance_standard__NativeArray*)var66)->values[0]=var68;
if (likely(varonce71!=NULL)) {
var72 = varonce71;
} else {
var73 = " parameter(s) for `";
var74 = standard___standard__NativeString___to_s_with_length(var73, 19l);
var72 = var74;
varonce71 = var72;
}
((struct instance_standard__NativeArray*)var66)->values[2]=var72;
if (likely(varonce75!=NULL)) {
var76 = varonce75;
} else {
var77 = "`; got ";
var78 = standard___standard__NativeString___to_s_with_length(var77, 7l);
var76 = var78;
varonce75 = var76;
}
((struct instance_standard__NativeArray*)var66)->values[5]=var76;
if (likely(varonce79!=NULL)) {
var80 = varonce79;
} else {
var81 = ". See introduction at `";
var82 = standard___standard__NativeString___to_s_with_length(var81, 23l);
var80 = var82;
varonce79 = var80;
}
((struct instance_standard__NativeArray*)var66)->values[7]=var80;
if (likely(varonce83!=NULL)) {
var84 = varonce83;
} else {
var85 = "`.";
var86 = standard___standard__NativeString___to_s_with_length(var85, 2l);
var84 = var86;
varonce83 = var84;
}
((struct instance_standard__NativeArray*)var66)->values[9]=var84;
} else {
var66 = varonce;
varonce = NULL;
}
{
var87 = ((long(*)(val* self))(var_msignature->class->vft[COLOR_nit__model__MSignature__arity]))(var_msignature); /* arity on <var_msignature:nullable MSignature(MSignature)>*/
}
var88 = standard__string___Int___Object__to_s(var87);
((struct instance_standard__NativeArray*)var66)->values[1]=var88;
{
var89 = ((val*(*)(val* self))(var_mpropdef->class->vft[COLOR_nit__model__MPropDef__mproperty]))(var_mpropdef); /* mproperty on <var_mpropdef:nullable MMethodDef(MMethodDef)>*/
}
{
var90 = ((val*(*)(val* self))(var89->class->vft[COLOR_nit__model_base__MEntity__name]))(var89); /* name on <var89:MProperty(MMethod)>*/
}
((struct instance_standard__NativeArray*)var66)->values[3]=var90;
{
var91 = ((val*(*)(val* self))(var_msignature->class->vft[COLOR_standard__string__Object__to_s]))(var_msignature); /* to_s on <var_msignature:nullable MSignature(MSignature)>*/
}
((struct instance_standard__NativeArray*)var66)->values[4]=var91;
{
var92 = ((long(*)(val* self))(var_param_names->class->vft[COLOR_standard__abstract_collection__Collection__length]))(var_param_names); /* length on <var_param_names:Array[String]>*/
}
var93 = standard__string___Int___Object__to_s(var92);
((struct instance_standard__NativeArray*)var66)->values[6]=var93;
{
var94 = ((val*(*)(val* self))(var_mpropdef->class->vft[COLOR_nit__model__MPropDef__mproperty]))(var_mpropdef); /* mproperty on <var_mpropdef:nullable MMethodDef(MMethodDef)>*/
}
{
var95 = ((val*(*)(val* self))(var94->class->vft[COLOR_nit__model_base__MEntity__full_name]))(var94); /* full_name on <var94:MProperty(MMethod)>*/
}
((struct instance_standard__NativeArray*)var66)->values[8]=var95;
{
var96 = ((val*(*)(val* self))(var66->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var66); /* native_to_s on <var66:NativeArray[String]>*/
}
varonce = var66;
{
((void(*)(val* self, val* p0, val* p1))(var_modelbuilder->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__error]))(var_modelbuilder, var_node, var96); /* error on <var_modelbuilder:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
} else {
{
var98 = ((val*(*)(val* self))(var_mpropdef->class->vft[COLOR_nit__model__MPropDef__mproperty]))(var_mpropdef); /* mproperty on <var_mpropdef:nullable MMethodDef(MMethodDef)>*/
}
{
var99 = ((short int(*)(val* self))(var98->class->vft[COLOR_nit__model__MMethod__is_init]))(var98); /* is_init on <var98:MProperty(MMethod)>*/
}
var_100 = var99;
if (var99){
{
var101 = ((val*(*)(val* self))(var_mpropdef->class->vft[COLOR_nit__model__MPropDef__mproperty]))(var_mpropdef); /* mproperty on <var_mpropdef:nullable MMethodDef(MMethodDef)>*/
}
{
var102 = ((short int(*)(val* self))(var101->class->vft[COLOR_nit__model__MMethod__is_new]))(var101); /* is_new on <var101:MProperty(MMethod)>*/
}
var103 = !var102;
var97 = var103;
} else {
var97 = var_100;
}
if (var97){
{
var104 = ((val*(*)(val* self))(var_mclassdef->class->vft[COLOR_nit__model__MClassDef__supertypes]))(var_mclassdef); /* supertypes on <var_mclassdef:MClassDef>*/
}
var_105 = var104;
{
var106 = ((val*(*)(val* self))(var_105->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_105); /* iterator on <var_105:Array[MClassType]>*/
}
var_107 = var106;
for(;;) {
{
var108 = ((short int(*)(val* self))(var_107->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_107); /* is_ok on <var_107:ArrayIterator[MClassType]>*/
}
if (var108){
{
var109 = ((val*(*)(val* self))(var_107->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_107); /* item on <var_107:ArrayIterator[MClassType]>*/
}
var_msupertype = var109;
{
var110 = ((val*(*)(val* self))(var_mclassdef->class->vft[COLOR_nit__model__MClassDef__bound_mtype]))(var_mclassdef); /* bound_mtype on <var_mclassdef:MClassDef>*/
}
{
var111 = ((val*(*)(val* self, val* p0, val* p1))(var_msupertype->class->vft[COLOR_nit__model__MType__anchor_to]))(var_msupertype, var_mmodule, var110); /* anchor_to on <var_msupertype:MClassType>*/
}
var_msupertype = var111;
{
var112 = ((val*(*)(val* self))(var_mpropdef->class->vft[COLOR_nit__model__MPropDef__mproperty]))(var_mpropdef); /* mproperty on <var_mpropdef:nullable MMethodDef(MMethodDef)>*/
}
{
var113 = ((val*(*)(val* self))(var112->class->vft[COLOR_nit__model_base__MEntity__name]))(var112); /* name on <var112:MProperty(MMethod)>*/
}
{
var114 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var_modelbuilder->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__try_get_mproperty_by_name2]))(var_modelbuilder, self, var_mmodule, var_msupertype, var113); /* try_get_mproperty_by_name2 on <var_modelbuilder:ModelBuilder>*/
}
var_candidate = var114;
if (var_candidate == NULL) {
var115 = 0; /* is null */
} else {
var115 = 1; /* arg is null and recv is not */
}
if (0) {
var116 = ((short int(*)(val* self, val* p0))(var_candidate->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_candidate, ((val*)NULL)); /* != on <var_candidate:nullable MProperty>*/
var115 = var116;
}
if (var115){
if (var_msignature == NULL) {
var117 = 1; /* is null */
} else {
var117 = 0; /* arg is null but recv is not */
}
if (0) {
var118 = ((short int(*)(val* self, val* p0))(var_msignature->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_msignature, ((val*)NULL)); /* == on <var_msignature:nullable MSignature>*/
var117 = var118;
}
if (var117){
{
var119 = ((val*(*)(val* self))(var_candidate->class->vft[COLOR_nit__model__MProperty__intro]))(var_candidate); /* intro on <var_candidate:nullable MProperty(MProperty)>*/
}
/* <var119:MPropDef> isa MMethodDef */
cltype = type_nit__MMethodDef.color;
idtype = type_nit__MMethodDef.id;
if(cltype >= var119->type->table_size) {
var120 = 0;
} else {
var120 = var119->type->type_table[cltype] == idtype;
}
if (unlikely(!var120)) {
var_class_name = var119 == NULL ? "null" : var119->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MMethodDef", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 925);
fatal_exit(1);
}
{
var121 = ((val*(*)(val* self))(var119->class->vft[COLOR_nit__model__MMethodDef__msignature]))(var119); /* msignature on <var119:MPropDef(MMethodDef)>*/
}
var_msignature = var121;
} else {
}
} else {
}
{
((void(*)(val* self))(var_107->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_107); /* next on <var_107:ArrayIterator[MClassType]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))(var_107->class->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_107); /* finish on <var_107:ArrayIterator[MClassType]>*/
}
} else {
}
}
if (var_msignature == NULL) {
var125 = 0; /* is null */
} else {
var125 = 1; /* arg is null and recv is not */
}
if (0) {
var126 = ((short int(*)(val* self, val* p0))(var_msignature->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_msignature, ((val*)NULL)); /* != on <var_msignature:nullable MSignature>*/
var125 = var126;
}
var_127 = var125;
if (var125){
{
var128 = ((long(*)(val* self))(var_param_names->class->vft[COLOR_standard__abstract_collection__Collection__length]))(var_param_names); /* length on <var_param_names:Array[String]>*/
}
{
var129 = ((long(*)(val* self))(var_param_types->class->vft[COLOR_standard__abstract_collection__Collection__length]))(var_param_types); /* length on <var_param_types:Array[MType]>*/
}
{
{ /* Inline kernel#Int#!= (var128,var129) on <var128:Int> */
var132 = var128 == var129;
var133 = !var132;
var130 = var133;
goto RET_LABEL131;
RET_LABEL131:(void)0;
}
}
var124 = var130;
} else {
var124 = var_127;
}
var_134 = var124;
if (var124){
{
var135 = ((long(*)(val* self))(var_param_names->class->vft[COLOR_standard__abstract_collection__Collection__length]))(var_param_names); /* length on <var_param_names:Array[String]>*/
}
{
var136 = ((long(*)(val* self))(var_msignature->class->vft[COLOR_nit__model__MSignature__arity]))(var_msignature); /* arity on <var_msignature:nullable MSignature(MSignature)>*/
}
{
{ /* Inline kernel#Int#== (var135,var136) on <var135:Int> */
var139 = var135 == var136;
var137 = var139;
goto RET_LABEL138;
RET_LABEL138:(void)0;
}
}
var123 = var137;
} else {
var123 = var_134;
}
var_140 = var123;
if (var123){
{
var141 = ((long(*)(val* self))(var_param_types->class->vft[COLOR_standard__abstract_collection__Collection__length]))(var_param_types); /* length on <var_param_types:Array[MType]>*/
}
{
{ /* Inline kernel#Int#== (var141,0l) on <var141:Int> */
var144 = var141 == 0l;
var142 = var144;
goto RET_LABEL143;
RET_LABEL143:(void)0;
}
}
var122 = var142;
} else {
var122 = var_140;
}
if (var122){
var145 = NEW_standard__Array(&type_standard__Array__nit__MType);
{
((void(*)(val* self))(var145->class->vft[COLOR_standard__kernel__Object__init]))(var145); /* init on <var145:Array[MType]>*/
}
var_param_types = var145;
{
var146 = ((val*(*)(val* self))(var_msignature->class->vft[COLOR_nit__model__MSignature__mparameters]))(var_msignature); /* mparameters on <var_msignature:nullable MSignature(MSignature)>*/
}
var_147 = var146;
{
var148 = ((val*(*)(val* self))(var_147->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_147); /* iterator on <var_147:Array[MParameter]>*/
}
var_149 = var148;
for(;;) {
{
var150 = ((short int(*)(val* self))(var_149->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_149); /* is_ok on <var_149:ArrayIterator[MParameter]>*/
}
if (var150){
{
var151 = ((val*(*)(val* self))(var_149->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_149); /* item on <var_149:ArrayIterator[MParameter]>*/
}
var_mparameter = var151;
{
var152 = ((val*(*)(val* self))(var_mparameter->class->vft[COLOR_nit__model__MParameter__mtype]))(var_mparameter); /* mtype on <var_mparameter:MParameter>*/
}
{
((void(*)(val* self, val* p0))(var_param_types->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_param_types, var152); /* add on <var_param_types:Array[MType]>*/
}
{
((void(*)(val* self))(var_149->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_149); /* next on <var_149:ArrayIterator[MParameter]>*/
}
} else {
goto BREAK_label153;
}
}
BREAK_label153: (void)0;
{
((void(*)(val* self))(var_149->class->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_149); /* finish on <var_149:ArrayIterator[MParameter]>*/
}
{
var154 = ((long(*)(val* self))(var_msignature->class->vft[COLOR_nit__model__MSignature__vararg_rank]))(var_msignature); /* vararg_rank on <var_msignature:nullable MSignature(MSignature)>*/
}
var_vararg_rank = var154;
} else {
}
if (var_msignature == NULL) {
var156 = 0; /* is null */
} else {
var156 = 1; /* arg is null and recv is not */
}
if (0) {
var157 = ((short int(*)(val* self, val* p0))(var_msignature->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_msignature, ((val*)NULL)); /* != on <var_msignature:nullable MSignature>*/
var156 = var157;
}
var_158 = var156;
if (var156){
if (var_ret_type == NULL) {
var159 = 1; /* is null */
} else {
var159 = 0; /* arg is null but recv is not */
}
if (0) {
var160 = ((short int(*)(val* self, val* p0))(var_ret_type->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_ret_type, ((val*)NULL)); /* == on <var_ret_type:nullable MType>*/
var159 = var160;
}
var155 = var159;
} else {
var155 = var_158;
}
if (var155){
{
var161 = ((val*(*)(val* self))(var_msignature->class->vft[COLOR_nit__model__MSignature__return_mtype]))(var_msignature); /* return_mtype on <var_msignature:nullable MSignature(MSignature)>*/
}
var_ret_type = var161;
} else {
}
{
var162 = ((long(*)(val* self))(var_param_names->class->vft[COLOR_standard__abstract_collection__Collection__length]))(var_param_names); /* length on <var_param_names:Array[String]>*/
}
{
var163 = ((long(*)(val* self))(var_param_types->class->vft[COLOR_standard__abstract_collection__Collection__length]))(var_param_types); /* length on <var_param_types:Array[MType]>*/
}
{
{ /* Inline kernel#Int#!= (var162,var163) on <var162:Int> */
var166 = var162 == var163;
var167 = !var166;
var164 = var167;
goto RET_LABEL165;
RET_LABEL165:(void)0;
}
}
if (var164){
if (var_nsig == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 947);
fatal_exit(1);
} else {
var168 = ((val*(*)(val* self))(var_nsig->class->vft[COLOR_nit__parser_nodes__ASignature__n_params]))(var_nsig); /* n_params on <var_nsig:nullable ASignature>*/
}
{
var169 = ((long(*)(val* self))(var_param_types->class->vft[COLOR_standard__abstract_collection__Collection__length]))(var_param_types); /* length on <var_param_types:Array[MType]>*/
}
{
var170 = ((val*(*)(val* self, long p0))(var168->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var168, var169); /* [] on <var168:ANodes[AParam]>*/
}
if (unlikely(varonce171==NULL)) {
var172 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce173!=NULL)) {
var174 = varonce173;
} else {
var175 = "Error: untyped parameter `";
var176 = standard___standard__NativeString___to_s_with_length(var175, 26l);
var174 = var176;
varonce173 = var174;
}
((struct instance_standard__NativeArray*)var172)->values[0]=var174;
if (likely(varonce177!=NULL)) {
var178 = varonce177;
} else {
var179 = "\'.";
var180 = standard___standard__NativeString___to_s_with_length(var179, 2l);
var178 = var180;
varonce177 = var178;
}
((struct instance_standard__NativeArray*)var172)->values[2]=var178;
} else {
var172 = varonce171;
varonce171 = NULL;
}
{
var181 = ((long(*)(val* self))(var_param_types->class->vft[COLOR_standard__abstract_collection__Collection__length]))(var_param_types); /* length on <var_param_types:Array[MType]>*/
}
{
var182 = ((val*(*)(val* self, long p0))(var_param_names->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var_param_names, var181); /* [] on <var_param_names:Array[String]>*/
}
((struct instance_standard__NativeArray*)var172)->values[1]=var182;
{
var183 = ((val*(*)(val* self))(var172->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var172); /* native_to_s on <var172:NativeArray[String]>*/
}
varonce171 = var172;
{
((void(*)(val* self, val* p0, val* p1))(var_modelbuilder->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__error]))(var_modelbuilder, var170, var183); /* error on <var_modelbuilder:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
var184 = NEW_standard__Array(&type_standard__Array__nit__MParameter);
{
((void(*)(val* self))(var184->class->vft[COLOR_standard__kernel__Object__init]))(var184); /* init on <var184:Array[MParameter]>*/
}
var_mparameters = var184;
var_i = 0l;
{
var185 = ((long(*)(val* self))(var_param_names->class->vft[COLOR_standard__abstract_collection__Collection__length]))(var_param_names); /* length on <var_param_names:Array[String]>*/
}
var_186 = var185;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_186) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_186:Int> isa OTHER */
/* <var_186:Int> isa OTHER */
var189 = 1; /* easy <var_186:Int> isa OTHER*/
if (unlikely(!var189)) {
var_class_name192 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name192);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 423);
fatal_exit(1);
}
var193 = var_i < var_186;
var187 = var193;
goto RET_LABEL188;
RET_LABEL188:(void)0;
}
}
if (var187){
var_is_default = 0;
{
{ /* Inline kernel#Int#unary - (1l) on <1l:Int> */
var197 = -1l;
var195 = var197;
goto RET_LABEL196;
RET_LABEL196:(void)0;
}
}
{
{ /* Inline kernel#Int#== (var_vararg_rank,var195) on <var_vararg_rank:Int> */
var200 = var_vararg_rank == var195;
var198 = var200;
goto RET_LABEL199;
RET_LABEL199:(void)0;
}
}
var_201 = var198;
if (var198){
{
var202 = ((val*(*)(val* self, long p0))(var_param_types->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var_param_types, var_i); /* [] on <var_param_types:Array[MType]>*/
}
/* <var202:nullable Object(MType)> isa MNullableType */
cltype204 = type_nit__MNullableType.color;
idtype205 = type_nit__MNullableType.id;
if(cltype204 >= var202->type->table_size) {
var203 = 0;
} else {
var203 = var202->type->type_table[cltype204] == idtype205;
}
var194 = var203;
} else {
var194 = var_201;
}
if (var194){
{
var207 = ((long(*)(val* self))(var_param_names->class->vft[COLOR_standard__abstract_collection__Collection__length]))(var_param_names); /* length on <var_param_names:Array[String]>*/
}
{
{ /* Inline kernel#Int#- (var207,1l) on <var207:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var210 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var210)) {
var_class_name213 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name213);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 429);
fatal_exit(1);
}
var214 = var207 - 1l;
var208 = var214;
goto RET_LABEL209;
RET_LABEL209:(void)0;
}
}
{
{ /* Inline kernel#Int#< (var_i,var208) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var208:Int> isa OTHER */
/* <var208:Int> isa OTHER */
var217 = 1; /* easy <var208:Int> isa OTHER*/
if (unlikely(!var217)) {
var_class_name220 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name220);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 423);
fatal_exit(1);
}
var221 = var_i < var208;
var215 = var221;
goto RET_LABEL216;
RET_LABEL216:(void)0;
}
}
var_222 = var215;
if (var215){
var206 = var_222;
} else {
var206 = var_accept_special_last_parameter;
}
if (var206){
var_is_default = 1;
} else {
}
} else {
}
var223 = NEW_nit__MParameter(&type_nit__MParameter);
{
var224 = ((val*(*)(val* self, long p0))(var_param_names->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var_param_names, var_i); /* [] on <var_param_names:Array[String]>*/
}
{
var225 = ((val*(*)(val* self, long p0))(var_param_types->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var_param_types, var_i); /* [] on <var_param_types:Array[MType]>*/
}
{
{ /* Inline kernel#Int#== (var_i,var_vararg_rank) on <var_i:Int> */
var228 = var_i == var_vararg_rank;
var226 = var228;
goto RET_LABEL227;
RET_LABEL227:(void)0;
}
}
{
((void(*)(val* self, val* p0))(var223->class->vft[COLOR_nit__model__MParameter__name_61d]))(var223, var224); /* name= on <var223:MParameter>*/
}
{
((void(*)(val* self, val* p0))(var223->class->vft[COLOR_nit__model__MParameter__mtype_61d]))(var223, var225); /* mtype= on <var223:MParameter>*/
}
{
((void(*)(val* self, short int p0))(var223->class->vft[COLOR_nit__model__MParameter__is_vararg_61d]))(var223, var226); /* is_vararg= on <var223:MParameter>*/
}
{
((void(*)(val* self, short int p0))(var223->class->vft[COLOR_nit__model__MParameter__is_default_61d]))(var223, var_is_default); /* is_default= on <var223:MParameter>*/
}
{
((void(*)(val* self))(var223->class->vft[COLOR_standard__kernel__Object__init]))(var223); /* init on <var223:MParameter>*/
}
var_mparameter229 = var223;
if (var_nsig == NULL) {
var230 = 0; /* is null */
} else {
var230 = 1; /* arg is null and recv is not */
}
if (0) {
var231 = ((short int(*)(val* self, val* p0))(var_nsig->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_nsig, ((val*)NULL)); /* != on <var_nsig:nullable ASignature>*/
var230 = var231;
}
if (var230){
{
var232 = ((val*(*)(val* self))(var_nsig->class->vft[COLOR_nit__parser_nodes__ASignature__n_params]))(var_nsig); /* n_params on <var_nsig:nullable ASignature(ASignature)>*/
}
{
var233 = ((val*(*)(val* self, long p0))(var232->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var232, var_i); /* [] on <var232:ANodes[AParam]>*/
}
{
((void(*)(val* self, val* p0))(var233->class->vft[COLOR_nit__modelize_property__AParam__mparameter_61d]))(var233, var_mparameter229); /* mparameter= on <var233:nullable Object(AParam)>*/
}
} else {
}
{
((void(*)(val* self, val* p0))(var_mparameters->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_mparameters, var_mparameter229); /* add on <var_mparameters:Array[MParameter]>*/
}
var234 = standard___standard__Int___Discrete__successor(var_i, 1l);
var_i = var234;
} else {
goto BREAK_label235;
}
}
BREAK_label235: (void)0;
if (var_ret_type == NULL) {
var237 = 1; /* is null */
} else {
var237 = 0; /* arg is null but recv is not */
}
if (0) {
var238 = ((short int(*)(val* self, val* p0))(var_ret_type->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_ret_type, ((val*)NULL)); /* == on <var_ret_type:nullable MType>*/
var237 = var238;
}
var_239 = var237;
if (var237){
{
var240 = ((val*(*)(val* self))(var_mpropdef->class->vft[COLOR_nit__model__MPropDef__mproperty]))(var_mpropdef); /* mproperty on <var_mpropdef:nullable MMethodDef(MMethodDef)>*/
}
{
var241 = ((short int(*)(val* self))(var240->class->vft[COLOR_nit__model__MMethod__is_new]))(var240); /* is_new on <var240:MProperty(MMethod)>*/
}
var236 = var241;
} else {
var236 = var_239;
}
if (var236){
{
var242 = ((val*(*)(val* self))(var_mclassdef->class->vft[COLOR_nit__model__MClassDef__mclass]))(var_mclassdef); /* mclass on <var_mclassdef:MClassDef>*/
}
{
var243 = ((val*(*)(val* self))(var242->class->vft[COLOR_nit__model__MClass__mclass_type]))(var242); /* mclass_type on <var242:MClass>*/
}
var_ret_type = var243;
} else {
}
var246 = !var_accept_special_last_parameter;
var_247 = var246;
if (var246){
{
var248 = ((short int(*)(val* self))(var_mparameters->class->vft[COLOR_standard__abstract_collection__Collection__not_empty]))(var_mparameters); /* not_empty on <var_mparameters:Array[MParameter]>*/
}
var245 = var248;
} else {
var245 = var_247;
}
var_249 = var245;
if (var245){
{
var250 = ((val*(*)(val* self))(var_mparameters->class->vft[COLOR_standard__abstract_collection__SequenceRead__last]))(var_mparameters); /* last on <var_mparameters:Array[MParameter]>*/
}
{
var251 = ((short int(*)(val* self))(var250->class->vft[COLOR_nit__model__MParameter__is_vararg]))(var250); /* is_vararg on <var250:nullable Object(MParameter)>*/
}
var244 = var251;
} else {
var244 = var_249;
}
if (var244){
{
var252 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AMethPropdef__n_signature]))(self); /* n_signature on <self:AMethPropdef>*/
}
if (var252 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 969);
fatal_exit(1);
} else {
var253 = ((val*(*)(val* self))(var252->class->vft[COLOR_nit__parser_nodes__ASignature__n_params]))(var252); /* n_params on <var252:nullable ASignature>*/
}
{
var254 = ((val*(*)(val* self))(var253->class->vft[COLOR_standard__abstract_collection__SequenceRead__last]))(var253); /* last on <var253:ANodes[AParam]>*/
}
if (unlikely(varonce255==NULL)) {
var256 = NEW_standard__NativeArray(5l, &type_standard__NativeArray__standard__String);
if (likely(varonce257!=NULL)) {
var258 = varonce257;
} else {
var259 = "Error: illegal variadic parameter `";
var260 = standard___standard__NativeString___to_s_with_length(var259, 35l);
var258 = var260;
varonce257 = var258;
}
((struct instance_standard__NativeArray*)var256)->values[0]=var258;
if (likely(varonce261!=NULL)) {
var262 = varonce261;
} else {
var263 = "` for `";
var264 = standard___standard__NativeString___to_s_with_length(var263, 7l);
var262 = var264;
varonce261 = var262;
}
((struct instance_standard__NativeArray*)var256)->values[2]=var262;
if (likely(varonce265!=NULL)) {
var266 = varonce265;
} else {
var267 = "`.";
var268 = standard___standard__NativeString___to_s_with_length(var267, 2l);
var266 = var268;
varonce265 = var266;
}
((struct instance_standard__NativeArray*)var256)->values[4]=var266;
} else {
var256 = varonce255;
varonce255 = NULL;
}
{
var269 = ((val*(*)(val* self))(var_mparameters->class->vft[COLOR_standard__abstract_collection__SequenceRead__last]))(var_mparameters); /* last on <var_mparameters:Array[MParameter]>*/
}
{
var270 = ((val*(*)(val* self))(var269->class->vft[COLOR_standard__string__Object__to_s]))(var269); /* to_s on <var269:nullable Object(MParameter)>*/
}
((struct instance_standard__NativeArray*)var256)->values[1]=var270;
{
var271 = ((val*(*)(val* self))(var_mpropdef->class->vft[COLOR_nit__model__MPropDef__mproperty]))(var_mpropdef); /* mproperty on <var_mpropdef:nullable MMethodDef(MMethodDef)>*/
}
{
var272 = ((val*(*)(val* self))(var271->class->vft[COLOR_nit__model_base__MEntity__name]))(var271); /* name on <var271:MProperty(MMethod)>*/
}
((struct instance_standard__NativeArray*)var256)->values[3]=var272;
{
var273 = ((val*(*)(val* self))(var256->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var256); /* native_to_s on <var256:NativeArray[String]>*/
}
varonce255 = var256;
{
((void(*)(val* self, val* p0, val* p1))(var_modelbuilder->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__error]))(var_modelbuilder, var254, var273); /* error on <var_modelbuilder:ModelBuilder>*/
}
} else {
}
if (var_ret_type == NULL) {
var275 = 1; /* is null */
} else {
var275 = 0; /* arg is null but recv is not */
}
if (0) {
var276 = ((short int(*)(val* self, val* p0))(var_ret_type->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_ret_type, ((val*)NULL)); /* == on <var_ret_type:nullable MType>*/
var275 = var276;
}
var_277 = var275;
if (var275){
var274 = var_return_is_mandatory;
} else {
var274 = var_277;
}
if (var274){
{
var278 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AMethPropdef__n_methid]))(self); /* n_methid on <self:AMethPropdef>*/
}
if (unlikely(varonce279==NULL)) {
var280 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce281!=NULL)) {
var282 = varonce281;
} else {
var283 = "Error: mandatory return type for `";
var284 = standard___standard__NativeString___to_s_with_length(var283, 34l);
var282 = var284;
varonce281 = var282;
}
((struct instance_standard__NativeArray*)var280)->values[0]=var282;
if (likely(varonce285!=NULL)) {
var286 = varonce285;
} else {
var287 = "`.";
var288 = standard___standard__NativeString___to_s_with_length(var287, 2l);
var286 = var288;
varonce285 = var286;
}
((struct instance_standard__NativeArray*)var280)->values[2]=var286;
} else {
var280 = varonce279;
varonce279 = NULL;
}
{
var289 = ((val*(*)(val* self))(var_mpropdef->class->vft[COLOR_nit__model__MPropDef__mproperty]))(var_mpropdef); /* mproperty on <var_mpropdef:nullable MMethodDef(MMethodDef)>*/
}
{
var290 = ((val*(*)(val* self))(var289->class->vft[COLOR_nit__model_base__MEntity__name]))(var289); /* name on <var289:MProperty(MMethod)>*/
}
((struct instance_standard__NativeArray*)var280)->values[1]=var290;
{
var291 = ((val*(*)(val* self))(var280->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var280); /* native_to_s on <var280:NativeArray[String]>*/
}
varonce279 = var280;
{
((void(*)(val* self, val* p0, val* p1))(var_modelbuilder->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__error]))(var_modelbuilder, var278, var291); /* error on <var_modelbuilder:ModelBuilder>*/
}
} else {
}
var292 = NEW_nit__MSignature(&type_nit__MSignature);
{
((void(*)(val* self, val* p0))(var292->class->vft[COLOR_nit__model__MSignature__mparameters_61d]))(var292, var_mparameters); /* mparameters= on <var292:MSignature>*/
}
{
((void(*)(val* self, val* p0))(var292->class->vft[COLOR_nit__model__MSignature__return_mtype_61d]))(var292, var_ret_type); /* return_mtype= on <var292:MSignature>*/
}
{
((void(*)(val* self))(var292->class->vft[COLOR_standard__kernel__Object__init]))(var292); /* init on <var292:MSignature>*/
}
var_msignature = var292;
{
((void(*)(val* self, val* p0))(var_mpropdef->class->vft[COLOR_nit__model__MMethodDef__msignature_61d]))(var_mpropdef, var_msignature); /* msignature= on <var_mpropdef:nullable MMethodDef(MMethodDef)>*/
}
if (likely(varonce293!=NULL)) {
var294 = varonce293;
} else {
var295 = "abstract";
var296 = standard___standard__NativeString___to_s_with_length(var295, 8l);
var294 = var296;
varonce293 = var294;
}
{
var297 = ((val*(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__annotation__Prod__get_single_annotation]))(self, var294, var_modelbuilder); /* get_single_annotation on <self:AMethPropdef>*/
}
if (var297 == NULL) {
var298 = 0; /* is null */
} else {
var298 = 1; /* arg is null and recv is not */
}
if (0) {
var299 = ((short int(*)(val* self, val* p0))(var297->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var297, ((val*)NULL)); /* != on <var297:nullable AAnnotation>*/
var298 = var299;
}
{
((void(*)(val* self, short int p0))(var_mpropdef->class->vft[COLOR_nit__model__MMethodDef__is_abstract_61d]))(var_mpropdef, var298); /* is_abstract= on <var_mpropdef:nullable MMethodDef(MMethodDef)>*/
}
if (likely(varonce300!=NULL)) {
var301 = varonce300;
} else {
var302 = "intern";
var303 = standard___standard__NativeString___to_s_with_length(var302, 6l);
var301 = var303;
varonce300 = var301;
}
{
var304 = ((val*(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__annotation__Prod__get_single_annotation]))(self, var301, var_modelbuilder); /* get_single_annotation on <self:AMethPropdef>*/
}
if (var304 == NULL) {
var305 = 0; /* is null */
} else {
var305 = 1; /* arg is null and recv is not */
}
if (0) {
var306 = ((short int(*)(val* self, val* p0))(var304->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var304, ((val*)NULL)); /* != on <var304:nullable AAnnotation>*/
var305 = var306;
}
{
((void(*)(val* self, short int p0))(var_mpropdef->class->vft[COLOR_nit__model__MMethodDef__is_intern_61d]))(var_mpropdef, var305); /* is_intern= on <var_mpropdef:nullable MMethodDef(MMethodDef)>*/
}
{
var308 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AMethPropdef__n_extern_code_block]))(self); /* n_extern_code_block on <self:AMethPropdef>*/
}
if (var308 == NULL) {
var309 = 0; /* is null */
} else {
var309 = 1; /* arg is null and recv is not */
}
if (0) {
var310 = ((short int(*)(val* self, val* p0))(var308->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var308, ((val*)NULL)); /* != on <var308:nullable AExternCodeBlock>*/
var309 = var310;
}
var_311 = var309;
if (var309){
var307 = var_311;
} else {
if (likely(varonce312!=NULL)) {
var313 = varonce312;
} else {
var314 = "extern";
var315 = standard___standard__NativeString___to_s_with_length(var314, 6l);
var313 = var315;
varonce312 = var313;
}
{
var316 = ((val*(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__annotation__Prod__get_single_annotation]))(self, var313, var_modelbuilder); /* get_single_annotation on <self:AMethPropdef>*/
}
if (var316 == NULL) {
var317 = 0; /* is null */
} else {
var317 = 1; /* arg is null and recv is not */
}
if (0) {
var318 = ((short int(*)(val* self, val* p0))(var316->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var316, ((val*)NULL)); /* != on <var316:nullable AAnnotation>*/
var317 = var318;
}
var307 = var317;
}
{
((void(*)(val* self, short int p0))(var_mpropdef->class->vft[COLOR_nit__model__MMethodDef__is_extern_61d]))(var_mpropdef, var307); /* is_extern= on <var_mpropdef:nullable MMethodDef(MMethodDef)>*/
}
if (likely(varonce319!=NULL)) {
var320 = varonce319;
} else {
var321 = "lazy";
var322 = standard___standard__NativeString___to_s_with_length(var321, 4l);
var320 = var322;
varonce319 = var320;
}
{
var323 = ((val*(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__annotation__Prod__get_single_annotation]))(self, var320, var_modelbuilder); /* get_single_annotation on <self:AMethPropdef>*/
}
var_at = var323;
if (var_at == NULL) {
var324 = 0; /* is null */
} else {
var324 = 1; /* arg is null and recv is not */
}
if (0) {
var325 = ((short int(*)(val* self, val* p0))(var_at->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_at, ((val*)NULL)); /* != on <var_at:nullable AAnnotation>*/
var324 = var325;
}
if (var324){
if (likely(varonce326!=NULL)) {
var327 = varonce326;
} else {
var328 = "Syntax Error: `lazy` must be used on attributes.";
var329 = standard___standard__NativeString___to_s_with_length(var328, 48l);
var327 = var329;
varonce326 = var327;
}
{
((void(*)(val* self, val* p0, val* p1))(var_modelbuilder->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__error]))(var_modelbuilder, var_at, var327); /* error on <var_modelbuilder:ModelBuilder>*/
}
} else {
}
RET_LABEL:;
}
