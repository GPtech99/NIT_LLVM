#include "nit__parser.sep.0.h"
/* method parser#ReduceAction2#action for (self: ReduceAction2, Parser) */
void nit__parser___nit__parser__ReduceAction2___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var2 /* : Array[Object] */;
val* var_listnode4 /* var listnode4: Array[Object] */;
val* var3 /* : Array[Object] */;
val* var_listnode5 /* var listnode5: Array[Object] */;
val* var4 /* : Array[Object] */;
val* var_listnode7 /* var listnode7: Array[Object] */;
val* var_listnode3 /* var listnode3: nullable Object */;
short int var5 /* : Bool */;
int cltype;
int idtype;
val* var6 /* : Array[Object] */;
val* var_pclassdefnode6 /* var pclassdefnode6: nullable Object */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
val* var12 /* : AModule */;
val* var_pmodulenode1 /* var pmodulenode1: nullable AModule */;
long var13 /* : Int */;
long var14 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist2 = var;
{
var1 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist1 = var1;
var2 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
((void(*)(val* self))(var2->class->vft[COLOR_standard__kernel__Object__init]))(var2); /* init on <var2:Array[Object]>*/
}
var_listnode4 = var2;
var3 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
((void(*)(val* self))(var3->class->vft[COLOR_standard__kernel__Object__init]))(var3); /* init on <var3:Array[Object]>*/
}
var_listnode5 = var3;
var4 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
((void(*)(val* self))(var4->class->vft[COLOR_standard__kernel__Object__init]))(var4); /* init on <var4:Array[Object]>*/
}
var_listnode7 = var4;
var_listnode3 = var_nodearraylist1;
/* <var_listnode3:nullable Object> isa Array[Object] */
cltype = type_standard__Array__standard__Object.color;
idtype = type_standard__Array__standard__Object.id;
if(var_listnode3 == NULL) {
var5 = 0;
} else {
if(cltype >= (((long)var_listnode3&3)?type_info[((long)var_listnode3&3)]:var_listnode3->type)->table_size) {
var5 = 0;
} else {
var5 = (((long)var_listnode3&3)?type_info[((long)var_listnode3&3)]:var_listnode3->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var5)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1156);
fatal_exit(1);
}
{
var6 = ((val*(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__parser_work__ReduceAction__concat]))(self, var_listnode4, var_listnode3); /* concat on <self:ReduceAction2>*/
}
var_listnode4 = var6;
var_pclassdefnode6 = var_nodearraylist2;
/* <var_pclassdefnode6:nullable Object> isa nullable AClassdef */
cltype8 = type_nullable__nit__AClassdef.color;
idtype9 = type_nullable__nit__AClassdef.id;
if(var_pclassdefnode6 == NULL) {
var7 = 1;
} else {
if(cltype8 >= (((long)var_pclassdefnode6&3)?type_info[((long)var_pclassdefnode6&3)]:var_pclassdefnode6->type)->table_size) {
var7 = 0;
} else {
var7 = (((long)var_pclassdefnode6&3)?type_info[((long)var_pclassdefnode6&3)]:var_pclassdefnode6->type)->type_table[cltype8] == idtype9;
}
}
if (unlikely(!var7)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1159);
fatal_exit(1);
}
if (var_pclassdefnode6 == NULL) {
var10 = 0; /* is null */
} else {
var10 = 1; /* arg is null and recv is not */
}
if (0) {
var11 = ((short int(*)(val* self, val* p0))(var_pclassdefnode6->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_pclassdefnode6, ((val*)NULL)); /* != on <var_pclassdefnode6:nullable Object(nullable AClassdef)>*/
var10 = var11;
}
if (var10){
{
((void(*)(val* self, val* p0))(var_listnode7->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_listnode7, var_pclassdefnode6); /* add on <var_listnode7:Array[Object]>*/
}
} else {
}
var12 = NEW_nit__AModule(&type_nit__AModule);
{
((void(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var12->class->vft[COLOR_nit__parser_prod__AModule__init_amodule]))(var12, ((val*)NULL), var_listnode4, var_listnode5, var_listnode7); /* init_amodule on <var12:AModule>*/
}
var_pmodulenode1 = var12;
var_node_list = var_pmodulenode1;
var13 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction2> */
{
var14 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var13); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var14, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction3#action for (self: ReduceAction3, Parser) */
void nit__parser___nit__parser__ReduceAction3___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var3 /* : Array[Object] */;
val* var_listnode4 /* var listnode4: Array[Object] */;
val* var4 /* : Array[Object] */;
val* var_listnode5 /* var listnode5: Array[Object] */;
val* var5 /* : Array[Object] */;
val* var_listnode7 /* var listnode7: Array[Object] */;
val* var_pmoduledeclnode2 /* var pmoduledeclnode2: nullable Object */;
short int var6 /* : Bool */;
int cltype;
int idtype;
val* var_listnode3 /* var listnode3: nullable Object */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
val* var10 /* : Array[Object] */;
val* var_pclassdefnode6 /* var pclassdefnode6: nullable Object */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
val* var16 /* : AModule */;
val* var_pmodulenode1 /* var pmodulenode1: nullable AModule */;
long var17 /* : Int */;
long var18 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist3 = var;
{
var1 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist2 = var1;
{
var2 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist1 = var2;
var3 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
((void(*)(val* self))(var3->class->vft[COLOR_standard__kernel__Object__init]))(var3); /* init on <var3:Array[Object]>*/
}
var_listnode4 = var3;
var4 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
((void(*)(val* self))(var4->class->vft[COLOR_standard__kernel__Object__init]))(var4); /* init on <var4:Array[Object]>*/
}
var_listnode5 = var4;
var5 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
((void(*)(val* self))(var5->class->vft[COLOR_standard__kernel__Object__init]))(var5); /* init on <var5:Array[Object]>*/
}
var_listnode7 = var5;
var_pmoduledeclnode2 = var_nodearraylist1;
/* <var_pmoduledeclnode2:nullable Object> isa nullable AModuledecl */
cltype = type_nullable__nit__AModuledecl.color;
idtype = type_nullable__nit__AModuledecl.id;
if(var_pmoduledeclnode2 == NULL) {
var6 = 1;
} else {
if(cltype >= (((long)var_pmoduledeclnode2&3)?type_info[((long)var_pmoduledeclnode2&3)]:var_pmoduledeclnode2->type)->table_size) {
var6 = 0;
} else {
var6 = (((long)var_pmoduledeclnode2&3)?type_info[((long)var_pmoduledeclnode2&3)]:var_pmoduledeclnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var6)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1185);
fatal_exit(1);
}
var_listnode3 = var_nodearraylist2;
/* <var_listnode3:nullable Object> isa Array[Object] */
cltype8 = type_standard__Array__standard__Object.color;
idtype9 = type_standard__Array__standard__Object.id;
if(var_listnode3 == NULL) {
var7 = 0;
} else {
if(cltype8 >= (((long)var_listnode3&3)?type_info[((long)var_listnode3&3)]:var_listnode3->type)->table_size) {
var7 = 0;
} else {
var7 = (((long)var_listnode3&3)?type_info[((long)var_listnode3&3)]:var_listnode3->type)->type_table[cltype8] == idtype9;
}
}
if (unlikely(!var7)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1187);
fatal_exit(1);
}
{
var10 = ((val*(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__parser_work__ReduceAction__concat]))(self, var_listnode4, var_listnode3); /* concat on <self:ReduceAction3>*/
}
var_listnode4 = var10;
var_pclassdefnode6 = var_nodearraylist3;
/* <var_pclassdefnode6:nullable Object> isa nullable AClassdef */
cltype12 = type_nullable__nit__AClassdef.color;
idtype13 = type_nullable__nit__AClassdef.id;
if(var_pclassdefnode6 == NULL) {
var11 = 1;
} else {
if(cltype12 >= (((long)var_pclassdefnode6&3)?type_info[((long)var_pclassdefnode6&3)]:var_pclassdefnode6->type)->table_size) {
var11 = 0;
} else {
var11 = (((long)var_pclassdefnode6&3)?type_info[((long)var_pclassdefnode6&3)]:var_pclassdefnode6->type)->type_table[cltype12] == idtype13;
}
}
if (unlikely(!var11)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1190);
fatal_exit(1);
}
if (var_pclassdefnode6 == NULL) {
var14 = 0; /* is null */
} else {
var14 = 1; /* arg is null and recv is not */
}
if (0) {
var15 = ((short int(*)(val* self, val* p0))(var_pclassdefnode6->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_pclassdefnode6, ((val*)NULL)); /* != on <var_pclassdefnode6:nullable Object(nullable AClassdef)>*/
var14 = var15;
}
if (var14){
{
((void(*)(val* self, val* p0))(var_listnode7->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_listnode7, var_pclassdefnode6); /* add on <var_listnode7:Array[Object]>*/
}
} else {
}
var16 = NEW_nit__AModule(&type_nit__AModule);
{
((void(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var16->class->vft[COLOR_nit__parser_prod__AModule__init_amodule]))(var16, var_pmoduledeclnode2, var_listnode4, var_listnode5, var_listnode7); /* init_amodule on <var16:AModule>*/
}
var_pmodulenode1 = var16;
var_node_list = var_pmodulenode1;
var17 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction3> */
{
var18 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var17); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var18, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction4#action for (self: ReduceAction4, Parser) */
void nit__parser___nit__parser__ReduceAction4___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var2 /* : Array[Object] */;
val* var_listnode3 /* var listnode3: Array[Object] */;
val* var3 /* : Array[Object] */;
val* var_listnode5 /* var listnode5: Array[Object] */;
val* var4 /* : Array[Object] */;
val* var_listnode7 /* var listnode7: Array[Object] */;
val* var_listnode4 /* var listnode4: nullable Object */;
short int var5 /* : Bool */;
int cltype;
int idtype;
val* var6 /* : Array[Object] */;
val* var_pclassdefnode6 /* var pclassdefnode6: nullable Object */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
val* var12 /* : AModule */;
val* var_pmodulenode1 /* var pmodulenode1: nullable AModule */;
long var13 /* : Int */;
long var14 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist2 = var;
{
var1 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist1 = var1;
var2 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
((void(*)(val* self))(var2->class->vft[COLOR_standard__kernel__Object__init]))(var2); /* init on <var2:Array[Object]>*/
}
var_listnode3 = var2;
var3 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
((void(*)(val* self))(var3->class->vft[COLOR_standard__kernel__Object__init]))(var3); /* init on <var3:Array[Object]>*/
}
var_listnode5 = var3;
var4 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
((void(*)(val* self))(var4->class->vft[COLOR_standard__kernel__Object__init]))(var4); /* init on <var4:Array[Object]>*/
}
var_listnode7 = var4;
var_listnode4 = var_nodearraylist1;
/* <var_listnode4:nullable Object> isa Array[Object] */
cltype = type_standard__Array__standard__Object.color;
idtype = type_standard__Array__standard__Object.id;
if(var_listnode4 == NULL) {
var5 = 0;
} else {
if(cltype >= (((long)var_listnode4&3)?type_info[((long)var_listnode4&3)]:var_listnode4->type)->table_size) {
var5 = 0;
} else {
var5 = (((long)var_listnode4&3)?type_info[((long)var_listnode4&3)]:var_listnode4->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var5)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1215);
fatal_exit(1);
}
{
var6 = ((val*(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__parser_work__ReduceAction__concat]))(self, var_listnode5, var_listnode4); /* concat on <self:ReduceAction4>*/
}
var_listnode5 = var6;
var_pclassdefnode6 = var_nodearraylist2;
/* <var_pclassdefnode6:nullable Object> isa nullable AClassdef */
cltype8 = type_nullable__nit__AClassdef.color;
idtype9 = type_nullable__nit__AClassdef.id;
if(var_pclassdefnode6 == NULL) {
var7 = 1;
} else {
if(cltype8 >= (((long)var_pclassdefnode6&3)?type_info[((long)var_pclassdefnode6&3)]:var_pclassdefnode6->type)->table_size) {
var7 = 0;
} else {
var7 = (((long)var_pclassdefnode6&3)?type_info[((long)var_pclassdefnode6&3)]:var_pclassdefnode6->type)->type_table[cltype8] == idtype9;
}
}
if (unlikely(!var7)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1218);
fatal_exit(1);
}
if (var_pclassdefnode6 == NULL) {
var10 = 0; /* is null */
} else {
var10 = 1; /* arg is null and recv is not */
}
if (0) {
var11 = ((short int(*)(val* self, val* p0))(var_pclassdefnode6->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_pclassdefnode6, ((val*)NULL)); /* != on <var_pclassdefnode6:nullable Object(nullable AClassdef)>*/
var10 = var11;
}
if (var10){
{
((void(*)(val* self, val* p0))(var_listnode7->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_listnode7, var_pclassdefnode6); /* add on <var_listnode7:Array[Object]>*/
}
} else {
}
var12 = NEW_nit__AModule(&type_nit__AModule);
{
((void(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var12->class->vft[COLOR_nit__parser_prod__AModule__init_amodule]))(var12, ((val*)NULL), var_listnode3, var_listnode5, var_listnode7); /* init_amodule on <var12:AModule>*/
}
var_pmodulenode1 = var12;
var_node_list = var_pmodulenode1;
var13 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction4> */
{
var14 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var13); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var14, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction5#action for (self: ReduceAction5, Parser) */
void nit__parser___nit__parser__ReduceAction5___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var3 /* : Array[Object] */;
val* var_listnode3 /* var listnode3: Array[Object] */;
val* var4 /* : Array[Object] */;
val* var_listnode5 /* var listnode5: Array[Object] */;
val* var5 /* : Array[Object] */;
val* var_listnode7 /* var listnode7: Array[Object] */;
val* var_pmoduledeclnode2 /* var pmoduledeclnode2: nullable Object */;
short int var6 /* : Bool */;
int cltype;
int idtype;
val* var_listnode4 /* var listnode4: nullable Object */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
val* var10 /* : Array[Object] */;
val* var_pclassdefnode6 /* var pclassdefnode6: nullable Object */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
val* var16 /* : AModule */;
val* var_pmodulenode1 /* var pmodulenode1: nullable AModule */;
long var17 /* : Int */;
long var18 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist3 = var;
{
var1 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist2 = var1;
{
var2 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist1 = var2;
var3 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
((void(*)(val* self))(var3->class->vft[COLOR_standard__kernel__Object__init]))(var3); /* init on <var3:Array[Object]>*/
}
var_listnode3 = var3;
var4 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
((void(*)(val* self))(var4->class->vft[COLOR_standard__kernel__Object__init]))(var4); /* init on <var4:Array[Object]>*/
}
var_listnode5 = var4;
var5 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
((void(*)(val* self))(var5->class->vft[COLOR_standard__kernel__Object__init]))(var5); /* init on <var5:Array[Object]>*/
}
var_listnode7 = var5;
var_pmoduledeclnode2 = var_nodearraylist1;
/* <var_pmoduledeclnode2:nullable Object> isa nullable AModuledecl */
cltype = type_nullable__nit__AModuledecl.color;
idtype = type_nullable__nit__AModuledecl.id;
if(var_pmoduledeclnode2 == NULL) {
var6 = 1;
} else {
if(cltype >= (((long)var_pmoduledeclnode2&3)?type_info[((long)var_pmoduledeclnode2&3)]:var_pmoduledeclnode2->type)->table_size) {
var6 = 0;
} else {
var6 = (((long)var_pmoduledeclnode2&3)?type_info[((long)var_pmoduledeclnode2&3)]:var_pmoduledeclnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var6)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1244);
fatal_exit(1);
}
var_listnode4 = var_nodearraylist2;
/* <var_listnode4:nullable Object> isa Array[Object] */
cltype8 = type_standard__Array__standard__Object.color;
idtype9 = type_standard__Array__standard__Object.id;
if(var_listnode4 == NULL) {
var7 = 0;
} else {
if(cltype8 >= (((long)var_listnode4&3)?type_info[((long)var_listnode4&3)]:var_listnode4->type)->table_size) {
var7 = 0;
} else {
var7 = (((long)var_listnode4&3)?type_info[((long)var_listnode4&3)]:var_listnode4->type)->type_table[cltype8] == idtype9;
}
}
if (unlikely(!var7)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1246);
fatal_exit(1);
}
{
var10 = ((val*(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__parser_work__ReduceAction__concat]))(self, var_listnode5, var_listnode4); /* concat on <self:ReduceAction5>*/
}
var_listnode5 = var10;
var_pclassdefnode6 = var_nodearraylist3;
/* <var_pclassdefnode6:nullable Object> isa nullable AClassdef */
cltype12 = type_nullable__nit__AClassdef.color;
idtype13 = type_nullable__nit__AClassdef.id;
if(var_pclassdefnode6 == NULL) {
var11 = 1;
} else {
if(cltype12 >= (((long)var_pclassdefnode6&3)?type_info[((long)var_pclassdefnode6&3)]:var_pclassdefnode6->type)->table_size) {
var11 = 0;
} else {
var11 = (((long)var_pclassdefnode6&3)?type_info[((long)var_pclassdefnode6&3)]:var_pclassdefnode6->type)->type_table[cltype12] == idtype13;
}
}
if (unlikely(!var11)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1249);
fatal_exit(1);
}
if (var_pclassdefnode6 == NULL) {
var14 = 0; /* is null */
} else {
var14 = 1; /* arg is null and recv is not */
}
if (0) {
var15 = ((short int(*)(val* self, val* p0))(var_pclassdefnode6->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_pclassdefnode6, ((val*)NULL)); /* != on <var_pclassdefnode6:nullable Object(nullable AClassdef)>*/
var14 = var15;
}
if (var14){
{
((void(*)(val* self, val* p0))(var_listnode7->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_listnode7, var_pclassdefnode6); /* add on <var_listnode7:Array[Object]>*/
}
} else {
}
var16 = NEW_nit__AModule(&type_nit__AModule);
{
((void(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var16->class->vft[COLOR_nit__parser_prod__AModule__init_amodule]))(var16, var_pmoduledeclnode2, var_listnode3, var_listnode5, var_listnode7); /* init_amodule on <var16:AModule>*/
}
var_pmodulenode1 = var16;
var_node_list = var_pmodulenode1;
var17 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction5> */
{
var18 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var17); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var18, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction6#action for (self: ReduceAction6, Parser) */
void nit__parser___nit__parser__ReduceAction6___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var3 /* : Array[Object] */;
val* var_listnode4 /* var listnode4: Array[Object] */;
val* var4 /* : Array[Object] */;
val* var_listnode6 /* var listnode6: Array[Object] */;
val* var5 /* : Array[Object] */;
val* var_listnode8 /* var listnode8: Array[Object] */;
val* var_listnode3 /* var listnode3: nullable Object */;
short int var6 /* : Bool */;
int cltype;
int idtype;
val* var7 /* : Array[Object] */;
val* var_listnode5 /* var listnode5: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var11 /* : Array[Object] */;
val* var_pclassdefnode7 /* var pclassdefnode7: nullable Object */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
val* var17 /* : AModule */;
val* var_pmodulenode1 /* var pmodulenode1: nullable AModule */;
long var18 /* : Int */;
long var19 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist3 = var;
{
var1 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist2 = var1;
{
var2 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist1 = var2;
var3 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
((void(*)(val* self))(var3->class->vft[COLOR_standard__kernel__Object__init]))(var3); /* init on <var3:Array[Object]>*/
}
var_listnode4 = var3;
var4 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
((void(*)(val* self))(var4->class->vft[COLOR_standard__kernel__Object__init]))(var4); /* init on <var4:Array[Object]>*/
}
var_listnode6 = var4;
var5 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
((void(*)(val* self))(var5->class->vft[COLOR_standard__kernel__Object__init]))(var5); /* init on <var5:Array[Object]>*/
}
var_listnode8 = var5;
var_listnode3 = var_nodearraylist1;
/* <var_listnode3:nullable Object> isa Array[Object] */
cltype = type_standard__Array__standard__Object.color;
idtype = type_standard__Array__standard__Object.id;
if(var_listnode3 == NULL) {
var6 = 0;
} else {
if(cltype >= (((long)var_listnode3&3)?type_info[((long)var_listnode3&3)]:var_listnode3->type)->table_size) {
var6 = 0;
} else {
var6 = (((long)var_listnode3&3)?type_info[((long)var_listnode3&3)]:var_listnode3->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var6)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1275);
fatal_exit(1);
}
{
var7 = ((val*(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__parser_work__ReduceAction__concat]))(self, var_listnode4, var_listnode3); /* concat on <self:ReduceAction6>*/
}
var_listnode4 = var7;
var_listnode5 = var_nodearraylist2;
/* <var_listnode5:nullable Object> isa Array[Object] */
cltype9 = type_standard__Array__standard__Object.color;
idtype10 = type_standard__Array__standard__Object.id;
if(var_listnode5 == NULL) {
var8 = 0;
} else {
if(cltype9 >= (((long)var_listnode5&3)?type_info[((long)var_listnode5&3)]:var_listnode5->type)->table_size) {
var8 = 0;
} else {
var8 = (((long)var_listnode5&3)?type_info[((long)var_listnode5&3)]:var_listnode5->type)->type_table[cltype9] == idtype10;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1278);
fatal_exit(1);
}
{
var11 = ((val*(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__parser_work__ReduceAction__concat]))(self, var_listnode6, var_listnode5); /* concat on <self:ReduceAction6>*/
}
var_listnode6 = var11;
var_pclassdefnode7 = var_nodearraylist3;
/* <var_pclassdefnode7:nullable Object> isa nullable AClassdef */
cltype13 = type_nullable__nit__AClassdef.color;
idtype14 = type_nullable__nit__AClassdef.id;
if(var_pclassdefnode7 == NULL) {
var12 = 1;
} else {
if(cltype13 >= (((long)var_pclassdefnode7&3)?type_info[((long)var_pclassdefnode7&3)]:var_pclassdefnode7->type)->table_size) {
var12 = 0;
} else {
var12 = (((long)var_pclassdefnode7&3)?type_info[((long)var_pclassdefnode7&3)]:var_pclassdefnode7->type)->type_table[cltype13] == idtype14;
}
}
if (unlikely(!var12)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1281);
fatal_exit(1);
}
if (var_pclassdefnode7 == NULL) {
var15 = 0; /* is null */
} else {
var15 = 1; /* arg is null and recv is not */
}
if (0) {
var16 = ((short int(*)(val* self, val* p0))(var_pclassdefnode7->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_pclassdefnode7, ((val*)NULL)); /* != on <var_pclassdefnode7:nullable Object(nullable AClassdef)>*/
var15 = var16;
}
if (var15){
{
((void(*)(val* self, val* p0))(var_listnode8->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_listnode8, var_pclassdefnode7); /* add on <var_listnode8:Array[Object]>*/
}
} else {
}
var17 = NEW_nit__AModule(&type_nit__AModule);
{
((void(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var17->class->vft[COLOR_nit__parser_prod__AModule__init_amodule]))(var17, ((val*)NULL), var_listnode4, var_listnode6, var_listnode8); /* init_amodule on <var17:AModule>*/
}
var_pmodulenode1 = var17;
var_node_list = var_pmodulenode1;
var18 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction6> */
{
var19 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var18); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var19, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction7#action for (self: ReduceAction7, Parser) */
void nit__parser___nit__parser__ReduceAction7___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var4 /* : Array[Object] */;
val* var_listnode4 /* var listnode4: Array[Object] */;
val* var5 /* : Array[Object] */;
val* var_listnode6 /* var listnode6: Array[Object] */;
val* var6 /* : Array[Object] */;
val* var_listnode8 /* var listnode8: Array[Object] */;
val* var_pmoduledeclnode2 /* var pmoduledeclnode2: nullable Object */;
short int var7 /* : Bool */;
int cltype;
int idtype;
val* var_listnode3 /* var listnode3: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var11 /* : Array[Object] */;
val* var_listnode5 /* var listnode5: nullable Object */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
val* var15 /* : Array[Object] */;
val* var_pclassdefnode7 /* var pclassdefnode7: nullable Object */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
val* var21 /* : AModule */;
val* var_pmodulenode1 /* var pmodulenode1: nullable AModule */;
long var22 /* : Int */;
long var23 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist4 = var;
{
var1 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist3 = var1;
{
var2 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist2 = var2;
{
var3 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist1 = var3;
var4 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
((void(*)(val* self))(var4->class->vft[COLOR_standard__kernel__Object__init]))(var4); /* init on <var4:Array[Object]>*/
}
var_listnode4 = var4;
var5 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
((void(*)(val* self))(var5->class->vft[COLOR_standard__kernel__Object__init]))(var5); /* init on <var5:Array[Object]>*/
}
var_listnode6 = var5;
var6 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
((void(*)(val* self))(var6->class->vft[COLOR_standard__kernel__Object__init]))(var6); /* init on <var6:Array[Object]>*/
}
var_listnode8 = var6;
var_pmoduledeclnode2 = var_nodearraylist1;
/* <var_pmoduledeclnode2:nullable Object> isa nullable AModuledecl */
cltype = type_nullable__nit__AModuledecl.color;
idtype = type_nullable__nit__AModuledecl.id;
if(var_pmoduledeclnode2 == NULL) {
var7 = 1;
} else {
if(cltype >= (((long)var_pmoduledeclnode2&3)?type_info[((long)var_pmoduledeclnode2&3)]:var_pmoduledeclnode2->type)->table_size) {
var7 = 0;
} else {
var7 = (((long)var_pmoduledeclnode2&3)?type_info[((long)var_pmoduledeclnode2&3)]:var_pmoduledeclnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var7)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1308);
fatal_exit(1);
}
var_listnode3 = var_nodearraylist2;
/* <var_listnode3:nullable Object> isa Array[Object] */
cltype9 = type_standard__Array__standard__Object.color;
idtype10 = type_standard__Array__standard__Object.id;
if(var_listnode3 == NULL) {
var8 = 0;
} else {
if(cltype9 >= (((long)var_listnode3&3)?type_info[((long)var_listnode3&3)]:var_listnode3->type)->table_size) {
var8 = 0;
} else {
var8 = (((long)var_listnode3&3)?type_info[((long)var_listnode3&3)]:var_listnode3->type)->type_table[cltype9] == idtype10;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1310);
fatal_exit(1);
}
{
var11 = ((val*(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__parser_work__ReduceAction__concat]))(self, var_listnode4, var_listnode3); /* concat on <self:ReduceAction7>*/
}
var_listnode4 = var11;
var_listnode5 = var_nodearraylist3;
/* <var_listnode5:nullable Object> isa Array[Object] */
cltype13 = type_standard__Array__standard__Object.color;
idtype14 = type_standard__Array__standard__Object.id;
if(var_listnode5 == NULL) {
var12 = 0;
} else {
if(cltype13 >= (((long)var_listnode5&3)?type_info[((long)var_listnode5&3)]:var_listnode5->type)->table_size) {
var12 = 0;
} else {
var12 = (((long)var_listnode5&3)?type_info[((long)var_listnode5&3)]:var_listnode5->type)->type_table[cltype13] == idtype14;
}
}
if (unlikely(!var12)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1313);
fatal_exit(1);
}
{
var15 = ((val*(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__parser_work__ReduceAction__concat]))(self, var_listnode6, var_listnode5); /* concat on <self:ReduceAction7>*/
}
var_listnode6 = var15;
var_pclassdefnode7 = var_nodearraylist4;
/* <var_pclassdefnode7:nullable Object> isa nullable AClassdef */
cltype17 = type_nullable__nit__AClassdef.color;
idtype18 = type_nullable__nit__AClassdef.id;
if(var_pclassdefnode7 == NULL) {
var16 = 1;
} else {
if(cltype17 >= (((long)var_pclassdefnode7&3)?type_info[((long)var_pclassdefnode7&3)]:var_pclassdefnode7->type)->table_size) {
var16 = 0;
} else {
var16 = (((long)var_pclassdefnode7&3)?type_info[((long)var_pclassdefnode7&3)]:var_pclassdefnode7->type)->type_table[cltype17] == idtype18;
}
}
if (unlikely(!var16)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1316);
fatal_exit(1);
}
if (var_pclassdefnode7 == NULL) {
var19 = 0; /* is null */
} else {
var19 = 1; /* arg is null and recv is not */
}
if (0) {
var20 = ((short int(*)(val* self, val* p0))(var_pclassdefnode7->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_pclassdefnode7, ((val*)NULL)); /* != on <var_pclassdefnode7:nullable Object(nullable AClassdef)>*/
var19 = var20;
}
if (var19){
{
((void(*)(val* self, val* p0))(var_listnode8->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_listnode8, var_pclassdefnode7); /* add on <var_listnode8:Array[Object]>*/
}
} else {
}
var21 = NEW_nit__AModule(&type_nit__AModule);
{
((void(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var21->class->vft[COLOR_nit__parser_prod__AModule__init_amodule]))(var21, var_pmoduledeclnode2, var_listnode4, var_listnode6, var_listnode8); /* init_amodule on <var21:AModule>*/
}
var_pmodulenode1 = var21;
var_node_list = var_pmodulenode1;
var22 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction7> */
{
var23 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var22); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var23, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction8#action for (self: ReduceAction8, Parser) */
void nit__parser___nit__parser__ReduceAction8___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var2 /* : Array[Object] */;
val* var_listnode3 /* var listnode3: Array[Object] */;
val* var3 /* : Array[Object] */;
val* var_listnode4 /* var listnode4: Array[Object] */;
val* var4 /* : Array[Object] */;
val* var_listnode7 /* var listnode7: Array[Object] */;
val* var_listnode5 /* var listnode5: nullable Object */;
short int var5 /* : Bool */;
int cltype;
int idtype;
val* var_pclassdefnode6 /* var pclassdefnode6: nullable Object */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
val* var9 /* : Array[Object] */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
val* var12 /* : AModule */;
val* var_pmodulenode1 /* var pmodulenode1: nullable AModule */;
long var13 /* : Int */;
long var14 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist2 = var;
{
var1 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist1 = var1;
var2 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
((void(*)(val* self))(var2->class->vft[COLOR_standard__kernel__Object__init]))(var2); /* init on <var2:Array[Object]>*/
}
var_listnode3 = var2;
var3 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
((void(*)(val* self))(var3->class->vft[COLOR_standard__kernel__Object__init]))(var3); /* init on <var3:Array[Object]>*/
}
var_listnode4 = var3;
var4 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
((void(*)(val* self))(var4->class->vft[COLOR_standard__kernel__Object__init]))(var4); /* init on <var4:Array[Object]>*/
}
var_listnode7 = var4;
var_listnode5 = var_nodearraylist1;
/* <var_listnode5:nullable Object> isa Array[Object] */
cltype = type_standard__Array__standard__Object.color;
idtype = type_standard__Array__standard__Object.id;
if(var_listnode5 == NULL) {
var5 = 0;
} else {
if(cltype >= (((long)var_listnode5&3)?type_info[((long)var_listnode5&3)]:var_listnode5->type)->table_size) {
var5 = 0;
} else {
var5 = (((long)var_listnode5&3)?type_info[((long)var_listnode5&3)]:var_listnode5->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var5)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1341);
fatal_exit(1);
}
var_pclassdefnode6 = var_nodearraylist2;
/* <var_pclassdefnode6:nullable Object> isa nullable AClassdef */
cltype7 = type_nullable__nit__AClassdef.color;
idtype8 = type_nullable__nit__AClassdef.id;
if(var_pclassdefnode6 == NULL) {
var6 = 1;
} else {
if(cltype7 >= (((long)var_pclassdefnode6&3)?type_info[((long)var_pclassdefnode6&3)]:var_pclassdefnode6->type)->table_size) {
var6 = 0;
} else {
var6 = (((long)var_pclassdefnode6&3)?type_info[((long)var_pclassdefnode6&3)]:var_pclassdefnode6->type)->type_table[cltype7] == idtype8;
}
}
if (unlikely(!var6)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1343);
fatal_exit(1);
}
{
var9 = ((val*(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__parser_work__ReduceAction__concat]))(self, var_listnode7, var_listnode5); /* concat on <self:ReduceAction8>*/
}
var_listnode7 = var9;
if (var_pclassdefnode6 == NULL) {
var10 = 0; /* is null */
} else {
var10 = 1; /* arg is null and recv is not */
}
if (0) {
var11 = ((short int(*)(val* self, val* p0))(var_pclassdefnode6->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_pclassdefnode6, ((val*)NULL)); /* != on <var_pclassdefnode6:nullable Object(nullable AClassdef)>*/
var10 = var11;
}
if (var10){
{
((void(*)(val* self, val* p0))(var_listnode7->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_listnode7, var_pclassdefnode6); /* add on <var_listnode7:Array[Object]>*/
}
} else {
}
var12 = NEW_nit__AModule(&type_nit__AModule);
{
((void(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var12->class->vft[COLOR_nit__parser_prod__AModule__init_amodule]))(var12, ((val*)NULL), var_listnode3, var_listnode4, var_listnode7); /* init_amodule on <var12:AModule>*/
}
var_pmodulenode1 = var12;
var_node_list = var_pmodulenode1;
var13 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction8> */
{
var14 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var13); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var14, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction9#action for (self: ReduceAction9, Parser) */
void nit__parser___nit__parser__ReduceAction9___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var3 /* : Array[Object] */;
val* var_listnode3 /* var listnode3: Array[Object] */;
val* var4 /* : Array[Object] */;
val* var_listnode4 /* var listnode4: Array[Object] */;
val* var5 /* : Array[Object] */;
val* var_listnode7 /* var listnode7: Array[Object] */;
val* var_pmoduledeclnode2 /* var pmoduledeclnode2: nullable Object */;
short int var6 /* : Bool */;
int cltype;
int idtype;
val* var_listnode5 /* var listnode5: nullable Object */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
val* var_pclassdefnode6 /* var pclassdefnode6: nullable Object */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var13 /* : Array[Object] */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
val* var16 /* : AModule */;
val* var_pmodulenode1 /* var pmodulenode1: nullable AModule */;
long var17 /* : Int */;
long var18 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist3 = var;
{
var1 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist2 = var1;
{
var2 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist1 = var2;
var3 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
((void(*)(val* self))(var3->class->vft[COLOR_standard__kernel__Object__init]))(var3); /* init on <var3:Array[Object]>*/
}
var_listnode3 = var3;
var4 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
((void(*)(val* self))(var4->class->vft[COLOR_standard__kernel__Object__init]))(var4); /* init on <var4:Array[Object]>*/
}
var_listnode4 = var4;
var5 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
((void(*)(val* self))(var5->class->vft[COLOR_standard__kernel__Object__init]))(var5); /* init on <var5:Array[Object]>*/
}
var_listnode7 = var5;
var_pmoduledeclnode2 = var_nodearraylist1;
/* <var_pmoduledeclnode2:nullable Object> isa nullable AModuledecl */
cltype = type_nullable__nit__AModuledecl.color;
idtype = type_nullable__nit__AModuledecl.id;
if(var_pmoduledeclnode2 == NULL) {
var6 = 1;
} else {
if(cltype >= (((long)var_pmoduledeclnode2&3)?type_info[((long)var_pmoduledeclnode2&3)]:var_pmoduledeclnode2->type)->table_size) {
var6 = 0;
} else {
var6 = (((long)var_pmoduledeclnode2&3)?type_info[((long)var_pmoduledeclnode2&3)]:var_pmoduledeclnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var6)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1370);
fatal_exit(1);
}
var_listnode5 = var_nodearraylist2;
/* <var_listnode5:nullable Object> isa Array[Object] */
cltype8 = type_standard__Array__standard__Object.color;
idtype9 = type_standard__Array__standard__Object.id;
if(var_listnode5 == NULL) {
var7 = 0;
} else {
if(cltype8 >= (((long)var_listnode5&3)?type_info[((long)var_listnode5&3)]:var_listnode5->type)->table_size) {
var7 = 0;
} else {
var7 = (((long)var_listnode5&3)?type_info[((long)var_listnode5&3)]:var_listnode5->type)->type_table[cltype8] == idtype9;
}
}
if (unlikely(!var7)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1372);
fatal_exit(1);
}
var_pclassdefnode6 = var_nodearraylist3;
/* <var_pclassdefnode6:nullable Object> isa nullable AClassdef */
cltype11 = type_nullable__nit__AClassdef.color;
idtype12 = type_nullable__nit__AClassdef.id;
if(var_pclassdefnode6 == NULL) {
var10 = 1;
} else {
if(cltype11 >= (((long)var_pclassdefnode6&3)?type_info[((long)var_pclassdefnode6&3)]:var_pclassdefnode6->type)->table_size) {
var10 = 0;
} else {
var10 = (((long)var_pclassdefnode6&3)?type_info[((long)var_pclassdefnode6&3)]:var_pclassdefnode6->type)->type_table[cltype11] == idtype12;
}
}
if (unlikely(!var10)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1374);
fatal_exit(1);
}
{
var13 = ((val*(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__parser_work__ReduceAction__concat]))(self, var_listnode7, var_listnode5); /* concat on <self:ReduceAction9>*/
}
var_listnode7 = var13;
if (var_pclassdefnode6 == NULL) {
var14 = 0; /* is null */
} else {
var14 = 1; /* arg is null and recv is not */
}
if (0) {
var15 = ((short int(*)(val* self, val* p0))(var_pclassdefnode6->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_pclassdefnode6, ((val*)NULL)); /* != on <var_pclassdefnode6:nullable Object(nullable AClassdef)>*/
var14 = var15;
}
if (var14){
{
((void(*)(val* self, val* p0))(var_listnode7->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_listnode7, var_pclassdefnode6); /* add on <var_listnode7:Array[Object]>*/
}
} else {
}
var16 = NEW_nit__AModule(&type_nit__AModule);
{
((void(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var16->class->vft[COLOR_nit__parser_prod__AModule__init_amodule]))(var16, var_pmoduledeclnode2, var_listnode3, var_listnode4, var_listnode7); /* init_amodule on <var16:AModule>*/
}
var_pmodulenode1 = var16;
var_node_list = var_pmodulenode1;
var17 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction9> */
{
var18 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var17); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var18, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction10#action for (self: ReduceAction10, Parser) */
void nit__parser___nit__parser__ReduceAction10___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var3 /* : Array[Object] */;
val* var_listnode4 /* var listnode4: Array[Object] */;
val* var4 /* : Array[Object] */;
val* var_listnode5 /* var listnode5: Array[Object] */;
val* var5 /* : Array[Object] */;
val* var_listnode8 /* var listnode8: Array[Object] */;
val* var_listnode3 /* var listnode3: nullable Object */;
short int var6 /* : Bool */;
int cltype;
int idtype;
val* var7 /* : Array[Object] */;
val* var_listnode6 /* var listnode6: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var_pclassdefnode7 /* var pclassdefnode7: nullable Object */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
val* var14 /* : Array[Object] */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
val* var17 /* : AModule */;
val* var_pmodulenode1 /* var pmodulenode1: nullable AModule */;
long var18 /* : Int */;
long var19 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist3 = var;
{
var1 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist2 = var1;
{
var2 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist1 = var2;
var3 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
((void(*)(val* self))(var3->class->vft[COLOR_standard__kernel__Object__init]))(var3); /* init on <var3:Array[Object]>*/
}
var_listnode4 = var3;
var4 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
((void(*)(val* self))(var4->class->vft[COLOR_standard__kernel__Object__init]))(var4); /* init on <var4:Array[Object]>*/
}
var_listnode5 = var4;
var5 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
((void(*)(val* self))(var5->class->vft[COLOR_standard__kernel__Object__init]))(var5); /* init on <var5:Array[Object]>*/
}
var_listnode8 = var5;
var_listnode3 = var_nodearraylist1;
/* <var_listnode3:nullable Object> isa Array[Object] */
cltype = type_standard__Array__standard__Object.color;
idtype = type_standard__Array__standard__Object.id;
if(var_listnode3 == NULL) {
var6 = 0;
} else {
if(cltype >= (((long)var_listnode3&3)?type_info[((long)var_listnode3&3)]:var_listnode3->type)->table_size) {
var6 = 0;
} else {
var6 = (((long)var_listnode3&3)?type_info[((long)var_listnode3&3)]:var_listnode3->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var6)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1401);
fatal_exit(1);
}
{
var7 = ((val*(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__parser_work__ReduceAction__concat]))(self, var_listnode4, var_listnode3); /* concat on <self:ReduceAction10>*/
}
var_listnode4 = var7;
var_listnode6 = var_nodearraylist2;
/* <var_listnode6:nullable Object> isa Array[Object] */
cltype9 = type_standard__Array__standard__Object.color;
idtype10 = type_standard__Array__standard__Object.id;
if(var_listnode6 == NULL) {
var8 = 0;
} else {
if(cltype9 >= (((long)var_listnode6&3)?type_info[((long)var_listnode6&3)]:var_listnode6->type)->table_size) {
var8 = 0;
} else {
var8 = (((long)var_listnode6&3)?type_info[((long)var_listnode6&3)]:var_listnode6->type)->type_table[cltype9] == idtype10;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1404);
fatal_exit(1);
}
var_pclassdefnode7 = var_nodearraylist3;
/* <var_pclassdefnode7:nullable Object> isa nullable AClassdef */
cltype12 = type_nullable__nit__AClassdef.color;
idtype13 = type_nullable__nit__AClassdef.id;
if(var_pclassdefnode7 == NULL) {
var11 = 1;
} else {
if(cltype12 >= (((long)var_pclassdefnode7&3)?type_info[((long)var_pclassdefnode7&3)]:var_pclassdefnode7->type)->table_size) {
var11 = 0;
} else {
var11 = (((long)var_pclassdefnode7&3)?type_info[((long)var_pclassdefnode7&3)]:var_pclassdefnode7->type)->type_table[cltype12] == idtype13;
}
}
if (unlikely(!var11)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1406);
fatal_exit(1);
}
{
var14 = ((val*(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__parser_work__ReduceAction__concat]))(self, var_listnode8, var_listnode6); /* concat on <self:ReduceAction10>*/
}
var_listnode8 = var14;
if (var_pclassdefnode7 == NULL) {
var15 = 0; /* is null */
} else {
var15 = 1; /* arg is null and recv is not */
}
if (0) {
var16 = ((short int(*)(val* self, val* p0))(var_pclassdefnode7->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_pclassdefnode7, ((val*)NULL)); /* != on <var_pclassdefnode7:nullable Object(nullable AClassdef)>*/
var15 = var16;
}
if (var15){
{
((void(*)(val* self, val* p0))(var_listnode8->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_listnode8, var_pclassdefnode7); /* add on <var_listnode8:Array[Object]>*/
}
} else {
}
var17 = NEW_nit__AModule(&type_nit__AModule);
{
((void(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var17->class->vft[COLOR_nit__parser_prod__AModule__init_amodule]))(var17, ((val*)NULL), var_listnode4, var_listnode5, var_listnode8); /* init_amodule on <var17:AModule>*/
}
var_pmodulenode1 = var17;
var_node_list = var_pmodulenode1;
var18 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction10> */
{
var19 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var18); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var19, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction11#action for (self: ReduceAction11, Parser) */
void nit__parser___nit__parser__ReduceAction11___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var4 /* : Array[Object] */;
val* var_listnode4 /* var listnode4: Array[Object] */;
val* var5 /* : Array[Object] */;
val* var_listnode5 /* var listnode5: Array[Object] */;
val* var6 /* : Array[Object] */;
val* var_listnode8 /* var listnode8: Array[Object] */;
val* var_pmoduledeclnode2 /* var pmoduledeclnode2: nullable Object */;
short int var7 /* : Bool */;
int cltype;
int idtype;
val* var_listnode3 /* var listnode3: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var11 /* : Array[Object] */;
val* var_listnode6 /* var listnode6: nullable Object */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
val* var_pclassdefnode7 /* var pclassdefnode7: nullable Object */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
val* var18 /* : Array[Object] */;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
val* var21 /* : AModule */;
val* var_pmodulenode1 /* var pmodulenode1: nullable AModule */;
long var22 /* : Int */;
long var23 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist4 = var;
{
var1 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist3 = var1;
{
var2 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist2 = var2;
{
var3 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist1 = var3;
var4 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
((void(*)(val* self))(var4->class->vft[COLOR_standard__kernel__Object__init]))(var4); /* init on <var4:Array[Object]>*/
}
var_listnode4 = var4;
var5 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
((void(*)(val* self))(var5->class->vft[COLOR_standard__kernel__Object__init]))(var5); /* init on <var5:Array[Object]>*/
}
var_listnode5 = var5;
var6 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
((void(*)(val* self))(var6->class->vft[COLOR_standard__kernel__Object__init]))(var6); /* init on <var6:Array[Object]>*/
}
var_listnode8 = var6;
var_pmoduledeclnode2 = var_nodearraylist1;
/* <var_pmoduledeclnode2:nullable Object> isa nullable AModuledecl */
cltype = type_nullable__nit__AModuledecl.color;
idtype = type_nullable__nit__AModuledecl.id;
if(var_pmoduledeclnode2 == NULL) {
var7 = 1;
} else {
if(cltype >= (((long)var_pmoduledeclnode2&3)?type_info[((long)var_pmoduledeclnode2&3)]:var_pmoduledeclnode2->type)->table_size) {
var7 = 0;
} else {
var7 = (((long)var_pmoduledeclnode2&3)?type_info[((long)var_pmoduledeclnode2&3)]:var_pmoduledeclnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var7)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1434);
fatal_exit(1);
}
var_listnode3 = var_nodearraylist2;
/* <var_listnode3:nullable Object> isa Array[Object] */
cltype9 = type_standard__Array__standard__Object.color;
idtype10 = type_standard__Array__standard__Object.id;
if(var_listnode3 == NULL) {
var8 = 0;
} else {
if(cltype9 >= (((long)var_listnode3&3)?type_info[((long)var_listnode3&3)]:var_listnode3->type)->table_size) {
var8 = 0;
} else {
var8 = (((long)var_listnode3&3)?type_info[((long)var_listnode3&3)]:var_listnode3->type)->type_table[cltype9] == idtype10;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1436);
fatal_exit(1);
}
{
var11 = ((val*(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__parser_work__ReduceAction__concat]))(self, var_listnode4, var_listnode3); /* concat on <self:ReduceAction11>*/
}
var_listnode4 = var11;
var_listnode6 = var_nodearraylist3;
/* <var_listnode6:nullable Object> isa Array[Object] */
cltype13 = type_standard__Array__standard__Object.color;
idtype14 = type_standard__Array__standard__Object.id;
if(var_listnode6 == NULL) {
var12 = 0;
} else {
if(cltype13 >= (((long)var_listnode6&3)?type_info[((long)var_listnode6&3)]:var_listnode6->type)->table_size) {
var12 = 0;
} else {
var12 = (((long)var_listnode6&3)?type_info[((long)var_listnode6&3)]:var_listnode6->type)->type_table[cltype13] == idtype14;
}
}
if (unlikely(!var12)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1439);
fatal_exit(1);
}
var_pclassdefnode7 = var_nodearraylist4;
/* <var_pclassdefnode7:nullable Object> isa nullable AClassdef */
cltype16 = type_nullable__nit__AClassdef.color;
idtype17 = type_nullable__nit__AClassdef.id;
if(var_pclassdefnode7 == NULL) {
var15 = 1;
} else {
if(cltype16 >= (((long)var_pclassdefnode7&3)?type_info[((long)var_pclassdefnode7&3)]:var_pclassdefnode7->type)->table_size) {
var15 = 0;
} else {
var15 = (((long)var_pclassdefnode7&3)?type_info[((long)var_pclassdefnode7&3)]:var_pclassdefnode7->type)->type_table[cltype16] == idtype17;
}
}
if (unlikely(!var15)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1441);
fatal_exit(1);
}
{
var18 = ((val*(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__parser_work__ReduceAction__concat]))(self, var_listnode8, var_listnode6); /* concat on <self:ReduceAction11>*/
}
var_listnode8 = var18;
if (var_pclassdefnode7 == NULL) {
var19 = 0; /* is null */
} else {
var19 = 1; /* arg is null and recv is not */
}
if (0) {
var20 = ((short int(*)(val* self, val* p0))(var_pclassdefnode7->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_pclassdefnode7, ((val*)NULL)); /* != on <var_pclassdefnode7:nullable Object(nullable AClassdef)>*/
var19 = var20;
}
if (var19){
{
((void(*)(val* self, val* p0))(var_listnode8->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_listnode8, var_pclassdefnode7); /* add on <var_listnode8:Array[Object]>*/
}
} else {
}
var21 = NEW_nit__AModule(&type_nit__AModule);
{
((void(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var21->class->vft[COLOR_nit__parser_prod__AModule__init_amodule]))(var21, var_pmoduledeclnode2, var_listnode4, var_listnode5, var_listnode8); /* init_amodule on <var21:AModule>*/
}
var_pmodulenode1 = var21;
var_node_list = var_pmodulenode1;
var22 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction11> */
{
var23 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var22); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var23, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction12#action for (self: ReduceAction12, Parser) */
void nit__parser___nit__parser__ReduceAction12___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var3 /* : Array[Object] */;
val* var_listnode3 /* var listnode3: Array[Object] */;
val* var4 /* : Array[Object] */;
val* var_listnode5 /* var listnode5: Array[Object] */;
val* var5 /* : Array[Object] */;
val* var_listnode8 /* var listnode8: Array[Object] */;
val* var_listnode4 /* var listnode4: nullable Object */;
short int var6 /* : Bool */;
int cltype;
int idtype;
val* var7 /* : Array[Object] */;
val* var_listnode6 /* var listnode6: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var_pclassdefnode7 /* var pclassdefnode7: nullable Object */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
val* var14 /* : Array[Object] */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
val* var17 /* : AModule */;
val* var_pmodulenode1 /* var pmodulenode1: nullable AModule */;
long var18 /* : Int */;
long var19 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist3 = var;
{
var1 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist2 = var1;
{
var2 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist1 = var2;
var3 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
((void(*)(val* self))(var3->class->vft[COLOR_standard__kernel__Object__init]))(var3); /* init on <var3:Array[Object]>*/
}
var_listnode3 = var3;
var4 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
((void(*)(val* self))(var4->class->vft[COLOR_standard__kernel__Object__init]))(var4); /* init on <var4:Array[Object]>*/
}
var_listnode5 = var4;
var5 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
((void(*)(val* self))(var5->class->vft[COLOR_standard__kernel__Object__init]))(var5); /* init on <var5:Array[Object]>*/
}
var_listnode8 = var5;
var_listnode4 = var_nodearraylist1;
/* <var_listnode4:nullable Object> isa Array[Object] */
cltype = type_standard__Array__standard__Object.color;
idtype = type_standard__Array__standard__Object.id;
if(var_listnode4 == NULL) {
var6 = 0;
} else {
if(cltype >= (((long)var_listnode4&3)?type_info[((long)var_listnode4&3)]:var_listnode4->type)->table_size) {
var6 = 0;
} else {
var6 = (((long)var_listnode4&3)?type_info[((long)var_listnode4&3)]:var_listnode4->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var6)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1468);
fatal_exit(1);
}
{
var7 = ((val*(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__parser_work__ReduceAction__concat]))(self, var_listnode5, var_listnode4); /* concat on <self:ReduceAction12>*/
}
var_listnode5 = var7;
var_listnode6 = var_nodearraylist2;
/* <var_listnode6:nullable Object> isa Array[Object] */
cltype9 = type_standard__Array__standard__Object.color;
idtype10 = type_standard__Array__standard__Object.id;
if(var_listnode6 == NULL) {
var8 = 0;
} else {
if(cltype9 >= (((long)var_listnode6&3)?type_info[((long)var_listnode6&3)]:var_listnode6->type)->table_size) {
var8 = 0;
} else {
var8 = (((long)var_listnode6&3)?type_info[((long)var_listnode6&3)]:var_listnode6->type)->type_table[cltype9] == idtype10;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1471);
fatal_exit(1);
}
var_pclassdefnode7 = var_nodearraylist3;
/* <var_pclassdefnode7:nullable Object> isa nullable AClassdef */
cltype12 = type_nullable__nit__AClassdef.color;
idtype13 = type_nullable__nit__AClassdef.id;
if(var_pclassdefnode7 == NULL) {
var11 = 1;
} else {
if(cltype12 >= (((long)var_pclassdefnode7&3)?type_info[((long)var_pclassdefnode7&3)]:var_pclassdefnode7->type)->table_size) {
var11 = 0;
} else {
var11 = (((long)var_pclassdefnode7&3)?type_info[((long)var_pclassdefnode7&3)]:var_pclassdefnode7->type)->type_table[cltype12] == idtype13;
}
}
if (unlikely(!var11)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1473);
fatal_exit(1);
}
{
var14 = ((val*(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__parser_work__ReduceAction__concat]))(self, var_listnode8, var_listnode6); /* concat on <self:ReduceAction12>*/
}
var_listnode8 = var14;
if (var_pclassdefnode7 == NULL) {
var15 = 0; /* is null */
} else {
var15 = 1; /* arg is null and recv is not */
}
if (0) {
var16 = ((short int(*)(val* self, val* p0))(var_pclassdefnode7->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_pclassdefnode7, ((val*)NULL)); /* != on <var_pclassdefnode7:nullable Object(nullable AClassdef)>*/
var15 = var16;
}
if (var15){
{
((void(*)(val* self, val* p0))(var_listnode8->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_listnode8, var_pclassdefnode7); /* add on <var_listnode8:Array[Object]>*/
}
} else {
}
var17 = NEW_nit__AModule(&type_nit__AModule);
{
((void(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var17->class->vft[COLOR_nit__parser_prod__AModule__init_amodule]))(var17, ((val*)NULL), var_listnode3, var_listnode5, var_listnode8); /* init_amodule on <var17:AModule>*/
}
var_pmodulenode1 = var17;
var_node_list = var_pmodulenode1;
var18 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction12> */
{
var19 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var18); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var19, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction13#action for (self: ReduceAction13, Parser) */
void nit__parser___nit__parser__ReduceAction13___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var4 /* : Array[Object] */;
val* var_listnode3 /* var listnode3: Array[Object] */;
val* var5 /* : Array[Object] */;
val* var_listnode5 /* var listnode5: Array[Object] */;
val* var6 /* : Array[Object] */;
val* var_listnode8 /* var listnode8: Array[Object] */;
val* var_pmoduledeclnode2 /* var pmoduledeclnode2: nullable Object */;
short int var7 /* : Bool */;
int cltype;
int idtype;
val* var_listnode4 /* var listnode4: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var11 /* : Array[Object] */;
val* var_listnode6 /* var listnode6: nullable Object */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
val* var_pclassdefnode7 /* var pclassdefnode7: nullable Object */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
val* var18 /* : Array[Object] */;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
val* var21 /* : AModule */;
val* var_pmodulenode1 /* var pmodulenode1: nullable AModule */;
long var22 /* : Int */;
long var23 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist4 = var;
{
var1 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist3 = var1;
{
var2 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist2 = var2;
{
var3 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist1 = var3;
var4 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
((void(*)(val* self))(var4->class->vft[COLOR_standard__kernel__Object__init]))(var4); /* init on <var4:Array[Object]>*/
}
var_listnode3 = var4;
var5 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
((void(*)(val* self))(var5->class->vft[COLOR_standard__kernel__Object__init]))(var5); /* init on <var5:Array[Object]>*/
}
var_listnode5 = var5;
var6 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
((void(*)(val* self))(var6->class->vft[COLOR_standard__kernel__Object__init]))(var6); /* init on <var6:Array[Object]>*/
}
var_listnode8 = var6;
var_pmoduledeclnode2 = var_nodearraylist1;
/* <var_pmoduledeclnode2:nullable Object> isa nullable AModuledecl */
cltype = type_nullable__nit__AModuledecl.color;
idtype = type_nullable__nit__AModuledecl.id;
if(var_pmoduledeclnode2 == NULL) {
var7 = 1;
} else {
if(cltype >= (((long)var_pmoduledeclnode2&3)?type_info[((long)var_pmoduledeclnode2&3)]:var_pmoduledeclnode2->type)->table_size) {
var7 = 0;
} else {
var7 = (((long)var_pmoduledeclnode2&3)?type_info[((long)var_pmoduledeclnode2&3)]:var_pmoduledeclnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var7)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1501);
fatal_exit(1);
}
var_listnode4 = var_nodearraylist2;
/* <var_listnode4:nullable Object> isa Array[Object] */
cltype9 = type_standard__Array__standard__Object.color;
idtype10 = type_standard__Array__standard__Object.id;
if(var_listnode4 == NULL) {
var8 = 0;
} else {
if(cltype9 >= (((long)var_listnode4&3)?type_info[((long)var_listnode4&3)]:var_listnode4->type)->table_size) {
var8 = 0;
} else {
var8 = (((long)var_listnode4&3)?type_info[((long)var_listnode4&3)]:var_listnode4->type)->type_table[cltype9] == idtype10;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1503);
fatal_exit(1);
}
{
var11 = ((val*(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__parser_work__ReduceAction__concat]))(self, var_listnode5, var_listnode4); /* concat on <self:ReduceAction13>*/
}
var_listnode5 = var11;
var_listnode6 = var_nodearraylist3;
/* <var_listnode6:nullable Object> isa Array[Object] */
cltype13 = type_standard__Array__standard__Object.color;
idtype14 = type_standard__Array__standard__Object.id;
if(var_listnode6 == NULL) {
var12 = 0;
} else {
if(cltype13 >= (((long)var_listnode6&3)?type_info[((long)var_listnode6&3)]:var_listnode6->type)->table_size) {
var12 = 0;
} else {
var12 = (((long)var_listnode6&3)?type_info[((long)var_listnode6&3)]:var_listnode6->type)->type_table[cltype13] == idtype14;
}
}
if (unlikely(!var12)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1506);
fatal_exit(1);
}
var_pclassdefnode7 = var_nodearraylist4;
/* <var_pclassdefnode7:nullable Object> isa nullable AClassdef */
cltype16 = type_nullable__nit__AClassdef.color;
idtype17 = type_nullable__nit__AClassdef.id;
if(var_pclassdefnode7 == NULL) {
var15 = 1;
} else {
if(cltype16 >= (((long)var_pclassdefnode7&3)?type_info[((long)var_pclassdefnode7&3)]:var_pclassdefnode7->type)->table_size) {
var15 = 0;
} else {
var15 = (((long)var_pclassdefnode7&3)?type_info[((long)var_pclassdefnode7&3)]:var_pclassdefnode7->type)->type_table[cltype16] == idtype17;
}
}
if (unlikely(!var15)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1508);
fatal_exit(1);
}
{
var18 = ((val*(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__parser_work__ReduceAction__concat]))(self, var_listnode8, var_listnode6); /* concat on <self:ReduceAction13>*/
}
var_listnode8 = var18;
if (var_pclassdefnode7 == NULL) {
var19 = 0; /* is null */
} else {
var19 = 1; /* arg is null and recv is not */
}
if (0) {
var20 = ((short int(*)(val* self, val* p0))(var_pclassdefnode7->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_pclassdefnode7, ((val*)NULL)); /* != on <var_pclassdefnode7:nullable Object(nullable AClassdef)>*/
var19 = var20;
}
if (var19){
{
((void(*)(val* self, val* p0))(var_listnode8->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_listnode8, var_pclassdefnode7); /* add on <var_listnode8:Array[Object]>*/
}
} else {
}
var21 = NEW_nit__AModule(&type_nit__AModule);
{
((void(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var21->class->vft[COLOR_nit__parser_prod__AModule__init_amodule]))(var21, var_pmoduledeclnode2, var_listnode3, var_listnode5, var_listnode8); /* init_amodule on <var21:AModule>*/
}
var_pmodulenode1 = var21;
var_node_list = var_pmodulenode1;
var22 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction13> */
{
var23 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var22); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var23, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction14#action for (self: ReduceAction14, Parser) */
void nit__parser___nit__parser__ReduceAction14___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var4 /* : Array[Object] */;
val* var_listnode4 /* var listnode4: Array[Object] */;
val* var5 /* : Array[Object] */;
val* var_listnode6 /* var listnode6: Array[Object] */;
val* var6 /* : Array[Object] */;
val* var_listnode9 /* var listnode9: Array[Object] */;
val* var_listnode3 /* var listnode3: nullable Object */;
short int var7 /* : Bool */;
int cltype;
int idtype;
val* var8 /* : Array[Object] */;
val* var_listnode5 /* var listnode5: nullable Object */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var12 /* : Array[Object] */;
val* var_listnode7 /* var listnode7: nullable Object */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
val* var_pclassdefnode8 /* var pclassdefnode8: nullable Object */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
val* var19 /* : Array[Object] */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
val* var22 /* : AModule */;
val* var_pmodulenode1 /* var pmodulenode1: nullable AModule */;
long var23 /* : Int */;
long var24 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist4 = var;
{
var1 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist3 = var1;
{
var2 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist2 = var2;
{
var3 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist1 = var3;
var4 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
((void(*)(val* self))(var4->class->vft[COLOR_standard__kernel__Object__init]))(var4); /* init on <var4:Array[Object]>*/
}
var_listnode4 = var4;
var5 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
((void(*)(val* self))(var5->class->vft[COLOR_standard__kernel__Object__init]))(var5); /* init on <var5:Array[Object]>*/
}
var_listnode6 = var5;
var6 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
((void(*)(val* self))(var6->class->vft[COLOR_standard__kernel__Object__init]))(var6); /* init on <var6:Array[Object]>*/
}
var_listnode9 = var6;
var_listnode3 = var_nodearraylist1;
/* <var_listnode3:nullable Object> isa Array[Object] */
cltype = type_standard__Array__standard__Object.color;
idtype = type_standard__Array__standard__Object.id;
if(var_listnode3 == NULL) {
var7 = 0;
} else {
if(cltype >= (((long)var_listnode3&3)?type_info[((long)var_listnode3&3)]:var_listnode3->type)->table_size) {
var7 = 0;
} else {
var7 = (((long)var_listnode3&3)?type_info[((long)var_listnode3&3)]:var_listnode3->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var7)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1536);
fatal_exit(1);
}
{
var8 = ((val*(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__parser_work__ReduceAction__concat]))(self, var_listnode4, var_listnode3); /* concat on <self:ReduceAction14>*/
}
var_listnode4 = var8;
var_listnode5 = var_nodearraylist2;
/* <var_listnode5:nullable Object> isa Array[Object] */
cltype10 = type_standard__Array__standard__Object.color;
idtype11 = type_standard__Array__standard__Object.id;
if(var_listnode5 == NULL) {
var9 = 0;
} else {
if(cltype10 >= (((long)var_listnode5&3)?type_info[((long)var_listnode5&3)]:var_listnode5->type)->table_size) {
var9 = 0;
} else {
var9 = (((long)var_listnode5&3)?type_info[((long)var_listnode5&3)]:var_listnode5->type)->type_table[cltype10] == idtype11;
}
}
if (unlikely(!var9)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1539);
fatal_exit(1);
}
{
var12 = ((val*(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__parser_work__ReduceAction__concat]))(self, var_listnode6, var_listnode5); /* concat on <self:ReduceAction14>*/
}
var_listnode6 = var12;
var_listnode7 = var_nodearraylist3;
/* <var_listnode7:nullable Object> isa Array[Object] */
cltype14 = type_standard__Array__standard__Object.color;
idtype15 = type_standard__Array__standard__Object.id;
if(var_listnode7 == NULL) {
var13 = 0;
} else {
if(cltype14 >= (((long)var_listnode7&3)?type_info[((long)var_listnode7&3)]:var_listnode7->type)->table_size) {
var13 = 0;
} else {
var13 = (((long)var_listnode7&3)?type_info[((long)var_listnode7&3)]:var_listnode7->type)->type_table[cltype14] == idtype15;
}
}
if (unlikely(!var13)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1542);
fatal_exit(1);
}
var_pclassdefnode8 = var_nodearraylist4;
/* <var_pclassdefnode8:nullable Object> isa nullable AClassdef */
cltype17 = type_nullable__nit__AClassdef.color;
idtype18 = type_nullable__nit__AClassdef.id;
if(var_pclassdefnode8 == NULL) {
var16 = 1;
} else {
if(cltype17 >= (((long)var_pclassdefnode8&3)?type_info[((long)var_pclassdefnode8&3)]:var_pclassdefnode8->type)->table_size) {
var16 = 0;
} else {
var16 = (((long)var_pclassdefnode8&3)?type_info[((long)var_pclassdefnode8&3)]:var_pclassdefnode8->type)->type_table[cltype17] == idtype18;
}
}
if (unlikely(!var16)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1544);
fatal_exit(1);
}
{
var19 = ((val*(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__parser_work__ReduceAction__concat]))(self, var_listnode9, var_listnode7); /* concat on <self:ReduceAction14>*/
}
var_listnode9 = var19;
if (var_pclassdefnode8 == NULL) {
var20 = 0; /* is null */
} else {
var20 = 1; /* arg is null and recv is not */
}
if (0) {
var21 = ((short int(*)(val* self, val* p0))(var_pclassdefnode8->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_pclassdefnode8, ((val*)NULL)); /* != on <var_pclassdefnode8:nullable Object(nullable AClassdef)>*/
var20 = var21;
}
if (var20){
{
((void(*)(val* self, val* p0))(var_listnode9->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_listnode9, var_pclassdefnode8); /* add on <var_listnode9:Array[Object]>*/
}
} else {
}
var22 = NEW_nit__AModule(&type_nit__AModule);
{
((void(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var22->class->vft[COLOR_nit__parser_prod__AModule__init_amodule]))(var22, ((val*)NULL), var_listnode4, var_listnode6, var_listnode9); /* init_amodule on <var22:AModule>*/
}
var_pmodulenode1 = var22;
var_node_list = var_pmodulenode1;
var23 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction14> */
{
var24 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var23); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var24, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction15#action for (self: ReduceAction15, Parser) */
void nit__parser___nit__parser__ReduceAction15___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist5 /* var nodearraylist5: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var5 /* : Array[Object] */;
val* var_listnode4 /* var listnode4: Array[Object] */;
val* var6 /* : Array[Object] */;
val* var_listnode6 /* var listnode6: Array[Object] */;
val* var7 /* : Array[Object] */;
val* var_listnode9 /* var listnode9: Array[Object] */;
val* var_pmoduledeclnode2 /* var pmoduledeclnode2: nullable Object */;
short int var8 /* : Bool */;
int cltype;
int idtype;
val* var_listnode3 /* var listnode3: nullable Object */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var12 /* : Array[Object] */;
val* var_listnode5 /* var listnode5: nullable Object */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
val* var16 /* : Array[Object] */;
val* var_listnode7 /* var listnode7: nullable Object */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
val* var_pclassdefnode8 /* var pclassdefnode8: nullable Object */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
val* var23 /* : Array[Object] */;
short int var24 /* : Bool */;
short int var25 /* : Bool */;
val* var26 /* : AModule */;
val* var_pmodulenode1 /* var pmodulenode1: nullable AModule */;
long var27 /* : Int */;
long var28 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist5 = var;
{
var1 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist4 = var1;
{
var2 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist3 = var2;
{
var3 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist2 = var3;
{
var4 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist1 = var4;
var5 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
((void(*)(val* self))(var5->class->vft[COLOR_standard__kernel__Object__init]))(var5); /* init on <var5:Array[Object]>*/
}
var_listnode4 = var5;
var6 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
((void(*)(val* self))(var6->class->vft[COLOR_standard__kernel__Object__init]))(var6); /* init on <var6:Array[Object]>*/
}
var_listnode6 = var6;
var7 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
((void(*)(val* self))(var7->class->vft[COLOR_standard__kernel__Object__init]))(var7); /* init on <var7:Array[Object]>*/
}
var_listnode9 = var7;
var_pmoduledeclnode2 = var_nodearraylist1;
/* <var_pmoduledeclnode2:nullable Object> isa nullable AModuledecl */
cltype = type_nullable__nit__AModuledecl.color;
idtype = type_nullable__nit__AModuledecl.id;
if(var_pmoduledeclnode2 == NULL) {
var8 = 1;
} else {
if(cltype >= (((long)var_pmoduledeclnode2&3)?type_info[((long)var_pmoduledeclnode2&3)]:var_pmoduledeclnode2->type)->table_size) {
var8 = 0;
} else {
var8 = (((long)var_pmoduledeclnode2&3)?type_info[((long)var_pmoduledeclnode2&3)]:var_pmoduledeclnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1573);
fatal_exit(1);
}
var_listnode3 = var_nodearraylist2;
/* <var_listnode3:nullable Object> isa Array[Object] */
cltype10 = type_standard__Array__standard__Object.color;
idtype11 = type_standard__Array__standard__Object.id;
if(var_listnode3 == NULL) {
var9 = 0;
} else {
if(cltype10 >= (((long)var_listnode3&3)?type_info[((long)var_listnode3&3)]:var_listnode3->type)->table_size) {
var9 = 0;
} else {
var9 = (((long)var_listnode3&3)?type_info[((long)var_listnode3&3)]:var_listnode3->type)->type_table[cltype10] == idtype11;
}
}
if (unlikely(!var9)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1575);
fatal_exit(1);
}
{
var12 = ((val*(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__parser_work__ReduceAction__concat]))(self, var_listnode4, var_listnode3); /* concat on <self:ReduceAction15>*/
}
var_listnode4 = var12;
var_listnode5 = var_nodearraylist3;
/* <var_listnode5:nullable Object> isa Array[Object] */
cltype14 = type_standard__Array__standard__Object.color;
idtype15 = type_standard__Array__standard__Object.id;
if(var_listnode5 == NULL) {
var13 = 0;
} else {
if(cltype14 >= (((long)var_listnode5&3)?type_info[((long)var_listnode5&3)]:var_listnode5->type)->table_size) {
var13 = 0;
} else {
var13 = (((long)var_listnode5&3)?type_info[((long)var_listnode5&3)]:var_listnode5->type)->type_table[cltype14] == idtype15;
}
}
if (unlikely(!var13)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1578);
fatal_exit(1);
}
{
var16 = ((val*(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__parser_work__ReduceAction__concat]))(self, var_listnode6, var_listnode5); /* concat on <self:ReduceAction15>*/
}
var_listnode6 = var16;
var_listnode7 = var_nodearraylist4;
/* <var_listnode7:nullable Object> isa Array[Object] */
cltype18 = type_standard__Array__standard__Object.color;
idtype19 = type_standard__Array__standard__Object.id;
if(var_listnode7 == NULL) {
var17 = 0;
} else {
if(cltype18 >= (((long)var_listnode7&3)?type_info[((long)var_listnode7&3)]:var_listnode7->type)->table_size) {
var17 = 0;
} else {
var17 = (((long)var_listnode7&3)?type_info[((long)var_listnode7&3)]:var_listnode7->type)->type_table[cltype18] == idtype19;
}
}
if (unlikely(!var17)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1581);
fatal_exit(1);
}
var_pclassdefnode8 = var_nodearraylist5;
/* <var_pclassdefnode8:nullable Object> isa nullable AClassdef */
cltype21 = type_nullable__nit__AClassdef.color;
idtype22 = type_nullable__nit__AClassdef.id;
if(var_pclassdefnode8 == NULL) {
var20 = 1;
} else {
if(cltype21 >= (((long)var_pclassdefnode8&3)?type_info[((long)var_pclassdefnode8&3)]:var_pclassdefnode8->type)->table_size) {
var20 = 0;
} else {
var20 = (((long)var_pclassdefnode8&3)?type_info[((long)var_pclassdefnode8&3)]:var_pclassdefnode8->type)->type_table[cltype21] == idtype22;
}
}
if (unlikely(!var20)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1583);
fatal_exit(1);
}
{
var23 = ((val*(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__parser_work__ReduceAction__concat]))(self, var_listnode9, var_listnode7); /* concat on <self:ReduceAction15>*/
}
var_listnode9 = var23;
if (var_pclassdefnode8 == NULL) {
var24 = 0; /* is null */
} else {
var24 = 1; /* arg is null and recv is not */
}
if (0) {
var25 = ((short int(*)(val* self, val* p0))(var_pclassdefnode8->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_pclassdefnode8, ((val*)NULL)); /* != on <var_pclassdefnode8:nullable Object(nullable AClassdef)>*/
var24 = var25;
}
if (var24){
{
((void(*)(val* self, val* p0))(var_listnode9->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_listnode9, var_pclassdefnode8); /* add on <var_listnode9:Array[Object]>*/
}
} else {
}
var26 = NEW_nit__AModule(&type_nit__AModule);
{
((void(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var26->class->vft[COLOR_nit__parser_prod__AModule__init_amodule]))(var26, var_pmoduledeclnode2, var_listnode4, var_listnode6, var_listnode9); /* init_amodule on <var26:AModule>*/
}
var_pmodulenode1 = var26;
var_node_list = var_pmodulenode1;
var27 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction15> */
{
var28 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var27); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var28, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction16#action for (self: ReduceAction16, Parser) */
void nit__parser___nit__parser__ReduceAction16___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist8 /* var nodearraylist8: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist7 /* var nodearraylist7: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist6 /* var nodearraylist6: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist5 /* var nodearraylist5: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var5 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var6 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var7 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var8 /* : Bool */;
int cltype;
int idtype;
val* var_tkwredefnode3 /* var tkwredefnode3: nullable Object */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var_pvisibilitynode4 /* var pvisibilitynode4: nullable Object */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
val* var_tkwmodulenode5 /* var tkwmodulenode5: nullable Object */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
val* var_pmodulenamenode6 /* var pmodulenamenode6: nullable Object */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
val* var_pannotationsnode7 /* var pannotationsnode7: nullable Object */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
val* var24 /* : AModuledecl */;
val* var_pmoduledeclnode1 /* var pmoduledeclnode1: nullable AModuledecl */;
long var25 /* : Int */;
long var26 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist8 = var;
{
var1 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist7 = var1;
{
var2 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist6 = var2;
{
var3 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist5 = var3;
{
var4 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist4 = var4;
{
var5 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist3 = var5;
{
var6 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist2 = var6;
{
var7 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist1 = var7;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable__nit__ADoc.color;
idtype = type_nullable__nit__ADoc.id;
if(var_pdocnode2 == NULL) {
var8 = 1;
} else {
if(cltype >= (((long)var_pdocnode2&3)?type_info[((long)var_pdocnode2&3)]:var_pdocnode2->type)->table_size) {
var8 = 0;
} else {
var8 = (((long)var_pdocnode2&3)?type_info[((long)var_pdocnode2&3)]:var_pdocnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1612);
fatal_exit(1);
}
var_tkwredefnode3 = var_nodearraylist2;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype10 = type_nullable__nit__TKwredef.color;
idtype11 = type_nullable__nit__TKwredef.id;
if(var_tkwredefnode3 == NULL) {
var9 = 1;
} else {
if(cltype10 >= (((long)var_tkwredefnode3&3)?type_info[((long)var_tkwredefnode3&3)]:var_tkwredefnode3->type)->table_size) {
var9 = 0;
} else {
var9 = (((long)var_tkwredefnode3&3)?type_info[((long)var_tkwredefnode3&3)]:var_tkwredefnode3->type)->type_table[cltype10] == idtype11;
}
}
if (unlikely(!var9)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1614);
fatal_exit(1);
}
var_pvisibilitynode4 = var_nodearraylist3;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype13 = type_nullable__nit__AVisibility.color;
idtype14 = type_nullable__nit__AVisibility.id;
if(var_pvisibilitynode4 == NULL) {
var12 = 1;
} else {
if(cltype13 >= (((long)var_pvisibilitynode4&3)?type_info[((long)var_pvisibilitynode4&3)]:var_pvisibilitynode4->type)->table_size) {
var12 = 0;
} else {
var12 = (((long)var_pvisibilitynode4&3)?type_info[((long)var_pvisibilitynode4&3)]:var_pvisibilitynode4->type)->type_table[cltype13] == idtype14;
}
}
if (unlikely(!var12)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1616);
fatal_exit(1);
}
var_tkwmodulenode5 = var_nodearraylist4;
/* <var_tkwmodulenode5:nullable Object> isa nullable TKwmodule */
cltype16 = type_nullable__nit__TKwmodule.color;
idtype17 = type_nullable__nit__TKwmodule.id;
if(var_tkwmodulenode5 == NULL) {
var15 = 1;
} else {
if(cltype16 >= (((long)var_tkwmodulenode5&3)?type_info[((long)var_tkwmodulenode5&3)]:var_tkwmodulenode5->type)->table_size) {
var15 = 0;
} else {
var15 = (((long)var_tkwmodulenode5&3)?type_info[((long)var_tkwmodulenode5&3)]:var_tkwmodulenode5->type)->type_table[cltype16] == idtype17;
}
}
if (unlikely(!var15)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1618);
fatal_exit(1);
}
var_pmodulenamenode6 = var_nodearraylist6;
/* <var_pmodulenamenode6:nullable Object> isa nullable AModuleName */
cltype19 = type_nullable__nit__AModuleName.color;
idtype20 = type_nullable__nit__AModuleName.id;
if(var_pmodulenamenode6 == NULL) {
var18 = 1;
} else {
if(cltype19 >= (((long)var_pmodulenamenode6&3)?type_info[((long)var_pmodulenamenode6&3)]:var_pmodulenamenode6->type)->table_size) {
var18 = 0;
} else {
var18 = (((long)var_pmodulenamenode6&3)?type_info[((long)var_pmodulenamenode6&3)]:var_pmodulenamenode6->type)->type_table[cltype19] == idtype20;
}
}
if (unlikely(!var18)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1620);
fatal_exit(1);
}
var_pannotationsnode7 = var_nodearraylist7;
/* <var_pannotationsnode7:nullable Object> isa nullable AAnnotations */
cltype22 = type_nullable__nit__AAnnotations.color;
idtype23 = type_nullable__nit__AAnnotations.id;
if(var_pannotationsnode7 == NULL) {
var21 = 1;
} else {
if(cltype22 >= (((long)var_pannotationsnode7&3)?type_info[((long)var_pannotationsnode7&3)]:var_pannotationsnode7->type)->table_size) {
var21 = 0;
} else {
var21 = (((long)var_pannotationsnode7&3)?type_info[((long)var_pannotationsnode7&3)]:var_pannotationsnode7->type)->type_table[cltype22] == idtype23;
}
}
if (unlikely(!var21)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1622);
fatal_exit(1);
}
var24 = NEW_nit__AModuledecl(&type_nit__AModuledecl);
{
((void(*)(val* self, val* p0, val* p1, val* p2, val* p3, val* p4, val* p5))(var24->class->vft[COLOR_nit__parser_prod__AModuledecl__init_amoduledecl]))(var24, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_tkwmodulenode5, var_pmodulenamenode6, var_pannotationsnode7); /* init_amoduledecl on <var24:AModuledecl>*/
}
var_pmoduledeclnode1 = var24;
var_node_list = var_pmoduledeclnode1;
var25 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction16> */
{
var26 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var25); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var26, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction17#action for (self: ReduceAction17, Parser) */
void nit__parser___nit__parser__ReduceAction17___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist8 /* var nodearraylist8: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist7 /* var nodearraylist7: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist6 /* var nodearraylist6: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist5 /* var nodearraylist5: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var5 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var6 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var7 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pvisibilitynode2 /* var pvisibilitynode2: nullable Object */;
short int var8 /* : Bool */;
int cltype;
int idtype;
val* var_tkwimportnode3 /* var tkwimportnode3: nullable Object */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var_pmodulenamenode4 /* var pmodulenamenode4: nullable Object */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
val* var_pannotationsnode5 /* var pannotationsnode5: nullable Object */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
val* var18 /* : AStdImport */;
val* var_pimportnode1 /* var pimportnode1: nullable AStdImport */;
long var19 /* : Int */;
long var20 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist8 = var;
{
var1 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist7 = var1;
{
var2 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist6 = var2;
{
var3 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist5 = var3;
{
var4 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist4 = var4;
{
var5 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist3 = var5;
{
var6 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist2 = var6;
{
var7 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist1 = var7;
var_pvisibilitynode2 = var_nodearraylist3;
/* <var_pvisibilitynode2:nullable Object> isa nullable AVisibility */
cltype = type_nullable__nit__AVisibility.color;
idtype = type_nullable__nit__AVisibility.id;
if(var_pvisibilitynode2 == NULL) {
var8 = 1;
} else {
if(cltype >= (((long)var_pvisibilitynode2&3)?type_info[((long)var_pvisibilitynode2&3)]:var_pvisibilitynode2->type)->table_size) {
var8 = 0;
} else {
var8 = (((long)var_pvisibilitynode2&3)?type_info[((long)var_pvisibilitynode2&3)]:var_pvisibilitynode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1649);
fatal_exit(1);
}
var_tkwimportnode3 = var_nodearraylist4;
/* <var_tkwimportnode3:nullable Object> isa nullable TKwimport */
cltype10 = type_nullable__nit__TKwimport.color;
idtype11 = type_nullable__nit__TKwimport.id;
if(var_tkwimportnode3 == NULL) {
var9 = 1;
} else {
if(cltype10 >= (((long)var_tkwimportnode3&3)?type_info[((long)var_tkwimportnode3&3)]:var_tkwimportnode3->type)->table_size) {
var9 = 0;
} else {
var9 = (((long)var_tkwimportnode3&3)?type_info[((long)var_tkwimportnode3&3)]:var_tkwimportnode3->type)->type_table[cltype10] == idtype11;
}
}
if (unlikely(!var9)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1651);
fatal_exit(1);
}
var_pmodulenamenode4 = var_nodearraylist6;
/* <var_pmodulenamenode4:nullable Object> isa nullable AModuleName */
cltype13 = type_nullable__nit__AModuleName.color;
idtype14 = type_nullable__nit__AModuleName.id;
if(var_pmodulenamenode4 == NULL) {
var12 = 1;
} else {
if(cltype13 >= (((long)var_pmodulenamenode4&3)?type_info[((long)var_pmodulenamenode4&3)]:var_pmodulenamenode4->type)->table_size) {
var12 = 0;
} else {
var12 = (((long)var_pmodulenamenode4&3)?type_info[((long)var_pmodulenamenode4&3)]:var_pmodulenamenode4->type)->type_table[cltype13] == idtype14;
}
}
if (unlikely(!var12)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1653);
fatal_exit(1);
}
var_pannotationsnode5 = var_nodearraylist7;
/* <var_pannotationsnode5:nullable Object> isa nullable AAnnotations */
cltype16 = type_nullable__nit__AAnnotations.color;
idtype17 = type_nullable__nit__AAnnotations.id;
if(var_pannotationsnode5 == NULL) {
var15 = 1;
} else {
if(cltype16 >= (((long)var_pannotationsnode5&3)?type_info[((long)var_pannotationsnode5&3)]:var_pannotationsnode5->type)->table_size) {
var15 = 0;
} else {
var15 = (((long)var_pannotationsnode5&3)?type_info[((long)var_pannotationsnode5&3)]:var_pannotationsnode5->type)->type_table[cltype16] == idtype17;
}
}
if (unlikely(!var15)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1655);
fatal_exit(1);
}
var18 = NEW_nit__AStdImport(&type_nit__AStdImport);
{
((void(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var18->class->vft[COLOR_nit__parser_prod__AStdImport__init_astdimport]))(var18, var_pvisibilitynode2, var_tkwimportnode3, var_pmodulenamenode4, var_pannotationsnode5); /* init_astdimport on <var18:AStdImport>*/
}
var_pimportnode1 = var18;
var_node_list = var_pimportnode1;
var19 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction17> */
{
var20 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var19); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var20, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction18#action for (self: ReduceAction18, Parser) */
void nit__parser___nit__parser__ReduceAction18___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist7 /* var nodearraylist7: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist6 /* var nodearraylist6: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist5 /* var nodearraylist5: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var5 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var6 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pvisibilitynode2 /* var pvisibilitynode2: nullable Object */;
short int var7 /* : Bool */;
int cltype;
int idtype;
val* var_tkwimportnode3 /* var tkwimportnode3: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var_tkwendnode4 /* var tkwendnode4: nullable Object */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
val* var14 /* : ANoImport */;
val* var_pimportnode1 /* var pimportnode1: nullable ANoImport */;
long var15 /* : Int */;
long var16 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist7 = var;
{
var1 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist6 = var1;
{
var2 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist5 = var2;
{
var3 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist4 = var3;
{
var4 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist3 = var4;
{
var5 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist2 = var5;
{
var6 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist1 = var6;
var_pvisibilitynode2 = var_nodearraylist3;
/* <var_pvisibilitynode2:nullable Object> isa nullable AVisibility */
cltype = type_nullable__nit__AVisibility.color;
idtype = type_nullable__nit__AVisibility.id;
if(var_pvisibilitynode2 == NULL) {
var7 = 1;
} else {
if(cltype >= (((long)var_pvisibilitynode2&3)?type_info[((long)var_pvisibilitynode2&3)]:var_pvisibilitynode2->type)->table_size) {
var7 = 0;
} else {
var7 = (((long)var_pvisibilitynode2&3)?type_info[((long)var_pvisibilitynode2&3)]:var_pvisibilitynode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var7)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1679);
fatal_exit(1);
}
var_tkwimportnode3 = var_nodearraylist4;
/* <var_tkwimportnode3:nullable Object> isa nullable TKwimport */
cltype9 = type_nullable__nit__TKwimport.color;
idtype10 = type_nullable__nit__TKwimport.id;
if(var_tkwimportnode3 == NULL) {
var8 = 1;
} else {
if(cltype9 >= (((long)var_tkwimportnode3&3)?type_info[((long)var_tkwimportnode3&3)]:var_tkwimportnode3->type)->table_size) {
var8 = 0;
} else {
var8 = (((long)var_tkwimportnode3&3)?type_info[((long)var_tkwimportnode3&3)]:var_tkwimportnode3->type)->type_table[cltype9] == idtype10;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1681);
fatal_exit(1);
}
var_tkwendnode4 = var_nodearraylist6;
/* <var_tkwendnode4:nullable Object> isa nullable TKwend */
cltype12 = type_nullable__nit__TKwend.color;
idtype13 = type_nullable__nit__TKwend.id;
if(var_tkwendnode4 == NULL) {
var11 = 1;
} else {
if(cltype12 >= (((long)var_tkwendnode4&3)?type_info[((long)var_tkwendnode4&3)]:var_tkwendnode4->type)->table_size) {
var11 = 0;
} else {
var11 = (((long)var_tkwendnode4&3)?type_info[((long)var_tkwendnode4&3)]:var_tkwendnode4->type)->type_table[cltype12] == idtype13;
}
}
if (unlikely(!var11)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1683);
fatal_exit(1);
}
var14 = NEW_nit__ANoImport(&type_nit__ANoImport);
{
((void(*)(val* self, val* p0, val* p1, val* p2))(var14->class->vft[COLOR_nit__parser_prod__ANoImport__init_anoimport]))(var14, var_pvisibilitynode2, var_tkwimportnode3, var_tkwendnode4); /* init_anoimport on <var14:ANoImport>*/
}
var_pimportnode1 = var14;
var_node_list = var_pimportnode1;
var15 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction18> */
{
var16 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var15); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var16, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction19#action for (self: ReduceAction19, Parser) */
void nit__parser___nit__parser__ReduceAction19___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pclassdefnode1 /* var pclassdefnode1: nullable Object */;
long var1 /* : Int */;
long var2 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist1 = var;
var_pclassdefnode1 = var_nodearraylist1;
var_node_list = var_pclassdefnode1;
var1 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction19> */
{
var2 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var1); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var2, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction20#action for (self: ReduceAction20, Parser) */
void nit__parser___nit__parser__ReduceAction20___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var2 /* : Array[Object] */;
val* var_listnode3 /* var listnode3: Array[Object] */;
val* var_ppropdefnode2 /* var ppropdefnode2: nullable Object */;
short int var3 /* : Bool */;
int cltype;
int idtype;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var6 /* : ATopClassdef */;
val* var_pclassdefnode1 /* var pclassdefnode1: nullable ATopClassdef */;
long var7 /* : Int */;
long var8 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist2 = var;
{
var1 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist1 = var1;
var2 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
((void(*)(val* self))(var2->class->vft[COLOR_standard__kernel__Object__init]))(var2); /* init on <var2:Array[Object]>*/
}
var_listnode3 = var2;
var_ppropdefnode2 = var_nodearraylist1;
/* <var_ppropdefnode2:nullable Object> isa nullable APropdef */
cltype = type_nullable__nit__APropdef.color;
idtype = type_nullable__nit__APropdef.id;
if(var_ppropdefnode2 == NULL) {
var3 = 1;
} else {
if(cltype >= (((long)var_ppropdefnode2&3)?type_info[((long)var_ppropdefnode2&3)]:var_ppropdefnode2->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)var_ppropdefnode2&3)?type_info[((long)var_ppropdefnode2&3)]:var_ppropdefnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1713);
fatal_exit(1);
}
if (var_ppropdefnode2 == NULL) {
var4 = 0; /* is null */
} else {
var4 = 1; /* arg is null and recv is not */
}
if (0) {
var5 = ((short int(*)(val* self, val* p0))(var_ppropdefnode2->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_ppropdefnode2, ((val*)NULL)); /* != on <var_ppropdefnode2:nullable Object(nullable APropdef)>*/
var4 = var5;
}
if (var4){
{
((void(*)(val* self, val* p0))(var_listnode3->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_listnode3, var_ppropdefnode2); /* add on <var_listnode3:Array[Object]>*/
}
} else {
}
var6 = NEW_nit__ATopClassdef(&type_nit__ATopClassdef);
{
((void(*)(val* self, val* p0))(var6->class->vft[COLOR_nit__parser_prod__ATopClassdef__init_atopclassdef]))(var6, var_listnode3); /* init_atopclassdef on <var6:ATopClassdef>*/
}
var_pclassdefnode1 = var6;
var_node_list = var_pclassdefnode1;
var7 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction20> */
{
var8 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var7); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var8, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction21#action for (self: ReduceAction21, Parser) */
void nit__parser___nit__parser__ReduceAction21___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var1 /* : Array[Object] */;
val* var_listnode3 /* var listnode3: Array[Object] */;
val* var_ppropdefnode2 /* var ppropdefnode2: nullable Object */;
short int var2 /* : Bool */;
int cltype;
int idtype;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var5 /* : AMainClassdef */;
val* var_pclassdefnode1 /* var pclassdefnode1: nullable AMainClassdef */;
long var6 /* : Int */;
long var7 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist1 = var;
var1 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
((void(*)(val* self))(var1->class->vft[COLOR_standard__kernel__Object__init]))(var1); /* init on <var1:Array[Object]>*/
}
var_listnode3 = var1;
var_ppropdefnode2 = var_nodearraylist1;
/* <var_ppropdefnode2:nullable Object> isa nullable APropdef */
cltype = type_nullable__nit__APropdef.color;
idtype = type_nullable__nit__APropdef.id;
if(var_ppropdefnode2 == NULL) {
var2 = 1;
} else {
if(cltype >= (((long)var_ppropdefnode2&3)?type_info[((long)var_ppropdefnode2&3)]:var_ppropdefnode2->type)->table_size) {
var2 = 0;
} else {
var2 = (((long)var_ppropdefnode2&3)?type_info[((long)var_ppropdefnode2&3)]:var_ppropdefnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1732);
fatal_exit(1);
}
if (var_ppropdefnode2 == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (0) {
var4 = ((short int(*)(val* self, val* p0))(var_ppropdefnode2->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_ppropdefnode2, ((val*)NULL)); /* != on <var_ppropdefnode2:nullable Object(nullable APropdef)>*/
var3 = var4;
}
if (var3){
{
((void(*)(val* self, val* p0))(var_listnode3->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_listnode3, var_ppropdefnode2); /* add on <var_listnode3:Array[Object]>*/
}
} else {
}
var5 = NEW_nit__AMainClassdef(&type_nit__AMainClassdef);
{
((void(*)(val* self, val* p0))(var5->class->vft[COLOR_nit__parser_prod__AMainClassdef__init_amainclassdef]))(var5, var_listnode3); /* init_amainclassdef on <var5:AMainClassdef>*/
}
var_pclassdefnode1 = var5;
var_node_list = var_pclassdefnode1;
var6 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction21> */
{
var7 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var6); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var7, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction22#action for (self: ReduceAction22, Parser) */
void nit__parser___nit__parser__ReduceAction22___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
long var /* : Int */;
long var1 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
var_node_list = ((val*)NULL);
var = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction22> */
{
var1 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var1, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction23#action for (self: ReduceAction23, Parser) */
void nit__parser___nit__parser__ReduceAction23___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
long var1 /* : Int */;
long var2 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist1 = var;
var_node_list = ((val*)NULL);
var1 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction23> */
{
var2 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var1); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var2, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction24#action for (self: ReduceAction24, Parser) */
void nit__parser___nit__parser__ReduceAction24___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pexprnode3 /* var pexprnode3: nullable Object */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var3 /* : AMainMethPropdef */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AMainMethPropdef */;
long var4 /* : Int */;
long var5 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist2 = var;
{
var1 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist1 = var1;
var_pexprnode3 = var_nodearraylist2;
/* <var_pexprnode3:nullable Object> isa nullable AExpr */
cltype = type_nullable__nit__AExpr.color;
idtype = type_nullable__nit__AExpr.id;
if(var_pexprnode3 == NULL) {
var2 = 1;
} else {
if(cltype >= (((long)var_pexprnode3&3)?type_info[((long)var_pexprnode3&3)]:var_pexprnode3->type)->table_size) {
var2 = 0;
} else {
var2 = (((long)var_pexprnode3&3)?type_info[((long)var_pexprnode3&3)]:var_pexprnode3->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1770);
fatal_exit(1);
}
var3 = NEW_nit__AMainMethPropdef(&type_nit__AMainMethPropdef);
{
((void(*)(val* self, val* p0, val* p1))(var3->class->vft[COLOR_nit__parser_prod__AMainMethPropdef__init_amainmethpropdef]))(var3, ((val*)NULL), var_pexprnode3); /* init_amainmethpropdef on <var3:AMainMethPropdef>*/
}
var_ppropdefnode1 = var3;
var_node_list = var_ppropdefnode1;
var4 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction24> */
{
var5 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var4); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var5, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction26#action for (self: ReduceAction26, Parser) */
void nit__parser___nit__parser__ReduceAction26___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist9 /* var nodearraylist9: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist8 /* var nodearraylist8: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist7 /* var nodearraylist7: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist6 /* var nodearraylist6: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist5 /* var nodearraylist5: nullable Object */;
val* var5 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var6 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var7 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var8 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var9 /* : Array[Object] */;
val* var_listnode8 /* var listnode8: Array[Object] */;
val* var10 /* : Array[Object] */;
val* var_listnode11 /* var listnode11: Array[Object] */;
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var11 /* : Bool */;
int cltype;
int idtype;
val* var_tkwredefnode3 /* var tkwredefnode3: nullable Object */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
val* var_pvisibilitynode4 /* var pvisibilitynode4: nullable Object */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
val* var_pclasskindnode5 /* var pclasskindnode5: nullable Object */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
val* var_tclassidnode6 /* var tclassidnode6: nullable Object */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
val* var_listnode7 /* var listnode7: nullable Object */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
val* var27 /* : Array[Object] */;
val* var_listnode10 /* var listnode10: nullable Object */;
short int var28 /* : Bool */;
int cltype29;
int idtype30;
val* var31 /* : Array[Object] */;
val* var_tkwendnode12 /* var tkwendnode12: nullable Object */;
short int var32 /* : Bool */;
int cltype33;
int idtype34;
val* var35 /* : AStdClassdef */;
val* var_pclassdefnode1 /* var pclassdefnode1: nullable AStdClassdef */;
long var36 /* : Int */;
long var37 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist9 = var;
{
var1 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist8 = var1;
{
var2 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist7 = var2;
{
var3 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist6 = var3;
{
var4 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist5 = var4;
{
var5 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist4 = var5;
{
var6 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist3 = var6;
{
var7 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist2 = var7;
{
var8 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist1 = var8;
var9 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
((void(*)(val* self))(var9->class->vft[COLOR_standard__kernel__Object__init]))(var9); /* init on <var9:Array[Object]>*/
}
var_listnode8 = var9;
var10 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
((void(*)(val* self))(var10->class->vft[COLOR_standard__kernel__Object__init]))(var10); /* init on <var10:Array[Object]>*/
}
var_listnode11 = var10;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable__nit__ADoc.color;
idtype = type_nullable__nit__ADoc.id;
if(var_pdocnode2 == NULL) {
var11 = 1;
} else {
if(cltype >= (((long)var_pdocnode2&3)?type_info[((long)var_pdocnode2&3)]:var_pdocnode2->type)->table_size) {
var11 = 0;
} else {
var11 = (((long)var_pdocnode2&3)?type_info[((long)var_pdocnode2&3)]:var_pdocnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var11)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1796);
fatal_exit(1);
}
var_tkwredefnode3 = var_nodearraylist2;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype13 = type_nullable__nit__TKwredef.color;
idtype14 = type_nullable__nit__TKwredef.id;
if(var_tkwredefnode3 == NULL) {
var12 = 1;
} else {
if(cltype13 >= (((long)var_tkwredefnode3&3)?type_info[((long)var_tkwredefnode3&3)]:var_tkwredefnode3->type)->table_size) {
var12 = 0;
} else {
var12 = (((long)var_tkwredefnode3&3)?type_info[((long)var_tkwredefnode3&3)]:var_tkwredefnode3->type)->type_table[cltype13] == idtype14;
}
}
if (unlikely(!var12)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1798);
fatal_exit(1);
}
var_pvisibilitynode4 = var_nodearraylist3;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype16 = type_nullable__nit__AVisibility.color;
idtype17 = type_nullable__nit__AVisibility.id;
if(var_pvisibilitynode4 == NULL) {
var15 = 1;
} else {
if(cltype16 >= (((long)var_pvisibilitynode4&3)?type_info[((long)var_pvisibilitynode4&3)]:var_pvisibilitynode4->type)->table_size) {
var15 = 0;
} else {
var15 = (((long)var_pvisibilitynode4&3)?type_info[((long)var_pvisibilitynode4&3)]:var_pvisibilitynode4->type)->type_table[cltype16] == idtype17;
}
}
if (unlikely(!var15)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1800);
fatal_exit(1);
}
var_pclasskindnode5 = var_nodearraylist4;
/* <var_pclasskindnode5:nullable Object> isa nullable AClasskind */
cltype19 = type_nullable__nit__AClasskind.color;
idtype20 = type_nullable__nit__AClasskind.id;
if(var_pclasskindnode5 == NULL) {
var18 = 1;
} else {
if(cltype19 >= (((long)var_pclasskindnode5&3)?type_info[((long)var_pclasskindnode5&3)]:var_pclasskindnode5->type)->table_size) {
var18 = 0;
} else {
var18 = (((long)var_pclasskindnode5&3)?type_info[((long)var_pclasskindnode5&3)]:var_pclasskindnode5->type)->type_table[cltype19] == idtype20;
}
}
if (unlikely(!var18)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1802);
fatal_exit(1);
}
var_tclassidnode6 = var_nodearraylist6;
/* <var_tclassidnode6:nullable Object> isa nullable TClassid */
cltype22 = type_nullable__nit__TClassid.color;
idtype23 = type_nullable__nit__TClassid.id;
if(var_tclassidnode6 == NULL) {
var21 = 1;
} else {
if(cltype22 >= (((long)var_tclassidnode6&3)?type_info[((long)var_tclassidnode6&3)]:var_tclassidnode6->type)->table_size) {
var21 = 0;
} else {
var21 = (((long)var_tclassidnode6&3)?type_info[((long)var_tclassidnode6&3)]:var_tclassidnode6->type)->type_table[cltype22] == idtype23;
}
}
if (unlikely(!var21)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1804);
fatal_exit(1);
}
var_listnode7 = var_nodearraylist7;
/* <var_listnode7:nullable Object> isa Array[Object] */
cltype25 = type_standard__Array__standard__Object.color;
idtype26 = type_standard__Array__standard__Object.id;
if(var_listnode7 == NULL) {
var24 = 0;
} else {
if(cltype25 >= (((long)var_listnode7&3)?type_info[((long)var_listnode7&3)]:var_listnode7->type)->table_size) {
var24 = 0;
} else {
var24 = (((long)var_listnode7&3)?type_info[((long)var_listnode7&3)]:var_listnode7->type)->type_table[cltype25] == idtype26;
}
}
if (unlikely(!var24)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1806);
fatal_exit(1);
}
{
var27 = ((val*(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__parser_work__ReduceAction__concat]))(self, var_listnode8, var_listnode7); /* concat on <self:ReduceAction26>*/
}
var_listnode8 = var27;
var_listnode10 = var_nodearraylist8;
/* <var_listnode10:nullable Object> isa Array[Object] */
cltype29 = type_standard__Array__standard__Object.color;
idtype30 = type_standard__Array__standard__Object.id;
if(var_listnode10 == NULL) {
var28 = 0;
} else {
if(cltype29 >= (((long)var_listnode10&3)?type_info[((long)var_listnode10&3)]:var_listnode10->type)->table_size) {
var28 = 0;
} else {
var28 = (((long)var_listnode10&3)?type_info[((long)var_listnode10&3)]:var_listnode10->type)->type_table[cltype29] == idtype30;
}
}
if (unlikely(!var28)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1809);
fatal_exit(1);
}
{
var31 = ((val*(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__parser_work__ReduceAction__concat]))(self, var_listnode11, var_listnode10); /* concat on <self:ReduceAction26>*/
}
var_listnode11 = var31;
var_tkwendnode12 = var_nodearraylist9;
/* <var_tkwendnode12:nullable Object> isa nullable TKwend */
cltype33 = type_nullable__nit__TKwend.color;
idtype34 = type_nullable__nit__TKwend.id;
if(var_tkwendnode12 == NULL) {
var32 = 1;
} else {
if(cltype33 >= (((long)var_tkwendnode12&3)?type_info[((long)var_tkwendnode12&3)]:var_tkwendnode12->type)->table_size) {
var32 = 0;
} else {
var32 = (((long)var_tkwendnode12&3)?type_info[((long)var_tkwendnode12&3)]:var_tkwendnode12->type)->type_table[cltype33] == idtype34;
}
}
if (unlikely(!var32)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1812);
fatal_exit(1);
}
var35 = NEW_nit__AStdClassdef(&type_nit__AStdClassdef);
{
((void(*)(val* self, val* p0, val* p1, val* p2, val* p3, val* p4, val* p5, val* p6, val* p7, val* p8))(var35->class->vft[COLOR_nit__parser_prod__AStdClassdef__init_astdclassdef]))(var35, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_pclasskindnode5, var_tclassidnode6, var_listnode8, ((val*)NULL), var_listnode11, var_tkwendnode12); /* init_astdclassdef on <var35:AStdClassdef>*/
}
var_pclassdefnode1 = var35;
var_node_list = var_pclassdefnode1;
var36 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction26> */
{
var37 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var36); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var37, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction27#action for (self: ReduceAction27, Parser) */
void nit__parser___nit__parser__ReduceAction27___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist10 /* var nodearraylist10: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist9 /* var nodearraylist9: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist8 /* var nodearraylist8: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist7 /* var nodearraylist7: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist6 /* var nodearraylist6: nullable Object */;
val* var5 /* : nullable Object */;
val* var_nodearraylist5 /* var nodearraylist5: nullable Object */;
val* var6 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var7 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var8 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var9 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var10 /* : Array[Object] */;
val* var_listnode8 /* var listnode8: Array[Object] */;
val* var11 /* : Array[Object] */;
val* var_listnode11 /* var listnode11: Array[Object] */;
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var12 /* : Bool */;
int cltype;
int idtype;
val* var_tkwredefnode3 /* var tkwredefnode3: nullable Object */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
val* var_pvisibilitynode4 /* var pvisibilitynode4: nullable Object */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
val* var_pclasskindnode5 /* var pclasskindnode5: nullable Object */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
val* var_tclassidnode6 /* var tclassidnode6: nullable Object */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
val* var_listnode7 /* var listnode7: nullable Object */;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
val* var28 /* : Array[Object] */;
val* var_pexterncodeblocknode9 /* var pexterncodeblocknode9: nullable Object */;
short int var29 /* : Bool */;
int cltype30;
int idtype31;
val* var_listnode10 /* var listnode10: nullable Object */;
short int var32 /* : Bool */;
int cltype33;
int idtype34;
val* var35 /* : Array[Object] */;
val* var_tkwendnode12 /* var tkwendnode12: nullable Object */;
short int var36 /* : Bool */;
int cltype37;
int idtype38;
val* var39 /* : AStdClassdef */;
val* var_pclassdefnode1 /* var pclassdefnode1: nullable AStdClassdef */;
long var40 /* : Int */;
long var41 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist10 = var;
{
var1 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist9 = var1;
{
var2 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist8 = var2;
{
var3 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist7 = var3;
{
var4 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist6 = var4;
{
var5 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist5 = var5;
{
var6 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist4 = var6;
{
var7 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist3 = var7;
{
var8 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist2 = var8;
{
var9 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist1 = var9;
var10 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
((void(*)(val* self))(var10->class->vft[COLOR_standard__kernel__Object__init]))(var10); /* init on <var10:Array[Object]>*/
}
var_listnode8 = var10;
var11 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
((void(*)(val* self))(var11->class->vft[COLOR_standard__kernel__Object__init]))(var11); /* init on <var11:Array[Object]>*/
}
var_listnode11 = var11;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable__nit__ADoc.color;
idtype = type_nullable__nit__ADoc.id;
if(var_pdocnode2 == NULL) {
var12 = 1;
} else {
if(cltype >= (((long)var_pdocnode2&3)?type_info[((long)var_pdocnode2&3)]:var_pdocnode2->type)->table_size) {
var12 = 0;
} else {
var12 = (((long)var_pdocnode2&3)?type_info[((long)var_pdocnode2&3)]:var_pdocnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var12)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1846);
fatal_exit(1);
}
var_tkwredefnode3 = var_nodearraylist2;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype14 = type_nullable__nit__TKwredef.color;
idtype15 = type_nullable__nit__TKwredef.id;
if(var_tkwredefnode3 == NULL) {
var13 = 1;
} else {
if(cltype14 >= (((long)var_tkwredefnode3&3)?type_info[((long)var_tkwredefnode3&3)]:var_tkwredefnode3->type)->table_size) {
var13 = 0;
} else {
var13 = (((long)var_tkwredefnode3&3)?type_info[((long)var_tkwredefnode3&3)]:var_tkwredefnode3->type)->type_table[cltype14] == idtype15;
}
}
if (unlikely(!var13)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1848);
fatal_exit(1);
}
var_pvisibilitynode4 = var_nodearraylist3;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype17 = type_nullable__nit__AVisibility.color;
idtype18 = type_nullable__nit__AVisibility.id;
if(var_pvisibilitynode4 == NULL) {
var16 = 1;
} else {
if(cltype17 >= (((long)var_pvisibilitynode4&3)?type_info[((long)var_pvisibilitynode4&3)]:var_pvisibilitynode4->type)->table_size) {
var16 = 0;
} else {
var16 = (((long)var_pvisibilitynode4&3)?type_info[((long)var_pvisibilitynode4&3)]:var_pvisibilitynode4->type)->type_table[cltype17] == idtype18;
}
}
if (unlikely(!var16)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1850);
fatal_exit(1);
}
var_pclasskindnode5 = var_nodearraylist4;
/* <var_pclasskindnode5:nullable Object> isa nullable AClasskind */
cltype20 = type_nullable__nit__AClasskind.color;
idtype21 = type_nullable__nit__AClasskind.id;
if(var_pclasskindnode5 == NULL) {
var19 = 1;
} else {
if(cltype20 >= (((long)var_pclasskindnode5&3)?type_info[((long)var_pclasskindnode5&3)]:var_pclasskindnode5->type)->table_size) {
var19 = 0;
} else {
var19 = (((long)var_pclasskindnode5&3)?type_info[((long)var_pclasskindnode5&3)]:var_pclasskindnode5->type)->type_table[cltype20] == idtype21;
}
}
if (unlikely(!var19)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1852);
fatal_exit(1);
}
var_tclassidnode6 = var_nodearraylist6;
/* <var_tclassidnode6:nullable Object> isa nullable TClassid */
cltype23 = type_nullable__nit__TClassid.color;
idtype24 = type_nullable__nit__TClassid.id;
if(var_tclassidnode6 == NULL) {
var22 = 1;
} else {
if(cltype23 >= (((long)var_tclassidnode6&3)?type_info[((long)var_tclassidnode6&3)]:var_tclassidnode6->type)->table_size) {
var22 = 0;
} else {
var22 = (((long)var_tclassidnode6&3)?type_info[((long)var_tclassidnode6&3)]:var_tclassidnode6->type)->type_table[cltype23] == idtype24;
}
}
if (unlikely(!var22)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1854);
fatal_exit(1);
}
var_listnode7 = var_nodearraylist7;
/* <var_listnode7:nullable Object> isa Array[Object] */
cltype26 = type_standard__Array__standard__Object.color;
idtype27 = type_standard__Array__standard__Object.id;
if(var_listnode7 == NULL) {
var25 = 0;
} else {
if(cltype26 >= (((long)var_listnode7&3)?type_info[((long)var_listnode7&3)]:var_listnode7->type)->table_size) {
var25 = 0;
} else {
var25 = (((long)var_listnode7&3)?type_info[((long)var_listnode7&3)]:var_listnode7->type)->type_table[cltype26] == idtype27;
}
}
if (unlikely(!var25)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1856);
fatal_exit(1);
}
{
var28 = ((val*(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__parser_work__ReduceAction__concat]))(self, var_listnode8, var_listnode7); /* concat on <self:ReduceAction27>*/
}
var_listnode8 = var28;
var_pexterncodeblocknode9 = var_nodearraylist8;
/* <var_pexterncodeblocknode9:nullable Object> isa nullable AExternCodeBlock */
cltype30 = type_nullable__nit__AExternCodeBlock.color;
idtype31 = type_nullable__nit__AExternCodeBlock.id;
if(var_pexterncodeblocknode9 == NULL) {
var29 = 1;
} else {
if(cltype30 >= (((long)var_pexterncodeblocknode9&3)?type_info[((long)var_pexterncodeblocknode9&3)]:var_pexterncodeblocknode9->type)->table_size) {
var29 = 0;
} else {
var29 = (((long)var_pexterncodeblocknode9&3)?type_info[((long)var_pexterncodeblocknode9&3)]:var_pexterncodeblocknode9->type)->type_table[cltype30] == idtype31;
}
}
if (unlikely(!var29)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1859);
fatal_exit(1);
}
var_listnode10 = var_nodearraylist9;
/* <var_listnode10:nullable Object> isa Array[Object] */
cltype33 = type_standard__Array__standard__Object.color;
idtype34 = type_standard__Array__standard__Object.id;
if(var_listnode10 == NULL) {
var32 = 0;
} else {
if(cltype33 >= (((long)var_listnode10&3)?type_info[((long)var_listnode10&3)]:var_listnode10->type)->table_size) {
var32 = 0;
} else {
var32 = (((long)var_listnode10&3)?type_info[((long)var_listnode10&3)]:var_listnode10->type)->type_table[cltype33] == idtype34;
}
}
if (unlikely(!var32)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1861);
fatal_exit(1);
}
{
var35 = ((val*(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__parser_work__ReduceAction__concat]))(self, var_listnode11, var_listnode10); /* concat on <self:ReduceAction27>*/
}
var_listnode11 = var35;
var_tkwendnode12 = var_nodearraylist10;
/* <var_tkwendnode12:nullable Object> isa nullable TKwend */
cltype37 = type_nullable__nit__TKwend.color;
idtype38 = type_nullable__nit__TKwend.id;
if(var_tkwendnode12 == NULL) {
var36 = 1;
} else {
if(cltype37 >= (((long)var_tkwendnode12&3)?type_info[((long)var_tkwendnode12&3)]:var_tkwendnode12->type)->table_size) {
var36 = 0;
} else {
var36 = (((long)var_tkwendnode12&3)?type_info[((long)var_tkwendnode12&3)]:var_tkwendnode12->type)->type_table[cltype37] == idtype38;
}
}
if (unlikely(!var36)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1864);
fatal_exit(1);
}
var39 = NEW_nit__AStdClassdef(&type_nit__AStdClassdef);
{
((void(*)(val* self, val* p0, val* p1, val* p2, val* p3, val* p4, val* p5, val* p6, val* p7, val* p8))(var39->class->vft[COLOR_nit__parser_prod__AStdClassdef__init_astdclassdef]))(var39, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_pclasskindnode5, var_tclassidnode6, var_listnode8, var_pexterncodeblocknode9, var_listnode11, var_tkwendnode12); /* init_astdclassdef on <var39:AStdClassdef>*/
}
var_pclassdefnode1 = var39;
var_node_list = var_pclassdefnode1;
var40 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction27> */
{
var41 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var40); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var41, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction29#action for (self: ReduceAction29, Parser) */
void nit__parser___nit__parser__ReduceAction29___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tkwredefnode1 /* var tkwredefnode1: nullable Object */;
long var1 /* : Int */;
long var2 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist1 = var;
var_tkwredefnode1 = var_nodearraylist1;
var_node_list = var_tkwredefnode1;
var1 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction29> */
{
var2 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var1); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var2, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction30#action for (self: ReduceAction30, Parser) */
void nit__parser___nit__parser__ReduceAction30___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tkwclassnode2 /* var tkwclassnode2: nullable Object */;
short int var1 /* : Bool */;
int cltype;
int idtype;
val* var2 /* : AConcreteClasskind */;
val* var_pclasskindnode1 /* var pclasskindnode1: nullable AConcreteClasskind */;
long var3 /* : Int */;
long var4 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist1 = var;
var_tkwclassnode2 = var_nodearraylist1;
/* <var_tkwclassnode2:nullable Object> isa nullable TKwclass */
cltype = type_nullable__nit__TKwclass.color;
idtype = type_nullable__nit__TKwclass.id;
if(var_tkwclassnode2 == NULL) {
var1 = 1;
} else {
if(cltype >= (((long)var_tkwclassnode2&3)?type_info[((long)var_tkwclassnode2&3)]:var_tkwclassnode2->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)var_tkwclassnode2&3)?type_info[((long)var_tkwclassnode2&3)]:var_tkwclassnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1898);
fatal_exit(1);
}
var2 = NEW_nit__AConcreteClasskind(&type_nit__AConcreteClasskind);
{
((void(*)(val* self, val* p0))(var2->class->vft[COLOR_nit__parser_prod__AConcreteClasskind__init_aconcreteclasskind]))(var2, var_tkwclassnode2); /* init_aconcreteclasskind on <var2:AConcreteClasskind>*/
}
var_pclasskindnode1 = var2;
var_node_list = var_pclasskindnode1;
var3 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction30> */
{
var4 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var3); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var4, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction31#action for (self: ReduceAction31, Parser) */
void nit__parser___nit__parser__ReduceAction31___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tkwabstractnode2 /* var tkwabstractnode2: nullable Object */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var_tkwclassnode3 /* var tkwclassnode3: nullable Object */;
short int var3 /* : Bool */;
int cltype4;
int idtype5;
val* var6 /* : AAbstractClasskind */;
val* var_pclasskindnode1 /* var pclasskindnode1: nullable AAbstractClasskind */;
long var7 /* : Int */;
long var8 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist2 = var;
{
var1 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist1 = var1;
var_tkwabstractnode2 = var_nodearraylist1;
/* <var_tkwabstractnode2:nullable Object> isa nullable TKwabstract */
cltype = type_nullable__nit__TKwabstract.color;
idtype = type_nullable__nit__TKwabstract.id;
if(var_tkwabstractnode2 == NULL) {
var2 = 1;
} else {
if(cltype >= (((long)var_tkwabstractnode2&3)?type_info[((long)var_tkwabstractnode2&3)]:var_tkwabstractnode2->type)->table_size) {
var2 = 0;
} else {
var2 = (((long)var_tkwabstractnode2&3)?type_info[((long)var_tkwabstractnode2&3)]:var_tkwabstractnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1914);
fatal_exit(1);
}
var_tkwclassnode3 = var_nodearraylist2;
/* <var_tkwclassnode3:nullable Object> isa nullable TKwclass */
cltype4 = type_nullable__nit__TKwclass.color;
idtype5 = type_nullable__nit__TKwclass.id;
if(var_tkwclassnode3 == NULL) {
var3 = 1;
} else {
if(cltype4 >= (((long)var_tkwclassnode3&3)?type_info[((long)var_tkwclassnode3&3)]:var_tkwclassnode3->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)var_tkwclassnode3&3)?type_info[((long)var_tkwclassnode3&3)]:var_tkwclassnode3->type)->type_table[cltype4] == idtype5;
}
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1916);
fatal_exit(1);
}
var6 = NEW_nit__AAbstractClasskind(&type_nit__AAbstractClasskind);
{
((void(*)(val* self, val* p0, val* p1))(var6->class->vft[COLOR_nit__parser_prod__AAbstractClasskind__init_aabstractclasskind]))(var6, var_tkwabstractnode2, var_tkwclassnode3); /* init_aabstractclasskind on <var6:AAbstractClasskind>*/
}
var_pclasskindnode1 = var6;
var_node_list = var_pclasskindnode1;
var7 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction31> */
{
var8 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var7); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var8, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction32#action for (self: ReduceAction32, Parser) */
void nit__parser___nit__parser__ReduceAction32___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tkwinterfacenode2 /* var tkwinterfacenode2: nullable Object */;
short int var1 /* : Bool */;
int cltype;
int idtype;
val* var2 /* : AInterfaceClasskind */;
val* var_pclasskindnode1 /* var pclasskindnode1: nullable AInterfaceClasskind */;
long var3 /* : Int */;
long var4 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist1 = var;
var_tkwinterfacenode2 = var_nodearraylist1;
/* <var_tkwinterfacenode2:nullable Object> isa nullable TKwinterface */
cltype = type_nullable__nit__TKwinterface.color;
idtype = type_nullable__nit__TKwinterface.id;
if(var_tkwinterfacenode2 == NULL) {
var1 = 1;
} else {
if(cltype >= (((long)var_tkwinterfacenode2&3)?type_info[((long)var_tkwinterfacenode2&3)]:var_tkwinterfacenode2->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)var_tkwinterfacenode2&3)?type_info[((long)var_tkwinterfacenode2&3)]:var_tkwinterfacenode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1932);
fatal_exit(1);
}
var2 = NEW_nit__AInterfaceClasskind(&type_nit__AInterfaceClasskind);
{
((void(*)(val* self, val* p0))(var2->class->vft[COLOR_nit__parser_prod__AInterfaceClasskind__init_ainterfaceclasskind]))(var2, var_tkwinterfacenode2); /* init_ainterfaceclasskind on <var2:AInterfaceClasskind>*/
}
var_pclasskindnode1 = var2;
var_node_list = var_pclasskindnode1;
var3 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction32> */
{
var4 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var3); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var4, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction33#action for (self: ReduceAction33, Parser) */
void nit__parser___nit__parser__ReduceAction33___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tkwenumnode2 /* var tkwenumnode2: nullable Object */;
short int var1 /* : Bool */;
int cltype;
int idtype;
val* var2 /* : AEnumClasskind */;
val* var_pclasskindnode1 /* var pclasskindnode1: nullable AEnumClasskind */;
long var3 /* : Int */;
long var4 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist1 = var;
var_tkwenumnode2 = var_nodearraylist1;
/* <var_tkwenumnode2:nullable Object> isa nullable TKwenum */
cltype = type_nullable__nit__TKwenum.color;
idtype = type_nullable__nit__TKwenum.id;
if(var_tkwenumnode2 == NULL) {
var1 = 1;
} else {
if(cltype >= (((long)var_tkwenumnode2&3)?type_info[((long)var_tkwenumnode2&3)]:var_tkwenumnode2->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)var_tkwenumnode2&3)?type_info[((long)var_tkwenumnode2&3)]:var_tkwenumnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1947);
fatal_exit(1);
}
var2 = NEW_nit__AEnumClasskind(&type_nit__AEnumClasskind);
{
((void(*)(val* self, val* p0))(var2->class->vft[COLOR_nit__parser_prod__AEnumClasskind__init_aenumclasskind]))(var2, var_tkwenumnode2); /* init_aenumclasskind on <var2:AEnumClasskind>*/
}
var_pclasskindnode1 = var2;
var_node_list = var_pclasskindnode1;
var3 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction33> */
{
var4 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var3); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var4, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction34#action for (self: ReduceAction34, Parser) */
void nit__parser___nit__parser__ReduceAction34___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tkwexternnode2 /* var tkwexternnode2: nullable Object */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var_tkwclassnode3 /* var tkwclassnode3: nullable Object */;
short int var3 /* : Bool */;
int cltype4;
int idtype5;
val* var6 /* : AExternClasskind */;
val* var_pclasskindnode1 /* var pclasskindnode1: nullable AExternClasskind */;
long var7 /* : Int */;
long var8 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist2 = var;
{
var1 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist1 = var1;
var_tkwexternnode2 = var_nodearraylist1;
/* <var_tkwexternnode2:nullable Object> isa nullable TKwextern */
cltype = type_nullable__nit__TKwextern.color;
idtype = type_nullable__nit__TKwextern.id;
if(var_tkwexternnode2 == NULL) {
var2 = 1;
} else {
if(cltype >= (((long)var_tkwexternnode2&3)?type_info[((long)var_tkwexternnode2&3)]:var_tkwexternnode2->type)->table_size) {
var2 = 0;
} else {
var2 = (((long)var_tkwexternnode2&3)?type_info[((long)var_tkwexternnode2&3)]:var_tkwexternnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1963);
fatal_exit(1);
}
var_tkwclassnode3 = var_nodearraylist2;
/* <var_tkwclassnode3:nullable Object> isa nullable TKwclass */
cltype4 = type_nullable__nit__TKwclass.color;
idtype5 = type_nullable__nit__TKwclass.id;
if(var_tkwclassnode3 == NULL) {
var3 = 1;
} else {
if(cltype4 >= (((long)var_tkwclassnode3&3)?type_info[((long)var_tkwclassnode3&3)]:var_tkwclassnode3->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)var_tkwclassnode3&3)?type_info[((long)var_tkwclassnode3&3)]:var_tkwclassnode3->type)->type_table[cltype4] == idtype5;
}
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1965);
fatal_exit(1);
}
var6 = NEW_nit__AExternClasskind(&type_nit__AExternClasskind);
{
((void(*)(val* self, val* p0, val* p1))(var6->class->vft[COLOR_nit__parser_prod__AExternClasskind__init_aexternclasskind]))(var6, var_tkwexternnode2, var_tkwclassnode3); /* init_aexternclasskind on <var6:AExternClasskind>*/
}
var_pclasskindnode1 = var6;
var_node_list = var_pclasskindnode1;
var7 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction34> */
{
var8 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var7); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var8, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction35#action for (self: ReduceAction35, Parser) */
void nit__parser___nit__parser__ReduceAction35___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist5 /* var nodearraylist5: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var5 /* : Array[Object] */;
val* var_listnode2 /* var listnode2: Array[Object] */;
val* var_pformaldefnode1 /* var pformaldefnode1: nullable Object */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
long var8 /* : Int */;
long var9 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist5 = var;
{
var1 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist4 = var1;
{
var2 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist3 = var2;
{
var3 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist2 = var3;
{
var4 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist1 = var4;
var5 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
((void(*)(val* self))(var5->class->vft[COLOR_standard__kernel__Object__init]))(var5); /* init on <var5:Array[Object]>*/
}
var_listnode2 = var5;
var_pformaldefnode1 = var_nodearraylist3;
if (var_pformaldefnode1 == NULL) {
var6 = 0; /* is null */
} else {
var6 = 1; /* arg is null and recv is not */
}
if (0) {
var7 = ((short int(*)(val* self, val* p0))((((long)var_pformaldefnode1&3)?class_info[((long)var_pformaldefnode1&3)]:var_pformaldefnode1->class)->vft[COLOR_standard__kernel__Object___33d_61d]))(var_pformaldefnode1, ((val*)NULL)); /* != on <var_pformaldefnode1:nullable Object>*/
var6 = var7;
}
if (var6){
{
((void(*)(val* self, val* p0))(var_listnode2->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_listnode2, var_pformaldefnode1); /* add on <var_listnode2:Array[Object]>*/
}
} else {
}
var_node_list = var_listnode2;
var8 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction35> */
{
var9 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var8); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var9, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction36#action for (self: ReduceAction36, Parser) */
void nit__parser___nit__parser__ReduceAction36___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist6 /* var nodearraylist6: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist5 /* var nodearraylist5: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var5 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var6 /* : Array[Object] */;
val* var_listnode3 /* var listnode3: Array[Object] */;
val* var_pformaldefnode1 /* var pformaldefnode1: nullable Object */;
val* var_listnode2 /* var listnode2: nullable Object */;
short int var7 /* : Bool */;
int cltype;
int idtype;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
val* var10 /* : Array[Object] */;
long var11 /* : Int */;
long var12 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist6 = var;
{
var1 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist5 = var1;
{
var2 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist4 = var2;
{
var3 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist3 = var3;
{
var4 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist2 = var4;
{
var5 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist1 = var5;
var6 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
((void(*)(val* self))(var6->class->vft[COLOR_standard__kernel__Object__init]))(var6); /* init on <var6:Array[Object]>*/
}
var_listnode3 = var6;
var_pformaldefnode1 = var_nodearraylist3;
var_listnode2 = var_nodearraylist4;
/* <var_listnode2:nullable Object> isa Array[Object] */
cltype = type_standard__Array__standard__Object.color;
idtype = type_standard__Array__standard__Object.id;
if(var_listnode2 == NULL) {
var7 = 0;
} else {
if(cltype >= (((long)var_listnode2&3)?type_info[((long)var_listnode2&3)]:var_listnode2->type)->table_size) {
var7 = 0;
} else {
var7 = (((long)var_listnode2&3)?type_info[((long)var_listnode2&3)]:var_listnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var7)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2007);
fatal_exit(1);
}
if (var_pformaldefnode1 == NULL) {
var8 = 0; /* is null */
} else {
var8 = 1; /* arg is null and recv is not */
}
if (0) {
var9 = ((short int(*)(val* self, val* p0))((((long)var_pformaldefnode1&3)?class_info[((long)var_pformaldefnode1&3)]:var_pformaldefnode1->class)->vft[COLOR_standard__kernel__Object___33d_61d]))(var_pformaldefnode1, ((val*)NULL)); /* != on <var_pformaldefnode1:nullable Object>*/
var8 = var9;
}
if (var8){
{
((void(*)(val* self, val* p0))(var_listnode3->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_listnode3, var_pformaldefnode1); /* add on <var_listnode3:Array[Object]>*/
}
} else {
}
{
var10 = ((val*(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__parser_work__ReduceAction__concat]))(self, var_listnode3, var_listnode2); /* concat on <self:ReduceAction36>*/
}
var_listnode3 = var10;
var_node_list = var_listnode3;
var11 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction36> */
{
var12 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var11); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var12, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction37#action for (self: ReduceAction37, Parser) */
void nit__parser___nit__parser__ReduceAction37___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : Array[Object] */;
val* var_listnode1 /* var listnode1: Array[Object] */;
long var1 /* : Int */;
long var2 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
var = NEW_standard__Array(&type_standard__Array__standard__Object);
{
((void(*)(val* self))(var->class->vft[COLOR_standard__kernel__Object__init]))(var); /* init on <var:Array[Object]>*/
}
var_listnode1 = var;
var_node_list = var_listnode1;
var1 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction37> */
{
var2 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var1); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var2, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction38#action for (self: ReduceAction38, Parser) */
void nit__parser___nit__parser__ReduceAction38___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pformaldefnode1 /* var pformaldefnode1: nullable Object */;
long var3 /* : Int */;
long var4 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist3 = var;
{
var1 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist2 = var1;
{
var2 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist1 = var2;
var_pformaldefnode1 = var_nodearraylist3;
var_node_list = var_pformaldefnode1;
var3 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction38> */
{
var4 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var3); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var4, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction39#action for (self: ReduceAction39, Parser) */
void nit__parser___nit__parser__ReduceAction39___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tclassidnode2 /* var tclassidnode2: nullable Object */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var_ptypenode3 /* var ptypenode3: nullable Object */;
short int var3 /* : Bool */;
int cltype4;
int idtype5;
val* var6 /* : AFormaldef */;
val* var_pformaldefnode1 /* var pformaldefnode1: nullable AFormaldef */;
long var7 /* : Int */;
long var8 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist2 = var;
{
var1 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist1 = var1;
var_tclassidnode2 = var_nodearraylist1;
/* <var_tclassidnode2:nullable Object> isa nullable TClassid */
cltype = type_nullable__nit__TClassid.color;
idtype = type_nullable__nit__TClassid.id;
if(var_tclassidnode2 == NULL) {
var2 = 1;
} else {
if(cltype >= (((long)var_tclassidnode2&3)?type_info[((long)var_tclassidnode2&3)]:var_tclassidnode2->type)->table_size) {
var2 = 0;
} else {
var2 = (((long)var_tclassidnode2&3)?type_info[((long)var_tclassidnode2&3)]:var_tclassidnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2047);
fatal_exit(1);
}
var_ptypenode3 = var_nodearraylist2;
/* <var_ptypenode3:nullable Object> isa nullable AType */
cltype4 = type_nullable__nit__AType.color;
idtype5 = type_nullable__nit__AType.id;
if(var_ptypenode3 == NULL) {
var3 = 1;
} else {
if(cltype4 >= (((long)var_ptypenode3&3)?type_info[((long)var_ptypenode3&3)]:var_ptypenode3->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)var_ptypenode3&3)?type_info[((long)var_ptypenode3&3)]:var_ptypenode3->type)->type_table[cltype4] == idtype5;
}
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2049);
fatal_exit(1);
}
var6 = NEW_nit__AFormaldef(&type_nit__AFormaldef);
{
((void(*)(val* self, val* p0, val* p1, val* p2))(var6->class->vft[COLOR_nit__parser_prod__AFormaldef__init_aformaldef]))(var6, var_tclassidnode2, var_ptypenode3, ((val*)NULL)); /* init_aformaldef on <var6:AFormaldef>*/
}
var_pformaldefnode1 = var6;
var_node_list = var_pformaldefnode1;
var7 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction39> */
{
var8 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var7); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var8, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction40#action for (self: ReduceAction40, Parser) */
void nit__parser___nit__parser__ReduceAction40___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tclassidnode2 /* var tclassidnode2: nullable Object */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var_ptypenode3 /* var ptypenode3: nullable Object */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
val* var_pannotationsnode4 /* var pannotationsnode4: nullable Object */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
val* var10 /* : AFormaldef */;
val* var_pformaldefnode1 /* var pformaldefnode1: nullable AFormaldef */;
long var11 /* : Int */;
long var12 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist3 = var;
{
var1 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist2 = var1;
{
var2 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist1 = var2;
var_tclassidnode2 = var_nodearraylist1;
/* <var_tclassidnode2:nullable Object> isa nullable TClassid */
cltype = type_nullable__nit__TClassid.color;
idtype = type_nullable__nit__TClassid.id;
if(var_tclassidnode2 == NULL) {
var3 = 1;
} else {
if(cltype >= (((long)var_tclassidnode2&3)?type_info[((long)var_tclassidnode2&3)]:var_tclassidnode2->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)var_tclassidnode2&3)?type_info[((long)var_tclassidnode2&3)]:var_tclassidnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2068);
fatal_exit(1);
}
var_ptypenode3 = var_nodearraylist3;
/* <var_ptypenode3:nullable Object> isa nullable AType */
cltype5 = type_nullable__nit__AType.color;
idtype6 = type_nullable__nit__AType.id;
if(var_ptypenode3 == NULL) {
var4 = 1;
} else {
if(cltype5 >= (((long)var_ptypenode3&3)?type_info[((long)var_ptypenode3&3)]:var_ptypenode3->type)->table_size) {
var4 = 0;
} else {
var4 = (((long)var_ptypenode3&3)?type_info[((long)var_ptypenode3&3)]:var_ptypenode3->type)->type_table[cltype5] == idtype6;
}
}
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2070);
fatal_exit(1);
}
var_pannotationsnode4 = var_nodearraylist2;
/* <var_pannotationsnode4:nullable Object> isa nullable AAnnotations */
cltype8 = type_nullable__nit__AAnnotations.color;
idtype9 = type_nullable__nit__AAnnotations.id;
if(var_pannotationsnode4 == NULL) {
var7 = 1;
} else {
if(cltype8 >= (((long)var_pannotationsnode4&3)?type_info[((long)var_pannotationsnode4&3)]:var_pannotationsnode4->type)->table_size) {
var7 = 0;
} else {
var7 = (((long)var_pannotationsnode4&3)?type_info[((long)var_pannotationsnode4&3)]:var_pannotationsnode4->type)->type_table[cltype8] == idtype9;
}
}
if (unlikely(!var7)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2072);
fatal_exit(1);
}
var10 = NEW_nit__AFormaldef(&type_nit__AFormaldef);
{
((void(*)(val* self, val* p0, val* p1, val* p2))(var10->class->vft[COLOR_nit__parser_prod__AFormaldef__init_aformaldef]))(var10, var_tclassidnode2, var_ptypenode3, var_pannotationsnode4); /* init_aformaldef on <var10:AFormaldef>*/
}
var_pformaldefnode1 = var10;
var_node_list = var_pformaldefnode1;
var11 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction40> */
{
var12 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var11); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var12, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction41#action for (self: ReduceAction41, Parser) */
void nit__parser___nit__parser__ReduceAction41___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist7 /* var nodearraylist7: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist6 /* var nodearraylist6: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist5 /* var nodearraylist5: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var5 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var6 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var7 /* : Bool */;
int cltype;
int idtype;
val* var_tkwredefnode3 /* var tkwredefnode3: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var_pvisibilitynode4 /* var pvisibilitynode4: nullable Object */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
val* var_tkwsupernode5 /* var tkwsupernode5: nullable Object */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
val* var_ptypenode6 /* var ptypenode6: nullable Object */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
val* var_pannotationsnode7 /* var pannotationsnode7: nullable Object */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
val* var23 /* : ASuperPropdef */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable ASuperPropdef */;
long var24 /* : Int */;
long var25 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist7 = var;
{
var1 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist6 = var1;
{
var2 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist5 = var2;
{
var3 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist4 = var3;
{
var4 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist3 = var4;
{
var5 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist2 = var5;
{
var6 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist1 = var6;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable__nit__ADoc.color;
idtype = type_nullable__nit__ADoc.id;
if(var_pdocnode2 == NULL) {
var7 = 1;
} else {
if(cltype >= (((long)var_pdocnode2&3)?type_info[((long)var_pdocnode2&3)]:var_pdocnode2->type)->table_size) {
var7 = 0;
} else {
var7 = (((long)var_pdocnode2&3)?type_info[((long)var_pdocnode2&3)]:var_pdocnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var7)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2095);
fatal_exit(1);
}
var_tkwredefnode3 = var_nodearraylist2;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype9 = type_nullable__nit__TKwredef.color;
idtype10 = type_nullable__nit__TKwredef.id;
if(var_tkwredefnode3 == NULL) {
var8 = 1;
} else {
if(cltype9 >= (((long)var_tkwredefnode3&3)?type_info[((long)var_tkwredefnode3&3)]:var_tkwredefnode3->type)->table_size) {
var8 = 0;
} else {
var8 = (((long)var_tkwredefnode3&3)?type_info[((long)var_tkwredefnode3&3)]:var_tkwredefnode3->type)->type_table[cltype9] == idtype10;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2097);
fatal_exit(1);
}
var_pvisibilitynode4 = var_nodearraylist3;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype12 = type_nullable__nit__AVisibility.color;
idtype13 = type_nullable__nit__AVisibility.id;
if(var_pvisibilitynode4 == NULL) {
var11 = 1;
} else {
if(cltype12 >= (((long)var_pvisibilitynode4&3)?type_info[((long)var_pvisibilitynode4&3)]:var_pvisibilitynode4->type)->table_size) {
var11 = 0;
} else {
var11 = (((long)var_pvisibilitynode4&3)?type_info[((long)var_pvisibilitynode4&3)]:var_pvisibilitynode4->type)->type_table[cltype12] == idtype13;
}
}
if (unlikely(!var11)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2099);
fatal_exit(1);
}
var_tkwsupernode5 = var_nodearraylist4;
/* <var_tkwsupernode5:nullable Object> isa nullable TKwsuper */
cltype15 = type_nullable__nit__TKwsuper.color;
idtype16 = type_nullable__nit__TKwsuper.id;
if(var_tkwsupernode5 == NULL) {
var14 = 1;
} else {
if(cltype15 >= (((long)var_tkwsupernode5&3)?type_info[((long)var_tkwsupernode5&3)]:var_tkwsupernode5->type)->table_size) {
var14 = 0;
} else {
var14 = (((long)var_tkwsupernode5&3)?type_info[((long)var_tkwsupernode5&3)]:var_tkwsupernode5->type)->type_table[cltype15] == idtype16;
}
}
if (unlikely(!var14)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2101);
fatal_exit(1);
}
var_ptypenode6 = var_nodearraylist6;
/* <var_ptypenode6:nullable Object> isa nullable AType */
cltype18 = type_nullable__nit__AType.color;
idtype19 = type_nullable__nit__AType.id;
if(var_ptypenode6 == NULL) {
var17 = 1;
} else {
if(cltype18 >= (((long)var_ptypenode6&3)?type_info[((long)var_ptypenode6&3)]:var_ptypenode6->type)->table_size) {
var17 = 0;
} else {
var17 = (((long)var_ptypenode6&3)?type_info[((long)var_ptypenode6&3)]:var_ptypenode6->type)->type_table[cltype18] == idtype19;
}
}
if (unlikely(!var17)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2103);
fatal_exit(1);
}
var_pannotationsnode7 = var_nodearraylist7;
/* <var_pannotationsnode7:nullable Object> isa nullable AAnnotations */
cltype21 = type_nullable__nit__AAnnotations.color;
idtype22 = type_nullable__nit__AAnnotations.id;
if(var_pannotationsnode7 == NULL) {
var20 = 1;
} else {
if(cltype21 >= (((long)var_pannotationsnode7&3)?type_info[((long)var_pannotationsnode7&3)]:var_pannotationsnode7->type)->table_size) {
var20 = 0;
} else {
var20 = (((long)var_pannotationsnode7&3)?type_info[((long)var_pannotationsnode7&3)]:var_pannotationsnode7->type)->type_table[cltype21] == idtype22;
}
}
if (unlikely(!var20)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2105);
fatal_exit(1);
}
var23 = NEW_nit__ASuperPropdef(&type_nit__ASuperPropdef);
{
((void(*)(val* self, val* p0, val* p1, val* p2, val* p3, val* p4, val* p5))(var23->class->vft[COLOR_nit__parser_prod__ASuperPropdef__init_asuperpropdef]))(var23, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_tkwsupernode5, var_ptypenode6, var_pannotationsnode7); /* init_asuperpropdef on <var23:ASuperPropdef>*/
}
var_ppropdefnode1 = var23;
var_node_list = var_ppropdefnode1;
var24 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction41> */
{
var25 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var24); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var25, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction42#action for (self: ReduceAction42, Parser) */
void nit__parser___nit__parser__ReduceAction42___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var2 /* : Array[Object] */;
val* var_listnode2 /* var listnode2: Array[Object] */;
val* var_listnode1 /* var listnode1: nullable Object */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var4 /* : Array[Object] */;
long var5 /* : Int */;
long var6 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist2 = var;
{
var1 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist1 = var1;
var2 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
((void(*)(val* self))(var2->class->vft[COLOR_standard__kernel__Object__init]))(var2); /* init on <var2:Array[Object]>*/
}
var_listnode2 = var2;
var_listnode1 = var_nodearraylist1;
/* <var_listnode1:nullable Object> isa Array[Object] */
cltype = type_standard__Array__standard__Object.color;
idtype = type_standard__Array__standard__Object.id;
if(var_listnode1 == NULL) {
var3 = 0;
} else {
if(cltype >= (((long)var_listnode1&3)?type_info[((long)var_listnode1&3)]:var_listnode1->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)var_listnode1&3)?type_info[((long)var_listnode1&3)]:var_listnode1->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2127);
fatal_exit(1);
}
{
var4 = ((val*(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__parser_work__ReduceAction__concat]))(self, var_listnode2, var_listnode1); /* concat on <self:ReduceAction42>*/
}
var_listnode2 = var4;
var_node_list = var_listnode2;
var5 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction42> */
{
var6 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var5); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var6, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction43#action for (self: ReduceAction43, Parser) */
void nit__parser___nit__parser__ReduceAction43___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var1 /* : Array[Object] */;
val* var_listnode2 /* var listnode2: Array[Object] */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable Object */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
long var4 /* : Int */;
long var5 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist1 = var;
var1 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
((void(*)(val* self))(var1->class->vft[COLOR_standard__kernel__Object__init]))(var1); /* init on <var1:Array[Object]>*/
}
var_listnode2 = var1;
var_ppropdefnode1 = var_nodearraylist1;
if (var_ppropdefnode1 == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (0) {
var3 = ((short int(*)(val* self, val* p0))((((long)var_ppropdefnode1&3)?class_info[((long)var_ppropdefnode1&3)]:var_ppropdefnode1->class)->vft[COLOR_standard__kernel__Object___33d_61d]))(var_ppropdefnode1, ((val*)NULL)); /* != on <var_ppropdefnode1:nullable Object>*/
var2 = var3;
}
if (var2){
{
((void(*)(val* self, val* p0))(var_listnode2->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_listnode2, var_ppropdefnode1); /* add on <var_listnode2:Array[Object]>*/
}
} else {
}
var_node_list = var_listnode2;
var4 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction43> */
{
var5 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var4); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var5, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction44#action for (self: ReduceAction44, Parser) */
void nit__parser___nit__parser__ReduceAction44___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var1 /* : Array[Object] */;
val* var_listnode1 /* var listnode1: Array[Object] */;
long var2 /* : Int */;
long var3 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist1 = var;
var1 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
((void(*)(val* self))(var1->class->vft[COLOR_standard__kernel__Object__init]))(var1); /* init on <var1:Array[Object]>*/
}
var_listnode1 = var1;
var_node_list = var_listnode1;
var2 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction44> */
{
var3 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var2); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var3, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction45#action for (self: ReduceAction45, Parser) */
void nit__parser___nit__parser__ReduceAction45___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable Object */;
long var2 /* : Int */;
long var3 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist2 = var;
{
var1 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist1 = var1;
var_ppropdefnode1 = var_nodearraylist1;
var_node_list = var_ppropdefnode1;
var2 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction45> */
{
var3 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var2); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var3, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction46#action for (self: ReduceAction46, Parser) */
void nit__parser___nit__parser__ReduceAction46___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist9 /* var nodearraylist9: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist8 /* var nodearraylist8: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist7 /* var nodearraylist7: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist6 /* var nodearraylist6: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist5 /* var nodearraylist5: nullable Object */;
val* var5 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var6 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var7 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var8 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var9 /* : Bool */;
int cltype;
int idtype;
val* var_tkwredefnode3 /* var tkwredefnode3: nullable Object */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var_pvisibilitynode4 /* var pvisibilitynode4: nullable Object */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
val* var_tkwmethnode5 /* var tkwmethnode5: nullable Object */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
val* var_pmethidnode8 /* var pmethidnode8: nullable Object */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
val* var_psignaturenode9 /* var psignaturenode9: nullable Object */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
val* var_pexprnode13 /* var pexprnode13: nullable Object */;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
val* var28 /* : AMethPropdef */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AMethPropdef */;
long var29 /* : Int */;
long var30 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist9 = var;
{
var1 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist8 = var1;
{
var2 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist7 = var2;
{
var3 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist6 = var3;
{
var4 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist5 = var4;
{
var5 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist4 = var5;
{
var6 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist3 = var6;
{
var7 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist2 = var7;
{
var8 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist1 = var8;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable__nit__ADoc.color;
idtype = type_nullable__nit__ADoc.id;
if(var_pdocnode2 == NULL) {
var9 = 1;
} else {
if(cltype >= (((long)var_pdocnode2&3)?type_info[((long)var_pdocnode2&3)]:var_pdocnode2->type)->table_size) {
var9 = 0;
} else {
var9 = (((long)var_pdocnode2&3)?type_info[((long)var_pdocnode2&3)]:var_pdocnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var9)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2186);
fatal_exit(1);
}
var_tkwredefnode3 = var_nodearraylist2;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype11 = type_nullable__nit__TKwredef.color;
idtype12 = type_nullable__nit__TKwredef.id;
if(var_tkwredefnode3 == NULL) {
var10 = 1;
} else {
if(cltype11 >= (((long)var_tkwredefnode3&3)?type_info[((long)var_tkwredefnode3&3)]:var_tkwredefnode3->type)->table_size) {
var10 = 0;
} else {
var10 = (((long)var_tkwredefnode3&3)?type_info[((long)var_tkwredefnode3&3)]:var_tkwredefnode3->type)->type_table[cltype11] == idtype12;
}
}
if (unlikely(!var10)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2188);
fatal_exit(1);
}
var_pvisibilitynode4 = var_nodearraylist3;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype14 = type_nullable__nit__AVisibility.color;
idtype15 = type_nullable__nit__AVisibility.id;
if(var_pvisibilitynode4 == NULL) {
var13 = 1;
} else {
if(cltype14 >= (((long)var_pvisibilitynode4&3)?type_info[((long)var_pvisibilitynode4&3)]:var_pvisibilitynode4->type)->table_size) {
var13 = 0;
} else {
var13 = (((long)var_pvisibilitynode4&3)?type_info[((long)var_pvisibilitynode4&3)]:var_pvisibilitynode4->type)->type_table[cltype14] == idtype15;
}
}
if (unlikely(!var13)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2190);
fatal_exit(1);
}
var_tkwmethnode5 = var_nodearraylist4;
/* <var_tkwmethnode5:nullable Object> isa nullable TKwmeth */
cltype17 = type_nullable__nit__TKwmeth.color;
idtype18 = type_nullable__nit__TKwmeth.id;
if(var_tkwmethnode5 == NULL) {
var16 = 1;
} else {
if(cltype17 >= (((long)var_tkwmethnode5&3)?type_info[((long)var_tkwmethnode5&3)]:var_tkwmethnode5->type)->table_size) {
var16 = 0;
} else {
var16 = (((long)var_tkwmethnode5&3)?type_info[((long)var_tkwmethnode5&3)]:var_tkwmethnode5->type)->type_table[cltype17] == idtype18;
}
}
if (unlikely(!var16)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2192);
fatal_exit(1);
}
var_pmethidnode8 = var_nodearraylist5;
/* <var_pmethidnode8:nullable Object> isa nullable AMethid */
cltype20 = type_nullable__nit__AMethid.color;
idtype21 = type_nullable__nit__AMethid.id;
if(var_pmethidnode8 == NULL) {
var19 = 1;
} else {
if(cltype20 >= (((long)var_pmethidnode8&3)?type_info[((long)var_pmethidnode8&3)]:var_pmethidnode8->type)->table_size) {
var19 = 0;
} else {
var19 = (((long)var_pmethidnode8&3)?type_info[((long)var_pmethidnode8&3)]:var_pmethidnode8->type)->type_table[cltype20] == idtype21;
}
}
if (unlikely(!var19)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2194);
fatal_exit(1);
}
var_psignaturenode9 = var_nodearraylist6;
/* <var_psignaturenode9:nullable Object> isa nullable ASignature */
cltype23 = type_nullable__nit__ASignature.color;
idtype24 = type_nullable__nit__ASignature.id;
if(var_psignaturenode9 == NULL) {
var22 = 1;
} else {
if(cltype23 >= (((long)var_psignaturenode9&3)?type_info[((long)var_psignaturenode9&3)]:var_psignaturenode9->type)->table_size) {
var22 = 0;
} else {
var22 = (((long)var_psignaturenode9&3)?type_info[((long)var_psignaturenode9&3)]:var_psignaturenode9->type)->type_table[cltype23] == idtype24;
}
}
if (unlikely(!var22)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2196);
fatal_exit(1);
}
var_pexprnode13 = var_nodearraylist8;
/* <var_pexprnode13:nullable Object> isa nullable AExpr */
cltype26 = type_nullable__nit__AExpr.color;
idtype27 = type_nullable__nit__AExpr.id;
if(var_pexprnode13 == NULL) {
var25 = 1;
} else {
if(cltype26 >= (((long)var_pexprnode13&3)?type_info[((long)var_pexprnode13&3)]:var_pexprnode13->type)->table_size) {
var25 = 0;
} else {
var25 = (((long)var_pexprnode13&3)?type_info[((long)var_pexprnode13&3)]:var_pexprnode13->type)->type_table[cltype26] == idtype27;
}
}
if (unlikely(!var25)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2198);
fatal_exit(1);
}
var28 = NEW_nit__AMethPropdef(&type_nit__AMethPropdef);
{
((void(*)(val* self, val* p0, val* p1, val* p2, val* p3, val* p4, val* p5, val* p6, val* p7, val* p8, val* p9, val* p10, val* p11))(var28->class->vft[COLOR_nit__parser_prod__AMethPropdef__init_amethpropdef]))(var28, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_tkwmethnode5, ((val*)NULL), ((val*)NULL), var_pmethidnode8, var_psignaturenode9, ((val*)NULL), ((val*)NULL), ((val*)NULL), var_pexprnode13); /* init_amethpropdef on <var28:AMethPropdef>*/
}
var_ppropdefnode1 = var28;
var_node_list = var_ppropdefnode1;
var29 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction46> */
{
var30 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var29); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var30, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction47#action for (self: ReduceAction47, Parser) */
void nit__parser___nit__parser__ReduceAction47___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist10 /* var nodearraylist10: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist9 /* var nodearraylist9: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist8 /* var nodearraylist8: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist7 /* var nodearraylist7: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist6 /* var nodearraylist6: nullable Object */;
val* var5 /* : nullable Object */;
val* var_nodearraylist5 /* var nodearraylist5: nullable Object */;
val* var6 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var7 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var8 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var9 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var10 /* : Bool */;
int cltype;
int idtype;
val* var_tkwredefnode3 /* var tkwredefnode3: nullable Object */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
val* var_pvisibilitynode4 /* var pvisibilitynode4: nullable Object */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
val* var_tkwmethnode5 /* var tkwmethnode5: nullable Object */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
val* var_pmethidnode8 /* var pmethidnode8: nullable Object */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
val* var_psignaturenode9 /* var psignaturenode9: nullable Object */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
val* var_pannotationsnode10 /* var pannotationsnode10: nullable Object */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
val* var_pexprnode13 /* var pexprnode13: nullable Object */;
short int var29 /* : Bool */;
int cltype30;
int idtype31;
val* var32 /* : AMethPropdef */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AMethPropdef */;
long var33 /* : Int */;
long var34 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist10 = var;
{
var1 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist9 = var1;
{
var2 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist8 = var2;
{
var3 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist7 = var3;
{
var4 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist6 = var4;
{
var5 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist5 = var5;
{
var6 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist4 = var6;
{
var7 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist3 = var7;
{
var8 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist2 = var8;
{
var9 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist1 = var9;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable__nit__ADoc.color;
idtype = type_nullable__nit__ADoc.id;
if(var_pdocnode2 == NULL) {
var10 = 1;
} else {
if(cltype >= (((long)var_pdocnode2&3)?type_info[((long)var_pdocnode2&3)]:var_pdocnode2->type)->table_size) {
var10 = 0;
} else {
var10 = (((long)var_pdocnode2&3)?type_info[((long)var_pdocnode2&3)]:var_pdocnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var10)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2233);
fatal_exit(1);
}
var_tkwredefnode3 = var_nodearraylist2;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype12 = type_nullable__nit__TKwredef.color;
idtype13 = type_nullable__nit__TKwredef.id;
if(var_tkwredefnode3 == NULL) {
var11 = 1;
} else {
if(cltype12 >= (((long)var_tkwredefnode3&3)?type_info[((long)var_tkwredefnode3&3)]:var_tkwredefnode3->type)->table_size) {
var11 = 0;
} else {
var11 = (((long)var_tkwredefnode3&3)?type_info[((long)var_tkwredefnode3&3)]:var_tkwredefnode3->type)->type_table[cltype12] == idtype13;
}
}
if (unlikely(!var11)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2235);
fatal_exit(1);
}
var_pvisibilitynode4 = var_nodearraylist3;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype15 = type_nullable__nit__AVisibility.color;
idtype16 = type_nullable__nit__AVisibility.id;
if(var_pvisibilitynode4 == NULL) {
var14 = 1;
} else {
if(cltype15 >= (((long)var_pvisibilitynode4&3)?type_info[((long)var_pvisibilitynode4&3)]:var_pvisibilitynode4->type)->table_size) {
var14 = 0;
} else {
var14 = (((long)var_pvisibilitynode4&3)?type_info[((long)var_pvisibilitynode4&3)]:var_pvisibilitynode4->type)->type_table[cltype15] == idtype16;
}
}
if (unlikely(!var14)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2237);
fatal_exit(1);
}
var_tkwmethnode5 = var_nodearraylist4;
/* <var_tkwmethnode5:nullable Object> isa nullable TKwmeth */
cltype18 = type_nullable__nit__TKwmeth.color;
idtype19 = type_nullable__nit__TKwmeth.id;
if(var_tkwmethnode5 == NULL) {
var17 = 1;
} else {
if(cltype18 >= (((long)var_tkwmethnode5&3)?type_info[((long)var_tkwmethnode5&3)]:var_tkwmethnode5->type)->table_size) {
var17 = 0;
} else {
var17 = (((long)var_tkwmethnode5&3)?type_info[((long)var_tkwmethnode5&3)]:var_tkwmethnode5->type)->type_table[cltype18] == idtype19;
}
}
if (unlikely(!var17)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2239);
fatal_exit(1);
}
var_pmethidnode8 = var_nodearraylist5;
/* <var_pmethidnode8:nullable Object> isa nullable AMethid */
cltype21 = type_nullable__nit__AMethid.color;
idtype22 = type_nullable__nit__AMethid.id;
if(var_pmethidnode8 == NULL) {
var20 = 1;
} else {
if(cltype21 >= (((long)var_pmethidnode8&3)?type_info[((long)var_pmethidnode8&3)]:var_pmethidnode8->type)->table_size) {
var20 = 0;
} else {
var20 = (((long)var_pmethidnode8&3)?type_info[((long)var_pmethidnode8&3)]:var_pmethidnode8->type)->type_table[cltype21] == idtype22;
}
}
if (unlikely(!var20)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2241);
fatal_exit(1);
}
var_psignaturenode9 = var_nodearraylist6;
/* <var_psignaturenode9:nullable Object> isa nullable ASignature */
cltype24 = type_nullable__nit__ASignature.color;
idtype25 = type_nullable__nit__ASignature.id;
if(var_psignaturenode9 == NULL) {
var23 = 1;
} else {
if(cltype24 >= (((long)var_psignaturenode9&3)?type_info[((long)var_psignaturenode9&3)]:var_psignaturenode9->type)->table_size) {
var23 = 0;
} else {
var23 = (((long)var_psignaturenode9&3)?type_info[((long)var_psignaturenode9&3)]:var_psignaturenode9->type)->type_table[cltype24] == idtype25;
}
}
if (unlikely(!var23)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2243);
fatal_exit(1);
}
var_pannotationsnode10 = var_nodearraylist7;
/* <var_pannotationsnode10:nullable Object> isa nullable AAnnotations */
cltype27 = type_nullable__nit__AAnnotations.color;
idtype28 = type_nullable__nit__AAnnotations.id;
if(var_pannotationsnode10 == NULL) {
var26 = 1;
} else {
if(cltype27 >= (((long)var_pannotationsnode10&3)?type_info[((long)var_pannotationsnode10&3)]:var_pannotationsnode10->type)->table_size) {
var26 = 0;
} else {
var26 = (((long)var_pannotationsnode10&3)?type_info[((long)var_pannotationsnode10&3)]:var_pannotationsnode10->type)->type_table[cltype27] == idtype28;
}
}
if (unlikely(!var26)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2245);
fatal_exit(1);
}
var_pexprnode13 = var_nodearraylist9;
/* <var_pexprnode13:nullable Object> isa nullable AExpr */
cltype30 = type_nullable__nit__AExpr.color;
idtype31 = type_nullable__nit__AExpr.id;
if(var_pexprnode13 == NULL) {
var29 = 1;
} else {
if(cltype30 >= (((long)var_pexprnode13&3)?type_info[((long)var_pexprnode13&3)]:var_pexprnode13->type)->table_size) {
var29 = 0;
} else {
var29 = (((long)var_pexprnode13&3)?type_info[((long)var_pexprnode13&3)]:var_pexprnode13->type)->type_table[cltype30] == idtype31;
}
}
if (unlikely(!var29)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2247);
fatal_exit(1);
}
var32 = NEW_nit__AMethPropdef(&type_nit__AMethPropdef);
{
((void(*)(val* self, val* p0, val* p1, val* p2, val* p3, val* p4, val* p5, val* p6, val* p7, val* p8, val* p9, val* p10, val* p11))(var32->class->vft[COLOR_nit__parser_prod__AMethPropdef__init_amethpropdef]))(var32, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_tkwmethnode5, ((val*)NULL), ((val*)NULL), var_pmethidnode8, var_psignaturenode9, var_pannotationsnode10, ((val*)NULL), ((val*)NULL), var_pexprnode13); /* init_amethpropdef on <var32:AMethPropdef>*/
}
var_ppropdefnode1 = var32;
var_node_list = var_ppropdefnode1;
var33 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction47> */
{
var34 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var33); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var34, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction48#action for (self: ReduceAction48, Parser) */
void nit__parser___nit__parser__ReduceAction48___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist7 /* var nodearraylist7: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist6 /* var nodearraylist6: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist5 /* var nodearraylist5: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var5 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var6 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var7 /* : Bool */;
int cltype;
int idtype;
val* var_tkwredefnode3 /* var tkwredefnode3: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var_pvisibilitynode4 /* var pvisibilitynode4: nullable Object */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
val* var_tkwmethnode5 /* var tkwmethnode5: nullable Object */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
val* var_pmethidnode8 /* var pmethidnode8: nullable Object */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
val* var_psignaturenode9 /* var psignaturenode9: nullable Object */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
val* var_pannotationsnode10 /* var pannotationsnode10: nullable Object */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
val* var26 /* : AMethPropdef */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AMethPropdef */;
long var27 /* : Int */;
long var28 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist7 = var;
{
var1 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist6 = var1;
{
var2 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist5 = var2;
{
var3 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist4 = var3;
{
var4 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist3 = var4;
{
var5 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist2 = var5;
{
var6 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist1 = var6;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable__nit__ADoc.color;
idtype = type_nullable__nit__ADoc.id;
if(var_pdocnode2 == NULL) {
var7 = 1;
} else {
if(cltype >= (((long)var_pdocnode2&3)?type_info[((long)var_pdocnode2&3)]:var_pdocnode2->type)->table_size) {
var7 = 0;
} else {
var7 = (((long)var_pdocnode2&3)?type_info[((long)var_pdocnode2&3)]:var_pdocnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var7)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2279);
fatal_exit(1);
}
var_tkwredefnode3 = var_nodearraylist2;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype9 = type_nullable__nit__TKwredef.color;
idtype10 = type_nullable__nit__TKwredef.id;
if(var_tkwredefnode3 == NULL) {
var8 = 1;
} else {
if(cltype9 >= (((long)var_tkwredefnode3&3)?type_info[((long)var_tkwredefnode3&3)]:var_tkwredefnode3->type)->table_size) {
var8 = 0;
} else {
var8 = (((long)var_tkwredefnode3&3)?type_info[((long)var_tkwredefnode3&3)]:var_tkwredefnode3->type)->type_table[cltype9] == idtype10;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2281);
fatal_exit(1);
}
var_pvisibilitynode4 = var_nodearraylist3;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype12 = type_nullable__nit__AVisibility.color;
idtype13 = type_nullable__nit__AVisibility.id;
if(var_pvisibilitynode4 == NULL) {
var11 = 1;
} else {
if(cltype12 >= (((long)var_pvisibilitynode4&3)?type_info[((long)var_pvisibilitynode4&3)]:var_pvisibilitynode4->type)->table_size) {
var11 = 0;
} else {
var11 = (((long)var_pvisibilitynode4&3)?type_info[((long)var_pvisibilitynode4&3)]:var_pvisibilitynode4->type)->type_table[cltype12] == idtype13;
}
}
if (unlikely(!var11)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2283);
fatal_exit(1);
}
var_tkwmethnode5 = var_nodearraylist4;
/* <var_tkwmethnode5:nullable Object> isa nullable TKwmeth */
cltype15 = type_nullable__nit__TKwmeth.color;
idtype16 = type_nullable__nit__TKwmeth.id;
if(var_tkwmethnode5 == NULL) {
var14 = 1;
} else {
if(cltype15 >= (((long)var_tkwmethnode5&3)?type_info[((long)var_tkwmethnode5&3)]:var_tkwmethnode5->type)->table_size) {
var14 = 0;
} else {
var14 = (((long)var_tkwmethnode5&3)?type_info[((long)var_tkwmethnode5&3)]:var_tkwmethnode5->type)->type_table[cltype15] == idtype16;
}
}
if (unlikely(!var14)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2285);
fatal_exit(1);
}
var_pmethidnode8 = var_nodearraylist5;
/* <var_pmethidnode8:nullable Object> isa nullable AMethid */
cltype18 = type_nullable__nit__AMethid.color;
idtype19 = type_nullable__nit__AMethid.id;
if(var_pmethidnode8 == NULL) {
var17 = 1;
} else {
if(cltype18 >= (((long)var_pmethidnode8&3)?type_info[((long)var_pmethidnode8&3)]:var_pmethidnode8->type)->table_size) {
var17 = 0;
} else {
var17 = (((long)var_pmethidnode8&3)?type_info[((long)var_pmethidnode8&3)]:var_pmethidnode8->type)->type_table[cltype18] == idtype19;
}
}
if (unlikely(!var17)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2287);
fatal_exit(1);
}
var_psignaturenode9 = var_nodearraylist6;
/* <var_psignaturenode9:nullable Object> isa nullable ASignature */
cltype21 = type_nullable__nit__ASignature.color;
idtype22 = type_nullable__nit__ASignature.id;
if(var_psignaturenode9 == NULL) {
var20 = 1;
} else {
if(cltype21 >= (((long)var_psignaturenode9&3)?type_info[((long)var_psignaturenode9&3)]:var_psignaturenode9->type)->table_size) {
var20 = 0;
} else {
var20 = (((long)var_psignaturenode9&3)?type_info[((long)var_psignaturenode9&3)]:var_psignaturenode9->type)->type_table[cltype21] == idtype22;
}
}
if (unlikely(!var20)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2289);
fatal_exit(1);
}
var_pannotationsnode10 = var_nodearraylist7;
/* <var_pannotationsnode10:nullable Object> isa nullable AAnnotations */
cltype24 = type_nullable__nit__AAnnotations.color;
idtype25 = type_nullable__nit__AAnnotations.id;
if(var_pannotationsnode10 == NULL) {
var23 = 1;
} else {
if(cltype24 >= (((long)var_pannotationsnode10&3)?type_info[((long)var_pannotationsnode10&3)]:var_pannotationsnode10->type)->table_size) {
var23 = 0;
} else {
var23 = (((long)var_pannotationsnode10&3)?type_info[((long)var_pannotationsnode10&3)]:var_pannotationsnode10->type)->type_table[cltype24] == idtype25;
}
}
if (unlikely(!var23)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2291);
fatal_exit(1);
}
var26 = NEW_nit__AMethPropdef(&type_nit__AMethPropdef);
{
((void(*)(val* self, val* p0, val* p1, val* p2, val* p3, val* p4, val* p5, val* p6, val* p7, val* p8, val* p9, val* p10, val* p11))(var26->class->vft[COLOR_nit__parser_prod__AMethPropdef__init_amethpropdef]))(var26, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_tkwmethnode5, ((val*)NULL), ((val*)NULL), var_pmethidnode8, var_psignaturenode9, var_pannotationsnode10, ((val*)NULL), ((val*)NULL), ((val*)NULL)); /* init_amethpropdef on <var26:AMethPropdef>*/
}
var_ppropdefnode1 = var26;
var_node_list = var_ppropdefnode1;
var27 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction48> */
{
var28 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var27); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var28, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction49#action for (self: ReduceAction49, Parser) */
void nit__parser___nit__parser__ReduceAction49___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist6 /* var nodearraylist6: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist5 /* var nodearraylist5: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var5 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var6 /* : Bool */;
int cltype;
int idtype;
val* var_tkwredefnode3 /* var tkwredefnode3: nullable Object */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
val* var_pvisibilitynode4 /* var pvisibilitynode4: nullable Object */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var_tkwnewnode7 /* var tkwnewnode7: nullable Object */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
val* var_psignaturenode9 /* var psignaturenode9: nullable Object */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
val* var_pannotationsnode10 /* var pannotationsnode10: nullable Object */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
val* var22 /* : AMethPropdef */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AMethPropdef */;
long var23 /* : Int */;
long var24 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist6 = var;
{
var1 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist5 = var1;
{
var2 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist4 = var2;
{
var3 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist3 = var3;
{
var4 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist2 = var4;
{
var5 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist1 = var5;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable__nit__ADoc.color;
idtype = type_nullable__nit__ADoc.id;
if(var_pdocnode2 == NULL) {
var6 = 1;
} else {
if(cltype >= (((long)var_pdocnode2&3)?type_info[((long)var_pdocnode2&3)]:var_pdocnode2->type)->table_size) {
var6 = 0;
} else {
var6 = (((long)var_pdocnode2&3)?type_info[((long)var_pdocnode2&3)]:var_pdocnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var6)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2322);
fatal_exit(1);
}
var_tkwredefnode3 = var_nodearraylist2;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype8 = type_nullable__nit__TKwredef.color;
idtype9 = type_nullable__nit__TKwredef.id;
if(var_tkwredefnode3 == NULL) {
var7 = 1;
} else {
if(cltype8 >= (((long)var_tkwredefnode3&3)?type_info[((long)var_tkwredefnode3&3)]:var_tkwredefnode3->type)->table_size) {
var7 = 0;
} else {
var7 = (((long)var_tkwredefnode3&3)?type_info[((long)var_tkwredefnode3&3)]:var_tkwredefnode3->type)->type_table[cltype8] == idtype9;
}
}
if (unlikely(!var7)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2324);
fatal_exit(1);
}
var_pvisibilitynode4 = var_nodearraylist3;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype11 = type_nullable__nit__AVisibility.color;
idtype12 = type_nullable__nit__AVisibility.id;
if(var_pvisibilitynode4 == NULL) {
var10 = 1;
} else {
if(cltype11 >= (((long)var_pvisibilitynode4&3)?type_info[((long)var_pvisibilitynode4&3)]:var_pvisibilitynode4->type)->table_size) {
var10 = 0;
} else {
var10 = (((long)var_pvisibilitynode4&3)?type_info[((long)var_pvisibilitynode4&3)]:var_pvisibilitynode4->type)->type_table[cltype11] == idtype12;
}
}
if (unlikely(!var10)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2326);
fatal_exit(1);
}
var_tkwnewnode7 = var_nodearraylist4;
/* <var_tkwnewnode7:nullable Object> isa nullable TKwnew */
cltype14 = type_nullable__nit__TKwnew.color;
idtype15 = type_nullable__nit__TKwnew.id;
if(var_tkwnewnode7 == NULL) {
var13 = 1;
} else {
if(cltype14 >= (((long)var_tkwnewnode7&3)?type_info[((long)var_tkwnewnode7&3)]:var_tkwnewnode7->type)->table_size) {
var13 = 0;
} else {
var13 = (((long)var_tkwnewnode7&3)?type_info[((long)var_tkwnewnode7&3)]:var_tkwnewnode7->type)->type_table[cltype14] == idtype15;
}
}
if (unlikely(!var13)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2328);
fatal_exit(1);
}
var_psignaturenode9 = var_nodearraylist5;
/* <var_psignaturenode9:nullable Object> isa nullable ASignature */
cltype17 = type_nullable__nit__ASignature.color;
idtype18 = type_nullable__nit__ASignature.id;
if(var_psignaturenode9 == NULL) {
var16 = 1;
} else {
if(cltype17 >= (((long)var_psignaturenode9&3)?type_info[((long)var_psignaturenode9&3)]:var_psignaturenode9->type)->table_size) {
var16 = 0;
} else {
var16 = (((long)var_psignaturenode9&3)?type_info[((long)var_psignaturenode9&3)]:var_psignaturenode9->type)->type_table[cltype17] == idtype18;
}
}
if (unlikely(!var16)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2330);
fatal_exit(1);
}
var_pannotationsnode10 = var_nodearraylist6;
/* <var_pannotationsnode10:nullable Object> isa nullable AAnnotations */
cltype20 = type_nullable__nit__AAnnotations.color;
idtype21 = type_nullable__nit__AAnnotations.id;
if(var_pannotationsnode10 == NULL) {
var19 = 1;
} else {
if(cltype20 >= (((long)var_pannotationsnode10&3)?type_info[((long)var_pannotationsnode10&3)]:var_pannotationsnode10->type)->table_size) {
var19 = 0;
} else {
var19 = (((long)var_pannotationsnode10&3)?type_info[((long)var_pannotationsnode10&3)]:var_pannotationsnode10->type)->type_table[cltype20] == idtype21;
}
}
if (unlikely(!var19)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2332);
fatal_exit(1);
}
var22 = NEW_nit__AMethPropdef(&type_nit__AMethPropdef);
{
((void(*)(val* self, val* p0, val* p1, val* p2, val* p3, val* p4, val* p5, val* p6, val* p7, val* p8, val* p9, val* p10, val* p11))(var22->class->vft[COLOR_nit__parser_prod__AMethPropdef__init_amethpropdef]))(var22, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, ((val*)NULL), ((val*)NULL), var_tkwnewnode7, ((val*)NULL), var_psignaturenode9, var_pannotationsnode10, ((val*)NULL), ((val*)NULL), ((val*)NULL)); /* init_amethpropdef on <var22:AMethPropdef>*/
}
var_ppropdefnode1 = var22;
var_node_list = var_ppropdefnode1;
var23 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction49> */
{
var24 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var23); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var24, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction50#action for (self: ReduceAction50, Parser) */
void nit__parser___nit__parser__ReduceAction50___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist7 /* var nodearraylist7: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist6 /* var nodearraylist6: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist5 /* var nodearraylist5: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var5 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var6 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var7 /* : Bool */;
int cltype;
int idtype;
val* var_tkwredefnode3 /* var tkwredefnode3: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var_pvisibilitynode4 /* var pvisibilitynode4: nullable Object */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
val* var_tkwnewnode7 /* var tkwnewnode7: nullable Object */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
val* var_pmethidnode8 /* var pmethidnode8: nullable Object */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
val* var_psignaturenode9 /* var psignaturenode9: nullable Object */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
val* var_pannotationsnode10 /* var pannotationsnode10: nullable Object */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
val* var26 /* : AMethPropdef */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AMethPropdef */;
long var27 /* : Int */;
long var28 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist7 = var;
{
var1 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist6 = var1;
{
var2 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist5 = var2;
{
var3 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist4 = var3;
{
var4 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist3 = var4;
{
var5 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist2 = var5;
{
var6 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist1 = var6;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable__nit__ADoc.color;
idtype = type_nullable__nit__ADoc.id;
if(var_pdocnode2 == NULL) {
var7 = 1;
} else {
if(cltype >= (((long)var_pdocnode2&3)?type_info[((long)var_pdocnode2&3)]:var_pdocnode2->type)->table_size) {
var7 = 0;
} else {
var7 = (((long)var_pdocnode2&3)?type_info[((long)var_pdocnode2&3)]:var_pdocnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var7)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2364);
fatal_exit(1);
}
var_tkwredefnode3 = var_nodearraylist2;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype9 = type_nullable__nit__TKwredef.color;
idtype10 = type_nullable__nit__TKwredef.id;
if(var_tkwredefnode3 == NULL) {
var8 = 1;
} else {
if(cltype9 >= (((long)var_tkwredefnode3&3)?type_info[((long)var_tkwredefnode3&3)]:var_tkwredefnode3->type)->table_size) {
var8 = 0;
} else {
var8 = (((long)var_tkwredefnode3&3)?type_info[((long)var_tkwredefnode3&3)]:var_tkwredefnode3->type)->type_table[cltype9] == idtype10;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2366);
fatal_exit(1);
}
var_pvisibilitynode4 = var_nodearraylist3;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype12 = type_nullable__nit__AVisibility.color;
idtype13 = type_nullable__nit__AVisibility.id;
if(var_pvisibilitynode4 == NULL) {
var11 = 1;
} else {
if(cltype12 >= (((long)var_pvisibilitynode4&3)?type_info[((long)var_pvisibilitynode4&3)]:var_pvisibilitynode4->type)->table_size) {
var11 = 0;
} else {
var11 = (((long)var_pvisibilitynode4&3)?type_info[((long)var_pvisibilitynode4&3)]:var_pvisibilitynode4->type)->type_table[cltype12] == idtype13;
}
}
if (unlikely(!var11)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2368);
fatal_exit(1);
}
var_tkwnewnode7 = var_nodearraylist4;
/* <var_tkwnewnode7:nullable Object> isa nullable TKwnew */
cltype15 = type_nullable__nit__TKwnew.color;
idtype16 = type_nullable__nit__TKwnew.id;
if(var_tkwnewnode7 == NULL) {
var14 = 1;
} else {
if(cltype15 >= (((long)var_tkwnewnode7&3)?type_info[((long)var_tkwnewnode7&3)]:var_tkwnewnode7->type)->table_size) {
var14 = 0;
} else {
var14 = (((long)var_tkwnewnode7&3)?type_info[((long)var_tkwnewnode7&3)]:var_tkwnewnode7->type)->type_table[cltype15] == idtype16;
}
}
if (unlikely(!var14)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2370);
fatal_exit(1);
}
var_pmethidnode8 = var_nodearraylist5;
/* <var_pmethidnode8:nullable Object> isa nullable AMethid */
cltype18 = type_nullable__nit__AMethid.color;
idtype19 = type_nullable__nit__AMethid.id;
if(var_pmethidnode8 == NULL) {
var17 = 1;
} else {
if(cltype18 >= (((long)var_pmethidnode8&3)?type_info[((long)var_pmethidnode8&3)]:var_pmethidnode8->type)->table_size) {
var17 = 0;
} else {
var17 = (((long)var_pmethidnode8&3)?type_info[((long)var_pmethidnode8&3)]:var_pmethidnode8->type)->type_table[cltype18] == idtype19;
}
}
if (unlikely(!var17)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2372);
fatal_exit(1);
}
var_psignaturenode9 = var_nodearraylist6;
/* <var_psignaturenode9:nullable Object> isa nullable ASignature */
cltype21 = type_nullable__nit__ASignature.color;
idtype22 = type_nullable__nit__ASignature.id;
if(var_psignaturenode9 == NULL) {
var20 = 1;
} else {
if(cltype21 >= (((long)var_psignaturenode9&3)?type_info[((long)var_psignaturenode9&3)]:var_psignaturenode9->type)->table_size) {
var20 = 0;
} else {
var20 = (((long)var_psignaturenode9&3)?type_info[((long)var_psignaturenode9&3)]:var_psignaturenode9->type)->type_table[cltype21] == idtype22;
}
}
if (unlikely(!var20)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2374);
fatal_exit(1);
}
var_pannotationsnode10 = var_nodearraylist7;
/* <var_pannotationsnode10:nullable Object> isa nullable AAnnotations */
cltype24 = type_nullable__nit__AAnnotations.color;
idtype25 = type_nullable__nit__AAnnotations.id;
if(var_pannotationsnode10 == NULL) {
var23 = 1;
} else {
if(cltype24 >= (((long)var_pannotationsnode10&3)?type_info[((long)var_pannotationsnode10&3)]:var_pannotationsnode10->type)->table_size) {
var23 = 0;
} else {
var23 = (((long)var_pannotationsnode10&3)?type_info[((long)var_pannotationsnode10&3)]:var_pannotationsnode10->type)->type_table[cltype24] == idtype25;
}
}
if (unlikely(!var23)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2376);
fatal_exit(1);
}
var26 = NEW_nit__AMethPropdef(&type_nit__AMethPropdef);
{
((void(*)(val* self, val* p0, val* p1, val* p2, val* p3, val* p4, val* p5, val* p6, val* p7, val* p8, val* p9, val* p10, val* p11))(var26->class->vft[COLOR_nit__parser_prod__AMethPropdef__init_amethpropdef]))(var26, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, ((val*)NULL), ((val*)NULL), var_tkwnewnode7, var_pmethidnode8, var_psignaturenode9, var_pannotationsnode10, ((val*)NULL), ((val*)NULL), ((val*)NULL)); /* init_amethpropdef on <var26:AMethPropdef>*/
}
var_ppropdefnode1 = var26;
var_node_list = var_ppropdefnode1;
var27 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction50> */
{
var28 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var27); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var28, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction51#action for (self: ReduceAction51, Parser) */
void nit__parser___nit__parser__ReduceAction51___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist8 /* var nodearraylist8: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist7 /* var nodearraylist7: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist6 /* var nodearraylist6: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist5 /* var nodearraylist5: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var5 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var6 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var7 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var8 /* : Bool */;
int cltype;
int idtype;
val* var_tkwredefnode3 /* var tkwredefnode3: nullable Object */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var_pvisibilitynode4 /* var pvisibilitynode4: nullable Object */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
val* var_tkwnewnode7 /* var tkwnewnode7: nullable Object */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
val* var_psignaturenode9 /* var psignaturenode9: nullable Object */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
val* var_pexprnode13 /* var pexprnode13: nullable Object */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
val* var24 /* : AMethPropdef */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AMethPropdef */;
long var25 /* : Int */;
long var26 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist8 = var;
{
var1 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist7 = var1;
{
var2 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist6 = var2;
{
var3 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist5 = var3;
{
var4 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist4 = var4;
{
var5 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist3 = var5;
{
var6 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist2 = var6;
{
var7 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist1 = var7;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable__nit__ADoc.color;
idtype = type_nullable__nit__ADoc.id;
if(var_pdocnode2 == NULL) {
var8 = 1;
} else {
if(cltype >= (((long)var_pdocnode2&3)?type_info[((long)var_pdocnode2&3)]:var_pdocnode2->type)->table_size) {
var8 = 0;
} else {
var8 = (((long)var_pdocnode2&3)?type_info[((long)var_pdocnode2&3)]:var_pdocnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2409);
fatal_exit(1);
}
var_tkwredefnode3 = var_nodearraylist2;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype10 = type_nullable__nit__TKwredef.color;
idtype11 = type_nullable__nit__TKwredef.id;
if(var_tkwredefnode3 == NULL) {
var9 = 1;
} else {
if(cltype10 >= (((long)var_tkwredefnode3&3)?type_info[((long)var_tkwredefnode3&3)]:var_tkwredefnode3->type)->table_size) {
var9 = 0;
} else {
var9 = (((long)var_tkwredefnode3&3)?type_info[((long)var_tkwredefnode3&3)]:var_tkwredefnode3->type)->type_table[cltype10] == idtype11;
}
}
if (unlikely(!var9)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2411);
fatal_exit(1);
}
var_pvisibilitynode4 = var_nodearraylist3;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype13 = type_nullable__nit__AVisibility.color;
idtype14 = type_nullable__nit__AVisibility.id;
if(var_pvisibilitynode4 == NULL) {
var12 = 1;
} else {
if(cltype13 >= (((long)var_pvisibilitynode4&3)?type_info[((long)var_pvisibilitynode4&3)]:var_pvisibilitynode4->type)->table_size) {
var12 = 0;
} else {
var12 = (((long)var_pvisibilitynode4&3)?type_info[((long)var_pvisibilitynode4&3)]:var_pvisibilitynode4->type)->type_table[cltype13] == idtype14;
}
}
if (unlikely(!var12)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2413);
fatal_exit(1);
}
var_tkwnewnode7 = var_nodearraylist4;
/* <var_tkwnewnode7:nullable Object> isa nullable TKwnew */
cltype16 = type_nullable__nit__TKwnew.color;
idtype17 = type_nullable__nit__TKwnew.id;
if(var_tkwnewnode7 == NULL) {
var15 = 1;
} else {
if(cltype16 >= (((long)var_tkwnewnode7&3)?type_info[((long)var_tkwnewnode7&3)]:var_tkwnewnode7->type)->table_size) {
var15 = 0;
} else {
var15 = (((long)var_tkwnewnode7&3)?type_info[((long)var_tkwnewnode7&3)]:var_tkwnewnode7->type)->type_table[cltype16] == idtype17;
}
}
if (unlikely(!var15)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2415);
fatal_exit(1);
}
var_psignaturenode9 = var_nodearraylist5;
/* <var_psignaturenode9:nullable Object> isa nullable ASignature */
cltype19 = type_nullable__nit__ASignature.color;
idtype20 = type_nullable__nit__ASignature.id;
if(var_psignaturenode9 == NULL) {
var18 = 1;
} else {
if(cltype19 >= (((long)var_psignaturenode9&3)?type_info[((long)var_psignaturenode9&3)]:var_psignaturenode9->type)->table_size) {
var18 = 0;
} else {
var18 = (((long)var_psignaturenode9&3)?type_info[((long)var_psignaturenode9&3)]:var_psignaturenode9->type)->type_table[cltype19] == idtype20;
}
}
if (unlikely(!var18)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2417);
fatal_exit(1);
}
var_pexprnode13 = var_nodearraylist7;
/* <var_pexprnode13:nullable Object> isa nullable AExpr */
cltype22 = type_nullable__nit__AExpr.color;
idtype23 = type_nullable__nit__AExpr.id;
if(var_pexprnode13 == NULL) {
var21 = 1;
} else {
if(cltype22 >= (((long)var_pexprnode13&3)?type_info[((long)var_pexprnode13&3)]:var_pexprnode13->type)->table_size) {
var21 = 0;
} else {
var21 = (((long)var_pexprnode13&3)?type_info[((long)var_pexprnode13&3)]:var_pexprnode13->type)->type_table[cltype22] == idtype23;
}
}
if (unlikely(!var21)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2419);
fatal_exit(1);
}
var24 = NEW_nit__AMethPropdef(&type_nit__AMethPropdef);
{
((void(*)(val* self, val* p0, val* p1, val* p2, val* p3, val* p4, val* p5, val* p6, val* p7, val* p8, val* p9, val* p10, val* p11))(var24->class->vft[COLOR_nit__parser_prod__AMethPropdef__init_amethpropdef]))(var24, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, ((val*)NULL), ((val*)NULL), var_tkwnewnode7, ((val*)NULL), var_psignaturenode9, ((val*)NULL), ((val*)NULL), ((val*)NULL), var_pexprnode13); /* init_amethpropdef on <var24:AMethPropdef>*/
}
var_ppropdefnode1 = var24;
var_node_list = var_ppropdefnode1;
var25 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction51> */
{
var26 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var25); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var26, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction52#action for (self: ReduceAction52, Parser) */
void nit__parser___nit__parser__ReduceAction52___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist9 /* var nodearraylist9: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist8 /* var nodearraylist8: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist7 /* var nodearraylist7: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist6 /* var nodearraylist6: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist5 /* var nodearraylist5: nullable Object */;
val* var5 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var6 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var7 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var8 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var9 /* : Bool */;
int cltype;
int idtype;
val* var_tkwredefnode3 /* var tkwredefnode3: nullable Object */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var_pvisibilitynode4 /* var pvisibilitynode4: nullable Object */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
val* var_tkwnewnode7 /* var tkwnewnode7: nullable Object */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
val* var_pmethidnode8 /* var pmethidnode8: nullable Object */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
val* var_psignaturenode9 /* var psignaturenode9: nullable Object */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
val* var_pexprnode13 /* var pexprnode13: nullable Object */;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
val* var28 /* : AMethPropdef */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AMethPropdef */;
long var29 /* : Int */;
long var30 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist9 = var;
{
var1 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist8 = var1;
{
var2 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist7 = var2;
{
var3 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist6 = var3;
{
var4 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist5 = var4;
{
var5 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist4 = var5;
{
var6 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist3 = var6;
{
var7 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist2 = var7;
{
var8 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist1 = var8;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable__nit__ADoc.color;
idtype = type_nullable__nit__ADoc.id;
if(var_pdocnode2 == NULL) {
var9 = 1;
} else {
if(cltype >= (((long)var_pdocnode2&3)?type_info[((long)var_pdocnode2&3)]:var_pdocnode2->type)->table_size) {
var9 = 0;
} else {
var9 = (((long)var_pdocnode2&3)?type_info[((long)var_pdocnode2&3)]:var_pdocnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var9)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2453);
fatal_exit(1);
}
var_tkwredefnode3 = var_nodearraylist2;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype11 = type_nullable__nit__TKwredef.color;
idtype12 = type_nullable__nit__TKwredef.id;
if(var_tkwredefnode3 == NULL) {
var10 = 1;
} else {
if(cltype11 >= (((long)var_tkwredefnode3&3)?type_info[((long)var_tkwredefnode3&3)]:var_tkwredefnode3->type)->table_size) {
var10 = 0;
} else {
var10 = (((long)var_tkwredefnode3&3)?type_info[((long)var_tkwredefnode3&3)]:var_tkwredefnode3->type)->type_table[cltype11] == idtype12;
}
}
if (unlikely(!var10)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2455);
fatal_exit(1);
}
var_pvisibilitynode4 = var_nodearraylist3;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype14 = type_nullable__nit__AVisibility.color;
idtype15 = type_nullable__nit__AVisibility.id;
if(var_pvisibilitynode4 == NULL) {
var13 = 1;
} else {
if(cltype14 >= (((long)var_pvisibilitynode4&3)?type_info[((long)var_pvisibilitynode4&3)]:var_pvisibilitynode4->type)->table_size) {
var13 = 0;
} else {
var13 = (((long)var_pvisibilitynode4&3)?type_info[((long)var_pvisibilitynode4&3)]:var_pvisibilitynode4->type)->type_table[cltype14] == idtype15;
}
}
if (unlikely(!var13)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2457);
fatal_exit(1);
}
var_tkwnewnode7 = var_nodearraylist4;
/* <var_tkwnewnode7:nullable Object> isa nullable TKwnew */
cltype17 = type_nullable__nit__TKwnew.color;
idtype18 = type_nullable__nit__TKwnew.id;
if(var_tkwnewnode7 == NULL) {
var16 = 1;
} else {
if(cltype17 >= (((long)var_tkwnewnode7&3)?type_info[((long)var_tkwnewnode7&3)]:var_tkwnewnode7->type)->table_size) {
var16 = 0;
} else {
var16 = (((long)var_tkwnewnode7&3)?type_info[((long)var_tkwnewnode7&3)]:var_tkwnewnode7->type)->type_table[cltype17] == idtype18;
}
}
if (unlikely(!var16)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2459);
fatal_exit(1);
}
var_pmethidnode8 = var_nodearraylist5;
/* <var_pmethidnode8:nullable Object> isa nullable AMethid */
cltype20 = type_nullable__nit__AMethid.color;
idtype21 = type_nullable__nit__AMethid.id;
if(var_pmethidnode8 == NULL) {
var19 = 1;
} else {
if(cltype20 >= (((long)var_pmethidnode8&3)?type_info[((long)var_pmethidnode8&3)]:var_pmethidnode8->type)->table_size) {
var19 = 0;
} else {
var19 = (((long)var_pmethidnode8&3)?type_info[((long)var_pmethidnode8&3)]:var_pmethidnode8->type)->type_table[cltype20] == idtype21;
}
}
if (unlikely(!var19)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2461);
fatal_exit(1);
}
var_psignaturenode9 = var_nodearraylist6;
/* <var_psignaturenode9:nullable Object> isa nullable ASignature */
cltype23 = type_nullable__nit__ASignature.color;
idtype24 = type_nullable__nit__ASignature.id;
if(var_psignaturenode9 == NULL) {
var22 = 1;
} else {
if(cltype23 >= (((long)var_psignaturenode9&3)?type_info[((long)var_psignaturenode9&3)]:var_psignaturenode9->type)->table_size) {
var22 = 0;
} else {
var22 = (((long)var_psignaturenode9&3)?type_info[((long)var_psignaturenode9&3)]:var_psignaturenode9->type)->type_table[cltype23] == idtype24;
}
}
if (unlikely(!var22)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2463);
fatal_exit(1);
}
var_pexprnode13 = var_nodearraylist8;
/* <var_pexprnode13:nullable Object> isa nullable AExpr */
cltype26 = type_nullable__nit__AExpr.color;
idtype27 = type_nullable__nit__AExpr.id;
if(var_pexprnode13 == NULL) {
var25 = 1;
} else {
if(cltype26 >= (((long)var_pexprnode13&3)?type_info[((long)var_pexprnode13&3)]:var_pexprnode13->type)->table_size) {
var25 = 0;
} else {
var25 = (((long)var_pexprnode13&3)?type_info[((long)var_pexprnode13&3)]:var_pexprnode13->type)->type_table[cltype26] == idtype27;
}
}
if (unlikely(!var25)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2465);
fatal_exit(1);
}
var28 = NEW_nit__AMethPropdef(&type_nit__AMethPropdef);
{
((void(*)(val* self, val* p0, val* p1, val* p2, val* p3, val* p4, val* p5, val* p6, val* p7, val* p8, val* p9, val* p10, val* p11))(var28->class->vft[COLOR_nit__parser_prod__AMethPropdef__init_amethpropdef]))(var28, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, ((val*)NULL), ((val*)NULL), var_tkwnewnode7, var_pmethidnode8, var_psignaturenode9, ((val*)NULL), ((val*)NULL), ((val*)NULL), var_pexprnode13); /* init_amethpropdef on <var28:AMethPropdef>*/
}
var_ppropdefnode1 = var28;
var_node_list = var_ppropdefnode1;
var29 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction52> */
{
var30 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var29); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var30, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction53#action for (self: ReduceAction53, Parser) */
void nit__parser___nit__parser__ReduceAction53___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist9 /* var nodearraylist9: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist8 /* var nodearraylist8: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist7 /* var nodearraylist7: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist6 /* var nodearraylist6: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist5 /* var nodearraylist5: nullable Object */;
val* var5 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var6 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var7 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var8 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var9 /* : Bool */;
int cltype;
int idtype;
val* var_tkwredefnode3 /* var tkwredefnode3: nullable Object */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var_pvisibilitynode4 /* var pvisibilitynode4: nullable Object */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
val* var_tkwnewnode7 /* var tkwnewnode7: nullable Object */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
val* var_psignaturenode9 /* var psignaturenode9: nullable Object */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
val* var_pannotationsnode10 /* var pannotationsnode10: nullable Object */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
val* var_pexprnode13 /* var pexprnode13: nullable Object */;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
val* var28 /* : AMethPropdef */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AMethPropdef */;
long var29 /* : Int */;
long var30 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist9 = var;
{
var1 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist8 = var1;
{
var2 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist7 = var2;
{
var3 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist6 = var3;
{
var4 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist5 = var4;
{
var5 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist4 = var5;
{
var6 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist3 = var6;
{
var7 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist2 = var7;
{
var8 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist1 = var8;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable__nit__ADoc.color;
idtype = type_nullable__nit__ADoc.id;
if(var_pdocnode2 == NULL) {
var9 = 1;
} else {
if(cltype >= (((long)var_pdocnode2&3)?type_info[((long)var_pdocnode2&3)]:var_pdocnode2->type)->table_size) {
var9 = 0;
} else {
var9 = (((long)var_pdocnode2&3)?type_info[((long)var_pdocnode2&3)]:var_pdocnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var9)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2499);
fatal_exit(1);
}
var_tkwredefnode3 = var_nodearraylist2;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype11 = type_nullable__nit__TKwredef.color;
idtype12 = type_nullable__nit__TKwredef.id;
if(var_tkwredefnode3 == NULL) {
var10 = 1;
} else {
if(cltype11 >= (((long)var_tkwredefnode3&3)?type_info[((long)var_tkwredefnode3&3)]:var_tkwredefnode3->type)->table_size) {
var10 = 0;
} else {
var10 = (((long)var_tkwredefnode3&3)?type_info[((long)var_tkwredefnode3&3)]:var_tkwredefnode3->type)->type_table[cltype11] == idtype12;
}
}
if (unlikely(!var10)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2501);
fatal_exit(1);
}
var_pvisibilitynode4 = var_nodearraylist3;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype14 = type_nullable__nit__AVisibility.color;
idtype15 = type_nullable__nit__AVisibility.id;
if(var_pvisibilitynode4 == NULL) {
var13 = 1;
} else {
if(cltype14 >= (((long)var_pvisibilitynode4&3)?type_info[((long)var_pvisibilitynode4&3)]:var_pvisibilitynode4->type)->table_size) {
var13 = 0;
} else {
var13 = (((long)var_pvisibilitynode4&3)?type_info[((long)var_pvisibilitynode4&3)]:var_pvisibilitynode4->type)->type_table[cltype14] == idtype15;
}
}
if (unlikely(!var13)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2503);
fatal_exit(1);
}
var_tkwnewnode7 = var_nodearraylist4;
/* <var_tkwnewnode7:nullable Object> isa nullable TKwnew */
cltype17 = type_nullable__nit__TKwnew.color;
idtype18 = type_nullable__nit__TKwnew.id;
if(var_tkwnewnode7 == NULL) {
var16 = 1;
} else {
if(cltype17 >= (((long)var_tkwnewnode7&3)?type_info[((long)var_tkwnewnode7&3)]:var_tkwnewnode7->type)->table_size) {
var16 = 0;
} else {
var16 = (((long)var_tkwnewnode7&3)?type_info[((long)var_tkwnewnode7&3)]:var_tkwnewnode7->type)->type_table[cltype17] == idtype18;
}
}
if (unlikely(!var16)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2505);
fatal_exit(1);
}
var_psignaturenode9 = var_nodearraylist5;
/* <var_psignaturenode9:nullable Object> isa nullable ASignature */
cltype20 = type_nullable__nit__ASignature.color;
idtype21 = type_nullable__nit__ASignature.id;
if(var_psignaturenode9 == NULL) {
var19 = 1;
} else {
if(cltype20 >= (((long)var_psignaturenode9&3)?type_info[((long)var_psignaturenode9&3)]:var_psignaturenode9->type)->table_size) {
var19 = 0;
} else {
var19 = (((long)var_psignaturenode9&3)?type_info[((long)var_psignaturenode9&3)]:var_psignaturenode9->type)->type_table[cltype20] == idtype21;
}
}
if (unlikely(!var19)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2507);
fatal_exit(1);
}
var_pannotationsnode10 = var_nodearraylist6;
/* <var_pannotationsnode10:nullable Object> isa nullable AAnnotations */
cltype23 = type_nullable__nit__AAnnotations.color;
idtype24 = type_nullable__nit__AAnnotations.id;
if(var_pannotationsnode10 == NULL) {
var22 = 1;
} else {
if(cltype23 >= (((long)var_pannotationsnode10&3)?type_info[((long)var_pannotationsnode10&3)]:var_pannotationsnode10->type)->table_size) {
var22 = 0;
} else {
var22 = (((long)var_pannotationsnode10&3)?type_info[((long)var_pannotationsnode10&3)]:var_pannotationsnode10->type)->type_table[cltype23] == idtype24;
}
}
if (unlikely(!var22)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2509);
fatal_exit(1);
}
var_pexprnode13 = var_nodearraylist8;
/* <var_pexprnode13:nullable Object> isa nullable AExpr */
cltype26 = type_nullable__nit__AExpr.color;
idtype27 = type_nullable__nit__AExpr.id;
if(var_pexprnode13 == NULL) {
var25 = 1;
} else {
if(cltype26 >= (((long)var_pexprnode13&3)?type_info[((long)var_pexprnode13&3)]:var_pexprnode13->type)->table_size) {
var25 = 0;
} else {
var25 = (((long)var_pexprnode13&3)?type_info[((long)var_pexprnode13&3)]:var_pexprnode13->type)->type_table[cltype26] == idtype27;
}
}
if (unlikely(!var25)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2511);
fatal_exit(1);
}
var28 = NEW_nit__AMethPropdef(&type_nit__AMethPropdef);
{
((void(*)(val* self, val* p0, val* p1, val* p2, val* p3, val* p4, val* p5, val* p6, val* p7, val* p8, val* p9, val* p10, val* p11))(var28->class->vft[COLOR_nit__parser_prod__AMethPropdef__init_amethpropdef]))(var28, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, ((val*)NULL), ((val*)NULL), var_tkwnewnode7, ((val*)NULL), var_psignaturenode9, var_pannotationsnode10, ((val*)NULL), ((val*)NULL), var_pexprnode13); /* init_amethpropdef on <var28:AMethPropdef>*/
}
var_ppropdefnode1 = var28;
var_node_list = var_ppropdefnode1;
var29 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction53> */
{
var30 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var29); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var30, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction54#action for (self: ReduceAction54, Parser) */
void nit__parser___nit__parser__ReduceAction54___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist10 /* var nodearraylist10: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist9 /* var nodearraylist9: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist8 /* var nodearraylist8: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist7 /* var nodearraylist7: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist6 /* var nodearraylist6: nullable Object */;
val* var5 /* : nullable Object */;
val* var_nodearraylist5 /* var nodearraylist5: nullable Object */;
val* var6 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var7 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var8 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var9 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var10 /* : Bool */;
int cltype;
int idtype;
val* var_tkwredefnode3 /* var tkwredefnode3: nullable Object */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
val* var_pvisibilitynode4 /* var pvisibilitynode4: nullable Object */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
val* var_tkwnewnode7 /* var tkwnewnode7: nullable Object */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
val* var_pmethidnode8 /* var pmethidnode8: nullable Object */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
val* var_psignaturenode9 /* var psignaturenode9: nullable Object */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
val* var_pannotationsnode10 /* var pannotationsnode10: nullable Object */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
val* var_pexprnode13 /* var pexprnode13: nullable Object */;
short int var29 /* : Bool */;
int cltype30;
int idtype31;
val* var32 /* : AMethPropdef */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AMethPropdef */;
long var33 /* : Int */;
long var34 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist10 = var;
{
var1 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist9 = var1;
{
var2 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist8 = var2;
{
var3 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist7 = var3;
{
var4 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist6 = var4;
{
var5 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist5 = var5;
{
var6 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist4 = var6;
{
var7 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist3 = var7;
{
var8 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist2 = var8;
{
var9 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist1 = var9;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable__nit__ADoc.color;
idtype = type_nullable__nit__ADoc.id;
if(var_pdocnode2 == NULL) {
var10 = 1;
} else {
if(cltype >= (((long)var_pdocnode2&3)?type_info[((long)var_pdocnode2&3)]:var_pdocnode2->type)->table_size) {
var10 = 0;
} else {
var10 = (((long)var_pdocnode2&3)?type_info[((long)var_pdocnode2&3)]:var_pdocnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var10)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2546);
fatal_exit(1);
}
var_tkwredefnode3 = var_nodearraylist2;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype12 = type_nullable__nit__TKwredef.color;
idtype13 = type_nullable__nit__TKwredef.id;
if(var_tkwredefnode3 == NULL) {
var11 = 1;
} else {
if(cltype12 >= (((long)var_tkwredefnode3&3)?type_info[((long)var_tkwredefnode3&3)]:var_tkwredefnode3->type)->table_size) {
var11 = 0;
} else {
var11 = (((long)var_tkwredefnode3&3)?type_info[((long)var_tkwredefnode3&3)]:var_tkwredefnode3->type)->type_table[cltype12] == idtype13;
}
}
if (unlikely(!var11)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2548);
fatal_exit(1);
}
var_pvisibilitynode4 = var_nodearraylist3;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype15 = type_nullable__nit__AVisibility.color;
idtype16 = type_nullable__nit__AVisibility.id;
if(var_pvisibilitynode4 == NULL) {
var14 = 1;
} else {
if(cltype15 >= (((long)var_pvisibilitynode4&3)?type_info[((long)var_pvisibilitynode4&3)]:var_pvisibilitynode4->type)->table_size) {
var14 = 0;
} else {
var14 = (((long)var_pvisibilitynode4&3)?type_info[((long)var_pvisibilitynode4&3)]:var_pvisibilitynode4->type)->type_table[cltype15] == idtype16;
}
}
if (unlikely(!var14)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2550);
fatal_exit(1);
}
var_tkwnewnode7 = var_nodearraylist4;
/* <var_tkwnewnode7:nullable Object> isa nullable TKwnew */
cltype18 = type_nullable__nit__TKwnew.color;
idtype19 = type_nullable__nit__TKwnew.id;
if(var_tkwnewnode7 == NULL) {
var17 = 1;
} else {
if(cltype18 >= (((long)var_tkwnewnode7&3)?type_info[((long)var_tkwnewnode7&3)]:var_tkwnewnode7->type)->table_size) {
var17 = 0;
} else {
var17 = (((long)var_tkwnewnode7&3)?type_info[((long)var_tkwnewnode7&3)]:var_tkwnewnode7->type)->type_table[cltype18] == idtype19;
}
}
if (unlikely(!var17)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2552);
fatal_exit(1);
}
var_pmethidnode8 = var_nodearraylist5;
/* <var_pmethidnode8:nullable Object> isa nullable AMethid */
cltype21 = type_nullable__nit__AMethid.color;
idtype22 = type_nullable__nit__AMethid.id;
if(var_pmethidnode8 == NULL) {
var20 = 1;
} else {
if(cltype21 >= (((long)var_pmethidnode8&3)?type_info[((long)var_pmethidnode8&3)]:var_pmethidnode8->type)->table_size) {
var20 = 0;
} else {
var20 = (((long)var_pmethidnode8&3)?type_info[((long)var_pmethidnode8&3)]:var_pmethidnode8->type)->type_table[cltype21] == idtype22;
}
}
if (unlikely(!var20)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2554);
fatal_exit(1);
}
var_psignaturenode9 = var_nodearraylist6;
/* <var_psignaturenode9:nullable Object> isa nullable ASignature */
cltype24 = type_nullable__nit__ASignature.color;
idtype25 = type_nullable__nit__ASignature.id;
if(var_psignaturenode9 == NULL) {
var23 = 1;
} else {
if(cltype24 >= (((long)var_psignaturenode9&3)?type_info[((long)var_psignaturenode9&3)]:var_psignaturenode9->type)->table_size) {
var23 = 0;
} else {
var23 = (((long)var_psignaturenode9&3)?type_info[((long)var_psignaturenode9&3)]:var_psignaturenode9->type)->type_table[cltype24] == idtype25;
}
}
if (unlikely(!var23)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2556);
fatal_exit(1);
}
var_pannotationsnode10 = var_nodearraylist7;
/* <var_pannotationsnode10:nullable Object> isa nullable AAnnotations */
cltype27 = type_nullable__nit__AAnnotations.color;
idtype28 = type_nullable__nit__AAnnotations.id;
if(var_pannotationsnode10 == NULL) {
var26 = 1;
} else {
if(cltype27 >= (((long)var_pannotationsnode10&3)?type_info[((long)var_pannotationsnode10&3)]:var_pannotationsnode10->type)->table_size) {
var26 = 0;
} else {
var26 = (((long)var_pannotationsnode10&3)?type_info[((long)var_pannotationsnode10&3)]:var_pannotationsnode10->type)->type_table[cltype27] == idtype28;
}
}
if (unlikely(!var26)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2558);
fatal_exit(1);
}
var_pexprnode13 = var_nodearraylist9;
/* <var_pexprnode13:nullable Object> isa nullable AExpr */
cltype30 = type_nullable__nit__AExpr.color;
idtype31 = type_nullable__nit__AExpr.id;
if(var_pexprnode13 == NULL) {
var29 = 1;
} else {
if(cltype30 >= (((long)var_pexprnode13&3)?type_info[((long)var_pexprnode13&3)]:var_pexprnode13->type)->table_size) {
var29 = 0;
} else {
var29 = (((long)var_pexprnode13&3)?type_info[((long)var_pexprnode13&3)]:var_pexprnode13->type)->type_table[cltype30] == idtype31;
}
}
if (unlikely(!var29)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2560);
fatal_exit(1);
}
var32 = NEW_nit__AMethPropdef(&type_nit__AMethPropdef);
{
((void(*)(val* self, val* p0, val* p1, val* p2, val* p3, val* p4, val* p5, val* p6, val* p7, val* p8, val* p9, val* p10, val* p11))(var32->class->vft[COLOR_nit__parser_prod__AMethPropdef__init_amethpropdef]))(var32, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, ((val*)NULL), ((val*)NULL), var_tkwnewnode7, var_pmethidnode8, var_psignaturenode9, var_pannotationsnode10, ((val*)NULL), ((val*)NULL), var_pexprnode13); /* init_amethpropdef on <var32:AMethPropdef>*/
}
var_ppropdefnode1 = var32;
var_node_list = var_ppropdefnode1;
var33 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction54> */
{
var34 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var33); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var34, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction55#action for (self: ReduceAction55, Parser) */
void nit__parser___nit__parser__ReduceAction55___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist8 /* var nodearraylist8: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist7 /* var nodearraylist7: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist6 /* var nodearraylist6: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist5 /* var nodearraylist5: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var5 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var6 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var7 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var8 /* : Bool */;
int cltype;
int idtype;
val* var_tkwredefnode3 /* var tkwredefnode3: nullable Object */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var_pvisibilitynode4 /* var pvisibilitynode4: nullable Object */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
val* var_tkwmethnode5 /* var tkwmethnode5: nullable Object */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
val* var_pmethidnode8 /* var pmethidnode8: nullable Object */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
val* var_psignaturenode9 /* var psignaturenode9: nullable Object */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
val* var_pexterncallsnode11 /* var pexterncallsnode11: nullable Object */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
val* var_pexterncodeblocknode12 /* var pexterncodeblocknode12: nullable Object */;
short int var27 /* : Bool */;
int cltype28;
int idtype29;
val* var30 /* : AMethPropdef */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AMethPropdef */;
long var31 /* : Int */;
long var32 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist8 = var;
{
var1 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist7 = var1;
{
var2 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist6 = var2;
{
var3 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist5 = var3;
{
var4 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist4 = var4;
{
var5 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist3 = var5;
{
var6 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist2 = var6;
{
var7 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist1 = var7;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable__nit__ADoc.color;
idtype = type_nullable__nit__ADoc.id;
if(var_pdocnode2 == NULL) {
var8 = 1;
} else {
if(cltype >= (((long)var_pdocnode2&3)?type_info[((long)var_pdocnode2&3)]:var_pdocnode2->type)->table_size) {
var8 = 0;
} else {
var8 = (((long)var_pdocnode2&3)?type_info[((long)var_pdocnode2&3)]:var_pdocnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2593);
fatal_exit(1);
}
var_tkwredefnode3 = var_nodearraylist2;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype10 = type_nullable__nit__TKwredef.color;
idtype11 = type_nullable__nit__TKwredef.id;
if(var_tkwredefnode3 == NULL) {
var9 = 1;
} else {
if(cltype10 >= (((long)var_tkwredefnode3&3)?type_info[((long)var_tkwredefnode3&3)]:var_tkwredefnode3->type)->table_size) {
var9 = 0;
} else {
var9 = (((long)var_tkwredefnode3&3)?type_info[((long)var_tkwredefnode3&3)]:var_tkwredefnode3->type)->type_table[cltype10] == idtype11;
}
}
if (unlikely(!var9)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2595);
fatal_exit(1);
}
var_pvisibilitynode4 = var_nodearraylist3;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype13 = type_nullable__nit__AVisibility.color;
idtype14 = type_nullable__nit__AVisibility.id;
if(var_pvisibilitynode4 == NULL) {
var12 = 1;
} else {
if(cltype13 >= (((long)var_pvisibilitynode4&3)?type_info[((long)var_pvisibilitynode4&3)]:var_pvisibilitynode4->type)->table_size) {
var12 = 0;
} else {
var12 = (((long)var_pvisibilitynode4&3)?type_info[((long)var_pvisibilitynode4&3)]:var_pvisibilitynode4->type)->type_table[cltype13] == idtype14;
}
}
if (unlikely(!var12)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2597);
fatal_exit(1);
}
var_tkwmethnode5 = var_nodearraylist4;
/* <var_tkwmethnode5:nullable Object> isa nullable TKwmeth */
cltype16 = type_nullable__nit__TKwmeth.color;
idtype17 = type_nullable__nit__TKwmeth.id;
if(var_tkwmethnode5 == NULL) {
var15 = 1;
} else {
if(cltype16 >= (((long)var_tkwmethnode5&3)?type_info[((long)var_tkwmethnode5&3)]:var_tkwmethnode5->type)->table_size) {
var15 = 0;
} else {
var15 = (((long)var_tkwmethnode5&3)?type_info[((long)var_tkwmethnode5&3)]:var_tkwmethnode5->type)->type_table[cltype16] == idtype17;
}
}
if (unlikely(!var15)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2599);
fatal_exit(1);
}
var_pmethidnode8 = var_nodearraylist5;
/* <var_pmethidnode8:nullable Object> isa nullable AMethid */
cltype19 = type_nullable__nit__AMethid.color;
idtype20 = type_nullable__nit__AMethid.id;
if(var_pmethidnode8 == NULL) {
var18 = 1;
} else {
if(cltype19 >= (((long)var_pmethidnode8&3)?type_info[((long)var_pmethidnode8&3)]:var_pmethidnode8->type)->table_size) {
var18 = 0;
} else {
var18 = (((long)var_pmethidnode8&3)?type_info[((long)var_pmethidnode8&3)]:var_pmethidnode8->type)->type_table[cltype19] == idtype20;
}
}
if (unlikely(!var18)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2601);
fatal_exit(1);
}
var_psignaturenode9 = var_nodearraylist6;
/* <var_psignaturenode9:nullable Object> isa nullable ASignature */
cltype22 = type_nullable__nit__ASignature.color;
idtype23 = type_nullable__nit__ASignature.id;
if(var_psignaturenode9 == NULL) {
var21 = 1;
} else {
if(cltype22 >= (((long)var_psignaturenode9&3)?type_info[((long)var_psignaturenode9&3)]:var_psignaturenode9->type)->table_size) {
var21 = 0;
} else {
var21 = (((long)var_psignaturenode9&3)?type_info[((long)var_psignaturenode9&3)]:var_psignaturenode9->type)->type_table[cltype22] == idtype23;
}
}
if (unlikely(!var21)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2603);
fatal_exit(1);
}
var_pexterncallsnode11 = var_nodearraylist7;
/* <var_pexterncallsnode11:nullable Object> isa nullable AExternCalls */
cltype25 = type_nullable__nit__AExternCalls.color;
idtype26 = type_nullable__nit__AExternCalls.id;
if(var_pexterncallsnode11 == NULL) {
var24 = 1;
} else {
if(cltype25 >= (((long)var_pexterncallsnode11&3)?type_info[((long)var_pexterncallsnode11&3)]:var_pexterncallsnode11->type)->table_size) {
var24 = 0;
} else {
var24 = (((long)var_pexterncallsnode11&3)?type_info[((long)var_pexterncallsnode11&3)]:var_pexterncallsnode11->type)->type_table[cltype25] == idtype26;
}
}
if (unlikely(!var24)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2605);
fatal_exit(1);
}
var_pexterncodeblocknode12 = var_nodearraylist8;
/* <var_pexterncodeblocknode12:nullable Object> isa nullable AExternCodeBlock */
cltype28 = type_nullable__nit__AExternCodeBlock.color;
idtype29 = type_nullable__nit__AExternCodeBlock.id;
if(var_pexterncodeblocknode12 == NULL) {
var27 = 1;
} else {
if(cltype28 >= (((long)var_pexterncodeblocknode12&3)?type_info[((long)var_pexterncodeblocknode12&3)]:var_pexterncodeblocknode12->type)->table_size) {
var27 = 0;
} else {
var27 = (((long)var_pexterncodeblocknode12&3)?type_info[((long)var_pexterncodeblocknode12&3)]:var_pexterncodeblocknode12->type)->type_table[cltype28] == idtype29;
}
}
if (unlikely(!var27)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2607);
fatal_exit(1);
}
var30 = NEW_nit__AMethPropdef(&type_nit__AMethPropdef);
{
((void(*)(val* self, val* p0, val* p1, val* p2, val* p3, val* p4, val* p5, val* p6, val* p7, val* p8, val* p9, val* p10, val* p11))(var30->class->vft[COLOR_nit__parser_prod__AMethPropdef__init_amethpropdef]))(var30, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_tkwmethnode5, ((val*)NULL), ((val*)NULL), var_pmethidnode8, var_psignaturenode9, ((val*)NULL), var_pexterncallsnode11, var_pexterncodeblocknode12, ((val*)NULL)); /* init_amethpropdef on <var30:AMethPropdef>*/
}
var_ppropdefnode1 = var30;
var_node_list = var_ppropdefnode1;
var31 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction55> */
{
var32 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var31); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var32, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction56#action for (self: ReduceAction56, Parser) */
void nit__parser___nit__parser__ReduceAction56___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist9 /* var nodearraylist9: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist8 /* var nodearraylist8: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist7 /* var nodearraylist7: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist6 /* var nodearraylist6: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist5 /* var nodearraylist5: nullable Object */;
val* var5 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var6 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var7 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var8 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var9 /* : Bool */;
int cltype;
int idtype;
val* var_tkwredefnode3 /* var tkwredefnode3: nullable Object */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var_pvisibilitynode4 /* var pvisibilitynode4: nullable Object */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
val* var_tkwmethnode5 /* var tkwmethnode5: nullable Object */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
val* var_pmethidnode8 /* var pmethidnode8: nullable Object */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
val* var_psignaturenode9 /* var psignaturenode9: nullable Object */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
val* var_pannotationsnode10 /* var pannotationsnode10: nullable Object */;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
val* var_pexterncallsnode11 /* var pexterncallsnode11: nullable Object */;
short int var28 /* : Bool */;
int cltype29;
int idtype30;
val* var_pexterncodeblocknode12 /* var pexterncodeblocknode12: nullable Object */;
short int var31 /* : Bool */;
int cltype32;
int idtype33;
val* var34 /* : AMethPropdef */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AMethPropdef */;
long var35 /* : Int */;
long var36 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist9 = var;
{
var1 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist8 = var1;
{
var2 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist7 = var2;
{
var3 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist6 = var3;
{
var4 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist5 = var4;
{
var5 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist4 = var5;
{
var6 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist3 = var6;
{
var7 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist2 = var7;
{
var8 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist1 = var8;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable__nit__ADoc.color;
idtype = type_nullable__nit__ADoc.id;
if(var_pdocnode2 == NULL) {
var9 = 1;
} else {
if(cltype >= (((long)var_pdocnode2&3)?type_info[((long)var_pdocnode2&3)]:var_pdocnode2->type)->table_size) {
var9 = 0;
} else {
var9 = (((long)var_pdocnode2&3)?type_info[((long)var_pdocnode2&3)]:var_pdocnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var9)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2641);
fatal_exit(1);
}
var_tkwredefnode3 = var_nodearraylist2;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype11 = type_nullable__nit__TKwredef.color;
idtype12 = type_nullable__nit__TKwredef.id;
if(var_tkwredefnode3 == NULL) {
var10 = 1;
} else {
if(cltype11 >= (((long)var_tkwredefnode3&3)?type_info[((long)var_tkwredefnode3&3)]:var_tkwredefnode3->type)->table_size) {
var10 = 0;
} else {
var10 = (((long)var_tkwredefnode3&3)?type_info[((long)var_tkwredefnode3&3)]:var_tkwredefnode3->type)->type_table[cltype11] == idtype12;
}
}
if (unlikely(!var10)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2643);
fatal_exit(1);
}
var_pvisibilitynode4 = var_nodearraylist3;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype14 = type_nullable__nit__AVisibility.color;
idtype15 = type_nullable__nit__AVisibility.id;
if(var_pvisibilitynode4 == NULL) {
var13 = 1;
} else {
if(cltype14 >= (((long)var_pvisibilitynode4&3)?type_info[((long)var_pvisibilitynode4&3)]:var_pvisibilitynode4->type)->table_size) {
var13 = 0;
} else {
var13 = (((long)var_pvisibilitynode4&3)?type_info[((long)var_pvisibilitynode4&3)]:var_pvisibilitynode4->type)->type_table[cltype14] == idtype15;
}
}
if (unlikely(!var13)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2645);
fatal_exit(1);
}
var_tkwmethnode5 = var_nodearraylist4;
/* <var_tkwmethnode5:nullable Object> isa nullable TKwmeth */
cltype17 = type_nullable__nit__TKwmeth.color;
idtype18 = type_nullable__nit__TKwmeth.id;
if(var_tkwmethnode5 == NULL) {
var16 = 1;
} else {
if(cltype17 >= (((long)var_tkwmethnode5&3)?type_info[((long)var_tkwmethnode5&3)]:var_tkwmethnode5->type)->table_size) {
var16 = 0;
} else {
var16 = (((long)var_tkwmethnode5&3)?type_info[((long)var_tkwmethnode5&3)]:var_tkwmethnode5->type)->type_table[cltype17] == idtype18;
}
}
if (unlikely(!var16)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2647);
fatal_exit(1);
}
var_pmethidnode8 = var_nodearraylist5;
/* <var_pmethidnode8:nullable Object> isa nullable AMethid */
cltype20 = type_nullable__nit__AMethid.color;
idtype21 = type_nullable__nit__AMethid.id;
if(var_pmethidnode8 == NULL) {
var19 = 1;
} else {
if(cltype20 >= (((long)var_pmethidnode8&3)?type_info[((long)var_pmethidnode8&3)]:var_pmethidnode8->type)->table_size) {
var19 = 0;
} else {
var19 = (((long)var_pmethidnode8&3)?type_info[((long)var_pmethidnode8&3)]:var_pmethidnode8->type)->type_table[cltype20] == idtype21;
}
}
if (unlikely(!var19)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2649);
fatal_exit(1);
}
var_psignaturenode9 = var_nodearraylist6;
/* <var_psignaturenode9:nullable Object> isa nullable ASignature */
cltype23 = type_nullable__nit__ASignature.color;
idtype24 = type_nullable__nit__ASignature.id;
if(var_psignaturenode9 == NULL) {
var22 = 1;
} else {
if(cltype23 >= (((long)var_psignaturenode9&3)?type_info[((long)var_psignaturenode9&3)]:var_psignaturenode9->type)->table_size) {
var22 = 0;
} else {
var22 = (((long)var_psignaturenode9&3)?type_info[((long)var_psignaturenode9&3)]:var_psignaturenode9->type)->type_table[cltype23] == idtype24;
}
}
if (unlikely(!var22)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2651);
fatal_exit(1);
}
var_pannotationsnode10 = var_nodearraylist7;
/* <var_pannotationsnode10:nullable Object> isa nullable AAnnotations */
cltype26 = type_nullable__nit__AAnnotations.color;
idtype27 = type_nullable__nit__AAnnotations.id;
if(var_pannotationsnode10 == NULL) {
var25 = 1;
} else {
if(cltype26 >= (((long)var_pannotationsnode10&3)?type_info[((long)var_pannotationsnode10&3)]:var_pannotationsnode10->type)->table_size) {
var25 = 0;
} else {
var25 = (((long)var_pannotationsnode10&3)?type_info[((long)var_pannotationsnode10&3)]:var_pannotationsnode10->type)->type_table[cltype26] == idtype27;
}
}
if (unlikely(!var25)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2653);
fatal_exit(1);
}
var_pexterncallsnode11 = var_nodearraylist8;
/* <var_pexterncallsnode11:nullable Object> isa nullable AExternCalls */
cltype29 = type_nullable__nit__AExternCalls.color;
idtype30 = type_nullable__nit__AExternCalls.id;
if(var_pexterncallsnode11 == NULL) {
var28 = 1;
} else {
if(cltype29 >= (((long)var_pexterncallsnode11&3)?type_info[((long)var_pexterncallsnode11&3)]:var_pexterncallsnode11->type)->table_size) {
var28 = 0;
} else {
var28 = (((long)var_pexterncallsnode11&3)?type_info[((long)var_pexterncallsnode11&3)]:var_pexterncallsnode11->type)->type_table[cltype29] == idtype30;
}
}
if (unlikely(!var28)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2655);
fatal_exit(1);
}
var_pexterncodeblocknode12 = var_nodearraylist9;
/* <var_pexterncodeblocknode12:nullable Object> isa nullable AExternCodeBlock */
cltype32 = type_nullable__nit__AExternCodeBlock.color;
idtype33 = type_nullable__nit__AExternCodeBlock.id;
if(var_pexterncodeblocknode12 == NULL) {
var31 = 1;
} else {
if(cltype32 >= (((long)var_pexterncodeblocknode12&3)?type_info[((long)var_pexterncodeblocknode12&3)]:var_pexterncodeblocknode12->type)->table_size) {
var31 = 0;
} else {
var31 = (((long)var_pexterncodeblocknode12&3)?type_info[((long)var_pexterncodeblocknode12&3)]:var_pexterncodeblocknode12->type)->type_table[cltype32] == idtype33;
}
}
if (unlikely(!var31)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2657);
fatal_exit(1);
}
var34 = NEW_nit__AMethPropdef(&type_nit__AMethPropdef);
{
((void(*)(val* self, val* p0, val* p1, val* p2, val* p3, val* p4, val* p5, val* p6, val* p7, val* p8, val* p9, val* p10, val* p11))(var34->class->vft[COLOR_nit__parser_prod__AMethPropdef__init_amethpropdef]))(var34, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_tkwmethnode5, ((val*)NULL), ((val*)NULL), var_pmethidnode8, var_psignaturenode9, var_pannotationsnode10, var_pexterncallsnode11, var_pexterncodeblocknode12, ((val*)NULL)); /* init_amethpropdef on <var34:AMethPropdef>*/
}
var_ppropdefnode1 = var34;
var_node_list = var_ppropdefnode1;
var35 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction56> */
{
var36 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var35); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var36, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction57#action for (self: ReduceAction57, Parser) */
void nit__parser___nit__parser__ReduceAction57___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist7 /* var nodearraylist7: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist6 /* var nodearraylist6: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist5 /* var nodearraylist5: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var5 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var6 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var7 /* : Bool */;
int cltype;
int idtype;
val* var_tkwredefnode3 /* var tkwredefnode3: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var_pvisibilitynode4 /* var pvisibilitynode4: nullable Object */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
val* var_tkwvarnode5 /* var tkwvarnode5: nullable Object */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
val* var_tidnode6 /* var tidnode6: nullable Object */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
val* var_ptypenode7 /* var ptypenode7: nullable Object */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
val* var_pannotationsnode9 /* var pannotationsnode9: nullable Object */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
val* var26 /* : AAttrPropdef */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AAttrPropdef */;
long var27 /* : Int */;
long var28 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist7 = var;
{
var1 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist6 = var1;
{
var2 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist5 = var2;
{
var3 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist4 = var3;
{
var4 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist3 = var4;
{
var5 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist2 = var5;
{
var6 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist1 = var6;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable__nit__ADoc.color;
idtype = type_nullable__nit__ADoc.id;
if(var_pdocnode2 == NULL) {
var7 = 1;
} else {
if(cltype >= (((long)var_pdocnode2&3)?type_info[((long)var_pdocnode2&3)]:var_pdocnode2->type)->table_size) {
var7 = 0;
} else {
var7 = (((long)var_pdocnode2&3)?type_info[((long)var_pdocnode2&3)]:var_pdocnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var7)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2689);
fatal_exit(1);
}
var_tkwredefnode3 = var_nodearraylist2;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype9 = type_nullable__nit__TKwredef.color;
idtype10 = type_nullable__nit__TKwredef.id;
if(var_tkwredefnode3 == NULL) {
var8 = 1;
} else {
if(cltype9 >= (((long)var_tkwredefnode3&3)?type_info[((long)var_tkwredefnode3&3)]:var_tkwredefnode3->type)->table_size) {
var8 = 0;
} else {
var8 = (((long)var_tkwredefnode3&3)?type_info[((long)var_tkwredefnode3&3)]:var_tkwredefnode3->type)->type_table[cltype9] == idtype10;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2691);
fatal_exit(1);
}
var_pvisibilitynode4 = var_nodearraylist3;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype12 = type_nullable__nit__AVisibility.color;
idtype13 = type_nullable__nit__AVisibility.id;
if(var_pvisibilitynode4 == NULL) {
var11 = 1;
} else {
if(cltype12 >= (((long)var_pvisibilitynode4&3)?type_info[((long)var_pvisibilitynode4&3)]:var_pvisibilitynode4->type)->table_size) {
var11 = 0;
} else {
var11 = (((long)var_pvisibilitynode4&3)?type_info[((long)var_pvisibilitynode4&3)]:var_pvisibilitynode4->type)->type_table[cltype12] == idtype13;
}
}
if (unlikely(!var11)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2693);
fatal_exit(1);
}
var_tkwvarnode5 = var_nodearraylist4;
/* <var_tkwvarnode5:nullable Object> isa nullable TKwvar */
cltype15 = type_nullable__nit__TKwvar.color;
idtype16 = type_nullable__nit__TKwvar.id;
if(var_tkwvarnode5 == NULL) {
var14 = 1;
} else {
if(cltype15 >= (((long)var_tkwvarnode5&3)?type_info[((long)var_tkwvarnode5&3)]:var_tkwvarnode5->type)->table_size) {
var14 = 0;
} else {
var14 = (((long)var_tkwvarnode5&3)?type_info[((long)var_tkwvarnode5&3)]:var_tkwvarnode5->type)->type_table[cltype15] == idtype16;
}
}
if (unlikely(!var14)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2695);
fatal_exit(1);
}
var_tidnode6 = var_nodearraylist5;
/* <var_tidnode6:nullable Object> isa nullable TId */
cltype18 = type_nullable__nit__TId.color;
idtype19 = type_nullable__nit__TId.id;
if(var_tidnode6 == NULL) {
var17 = 1;
} else {
if(cltype18 >= (((long)var_tidnode6&3)?type_info[((long)var_tidnode6&3)]:var_tidnode6->type)->table_size) {
var17 = 0;
} else {
var17 = (((long)var_tidnode6&3)?type_info[((long)var_tidnode6&3)]:var_tidnode6->type)->type_table[cltype18] == idtype19;
}
}
if (unlikely(!var17)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2697);
fatal_exit(1);
}
var_ptypenode7 = var_nodearraylist6;
/* <var_ptypenode7:nullable Object> isa nullable AType */
cltype21 = type_nullable__nit__AType.color;
idtype22 = type_nullable__nit__AType.id;
if(var_ptypenode7 == NULL) {
var20 = 1;
} else {
if(cltype21 >= (((long)var_ptypenode7&3)?type_info[((long)var_ptypenode7&3)]:var_ptypenode7->type)->table_size) {
var20 = 0;
} else {
var20 = (((long)var_ptypenode7&3)?type_info[((long)var_ptypenode7&3)]:var_ptypenode7->type)->type_table[cltype21] == idtype22;
}
}
if (unlikely(!var20)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2699);
fatal_exit(1);
}
var_pannotationsnode9 = var_nodearraylist7;
/* <var_pannotationsnode9:nullable Object> isa nullable AAnnotations */
cltype24 = type_nullable__nit__AAnnotations.color;
idtype25 = type_nullable__nit__AAnnotations.id;
if(var_pannotationsnode9 == NULL) {
var23 = 1;
} else {
if(cltype24 >= (((long)var_pannotationsnode9&3)?type_info[((long)var_pannotationsnode9&3)]:var_pannotationsnode9->type)->table_size) {
var23 = 0;
} else {
var23 = (((long)var_pannotationsnode9&3)?type_info[((long)var_pannotationsnode9&3)]:var_pannotationsnode9->type)->type_table[cltype24] == idtype25;
}
}
if (unlikely(!var23)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2701);
fatal_exit(1);
}
var26 = NEW_nit__AAttrPropdef(&type_nit__AAttrPropdef);
{
((void(*)(val* self, val* p0, val* p1, val* p2, val* p3, val* p4, val* p5, val* p6, val* p7, val* p8))(var26->class->vft[COLOR_nit__parser_prod__AAttrPropdef__init_aattrpropdef]))(var26, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_tkwvarnode5, var_tidnode6, var_ptypenode7, ((val*)NULL), var_pannotationsnode9, ((val*)NULL)); /* init_aattrpropdef on <var26:AAttrPropdef>*/
}
var_ppropdefnode1 = var26;
var_node_list = var_ppropdefnode1;
var27 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction57> */
{
var28 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var27); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var28, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction58#action for (self: ReduceAction58, Parser) */
void nit__parser___nit__parser__ReduceAction58___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist10 /* var nodearraylist10: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist9 /* var nodearraylist9: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist8 /* var nodearraylist8: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist7 /* var nodearraylist7: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist6 /* var nodearraylist6: nullable Object */;
val* var5 /* : nullable Object */;
val* var_nodearraylist5 /* var nodearraylist5: nullable Object */;
val* var6 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var7 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var8 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var9 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var10 /* : Bool */;
int cltype;
int idtype;
val* var_tkwredefnode3 /* var tkwredefnode3: nullable Object */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
val* var_pvisibilitynode4 /* var pvisibilitynode4: nullable Object */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
val* var_tkwvarnode5 /* var tkwvarnode5: nullable Object */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
val* var_tidnode6 /* var tidnode6: nullable Object */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
val* var_ptypenode7 /* var ptypenode7: nullable Object */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
val* var_pexprnode8 /* var pexprnode8: nullable Object */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
val* var_pannotationsnode9 /* var pannotationsnode9: nullable Object */;
short int var29 /* : Bool */;
int cltype30;
int idtype31;
val* var32 /* : AAttrPropdef */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AAttrPropdef */;
long var33 /* : Int */;
long var34 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist10 = var;
{
var1 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist9 = var1;
{
var2 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist8 = var2;
{
var3 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist7 = var3;
{
var4 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist6 = var4;
{
var5 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist5 = var5;
{
var6 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist4 = var6;
{
var7 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist3 = var7;
{
var8 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist2 = var8;
{
var9 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist1 = var9;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable__nit__ADoc.color;
idtype = type_nullable__nit__ADoc.id;
if(var_pdocnode2 == NULL) {
var10 = 1;
} else {
if(cltype >= (((long)var_pdocnode2&3)?type_info[((long)var_pdocnode2&3)]:var_pdocnode2->type)->table_size) {
var10 = 0;
} else {
var10 = (((long)var_pdocnode2&3)?type_info[((long)var_pdocnode2&3)]:var_pdocnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var10)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2733);
fatal_exit(1);
}
var_tkwredefnode3 = var_nodearraylist2;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype12 = type_nullable__nit__TKwredef.color;
idtype13 = type_nullable__nit__TKwredef.id;
if(var_tkwredefnode3 == NULL) {
var11 = 1;
} else {
if(cltype12 >= (((long)var_tkwredefnode3&3)?type_info[((long)var_tkwredefnode3&3)]:var_tkwredefnode3->type)->table_size) {
var11 = 0;
} else {
var11 = (((long)var_tkwredefnode3&3)?type_info[((long)var_tkwredefnode3&3)]:var_tkwredefnode3->type)->type_table[cltype12] == idtype13;
}
}
if (unlikely(!var11)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2735);
fatal_exit(1);
}
var_pvisibilitynode4 = var_nodearraylist3;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype15 = type_nullable__nit__AVisibility.color;
idtype16 = type_nullable__nit__AVisibility.id;
if(var_pvisibilitynode4 == NULL) {
var14 = 1;
} else {
if(cltype15 >= (((long)var_pvisibilitynode4&3)?type_info[((long)var_pvisibilitynode4&3)]:var_pvisibilitynode4->type)->table_size) {
var14 = 0;
} else {
var14 = (((long)var_pvisibilitynode4&3)?type_info[((long)var_pvisibilitynode4&3)]:var_pvisibilitynode4->type)->type_table[cltype15] == idtype16;
}
}
if (unlikely(!var14)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2737);
fatal_exit(1);
}
var_tkwvarnode5 = var_nodearraylist4;
/* <var_tkwvarnode5:nullable Object> isa nullable TKwvar */
cltype18 = type_nullable__nit__TKwvar.color;
idtype19 = type_nullable__nit__TKwvar.id;
if(var_tkwvarnode5 == NULL) {
var17 = 1;
} else {
if(cltype18 >= (((long)var_tkwvarnode5&3)?type_info[((long)var_tkwvarnode5&3)]:var_tkwvarnode5->type)->table_size) {
var17 = 0;
} else {
var17 = (((long)var_tkwvarnode5&3)?type_info[((long)var_tkwvarnode5&3)]:var_tkwvarnode5->type)->type_table[cltype18] == idtype19;
}
}
if (unlikely(!var17)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2739);
fatal_exit(1);
}
var_tidnode6 = var_nodearraylist5;
/* <var_tidnode6:nullable Object> isa nullable TId */
cltype21 = type_nullable__nit__TId.color;
idtype22 = type_nullable__nit__TId.id;
if(var_tidnode6 == NULL) {
var20 = 1;
} else {
if(cltype21 >= (((long)var_tidnode6&3)?type_info[((long)var_tidnode6&3)]:var_tidnode6->type)->table_size) {
var20 = 0;
} else {
var20 = (((long)var_tidnode6&3)?type_info[((long)var_tidnode6&3)]:var_tidnode6->type)->type_table[cltype21] == idtype22;
}
}
if (unlikely(!var20)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2741);
fatal_exit(1);
}
var_ptypenode7 = var_nodearraylist6;
/* <var_ptypenode7:nullable Object> isa nullable AType */
cltype24 = type_nullable__nit__AType.color;
idtype25 = type_nullable__nit__AType.id;
if(var_ptypenode7 == NULL) {
var23 = 1;
} else {
if(cltype24 >= (((long)var_ptypenode7&3)?type_info[((long)var_ptypenode7&3)]:var_ptypenode7->type)->table_size) {
var23 = 0;
} else {
var23 = (((long)var_ptypenode7&3)?type_info[((long)var_ptypenode7&3)]:var_ptypenode7->type)->type_table[cltype24] == idtype25;
}
}
if (unlikely(!var23)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2743);
fatal_exit(1);
}
var_pexprnode8 = var_nodearraylist9;
/* <var_pexprnode8:nullable Object> isa nullable AExpr */
cltype27 = type_nullable__nit__AExpr.color;
idtype28 = type_nullable__nit__AExpr.id;
if(var_pexprnode8 == NULL) {
var26 = 1;
} else {
if(cltype27 >= (((long)var_pexprnode8&3)?type_info[((long)var_pexprnode8&3)]:var_pexprnode8->type)->table_size) {
var26 = 0;
} else {
var26 = (((long)var_pexprnode8&3)?type_info[((long)var_pexprnode8&3)]:var_pexprnode8->type)->type_table[cltype27] == idtype28;
}
}
if (unlikely(!var26)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2745);
fatal_exit(1);
}
var_pannotationsnode9 = var_nodearraylist10;
/* <var_pannotationsnode9:nullable Object> isa nullable AAnnotations */
cltype30 = type_nullable__nit__AAnnotations.color;
idtype31 = type_nullable__nit__AAnnotations.id;
if(var_pannotationsnode9 == NULL) {
var29 = 1;
} else {
if(cltype30 >= (((long)var_pannotationsnode9&3)?type_info[((long)var_pannotationsnode9&3)]:var_pannotationsnode9->type)->table_size) {
var29 = 0;
} else {
var29 = (((long)var_pannotationsnode9&3)?type_info[((long)var_pannotationsnode9&3)]:var_pannotationsnode9->type)->type_table[cltype30] == idtype31;
}
}
if (unlikely(!var29)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2747);
fatal_exit(1);
}
var32 = NEW_nit__AAttrPropdef(&type_nit__AAttrPropdef);
{
((void(*)(val* self, val* p0, val* p1, val* p2, val* p3, val* p4, val* p5, val* p6, val* p7, val* p8))(var32->class->vft[COLOR_nit__parser_prod__AAttrPropdef__init_aattrpropdef]))(var32, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_tkwvarnode5, var_tidnode6, var_ptypenode7, var_pexprnode8, var_pannotationsnode9, ((val*)NULL)); /* init_aattrpropdef on <var32:AAttrPropdef>*/
}
var_ppropdefnode1 = var32;
var_node_list = var_ppropdefnode1;
var33 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction58> */
{
var34 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var33); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var34, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction59#action for (self: ReduceAction59, Parser) */
void nit__parser___nit__parser__ReduceAction59___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist8 /* var nodearraylist8: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist7 /* var nodearraylist7: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist6 /* var nodearraylist6: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist5 /* var nodearraylist5: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var5 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var6 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var7 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var8 /* : Bool */;
int cltype;
int idtype;
val* var_tkwredefnode3 /* var tkwredefnode3: nullable Object */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var_pvisibilitynode4 /* var pvisibilitynode4: nullable Object */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
val* var_tkwvarnode5 /* var tkwvarnode5: nullable Object */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
val* var_tidnode6 /* var tidnode6: nullable Object */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
val* var_ptypenode7 /* var ptypenode7: nullable Object */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
val* var_pexprnode10 /* var pexprnode10: nullable Object */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
val* var27 /* : AAttrPropdef */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AAttrPropdef */;
long var28 /* : Int */;
long var29 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist8 = var;
{
var1 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist7 = var1;
{
var2 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist6 = var2;
{
var3 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist5 = var3;
{
var4 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist4 = var4;
{
var5 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist3 = var5;
{
var6 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist2 = var6;
{
var7 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist1 = var7;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable__nit__ADoc.color;
idtype = type_nullable__nit__ADoc.id;
if(var_pdocnode2 == NULL) {
var8 = 1;
} else {
if(cltype >= (((long)var_pdocnode2&3)?type_info[((long)var_pdocnode2&3)]:var_pdocnode2->type)->table_size) {
var8 = 0;
} else {
var8 = (((long)var_pdocnode2&3)?type_info[((long)var_pdocnode2&3)]:var_pdocnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2777);
fatal_exit(1);
}
var_tkwredefnode3 = var_nodearraylist2;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype10 = type_nullable__nit__TKwredef.color;
idtype11 = type_nullable__nit__TKwredef.id;
if(var_tkwredefnode3 == NULL) {
var9 = 1;
} else {
if(cltype10 >= (((long)var_tkwredefnode3&3)?type_info[((long)var_tkwredefnode3&3)]:var_tkwredefnode3->type)->table_size) {
var9 = 0;
} else {
var9 = (((long)var_tkwredefnode3&3)?type_info[((long)var_tkwredefnode3&3)]:var_tkwredefnode3->type)->type_table[cltype10] == idtype11;
}
}
if (unlikely(!var9)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2779);
fatal_exit(1);
}
var_pvisibilitynode4 = var_nodearraylist3;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype13 = type_nullable__nit__AVisibility.color;
idtype14 = type_nullable__nit__AVisibility.id;
if(var_pvisibilitynode4 == NULL) {
var12 = 1;
} else {
if(cltype13 >= (((long)var_pvisibilitynode4&3)?type_info[((long)var_pvisibilitynode4&3)]:var_pvisibilitynode4->type)->table_size) {
var12 = 0;
} else {
var12 = (((long)var_pvisibilitynode4&3)?type_info[((long)var_pvisibilitynode4&3)]:var_pvisibilitynode4->type)->type_table[cltype13] == idtype14;
}
}
if (unlikely(!var12)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2781);
fatal_exit(1);
}
var_tkwvarnode5 = var_nodearraylist4;
/* <var_tkwvarnode5:nullable Object> isa nullable TKwvar */
cltype16 = type_nullable__nit__TKwvar.color;
idtype17 = type_nullable__nit__TKwvar.id;
if(var_tkwvarnode5 == NULL) {
var15 = 1;
} else {
if(cltype16 >= (((long)var_tkwvarnode5&3)?type_info[((long)var_tkwvarnode5&3)]:var_tkwvarnode5->type)->table_size) {
var15 = 0;
} else {
var15 = (((long)var_tkwvarnode5&3)?type_info[((long)var_tkwvarnode5&3)]:var_tkwvarnode5->type)->type_table[cltype16] == idtype17;
}
}
if (unlikely(!var15)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2783);
fatal_exit(1);
}
var_tidnode6 = var_nodearraylist5;
/* <var_tidnode6:nullable Object> isa nullable TId */
cltype19 = type_nullable__nit__TId.color;
idtype20 = type_nullable__nit__TId.id;
if(var_tidnode6 == NULL) {
var18 = 1;
} else {
if(cltype19 >= (((long)var_tidnode6&3)?type_info[((long)var_tidnode6&3)]:var_tidnode6->type)->table_size) {
var18 = 0;
} else {
var18 = (((long)var_tidnode6&3)?type_info[((long)var_tidnode6&3)]:var_tidnode6->type)->type_table[cltype19] == idtype20;
}
}
if (unlikely(!var18)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2785);
fatal_exit(1);
}
var_ptypenode7 = var_nodearraylist6;
/* <var_ptypenode7:nullable Object> isa nullable AType */
cltype22 = type_nullable__nit__AType.color;
idtype23 = type_nullable__nit__AType.id;
if(var_ptypenode7 == NULL) {
var21 = 1;
} else {
if(cltype22 >= (((long)var_ptypenode7&3)?type_info[((long)var_ptypenode7&3)]:var_ptypenode7->type)->table_size) {
var21 = 0;
} else {
var21 = (((long)var_ptypenode7&3)?type_info[((long)var_ptypenode7&3)]:var_ptypenode7->type)->type_table[cltype22] == idtype23;
}
}
if (unlikely(!var21)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2787);
fatal_exit(1);
}
var_pexprnode10 = var_nodearraylist8;
/* <var_pexprnode10:nullable Object> isa nullable AExpr */
cltype25 = type_nullable__nit__AExpr.color;
idtype26 = type_nullable__nit__AExpr.id;
if(var_pexprnode10 == NULL) {
var24 = 1;
} else {
if(cltype25 >= (((long)var_pexprnode10&3)?type_info[((long)var_pexprnode10&3)]:var_pexprnode10->type)->table_size) {
var24 = 0;
} else {
var24 = (((long)var_pexprnode10&3)?type_info[((long)var_pexprnode10&3)]:var_pexprnode10->type)->type_table[cltype25] == idtype26;
}
}
if (unlikely(!var24)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2789);
fatal_exit(1);
}
var27 = NEW_nit__AAttrPropdef(&type_nit__AAttrPropdef);
{
((void(*)(val* self, val* p0, val* p1, val* p2, val* p3, val* p4, val* p5, val* p6, val* p7, val* p8))(var27->class->vft[COLOR_nit__parser_prod__AAttrPropdef__init_aattrpropdef]))(var27, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_tkwvarnode5, var_tidnode6, var_ptypenode7, ((val*)NULL), ((val*)NULL), var_pexprnode10); /* init_aattrpropdef on <var27:AAttrPropdef>*/
}
var_ppropdefnode1 = var27;
var_node_list = var_ppropdefnode1;
var28 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction59> */
{
var29 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var28); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var29, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction60#action for (self: ReduceAction60, Parser) */
void nit__parser___nit__parser__ReduceAction60___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist9 /* var nodearraylist9: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist8 /* var nodearraylist8: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist7 /* var nodearraylist7: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist6 /* var nodearraylist6: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist5 /* var nodearraylist5: nullable Object */;
val* var5 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var6 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var7 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var8 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var9 /* : Bool */;
int cltype;
int idtype;
val* var_tkwredefnode3 /* var tkwredefnode3: nullable Object */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var_pvisibilitynode4 /* var pvisibilitynode4: nullable Object */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
val* var_tkwvarnode5 /* var tkwvarnode5: nullable Object */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
val* var_tidnode6 /* var tidnode6: nullable Object */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
val* var_ptypenode7 /* var ptypenode7: nullable Object */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
val* var_pannotationsnode9 /* var pannotationsnode9: nullable Object */;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
val* var_pexprnode10 /* var pexprnode10: nullable Object */;
short int var28 /* : Bool */;
int cltype29;
int idtype30;
val* var31 /* : AAttrPropdef */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AAttrPropdef */;
long var32 /* : Int */;
long var33 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist9 = var;
{
var1 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist8 = var1;
{
var2 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist7 = var2;
{
var3 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist6 = var3;
{
var4 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist5 = var4;
{
var5 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist4 = var5;
{
var6 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist3 = var6;
{
var7 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist2 = var7;
{
var8 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist1 = var8;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable__nit__ADoc.color;
idtype = type_nullable__nit__ADoc.id;
if(var_pdocnode2 == NULL) {
var9 = 1;
} else {
if(cltype >= (((long)var_pdocnode2&3)?type_info[((long)var_pdocnode2&3)]:var_pdocnode2->type)->table_size) {
var9 = 0;
} else {
var9 = (((long)var_pdocnode2&3)?type_info[((long)var_pdocnode2&3)]:var_pdocnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var9)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2820);
fatal_exit(1);
}
var_tkwredefnode3 = var_nodearraylist2;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype11 = type_nullable__nit__TKwredef.color;
idtype12 = type_nullable__nit__TKwredef.id;
if(var_tkwredefnode3 == NULL) {
var10 = 1;
} else {
if(cltype11 >= (((long)var_tkwredefnode3&3)?type_info[((long)var_tkwredefnode3&3)]:var_tkwredefnode3->type)->table_size) {
var10 = 0;
} else {
var10 = (((long)var_tkwredefnode3&3)?type_info[((long)var_tkwredefnode3&3)]:var_tkwredefnode3->type)->type_table[cltype11] == idtype12;
}
}
if (unlikely(!var10)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2822);
fatal_exit(1);
}
var_pvisibilitynode4 = var_nodearraylist3;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype14 = type_nullable__nit__AVisibility.color;
idtype15 = type_nullable__nit__AVisibility.id;
if(var_pvisibilitynode4 == NULL) {
var13 = 1;
} else {
if(cltype14 >= (((long)var_pvisibilitynode4&3)?type_info[((long)var_pvisibilitynode4&3)]:var_pvisibilitynode4->type)->table_size) {
var13 = 0;
} else {
var13 = (((long)var_pvisibilitynode4&3)?type_info[((long)var_pvisibilitynode4&3)]:var_pvisibilitynode4->type)->type_table[cltype14] == idtype15;
}
}
if (unlikely(!var13)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2824);
fatal_exit(1);
}
var_tkwvarnode5 = var_nodearraylist4;
/* <var_tkwvarnode5:nullable Object> isa nullable TKwvar */
cltype17 = type_nullable__nit__TKwvar.color;
idtype18 = type_nullable__nit__TKwvar.id;
if(var_tkwvarnode5 == NULL) {
var16 = 1;
} else {
if(cltype17 >= (((long)var_tkwvarnode5&3)?type_info[((long)var_tkwvarnode5&3)]:var_tkwvarnode5->type)->table_size) {
var16 = 0;
} else {
var16 = (((long)var_tkwvarnode5&3)?type_info[((long)var_tkwvarnode5&3)]:var_tkwvarnode5->type)->type_table[cltype17] == idtype18;
}
}
if (unlikely(!var16)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2826);
fatal_exit(1);
}
var_tidnode6 = var_nodearraylist5;
/* <var_tidnode6:nullable Object> isa nullable TId */
cltype20 = type_nullable__nit__TId.color;
idtype21 = type_nullable__nit__TId.id;
if(var_tidnode6 == NULL) {
var19 = 1;
} else {
if(cltype20 >= (((long)var_tidnode6&3)?type_info[((long)var_tidnode6&3)]:var_tidnode6->type)->table_size) {
var19 = 0;
} else {
var19 = (((long)var_tidnode6&3)?type_info[((long)var_tidnode6&3)]:var_tidnode6->type)->type_table[cltype20] == idtype21;
}
}
if (unlikely(!var19)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2828);
fatal_exit(1);
}
var_ptypenode7 = var_nodearraylist6;
/* <var_ptypenode7:nullable Object> isa nullable AType */
cltype23 = type_nullable__nit__AType.color;
idtype24 = type_nullable__nit__AType.id;
if(var_ptypenode7 == NULL) {
var22 = 1;
} else {
if(cltype23 >= (((long)var_ptypenode7&3)?type_info[((long)var_ptypenode7&3)]:var_ptypenode7->type)->table_size) {
var22 = 0;
} else {
var22 = (((long)var_ptypenode7&3)?type_info[((long)var_ptypenode7&3)]:var_ptypenode7->type)->type_table[cltype23] == idtype24;
}
}
if (unlikely(!var22)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2830);
fatal_exit(1);
}
var_pannotationsnode9 = var_nodearraylist7;
/* <var_pannotationsnode9:nullable Object> isa nullable AAnnotations */
cltype26 = type_nullable__nit__AAnnotations.color;
idtype27 = type_nullable__nit__AAnnotations.id;
if(var_pannotationsnode9 == NULL) {
var25 = 1;
} else {
if(cltype26 >= (((long)var_pannotationsnode9&3)?type_info[((long)var_pannotationsnode9&3)]:var_pannotationsnode9->type)->table_size) {
var25 = 0;
} else {
var25 = (((long)var_pannotationsnode9&3)?type_info[((long)var_pannotationsnode9&3)]:var_pannotationsnode9->type)->type_table[cltype26] == idtype27;
}
}
if (unlikely(!var25)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2832);
fatal_exit(1);
}
var_pexprnode10 = var_nodearraylist9;
/* <var_pexprnode10:nullable Object> isa nullable AExpr */
cltype29 = type_nullable__nit__AExpr.color;
idtype30 = type_nullable__nit__AExpr.id;
if(var_pexprnode10 == NULL) {
var28 = 1;
} else {
if(cltype29 >= (((long)var_pexprnode10&3)?type_info[((long)var_pexprnode10&3)]:var_pexprnode10->type)->table_size) {
var28 = 0;
} else {
var28 = (((long)var_pexprnode10&3)?type_info[((long)var_pexprnode10&3)]:var_pexprnode10->type)->type_table[cltype29] == idtype30;
}
}
if (unlikely(!var28)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2834);
fatal_exit(1);
}
var31 = NEW_nit__AAttrPropdef(&type_nit__AAttrPropdef);
{
((void(*)(val* self, val* p0, val* p1, val* p2, val* p3, val* p4, val* p5, val* p6, val* p7, val* p8))(var31->class->vft[COLOR_nit__parser_prod__AAttrPropdef__init_aattrpropdef]))(var31, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_tkwvarnode5, var_tidnode6, var_ptypenode7, ((val*)NULL), var_pannotationsnode9, var_pexprnode10); /* init_aattrpropdef on <var31:AAttrPropdef>*/
}
var_ppropdefnode1 = var31;
var_node_list = var_ppropdefnode1;
var32 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction60> */
{
var33 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var32); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var33, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction61#action for (self: ReduceAction61, Parser) */
void nit__parser___nit__parser__ReduceAction61___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist9 /* var nodearraylist9: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist8 /* var nodearraylist8: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist7 /* var nodearraylist7: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist6 /* var nodearraylist6: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist5 /* var nodearraylist5: nullable Object */;
val* var5 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var6 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var7 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var8 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var9 /* : Bool */;
int cltype;
int idtype;
val* var_tkwredefnode3 /* var tkwredefnode3: nullable Object */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var_pvisibilitynode4 /* var pvisibilitynode4: nullable Object */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
val* var_tkwvarnode5 /* var tkwvarnode5: nullable Object */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
val* var_tidnode6 /* var tidnode6: nullable Object */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
val* var_ptypenode7 /* var ptypenode7: nullable Object */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
val* var_pexprnode10 /* var pexprnode10: nullable Object */;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
val* var28 /* : AAttrPropdef */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AAttrPropdef */;
long var29 /* : Int */;
long var30 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist9 = var;
{
var1 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist8 = var1;
{
var2 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist7 = var2;
{
var3 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist6 = var3;
{
var4 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist5 = var4;
{
var5 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist4 = var5;
{
var6 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist3 = var6;
{
var7 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist2 = var7;
{
var8 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist1 = var8;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable__nit__ADoc.color;
idtype = type_nullable__nit__ADoc.id;
if(var_pdocnode2 == NULL) {
var9 = 1;
} else {
if(cltype >= (((long)var_pdocnode2&3)?type_info[((long)var_pdocnode2&3)]:var_pdocnode2->type)->table_size) {
var9 = 0;
} else {
var9 = (((long)var_pdocnode2&3)?type_info[((long)var_pdocnode2&3)]:var_pdocnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var9)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2865);
fatal_exit(1);
}
var_tkwredefnode3 = var_nodearraylist2;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype11 = type_nullable__nit__TKwredef.color;
idtype12 = type_nullable__nit__TKwredef.id;
if(var_tkwredefnode3 == NULL) {
var10 = 1;
} else {
if(cltype11 >= (((long)var_tkwredefnode3&3)?type_info[((long)var_tkwredefnode3&3)]:var_tkwredefnode3->type)->table_size) {
var10 = 0;
} else {
var10 = (((long)var_tkwredefnode3&3)?type_info[((long)var_tkwredefnode3&3)]:var_tkwredefnode3->type)->type_table[cltype11] == idtype12;
}
}
if (unlikely(!var10)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2867);
fatal_exit(1);
}
var_pvisibilitynode4 = var_nodearraylist3;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype14 = type_nullable__nit__AVisibility.color;
idtype15 = type_nullable__nit__AVisibility.id;
if(var_pvisibilitynode4 == NULL) {
var13 = 1;
} else {
if(cltype14 >= (((long)var_pvisibilitynode4&3)?type_info[((long)var_pvisibilitynode4&3)]:var_pvisibilitynode4->type)->table_size) {
var13 = 0;
} else {
var13 = (((long)var_pvisibilitynode4&3)?type_info[((long)var_pvisibilitynode4&3)]:var_pvisibilitynode4->type)->type_table[cltype14] == idtype15;
}
}
if (unlikely(!var13)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2869);
fatal_exit(1);
}
var_tkwvarnode5 = var_nodearraylist4;
/* <var_tkwvarnode5:nullable Object> isa nullable TKwvar */
cltype17 = type_nullable__nit__TKwvar.color;
idtype18 = type_nullable__nit__TKwvar.id;
if(var_tkwvarnode5 == NULL) {
var16 = 1;
} else {
if(cltype17 >= (((long)var_tkwvarnode5&3)?type_info[((long)var_tkwvarnode5&3)]:var_tkwvarnode5->type)->table_size) {
var16 = 0;
} else {
var16 = (((long)var_tkwvarnode5&3)?type_info[((long)var_tkwvarnode5&3)]:var_tkwvarnode5->type)->type_table[cltype17] == idtype18;
}
}
if (unlikely(!var16)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2871);
fatal_exit(1);
}
var_tidnode6 = var_nodearraylist5;
/* <var_tidnode6:nullable Object> isa nullable TId */
cltype20 = type_nullable__nit__TId.color;
idtype21 = type_nullable__nit__TId.id;
if(var_tidnode6 == NULL) {
var19 = 1;
} else {
if(cltype20 >= (((long)var_tidnode6&3)?type_info[((long)var_tidnode6&3)]:var_tidnode6->type)->table_size) {
var19 = 0;
} else {
var19 = (((long)var_tidnode6&3)?type_info[((long)var_tidnode6&3)]:var_tidnode6->type)->type_table[cltype20] == idtype21;
}
}
if (unlikely(!var19)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2873);
fatal_exit(1);
}
var_ptypenode7 = var_nodearraylist6;
/* <var_ptypenode7:nullable Object> isa nullable AType */
cltype23 = type_nullable__nit__AType.color;
idtype24 = type_nullable__nit__AType.id;
if(var_ptypenode7 == NULL) {
var22 = 1;
} else {
if(cltype23 >= (((long)var_ptypenode7&3)?type_info[((long)var_ptypenode7&3)]:var_ptypenode7->type)->table_size) {
var22 = 0;
} else {
var22 = (((long)var_ptypenode7&3)?type_info[((long)var_ptypenode7&3)]:var_ptypenode7->type)->type_table[cltype23] == idtype24;
}
}
if (unlikely(!var22)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2875);
fatal_exit(1);
}
var_pexprnode10 = var_nodearraylist8;
/* <var_pexprnode10:nullable Object> isa nullable AExpr */
cltype26 = type_nullable__nit__AExpr.color;
idtype27 = type_nullable__nit__AExpr.id;
if(var_pexprnode10 == NULL) {
var25 = 1;
} else {
if(cltype26 >= (((long)var_pexprnode10&3)?type_info[((long)var_pexprnode10&3)]:var_pexprnode10->type)->table_size) {
var25 = 0;
} else {
var25 = (((long)var_pexprnode10&3)?type_info[((long)var_pexprnode10&3)]:var_pexprnode10->type)->type_table[cltype26] == idtype27;
}
}
if (unlikely(!var25)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2877);
fatal_exit(1);
}
var28 = NEW_nit__AAttrPropdef(&type_nit__AAttrPropdef);
{
((void(*)(val* self, val* p0, val* p1, val* p2, val* p3, val* p4, val* p5, val* p6, val* p7, val* p8))(var28->class->vft[COLOR_nit__parser_prod__AAttrPropdef__init_aattrpropdef]))(var28, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_tkwvarnode5, var_tidnode6, var_ptypenode7, ((val*)NULL), ((val*)NULL), var_pexprnode10); /* init_aattrpropdef on <var28:AAttrPropdef>*/
}
var_ppropdefnode1 = var28;
var_node_list = var_ppropdefnode1;
var29 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction61> */
{
var30 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var29); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var30, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction62#action for (self: ReduceAction62, Parser) */
void nit__parser___nit__parser__ReduceAction62___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist10 /* var nodearraylist10: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist9 /* var nodearraylist9: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist8 /* var nodearraylist8: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist7 /* var nodearraylist7: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist6 /* var nodearraylist6: nullable Object */;
val* var5 /* : nullable Object */;
val* var_nodearraylist5 /* var nodearraylist5: nullable Object */;
val* var6 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var7 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var8 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var9 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var10 /* : Bool */;
int cltype;
int idtype;
val* var_tkwredefnode3 /* var tkwredefnode3: nullable Object */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
val* var_pvisibilitynode4 /* var pvisibilitynode4: nullable Object */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
val* var_tkwvarnode5 /* var tkwvarnode5: nullable Object */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
val* var_tidnode6 /* var tidnode6: nullable Object */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
val* var_ptypenode7 /* var ptypenode7: nullable Object */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
val* var_pannotationsnode9 /* var pannotationsnode9: nullable Object */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
val* var_pexprnode10 /* var pexprnode10: nullable Object */;
short int var29 /* : Bool */;
int cltype30;
int idtype31;
val* var32 /* : AAttrPropdef */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AAttrPropdef */;
long var33 /* : Int */;
long var34 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist10 = var;
{
var1 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist9 = var1;
{
var2 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist8 = var2;
{
var3 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist7 = var3;
{
var4 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist6 = var4;
{
var5 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist5 = var5;
{
var6 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist4 = var6;
{
var7 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist3 = var7;
{
var8 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist2 = var8;
{
var9 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist1 = var9;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable__nit__ADoc.color;
idtype = type_nullable__nit__ADoc.id;
if(var_pdocnode2 == NULL) {
var10 = 1;
} else {
if(cltype >= (((long)var_pdocnode2&3)?type_info[((long)var_pdocnode2&3)]:var_pdocnode2->type)->table_size) {
var10 = 0;
} else {
var10 = (((long)var_pdocnode2&3)?type_info[((long)var_pdocnode2&3)]:var_pdocnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var10)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2909);
fatal_exit(1);
}
var_tkwredefnode3 = var_nodearraylist2;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype12 = type_nullable__nit__TKwredef.color;
idtype13 = type_nullable__nit__TKwredef.id;
if(var_tkwredefnode3 == NULL) {
var11 = 1;
} else {
if(cltype12 >= (((long)var_tkwredefnode3&3)?type_info[((long)var_tkwredefnode3&3)]:var_tkwredefnode3->type)->table_size) {
var11 = 0;
} else {
var11 = (((long)var_tkwredefnode3&3)?type_info[((long)var_tkwredefnode3&3)]:var_tkwredefnode3->type)->type_table[cltype12] == idtype13;
}
}
if (unlikely(!var11)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2911);
fatal_exit(1);
}
var_pvisibilitynode4 = var_nodearraylist3;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype15 = type_nullable__nit__AVisibility.color;
idtype16 = type_nullable__nit__AVisibility.id;
if(var_pvisibilitynode4 == NULL) {
var14 = 1;
} else {
if(cltype15 >= (((long)var_pvisibilitynode4&3)?type_info[((long)var_pvisibilitynode4&3)]:var_pvisibilitynode4->type)->table_size) {
var14 = 0;
} else {
var14 = (((long)var_pvisibilitynode4&3)?type_info[((long)var_pvisibilitynode4&3)]:var_pvisibilitynode4->type)->type_table[cltype15] == idtype16;
}
}
if (unlikely(!var14)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2913);
fatal_exit(1);
}
var_tkwvarnode5 = var_nodearraylist4;
/* <var_tkwvarnode5:nullable Object> isa nullable TKwvar */
cltype18 = type_nullable__nit__TKwvar.color;
idtype19 = type_nullable__nit__TKwvar.id;
if(var_tkwvarnode5 == NULL) {
var17 = 1;
} else {
if(cltype18 >= (((long)var_tkwvarnode5&3)?type_info[((long)var_tkwvarnode5&3)]:var_tkwvarnode5->type)->table_size) {
var17 = 0;
} else {
var17 = (((long)var_tkwvarnode5&3)?type_info[((long)var_tkwvarnode5&3)]:var_tkwvarnode5->type)->type_table[cltype18] == idtype19;
}
}
if (unlikely(!var17)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2915);
fatal_exit(1);
}
var_tidnode6 = var_nodearraylist5;
/* <var_tidnode6:nullable Object> isa nullable TId */
cltype21 = type_nullable__nit__TId.color;
idtype22 = type_nullable__nit__TId.id;
if(var_tidnode6 == NULL) {
var20 = 1;
} else {
if(cltype21 >= (((long)var_tidnode6&3)?type_info[((long)var_tidnode6&3)]:var_tidnode6->type)->table_size) {
var20 = 0;
} else {
var20 = (((long)var_tidnode6&3)?type_info[((long)var_tidnode6&3)]:var_tidnode6->type)->type_table[cltype21] == idtype22;
}
}
if (unlikely(!var20)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2917);
fatal_exit(1);
}
var_ptypenode7 = var_nodearraylist6;
/* <var_ptypenode7:nullable Object> isa nullable AType */
cltype24 = type_nullable__nit__AType.color;
idtype25 = type_nullable__nit__AType.id;
if(var_ptypenode7 == NULL) {
var23 = 1;
} else {
if(cltype24 >= (((long)var_ptypenode7&3)?type_info[((long)var_ptypenode7&3)]:var_ptypenode7->type)->table_size) {
var23 = 0;
} else {
var23 = (((long)var_ptypenode7&3)?type_info[((long)var_ptypenode7&3)]:var_ptypenode7->type)->type_table[cltype24] == idtype25;
}
}
if (unlikely(!var23)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2919);
fatal_exit(1);
}
var_pannotationsnode9 = var_nodearraylist7;
/* <var_pannotationsnode9:nullable Object> isa nullable AAnnotations */
cltype27 = type_nullable__nit__AAnnotations.color;
idtype28 = type_nullable__nit__AAnnotations.id;
if(var_pannotationsnode9 == NULL) {
var26 = 1;
} else {
if(cltype27 >= (((long)var_pannotationsnode9&3)?type_info[((long)var_pannotationsnode9&3)]:var_pannotationsnode9->type)->table_size) {
var26 = 0;
} else {
var26 = (((long)var_pannotationsnode9&3)?type_info[((long)var_pannotationsnode9&3)]:var_pannotationsnode9->type)->type_table[cltype27] == idtype28;
}
}
if (unlikely(!var26)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2921);
fatal_exit(1);
}
var_pexprnode10 = var_nodearraylist9;
/* <var_pexprnode10:nullable Object> isa nullable AExpr */
cltype30 = type_nullable__nit__AExpr.color;
idtype31 = type_nullable__nit__AExpr.id;
if(var_pexprnode10 == NULL) {
var29 = 1;
} else {
if(cltype30 >= (((long)var_pexprnode10&3)?type_info[((long)var_pexprnode10&3)]:var_pexprnode10->type)->table_size) {
var29 = 0;
} else {
var29 = (((long)var_pexprnode10&3)?type_info[((long)var_pexprnode10&3)]:var_pexprnode10->type)->type_table[cltype30] == idtype31;
}
}
if (unlikely(!var29)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2923);
fatal_exit(1);
}
var32 = NEW_nit__AAttrPropdef(&type_nit__AAttrPropdef);
{
((void(*)(val* self, val* p0, val* p1, val* p2, val* p3, val* p4, val* p5, val* p6, val* p7, val* p8))(var32->class->vft[COLOR_nit__parser_prod__AAttrPropdef__init_aattrpropdef]))(var32, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_tkwvarnode5, var_tidnode6, var_ptypenode7, ((val*)NULL), var_pannotationsnode9, var_pexprnode10); /* init_aattrpropdef on <var32:AAttrPropdef>*/
}
var_ppropdefnode1 = var32;
var_node_list = var_ppropdefnode1;
var33 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction62> */
{
var34 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var33); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var34, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction63#action for (self: ReduceAction63, Parser) */
void nit__parser___nit__parser__ReduceAction63___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist8 /* var nodearraylist8: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist7 /* var nodearraylist7: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist6 /* var nodearraylist6: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist5 /* var nodearraylist5: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var5 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var6 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var7 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var8 /* : Bool */;
int cltype;
int idtype;
val* var_tkwredefnode3 /* var tkwredefnode3: nullable Object */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var_pvisibilitynode4 /* var pvisibilitynode4: nullable Object */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
val* var_tkwinitnode6 /* var tkwinitnode6: nullable Object */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
val* var_psignaturenode9 /* var psignaturenode9: nullable Object */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
val* var_pexprnode13 /* var pexprnode13: nullable Object */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
val* var24 /* : AMethPropdef */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AMethPropdef */;
long var25 /* : Int */;
long var26 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist8 = var;
{
var1 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist7 = var1;
{
var2 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist6 = var2;
{
var3 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist5 = var3;
{
var4 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist4 = var4;
{
var5 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist3 = var5;
{
var6 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist2 = var6;
{
var7 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist1 = var7;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable__nit__ADoc.color;
idtype = type_nullable__nit__ADoc.id;
if(var_pdocnode2 == NULL) {
var8 = 1;
} else {
if(cltype >= (((long)var_pdocnode2&3)?type_info[((long)var_pdocnode2&3)]:var_pdocnode2->type)->table_size) {
var8 = 0;
} else {
var8 = (((long)var_pdocnode2&3)?type_info[((long)var_pdocnode2&3)]:var_pdocnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2953);
fatal_exit(1);
}
var_tkwredefnode3 = var_nodearraylist2;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype10 = type_nullable__nit__TKwredef.color;
idtype11 = type_nullable__nit__TKwredef.id;
if(var_tkwredefnode3 == NULL) {
var9 = 1;
} else {
if(cltype10 >= (((long)var_tkwredefnode3&3)?type_info[((long)var_tkwredefnode3&3)]:var_tkwredefnode3->type)->table_size) {
var9 = 0;
} else {
var9 = (((long)var_tkwredefnode3&3)?type_info[((long)var_tkwredefnode3&3)]:var_tkwredefnode3->type)->type_table[cltype10] == idtype11;
}
}
if (unlikely(!var9)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2955);
fatal_exit(1);
}
var_pvisibilitynode4 = var_nodearraylist3;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype13 = type_nullable__nit__AVisibility.color;
idtype14 = type_nullable__nit__AVisibility.id;
if(var_pvisibilitynode4 == NULL) {
var12 = 1;
} else {
if(cltype13 >= (((long)var_pvisibilitynode4&3)?type_info[((long)var_pvisibilitynode4&3)]:var_pvisibilitynode4->type)->table_size) {
var12 = 0;
} else {
var12 = (((long)var_pvisibilitynode4&3)?type_info[((long)var_pvisibilitynode4&3)]:var_pvisibilitynode4->type)->type_table[cltype13] == idtype14;
}
}
if (unlikely(!var12)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2957);
fatal_exit(1);
}
var_tkwinitnode6 = var_nodearraylist4;
/* <var_tkwinitnode6:nullable Object> isa nullable TKwinit */
cltype16 = type_nullable__nit__TKwinit.color;
idtype17 = type_nullable__nit__TKwinit.id;
if(var_tkwinitnode6 == NULL) {
var15 = 1;
} else {
if(cltype16 >= (((long)var_tkwinitnode6&3)?type_info[((long)var_tkwinitnode6&3)]:var_tkwinitnode6->type)->table_size) {
var15 = 0;
} else {
var15 = (((long)var_tkwinitnode6&3)?type_info[((long)var_tkwinitnode6&3)]:var_tkwinitnode6->type)->type_table[cltype16] == idtype17;
}
}
if (unlikely(!var15)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2959);
fatal_exit(1);
}
var_psignaturenode9 = var_nodearraylist5;
/* <var_psignaturenode9:nullable Object> isa nullable ASignature */
cltype19 = type_nullable__nit__ASignature.color;
idtype20 = type_nullable__nit__ASignature.id;
if(var_psignaturenode9 == NULL) {
var18 = 1;
} else {
if(cltype19 >= (((long)var_psignaturenode9&3)?type_info[((long)var_psignaturenode9&3)]:var_psignaturenode9->type)->table_size) {
var18 = 0;
} else {
var18 = (((long)var_psignaturenode9&3)?type_info[((long)var_psignaturenode9&3)]:var_psignaturenode9->type)->type_table[cltype19] == idtype20;
}
}
if (unlikely(!var18)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2961);
fatal_exit(1);
}
var_pexprnode13 = var_nodearraylist7;
/* <var_pexprnode13:nullable Object> isa nullable AExpr */
cltype22 = type_nullable__nit__AExpr.color;
idtype23 = type_nullable__nit__AExpr.id;
if(var_pexprnode13 == NULL) {
var21 = 1;
} else {
if(cltype22 >= (((long)var_pexprnode13&3)?type_info[((long)var_pexprnode13&3)]:var_pexprnode13->type)->table_size) {
var21 = 0;
} else {
var21 = (((long)var_pexprnode13&3)?type_info[((long)var_pexprnode13&3)]:var_pexprnode13->type)->type_table[cltype22] == idtype23;
}
}
if (unlikely(!var21)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2963);
fatal_exit(1);
}
var24 = NEW_nit__AMethPropdef(&type_nit__AMethPropdef);
{
((void(*)(val* self, val* p0, val* p1, val* p2, val* p3, val* p4, val* p5, val* p6, val* p7, val* p8, val* p9, val* p10, val* p11))(var24->class->vft[COLOR_nit__parser_prod__AMethPropdef__init_amethpropdef]))(var24, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, ((val*)NULL), var_tkwinitnode6, ((val*)NULL), ((val*)NULL), var_psignaturenode9, ((val*)NULL), ((val*)NULL), ((val*)NULL), var_pexprnode13); /* init_amethpropdef on <var24:AMethPropdef>*/
}
var_ppropdefnode1 = var24;
var_node_list = var_ppropdefnode1;
var25 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction63> */
{
var26 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var25); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var26, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction64#action for (self: ReduceAction64, Parser) */
void nit__parser___nit__parser__ReduceAction64___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist9 /* var nodearraylist9: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist8 /* var nodearraylist8: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist7 /* var nodearraylist7: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist6 /* var nodearraylist6: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist5 /* var nodearraylist5: nullable Object */;
val* var5 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var6 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var7 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var8 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var9 /* : Bool */;
int cltype;
int idtype;
val* var_tkwredefnode3 /* var tkwredefnode3: nullable Object */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var_pvisibilitynode4 /* var pvisibilitynode4: nullable Object */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
val* var_tkwinitnode6 /* var tkwinitnode6: nullable Object */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
val* var_pmethidnode8 /* var pmethidnode8: nullable Object */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
val* var_psignaturenode9 /* var psignaturenode9: nullable Object */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
val* var_pexprnode13 /* var pexprnode13: nullable Object */;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
val* var28 /* : AMethPropdef */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AMethPropdef */;
long var29 /* : Int */;
long var30 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist9 = var;
{
var1 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist8 = var1;
{
var2 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist7 = var2;
{
var3 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist6 = var3;
{
var4 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist5 = var4;
{
var5 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist4 = var5;
{
var6 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist3 = var6;
{
var7 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist2 = var7;
{
var8 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist1 = var8;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable__nit__ADoc.color;
idtype = type_nullable__nit__ADoc.id;
if(var_pdocnode2 == NULL) {
var9 = 1;
} else {
if(cltype >= (((long)var_pdocnode2&3)?type_info[((long)var_pdocnode2&3)]:var_pdocnode2->type)->table_size) {
var9 = 0;
} else {
var9 = (((long)var_pdocnode2&3)?type_info[((long)var_pdocnode2&3)]:var_pdocnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var9)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2997);
fatal_exit(1);
}
var_tkwredefnode3 = var_nodearraylist2;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype11 = type_nullable__nit__TKwredef.color;
idtype12 = type_nullable__nit__TKwredef.id;
if(var_tkwredefnode3 == NULL) {
var10 = 1;
} else {
if(cltype11 >= (((long)var_tkwredefnode3&3)?type_info[((long)var_tkwredefnode3&3)]:var_tkwredefnode3->type)->table_size) {
var10 = 0;
} else {
var10 = (((long)var_tkwredefnode3&3)?type_info[((long)var_tkwredefnode3&3)]:var_tkwredefnode3->type)->type_table[cltype11] == idtype12;
}
}
if (unlikely(!var10)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2999);
fatal_exit(1);
}
var_pvisibilitynode4 = var_nodearraylist3;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype14 = type_nullable__nit__AVisibility.color;
idtype15 = type_nullable__nit__AVisibility.id;
if(var_pvisibilitynode4 == NULL) {
var13 = 1;
} else {
if(cltype14 >= (((long)var_pvisibilitynode4&3)?type_info[((long)var_pvisibilitynode4&3)]:var_pvisibilitynode4->type)->table_size) {
var13 = 0;
} else {
var13 = (((long)var_pvisibilitynode4&3)?type_info[((long)var_pvisibilitynode4&3)]:var_pvisibilitynode4->type)->type_table[cltype14] == idtype15;
}
}
if (unlikely(!var13)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3001);
fatal_exit(1);
}
var_tkwinitnode6 = var_nodearraylist4;
/* <var_tkwinitnode6:nullable Object> isa nullable TKwinit */
cltype17 = type_nullable__nit__TKwinit.color;
idtype18 = type_nullable__nit__TKwinit.id;
if(var_tkwinitnode6 == NULL) {
var16 = 1;
} else {
if(cltype17 >= (((long)var_tkwinitnode6&3)?type_info[((long)var_tkwinitnode6&3)]:var_tkwinitnode6->type)->table_size) {
var16 = 0;
} else {
var16 = (((long)var_tkwinitnode6&3)?type_info[((long)var_tkwinitnode6&3)]:var_tkwinitnode6->type)->type_table[cltype17] == idtype18;
}
}
if (unlikely(!var16)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3003);
fatal_exit(1);
}
var_pmethidnode8 = var_nodearraylist5;
/* <var_pmethidnode8:nullable Object> isa nullable AMethid */
cltype20 = type_nullable__nit__AMethid.color;
idtype21 = type_nullable__nit__AMethid.id;
if(var_pmethidnode8 == NULL) {
var19 = 1;
} else {
if(cltype20 >= (((long)var_pmethidnode8&3)?type_info[((long)var_pmethidnode8&3)]:var_pmethidnode8->type)->table_size) {
var19 = 0;
} else {
var19 = (((long)var_pmethidnode8&3)?type_info[((long)var_pmethidnode8&3)]:var_pmethidnode8->type)->type_table[cltype20] == idtype21;
}
}
if (unlikely(!var19)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3005);
fatal_exit(1);
}
var_psignaturenode9 = var_nodearraylist6;
/* <var_psignaturenode9:nullable Object> isa nullable ASignature */
cltype23 = type_nullable__nit__ASignature.color;
idtype24 = type_nullable__nit__ASignature.id;
if(var_psignaturenode9 == NULL) {
var22 = 1;
} else {
if(cltype23 >= (((long)var_psignaturenode9&3)?type_info[((long)var_psignaturenode9&3)]:var_psignaturenode9->type)->table_size) {
var22 = 0;
} else {
var22 = (((long)var_psignaturenode9&3)?type_info[((long)var_psignaturenode9&3)]:var_psignaturenode9->type)->type_table[cltype23] == idtype24;
}
}
if (unlikely(!var22)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3007);
fatal_exit(1);
}
var_pexprnode13 = var_nodearraylist8;
/* <var_pexprnode13:nullable Object> isa nullable AExpr */
cltype26 = type_nullable__nit__AExpr.color;
idtype27 = type_nullable__nit__AExpr.id;
if(var_pexprnode13 == NULL) {
var25 = 1;
} else {
if(cltype26 >= (((long)var_pexprnode13&3)?type_info[((long)var_pexprnode13&3)]:var_pexprnode13->type)->table_size) {
var25 = 0;
} else {
var25 = (((long)var_pexprnode13&3)?type_info[((long)var_pexprnode13&3)]:var_pexprnode13->type)->type_table[cltype26] == idtype27;
}
}
if (unlikely(!var25)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3009);
fatal_exit(1);
}
var28 = NEW_nit__AMethPropdef(&type_nit__AMethPropdef);
{
((void(*)(val* self, val* p0, val* p1, val* p2, val* p3, val* p4, val* p5, val* p6, val* p7, val* p8, val* p9, val* p10, val* p11))(var28->class->vft[COLOR_nit__parser_prod__AMethPropdef__init_amethpropdef]))(var28, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, ((val*)NULL), var_tkwinitnode6, ((val*)NULL), var_pmethidnode8, var_psignaturenode9, ((val*)NULL), ((val*)NULL), ((val*)NULL), var_pexprnode13); /* init_amethpropdef on <var28:AMethPropdef>*/
}
var_ppropdefnode1 = var28;
var_node_list = var_ppropdefnode1;
var29 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction64> */
{
var30 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var29); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var30, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction65#action for (self: ReduceAction65, Parser) */
void nit__parser___nit__parser__ReduceAction65___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist9 /* var nodearraylist9: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist8 /* var nodearraylist8: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist7 /* var nodearraylist7: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist6 /* var nodearraylist6: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist5 /* var nodearraylist5: nullable Object */;
val* var5 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var6 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var7 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var8 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var9 /* : Bool */;
int cltype;
int idtype;
val* var_tkwredefnode3 /* var tkwredefnode3: nullable Object */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var_pvisibilitynode4 /* var pvisibilitynode4: nullable Object */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
val* var_tkwinitnode6 /* var tkwinitnode6: nullable Object */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
val* var_psignaturenode9 /* var psignaturenode9: nullable Object */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
val* var_pannotationsnode10 /* var pannotationsnode10: nullable Object */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
val* var_pexprnode13 /* var pexprnode13: nullable Object */;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
val* var28 /* : AMethPropdef */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AMethPropdef */;
long var29 /* : Int */;
long var30 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist9 = var;
{
var1 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist8 = var1;
{
var2 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist7 = var2;
{
var3 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist6 = var3;
{
var4 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist5 = var4;
{
var5 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist4 = var5;
{
var6 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist3 = var6;
{
var7 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist2 = var7;
{
var8 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist1 = var8;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable__nit__ADoc.color;
idtype = type_nullable__nit__ADoc.id;
if(var_pdocnode2 == NULL) {
var9 = 1;
} else {
if(cltype >= (((long)var_pdocnode2&3)?type_info[((long)var_pdocnode2&3)]:var_pdocnode2->type)->table_size) {
var9 = 0;
} else {
var9 = (((long)var_pdocnode2&3)?type_info[((long)var_pdocnode2&3)]:var_pdocnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var9)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3043);
fatal_exit(1);
}
var_tkwredefnode3 = var_nodearraylist2;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype11 = type_nullable__nit__TKwredef.color;
idtype12 = type_nullable__nit__TKwredef.id;
if(var_tkwredefnode3 == NULL) {
var10 = 1;
} else {
if(cltype11 >= (((long)var_tkwredefnode3&3)?type_info[((long)var_tkwredefnode3&3)]:var_tkwredefnode3->type)->table_size) {
var10 = 0;
} else {
var10 = (((long)var_tkwredefnode3&3)?type_info[((long)var_tkwredefnode3&3)]:var_tkwredefnode3->type)->type_table[cltype11] == idtype12;
}
}
if (unlikely(!var10)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3045);
fatal_exit(1);
}
var_pvisibilitynode4 = var_nodearraylist3;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype14 = type_nullable__nit__AVisibility.color;
idtype15 = type_nullable__nit__AVisibility.id;
if(var_pvisibilitynode4 == NULL) {
var13 = 1;
} else {
if(cltype14 >= (((long)var_pvisibilitynode4&3)?type_info[((long)var_pvisibilitynode4&3)]:var_pvisibilitynode4->type)->table_size) {
var13 = 0;
} else {
var13 = (((long)var_pvisibilitynode4&3)?type_info[((long)var_pvisibilitynode4&3)]:var_pvisibilitynode4->type)->type_table[cltype14] == idtype15;
}
}
if (unlikely(!var13)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3047);
fatal_exit(1);
}
var_tkwinitnode6 = var_nodearraylist4;
/* <var_tkwinitnode6:nullable Object> isa nullable TKwinit */
cltype17 = type_nullable__nit__TKwinit.color;
idtype18 = type_nullable__nit__TKwinit.id;
if(var_tkwinitnode6 == NULL) {
var16 = 1;
} else {
if(cltype17 >= (((long)var_tkwinitnode6&3)?type_info[((long)var_tkwinitnode6&3)]:var_tkwinitnode6->type)->table_size) {
var16 = 0;
} else {
var16 = (((long)var_tkwinitnode6&3)?type_info[((long)var_tkwinitnode6&3)]:var_tkwinitnode6->type)->type_table[cltype17] == idtype18;
}
}
if (unlikely(!var16)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3049);
fatal_exit(1);
}
var_psignaturenode9 = var_nodearraylist5;
/* <var_psignaturenode9:nullable Object> isa nullable ASignature */
cltype20 = type_nullable__nit__ASignature.color;
idtype21 = type_nullable__nit__ASignature.id;
if(var_psignaturenode9 == NULL) {
var19 = 1;
} else {
if(cltype20 >= (((long)var_psignaturenode9&3)?type_info[((long)var_psignaturenode9&3)]:var_psignaturenode9->type)->table_size) {
var19 = 0;
} else {
var19 = (((long)var_psignaturenode9&3)?type_info[((long)var_psignaturenode9&3)]:var_psignaturenode9->type)->type_table[cltype20] == idtype21;
}
}
if (unlikely(!var19)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3051);
fatal_exit(1);
}
var_pannotationsnode10 = var_nodearraylist6;
/* <var_pannotationsnode10:nullable Object> isa nullable AAnnotations */
cltype23 = type_nullable__nit__AAnnotations.color;
idtype24 = type_nullable__nit__AAnnotations.id;
if(var_pannotationsnode10 == NULL) {
var22 = 1;
} else {
if(cltype23 >= (((long)var_pannotationsnode10&3)?type_info[((long)var_pannotationsnode10&3)]:var_pannotationsnode10->type)->table_size) {
var22 = 0;
} else {
var22 = (((long)var_pannotationsnode10&3)?type_info[((long)var_pannotationsnode10&3)]:var_pannotationsnode10->type)->type_table[cltype23] == idtype24;
}
}
if (unlikely(!var22)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3053);
fatal_exit(1);
}
var_pexprnode13 = var_nodearraylist8;
/* <var_pexprnode13:nullable Object> isa nullable AExpr */
cltype26 = type_nullable__nit__AExpr.color;
idtype27 = type_nullable__nit__AExpr.id;
if(var_pexprnode13 == NULL) {
var25 = 1;
} else {
if(cltype26 >= (((long)var_pexprnode13&3)?type_info[((long)var_pexprnode13&3)]:var_pexprnode13->type)->table_size) {
var25 = 0;
} else {
var25 = (((long)var_pexprnode13&3)?type_info[((long)var_pexprnode13&3)]:var_pexprnode13->type)->type_table[cltype26] == idtype27;
}
}
if (unlikely(!var25)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3055);
fatal_exit(1);
}
var28 = NEW_nit__AMethPropdef(&type_nit__AMethPropdef);
{
((void(*)(val* self, val* p0, val* p1, val* p2, val* p3, val* p4, val* p5, val* p6, val* p7, val* p8, val* p9, val* p10, val* p11))(var28->class->vft[COLOR_nit__parser_prod__AMethPropdef__init_amethpropdef]))(var28, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, ((val*)NULL), var_tkwinitnode6, ((val*)NULL), ((val*)NULL), var_psignaturenode9, var_pannotationsnode10, ((val*)NULL), ((val*)NULL), var_pexprnode13); /* init_amethpropdef on <var28:AMethPropdef>*/
}
var_ppropdefnode1 = var28;
var_node_list = var_ppropdefnode1;
var29 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction65> */
{
var30 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var29); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var30, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction66#action for (self: ReduceAction66, Parser) */
void nit__parser___nit__parser__ReduceAction66___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist10 /* var nodearraylist10: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist9 /* var nodearraylist9: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist8 /* var nodearraylist8: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist7 /* var nodearraylist7: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist6 /* var nodearraylist6: nullable Object */;
val* var5 /* : nullable Object */;
val* var_nodearraylist5 /* var nodearraylist5: nullable Object */;
val* var6 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var7 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var8 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var9 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var10 /* : Bool */;
int cltype;
int idtype;
val* var_tkwredefnode3 /* var tkwredefnode3: nullable Object */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
val* var_pvisibilitynode4 /* var pvisibilitynode4: nullable Object */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
val* var_tkwinitnode6 /* var tkwinitnode6: nullable Object */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
val* var_pmethidnode8 /* var pmethidnode8: nullable Object */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
val* var_psignaturenode9 /* var psignaturenode9: nullable Object */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
val* var_pannotationsnode10 /* var pannotationsnode10: nullable Object */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
val* var_pexprnode13 /* var pexprnode13: nullable Object */;
short int var29 /* : Bool */;
int cltype30;
int idtype31;
val* var32 /* : AMethPropdef */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AMethPropdef */;
long var33 /* : Int */;
long var34 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist10 = var;
{
var1 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist9 = var1;
{
var2 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist8 = var2;
{
var3 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist7 = var3;
{
var4 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist6 = var4;
{
var5 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist5 = var5;
{
var6 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist4 = var6;
{
var7 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist3 = var7;
{
var8 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist2 = var8;
{
var9 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist1 = var9;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable__nit__ADoc.color;
idtype = type_nullable__nit__ADoc.id;
if(var_pdocnode2 == NULL) {
var10 = 1;
} else {
if(cltype >= (((long)var_pdocnode2&3)?type_info[((long)var_pdocnode2&3)]:var_pdocnode2->type)->table_size) {
var10 = 0;
} else {
var10 = (((long)var_pdocnode2&3)?type_info[((long)var_pdocnode2&3)]:var_pdocnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var10)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3090);
fatal_exit(1);
}
var_tkwredefnode3 = var_nodearraylist2;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype12 = type_nullable__nit__TKwredef.color;
idtype13 = type_nullable__nit__TKwredef.id;
if(var_tkwredefnode3 == NULL) {
var11 = 1;
} else {
if(cltype12 >= (((long)var_tkwredefnode3&3)?type_info[((long)var_tkwredefnode3&3)]:var_tkwredefnode3->type)->table_size) {
var11 = 0;
} else {
var11 = (((long)var_tkwredefnode3&3)?type_info[((long)var_tkwredefnode3&3)]:var_tkwredefnode3->type)->type_table[cltype12] == idtype13;
}
}
if (unlikely(!var11)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3092);
fatal_exit(1);
}
var_pvisibilitynode4 = var_nodearraylist3;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype15 = type_nullable__nit__AVisibility.color;
idtype16 = type_nullable__nit__AVisibility.id;
if(var_pvisibilitynode4 == NULL) {
var14 = 1;
} else {
if(cltype15 >= (((long)var_pvisibilitynode4&3)?type_info[((long)var_pvisibilitynode4&3)]:var_pvisibilitynode4->type)->table_size) {
var14 = 0;
} else {
var14 = (((long)var_pvisibilitynode4&3)?type_info[((long)var_pvisibilitynode4&3)]:var_pvisibilitynode4->type)->type_table[cltype15] == idtype16;
}
}
if (unlikely(!var14)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3094);
fatal_exit(1);
}
var_tkwinitnode6 = var_nodearraylist4;
/* <var_tkwinitnode6:nullable Object> isa nullable TKwinit */
cltype18 = type_nullable__nit__TKwinit.color;
idtype19 = type_nullable__nit__TKwinit.id;
if(var_tkwinitnode6 == NULL) {
var17 = 1;
} else {
if(cltype18 >= (((long)var_tkwinitnode6&3)?type_info[((long)var_tkwinitnode6&3)]:var_tkwinitnode6->type)->table_size) {
var17 = 0;
} else {
var17 = (((long)var_tkwinitnode6&3)?type_info[((long)var_tkwinitnode6&3)]:var_tkwinitnode6->type)->type_table[cltype18] == idtype19;
}
}
if (unlikely(!var17)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3096);
fatal_exit(1);
}
var_pmethidnode8 = var_nodearraylist5;
/* <var_pmethidnode8:nullable Object> isa nullable AMethid */
cltype21 = type_nullable__nit__AMethid.color;
idtype22 = type_nullable__nit__AMethid.id;
if(var_pmethidnode8 == NULL) {
var20 = 1;
} else {
if(cltype21 >= (((long)var_pmethidnode8&3)?type_info[((long)var_pmethidnode8&3)]:var_pmethidnode8->type)->table_size) {
var20 = 0;
} else {
var20 = (((long)var_pmethidnode8&3)?type_info[((long)var_pmethidnode8&3)]:var_pmethidnode8->type)->type_table[cltype21] == idtype22;
}
}
if (unlikely(!var20)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3098);
fatal_exit(1);
}
var_psignaturenode9 = var_nodearraylist6;
/* <var_psignaturenode9:nullable Object> isa nullable ASignature */
cltype24 = type_nullable__nit__ASignature.color;
idtype25 = type_nullable__nit__ASignature.id;
if(var_psignaturenode9 == NULL) {
var23 = 1;
} else {
if(cltype24 >= (((long)var_psignaturenode9&3)?type_info[((long)var_psignaturenode9&3)]:var_psignaturenode9->type)->table_size) {
var23 = 0;
} else {
var23 = (((long)var_psignaturenode9&3)?type_info[((long)var_psignaturenode9&3)]:var_psignaturenode9->type)->type_table[cltype24] == idtype25;
}
}
if (unlikely(!var23)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3100);
fatal_exit(1);
}
var_pannotationsnode10 = var_nodearraylist7;
/* <var_pannotationsnode10:nullable Object> isa nullable AAnnotations */
cltype27 = type_nullable__nit__AAnnotations.color;
idtype28 = type_nullable__nit__AAnnotations.id;
if(var_pannotationsnode10 == NULL) {
var26 = 1;
} else {
if(cltype27 >= (((long)var_pannotationsnode10&3)?type_info[((long)var_pannotationsnode10&3)]:var_pannotationsnode10->type)->table_size) {
var26 = 0;
} else {
var26 = (((long)var_pannotationsnode10&3)?type_info[((long)var_pannotationsnode10&3)]:var_pannotationsnode10->type)->type_table[cltype27] == idtype28;
}
}
if (unlikely(!var26)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3102);
fatal_exit(1);
}
var_pexprnode13 = var_nodearraylist9;
/* <var_pexprnode13:nullable Object> isa nullable AExpr */
cltype30 = type_nullable__nit__AExpr.color;
idtype31 = type_nullable__nit__AExpr.id;
if(var_pexprnode13 == NULL) {
var29 = 1;
} else {
if(cltype30 >= (((long)var_pexprnode13&3)?type_info[((long)var_pexprnode13&3)]:var_pexprnode13->type)->table_size) {
var29 = 0;
} else {
var29 = (((long)var_pexprnode13&3)?type_info[((long)var_pexprnode13&3)]:var_pexprnode13->type)->type_table[cltype30] == idtype31;
}
}
if (unlikely(!var29)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3104);
fatal_exit(1);
}
var32 = NEW_nit__AMethPropdef(&type_nit__AMethPropdef);
{
((void(*)(val* self, val* p0, val* p1, val* p2, val* p3, val* p4, val* p5, val* p6, val* p7, val* p8, val* p9, val* p10, val* p11))(var32->class->vft[COLOR_nit__parser_prod__AMethPropdef__init_amethpropdef]))(var32, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, ((val*)NULL), var_tkwinitnode6, ((val*)NULL), var_pmethidnode8, var_psignaturenode9, var_pannotationsnode10, ((val*)NULL), ((val*)NULL), var_pexprnode13); /* init_amethpropdef on <var32:AMethPropdef>*/
}
var_ppropdefnode1 = var32;
var_node_list = var_ppropdefnode1;
var33 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction66> */
{
var34 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var33); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var34, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction67#action for (self: ReduceAction67, Parser) */
void nit__parser___nit__parser__ReduceAction67___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist7 /* var nodearraylist7: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist6 /* var nodearraylist6: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist5 /* var nodearraylist5: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var5 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var6 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var7 /* : Bool */;
int cltype;
int idtype;
val* var_tkwredefnode3 /* var tkwredefnode3: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var_pvisibilitynode4 /* var pvisibilitynode4: nullable Object */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
val* var_tkwtypenode5 /* var tkwtypenode5: nullable Object */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
val* var_tclassidnode6 /* var tclassidnode6: nullable Object */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
val* var_ptypenode7 /* var ptypenode7: nullable Object */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
val* var_pannotationsnode8 /* var pannotationsnode8: nullable Object */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
val* var26 /* : ATypePropdef */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable ATypePropdef */;
long var27 /* : Int */;
long var28 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist7 = var;
{
var1 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist6 = var1;
{
var2 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist5 = var2;
{
var3 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist4 = var3;
{
var4 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist3 = var4;
{
var5 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist2 = var5;
{
var6 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist1 = var6;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable__nit__ADoc.color;
idtype = type_nullable__nit__ADoc.id;
if(var_pdocnode2 == NULL) {
var7 = 1;
} else {
if(cltype >= (((long)var_pdocnode2&3)?type_info[((long)var_pdocnode2&3)]:var_pdocnode2->type)->table_size) {
var7 = 0;
} else {
var7 = (((long)var_pdocnode2&3)?type_info[((long)var_pdocnode2&3)]:var_pdocnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var7)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3136);
fatal_exit(1);
}
var_tkwredefnode3 = var_nodearraylist2;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype9 = type_nullable__nit__TKwredef.color;
idtype10 = type_nullable__nit__TKwredef.id;
if(var_tkwredefnode3 == NULL) {
var8 = 1;
} else {
if(cltype9 >= (((long)var_tkwredefnode3&3)?type_info[((long)var_tkwredefnode3&3)]:var_tkwredefnode3->type)->table_size) {
var8 = 0;
} else {
var8 = (((long)var_tkwredefnode3&3)?type_info[((long)var_tkwredefnode3&3)]:var_tkwredefnode3->type)->type_table[cltype9] == idtype10;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3138);
fatal_exit(1);
}
var_pvisibilitynode4 = var_nodearraylist3;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype12 = type_nullable__nit__AVisibility.color;
idtype13 = type_nullable__nit__AVisibility.id;
if(var_pvisibilitynode4 == NULL) {
var11 = 1;
} else {
if(cltype12 >= (((long)var_pvisibilitynode4&3)?type_info[((long)var_pvisibilitynode4&3)]:var_pvisibilitynode4->type)->table_size) {
var11 = 0;
} else {
var11 = (((long)var_pvisibilitynode4&3)?type_info[((long)var_pvisibilitynode4&3)]:var_pvisibilitynode4->type)->type_table[cltype12] == idtype13;
}
}
if (unlikely(!var11)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3140);
fatal_exit(1);
}
var_tkwtypenode5 = var_nodearraylist4;
/* <var_tkwtypenode5:nullable Object> isa nullable TKwtype */
cltype15 = type_nullable__nit__TKwtype.color;
idtype16 = type_nullable__nit__TKwtype.id;
if(var_tkwtypenode5 == NULL) {
var14 = 1;
} else {
if(cltype15 >= (((long)var_tkwtypenode5&3)?type_info[((long)var_tkwtypenode5&3)]:var_tkwtypenode5->type)->table_size) {
var14 = 0;
} else {
var14 = (((long)var_tkwtypenode5&3)?type_info[((long)var_tkwtypenode5&3)]:var_tkwtypenode5->type)->type_table[cltype15] == idtype16;
}
}
if (unlikely(!var14)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3142);
fatal_exit(1);
}
var_tclassidnode6 = var_nodearraylist5;
/* <var_tclassidnode6:nullable Object> isa nullable TClassid */
cltype18 = type_nullable__nit__TClassid.color;
idtype19 = type_nullable__nit__TClassid.id;
if(var_tclassidnode6 == NULL) {
var17 = 1;
} else {
if(cltype18 >= (((long)var_tclassidnode6&3)?type_info[((long)var_tclassidnode6&3)]:var_tclassidnode6->type)->table_size) {
var17 = 0;
} else {
var17 = (((long)var_tclassidnode6&3)?type_info[((long)var_tclassidnode6&3)]:var_tclassidnode6->type)->type_table[cltype18] == idtype19;
}
}
if (unlikely(!var17)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3144);
fatal_exit(1);
}
var_ptypenode7 = var_nodearraylist6;
/* <var_ptypenode7:nullable Object> isa nullable AType */
cltype21 = type_nullable__nit__AType.color;
idtype22 = type_nullable__nit__AType.id;
if(var_ptypenode7 == NULL) {
var20 = 1;
} else {
if(cltype21 >= (((long)var_ptypenode7&3)?type_info[((long)var_ptypenode7&3)]:var_ptypenode7->type)->table_size) {
var20 = 0;
} else {
var20 = (((long)var_ptypenode7&3)?type_info[((long)var_ptypenode7&3)]:var_ptypenode7->type)->type_table[cltype21] == idtype22;
}
}
if (unlikely(!var20)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3146);
fatal_exit(1);
}
var_pannotationsnode8 = var_nodearraylist7;
/* <var_pannotationsnode8:nullable Object> isa nullable AAnnotations */
cltype24 = type_nullable__nit__AAnnotations.color;
idtype25 = type_nullable__nit__AAnnotations.id;
if(var_pannotationsnode8 == NULL) {
var23 = 1;
} else {
if(cltype24 >= (((long)var_pannotationsnode8&3)?type_info[((long)var_pannotationsnode8&3)]:var_pannotationsnode8->type)->table_size) {
var23 = 0;
} else {
var23 = (((long)var_pannotationsnode8&3)?type_info[((long)var_pannotationsnode8&3)]:var_pannotationsnode8->type)->type_table[cltype24] == idtype25;
}
}
if (unlikely(!var23)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3148);
fatal_exit(1);
}
var26 = NEW_nit__ATypePropdef(&type_nit__ATypePropdef);
{
((void(*)(val* self, val* p0, val* p1, val* p2, val* p3, val* p4, val* p5, val* p6))(var26->class->vft[COLOR_nit__parser_prod__ATypePropdef__init_atypepropdef]))(var26, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_tkwtypenode5, var_tclassidnode6, var_ptypenode7, var_pannotationsnode8); /* init_atypepropdef on <var26:ATypePropdef>*/
}
var_ppropdefnode1 = var26;
var_node_list = var_ppropdefnode1;
var27 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction67> */
{
var28 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var27); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var28, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
