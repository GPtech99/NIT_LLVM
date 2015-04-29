#include "nit__parser.sep.0.h"
/* method parser#ReduceAction421#action for (self: ReduceAction421, Parser) */
void nit__parser___nit__parser__ReduceAction421___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var7 /* : Array[Object] */;
val* var_listnode8 /* var listnode8: Array[Object] */;
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var8 /* : Bool */;
int cltype;
int idtype;
val* var_patidnode5 /* var patidnode5: nullable Object */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var_toparnode6 /* var toparnode6: nullable Object */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
val* var_listnode7 /* var listnode7: nullable Object */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
val* var18 /* : Array[Object] */;
val* var_tcparnode9 /* var tcparnode9: nullable Object */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
val* var_pannotationsnode10 /* var pannotationsnode10: nullable Object */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
val* var25 /* : AAnnotPropdef */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AAnnotPropdef */;
long var26 /* : Int */;
long var27 /* : Int */;
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
var7 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
((void(*)(val* self))(var7->class->vft[COLOR_standard__kernel__Object__init]))(var7); /* init on <var7:Array[Object]>*/
}
var_listnode8 = var7;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9726);
fatal_exit(1);
}
var_patidnode5 = var_nodearraylist2;
/* <var_patidnode5:nullable Object> isa nullable AAtid */
cltype10 = type_nullable__nit__AAtid.color;
idtype11 = type_nullable__nit__AAtid.id;
if(var_patidnode5 == NULL) {
var9 = 1;
} else {
if(cltype10 >= (((long)var_patidnode5&3)?type_info[((long)var_patidnode5&3)]:var_patidnode5->type)->table_size) {
var9 = 0;
} else {
var9 = (((long)var_patidnode5&3)?type_info[((long)var_patidnode5&3)]:var_patidnode5->type)->type_table[cltype10] == idtype11;
}
}
if (unlikely(!var9)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9728);
fatal_exit(1);
}
var_toparnode6 = var_nodearraylist3;
/* <var_toparnode6:nullable Object> isa nullable TOpar */
cltype13 = type_nullable__nit__TOpar.color;
idtype14 = type_nullable__nit__TOpar.id;
if(var_toparnode6 == NULL) {
var12 = 1;
} else {
if(cltype13 >= (((long)var_toparnode6&3)?type_info[((long)var_toparnode6&3)]:var_toparnode6->type)->table_size) {
var12 = 0;
} else {
var12 = (((long)var_toparnode6&3)?type_info[((long)var_toparnode6&3)]:var_toparnode6->type)->type_table[cltype13] == idtype14;
}
}
if (unlikely(!var12)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9730);
fatal_exit(1);
}
var_listnode7 = var_nodearraylist5;
/* <var_listnode7:nullable Object> isa Array[Object] */
cltype16 = type_standard__Array__standard__Object.color;
idtype17 = type_standard__Array__standard__Object.id;
if(var_listnode7 == NULL) {
var15 = 0;
} else {
if(cltype16 >= (((long)var_listnode7&3)?type_info[((long)var_listnode7&3)]:var_listnode7->type)->table_size) {
var15 = 0;
} else {
var15 = (((long)var_listnode7&3)?type_info[((long)var_listnode7&3)]:var_listnode7->type)->type_table[cltype16] == idtype17;
}
}
if (unlikely(!var15)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9732);
fatal_exit(1);
}
{
var18 = ((val*(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__parser_work__ReduceAction__concat]))(self, var_listnode8, var_listnode7); /* concat on <self:ReduceAction421>*/
}
var_listnode8 = var18;
var_tcparnode9 = var_nodearraylist6;
/* <var_tcparnode9:nullable Object> isa nullable TCpar */
cltype20 = type_nullable__nit__TCpar.color;
idtype21 = type_nullable__nit__TCpar.id;
if(var_tcparnode9 == NULL) {
var19 = 1;
} else {
if(cltype20 >= (((long)var_tcparnode9&3)?type_info[((long)var_tcparnode9&3)]:var_tcparnode9->type)->table_size) {
var19 = 0;
} else {
var19 = (((long)var_tcparnode9&3)?type_info[((long)var_tcparnode9&3)]:var_tcparnode9->type)->type_table[cltype20] == idtype21;
}
}
if (unlikely(!var19)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9735);
fatal_exit(1);
}
var_pannotationsnode10 = var_nodearraylist7;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9737);
fatal_exit(1);
}
var25 = NEW_nit__AAnnotPropdef(&type_nit__AAnnotPropdef);
{
((void(*)(val* self, val* p0, val* p1, val* p2, val* p3, val* p4, val* p5, val* p6, val* p7))(var25->class->vft[COLOR_nit__parser_prod__AAnnotPropdef__init_aannotpropdef]))(var25, var_pdocnode2, ((val*)NULL), ((val*)NULL), var_patidnode5, var_toparnode6, var_listnode8, var_tcparnode9, var_pannotationsnode10); /* init_aannotpropdef on <var25:AAnnotPropdef>*/
}
var_ppropdefnode1 = var25;
var_node_list = var_ppropdefnode1;
var26 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction421> */
{
var27 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var26); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var27, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction422#action for (self: ReduceAction422, Parser) */
void nit__parser___nit__parser__ReduceAction422___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var3 /* : Array[Object] */;
val* var_listnode8 /* var listnode8: Array[Object] */;
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var_patidnode5 /* var patidnode5: nullable Object */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
val* var_listnode7 /* var listnode7: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var11 /* : Array[Object] */;
val* var12 /* : AAnnotPropdef */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AAnnotPropdef */;
long var13 /* : Int */;
long var14 /* : Int */;
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
var_listnode8 = var3;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable__nit__ADoc.color;
idtype = type_nullable__nit__ADoc.id;
if(var_pdocnode2 == NULL) {
var4 = 1;
} else {
if(cltype >= (((long)var_pdocnode2&3)?type_info[((long)var_pdocnode2&3)]:var_pdocnode2->type)->table_size) {
var4 = 0;
} else {
var4 = (((long)var_pdocnode2&3)?type_info[((long)var_pdocnode2&3)]:var_pdocnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9762);
fatal_exit(1);
}
var_patidnode5 = var_nodearraylist2;
/* <var_patidnode5:nullable Object> isa nullable AAtid */
cltype6 = type_nullable__nit__AAtid.color;
idtype7 = type_nullable__nit__AAtid.id;
if(var_patidnode5 == NULL) {
var5 = 1;
} else {
if(cltype6 >= (((long)var_patidnode5&3)?type_info[((long)var_patidnode5&3)]:var_patidnode5->type)->table_size) {
var5 = 0;
} else {
var5 = (((long)var_patidnode5&3)?type_info[((long)var_patidnode5&3)]:var_patidnode5->type)->type_table[cltype6] == idtype7;
}
}
if (unlikely(!var5)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9764);
fatal_exit(1);
}
var_listnode7 = var_nodearraylist3;
/* <var_listnode7:nullable Object> isa Array[Object] */
cltype9 = type_standard__Array__standard__Object.color;
idtype10 = type_standard__Array__standard__Object.id;
if(var_listnode7 == NULL) {
var8 = 0;
} else {
if(cltype9 >= (((long)var_listnode7&3)?type_info[((long)var_listnode7&3)]:var_listnode7->type)->table_size) {
var8 = 0;
} else {
var8 = (((long)var_listnode7&3)?type_info[((long)var_listnode7&3)]:var_listnode7->type)->type_table[cltype9] == idtype10;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9766);
fatal_exit(1);
}
{
var11 = ((val*(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__parser_work__ReduceAction__concat]))(self, var_listnode8, var_listnode7); /* concat on <self:ReduceAction422>*/
}
var_listnode8 = var11;
var12 = NEW_nit__AAnnotPropdef(&type_nit__AAnnotPropdef);
{
((void(*)(val* self, val* p0, val* p1, val* p2, val* p3, val* p4, val* p5, val* p6, val* p7))(var12->class->vft[COLOR_nit__parser_prod__AAnnotPropdef__init_aannotpropdef]))(var12, var_pdocnode2, ((val*)NULL), ((val*)NULL), var_patidnode5, ((val*)NULL), var_listnode8, ((val*)NULL), ((val*)NULL)); /* init_aannotpropdef on <var12:AAnnotPropdef>*/
}
var_ppropdefnode1 = var12;
var_node_list = var_ppropdefnode1;
var13 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction422> */
{
var14 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var13); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var14, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction426#action for (self: ReduceAction426, Parser) */
void nit__parser___nit__parser__ReduceAction426___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_ptypenode2 /* var ptypenode2: nullable Object */;
short int var1 /* : Bool */;
int cltype;
int idtype;
val* var2 /* : ATypeExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ATypeExpr */;
long var3 /* : Int */;
long var4 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist1 = var;
var_ptypenode2 = var_nodearraylist1;
/* <var_ptypenode2:nullable Object> isa nullable AType */
cltype = type_nullable__nit__AType.color;
idtype = type_nullable__nit__AType.id;
if(var_ptypenode2 == NULL) {
var1 = 1;
} else {
if(cltype >= (((long)var_ptypenode2&3)?type_info[((long)var_ptypenode2&3)]:var_ptypenode2->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)var_ptypenode2&3)?type_info[((long)var_ptypenode2&3)]:var_ptypenode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9789);
fatal_exit(1);
}
var2 = NEW_nit__ATypeExpr(&type_nit__ATypeExpr);
{
((void(*)(val* self, val* p0))(var2->class->vft[COLOR_nit__parser_prod__ATypeExpr__init_atypeexpr]))(var2, var_ptypenode2); /* init_atypeexpr on <var2:ATypeExpr>*/
}
var_pexprnode1 = var2;
var_node_list = var_pexprnode1;
var3 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction426> */
{
var4 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var3); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var4, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction429#action for (self: ReduceAction429, Parser) */
void nit__parser___nit__parser__ReduceAction429___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_pexprnode2 /* var pexprnode2: nullable Object */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var_pmethidnode3 /* var pmethidnode3: nullable Object */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
val* var8 /* : AMethidExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AMethidExpr */;
long var9 /* : Int */;
long var10 /* : Int */;
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
var_pexprnode2 = var_nodearraylist1;
/* <var_pexprnode2:nullable Object> isa nullable AExpr */
cltype = type_nullable__nit__AExpr.color;
idtype = type_nullable__nit__AExpr.id;
if(var_pexprnode2 == NULL) {
var4 = 1;
} else {
if(cltype >= (((long)var_pexprnode2&3)?type_info[((long)var_pexprnode2&3)]:var_pexprnode2->type)->table_size) {
var4 = 0;
} else {
var4 = (((long)var_pexprnode2&3)?type_info[((long)var_pexprnode2&3)]:var_pexprnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9807);
fatal_exit(1);
}
var_pmethidnode3 = var_nodearraylist4;
/* <var_pmethidnode3:nullable Object> isa nullable AMethid */
cltype6 = type_nullable__nit__AMethid.color;
idtype7 = type_nullable__nit__AMethid.id;
if(var_pmethidnode3 == NULL) {
var5 = 1;
} else {
if(cltype6 >= (((long)var_pmethidnode3&3)?type_info[((long)var_pmethidnode3&3)]:var_pmethidnode3->type)->table_size) {
var5 = 0;
} else {
var5 = (((long)var_pmethidnode3&3)?type_info[((long)var_pmethidnode3&3)]:var_pmethidnode3->type)->type_table[cltype6] == idtype7;
}
}
if (unlikely(!var5)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9809);
fatal_exit(1);
}
var8 = NEW_nit__AMethidExpr(&type_nit__AMethidExpr);
{
((void(*)(val* self, val* p0, val* p1))(var8->class->vft[COLOR_nit__parser_prod__AMethidExpr__init_amethidexpr]))(var8, var_pexprnode2, var_pmethidnode3); /* init_amethidexpr on <var8:AMethidExpr>*/
}
var_pexprnode1 = var8;
var_node_list = var_pexprnode1;
var9 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction429> */
{
var10 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var9); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var10, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction430#action for (self: ReduceAction430, Parser) */
void nit__parser___nit__parser__ReduceAction430___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var1 /* : AImplicitSelfExpr */;
val* var_pexprnode2 /* var pexprnode2: nullable AImplicitSelfExpr */;
val* var_pmethidnode3 /* var pmethidnode3: nullable Object */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var3 /* : AMethidExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AMethidExpr */;
long var4 /* : Int */;
long var5 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist1 = var;
var1 = NEW_nit__AImplicitSelfExpr(&type_nit__AImplicitSelfExpr);
{
((void(*)(val* self))(var1->class->vft[COLOR_nit__parser_prod__AImplicitSelfExpr__init_aimplicitselfexpr]))(var1); /* init_aimplicitselfexpr on <var1:AImplicitSelfExpr>*/
}
var_pexprnode2 = var1;
var_pmethidnode3 = var_nodearraylist1;
/* <var_pmethidnode3:nullable Object> isa nullable AMethid */
cltype = type_nullable__nit__AMethid.color;
idtype = type_nullable__nit__AMethid.id;
if(var_pmethidnode3 == NULL) {
var2 = 1;
} else {
if(cltype >= (((long)var_pmethidnode3&3)?type_info[((long)var_pmethidnode3&3)]:var_pmethidnode3->type)->table_size) {
var2 = 0;
} else {
var2 = (((long)var_pmethidnode3&3)?type_info[((long)var_pmethidnode3&3)]:var_pmethidnode3->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9826);
fatal_exit(1);
}
var3 = NEW_nit__AMethidExpr(&type_nit__AMethidExpr);
{
((void(*)(val* self, val* p0, val* p1))(var3->class->vft[COLOR_nit__parser_prod__AMethidExpr__init_amethidexpr]))(var3, var_pexprnode2, var_pmethidnode3); /* init_amethidexpr on <var3:AMethidExpr>*/
}
var_pexprnode1 = var3;
var_node_list = var_pexprnode1;
var4 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction430> */
{
var5 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var4); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var5, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction431#action for (self: ReduceAction431, Parser) */
void nit__parser___nit__parser__ReduceAction431___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pannotationsnode2 /* var pannotationsnode2: nullable Object */;
short int var1 /* : Bool */;
int cltype;
int idtype;
val* var2 /* : AAtExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AAtExpr */;
long var3 /* : Int */;
long var4 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist1 = var;
var_pannotationsnode2 = var_nodearraylist1;
/* <var_pannotationsnode2:nullable Object> isa nullable AAnnotations */
cltype = type_nullable__nit__AAnnotations.color;
idtype = type_nullable__nit__AAnnotations.id;
if(var_pannotationsnode2 == NULL) {
var1 = 1;
} else {
if(cltype >= (((long)var_pannotationsnode2&3)?type_info[((long)var_pannotationsnode2&3)]:var_pannotationsnode2->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)var_pannotationsnode2&3)?type_info[((long)var_pannotationsnode2&3)]:var_pannotationsnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9842);
fatal_exit(1);
}
var2 = NEW_nit__AAtExpr(&type_nit__AAtExpr);
{
((void(*)(val* self, val* p0))(var2->class->vft[COLOR_nit__parser_prod__AAtExpr__init_aatexpr]))(var2, var_pannotationsnode2); /* init_aatexpr on <var2:AAtExpr>*/
}
var_pexprnode1 = var2;
var_node_list = var_pexprnode1;
var3 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction431> */
{
var4 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var3); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var4, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction432#action for (self: ReduceAction432, Parser) */
void nit__parser___nit__parser__ReduceAction432___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tidnode2 /* var tidnode2: nullable Object */;
short int var1 /* : Bool */;
int cltype;
int idtype;
val* var2 /* : AIdAtid */;
val* var_patidnode1 /* var patidnode1: nullable AIdAtid */;
long var3 /* : Int */;
long var4 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist1 = var;
var_tidnode2 = var_nodearraylist1;
/* <var_tidnode2:nullable Object> isa nullable TId */
cltype = type_nullable__nit__TId.color;
idtype = type_nullable__nit__TId.id;
if(var_tidnode2 == NULL) {
var1 = 1;
} else {
if(cltype >= (((long)var_tidnode2&3)?type_info[((long)var_tidnode2&3)]:var_tidnode2->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)var_tidnode2&3)?type_info[((long)var_tidnode2&3)]:var_tidnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9857);
fatal_exit(1);
}
var2 = NEW_nit__AIdAtid(&type_nit__AIdAtid);
{
((void(*)(val* self, val* p0))(var2->class->vft[COLOR_nit__parser_prod__AIdAtid__init_aidatid]))(var2, var_tidnode2); /* init_aidatid on <var2:AIdAtid>*/
}
var_patidnode1 = var2;
var_node_list = var_patidnode1;
var3 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction432> */
{
var4 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var3); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var4, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction433#action for (self: ReduceAction433, Parser) */
void nit__parser___nit__parser__ReduceAction433___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tkwexternnode2 /* var tkwexternnode2: nullable Object */;
short int var1 /* : Bool */;
int cltype;
int idtype;
val* var2 /* : AKwexternAtid */;
val* var_patidnode1 /* var patidnode1: nullable AKwexternAtid */;
long var3 /* : Int */;
long var4 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist1 = var;
var_tkwexternnode2 = var_nodearraylist1;
/* <var_tkwexternnode2:nullable Object> isa nullable TKwextern */
cltype = type_nullable__nit__TKwextern.color;
idtype = type_nullable__nit__TKwextern.id;
if(var_tkwexternnode2 == NULL) {
var1 = 1;
} else {
if(cltype >= (((long)var_tkwexternnode2&3)?type_info[((long)var_tkwexternnode2&3)]:var_tkwexternnode2->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)var_tkwexternnode2&3)?type_info[((long)var_tkwexternnode2&3)]:var_tkwexternnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9872);
fatal_exit(1);
}
var2 = NEW_nit__AKwexternAtid(&type_nit__AKwexternAtid);
{
((void(*)(val* self, val* p0))(var2->class->vft[COLOR_nit__parser_prod__AKwexternAtid__init_akwexternatid]))(var2, var_tkwexternnode2); /* init_akwexternatid on <var2:AKwexternAtid>*/
}
var_patidnode1 = var2;
var_node_list = var_patidnode1;
var3 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction433> */
{
var4 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var3); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var4, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction434#action for (self: ReduceAction434, Parser) */
void nit__parser___nit__parser__ReduceAction434___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tkwabstractnode2 /* var tkwabstractnode2: nullable Object */;
short int var1 /* : Bool */;
int cltype;
int idtype;
val* var2 /* : AKwabstractAtid */;
val* var_patidnode1 /* var patidnode1: nullable AKwabstractAtid */;
long var3 /* : Int */;
long var4 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist1 = var;
var_tkwabstractnode2 = var_nodearraylist1;
/* <var_tkwabstractnode2:nullable Object> isa nullable TKwabstract */
cltype = type_nullable__nit__TKwabstract.color;
idtype = type_nullable__nit__TKwabstract.id;
if(var_tkwabstractnode2 == NULL) {
var1 = 1;
} else {
if(cltype >= (((long)var_tkwabstractnode2&3)?type_info[((long)var_tkwabstractnode2&3)]:var_tkwabstractnode2->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)var_tkwabstractnode2&3)?type_info[((long)var_tkwabstractnode2&3)]:var_tkwabstractnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9887);
fatal_exit(1);
}
var2 = NEW_nit__AKwabstractAtid(&type_nit__AKwabstractAtid);
{
((void(*)(val* self, val* p0))(var2->class->vft[COLOR_nit__parser_prod__AKwabstractAtid__init_akwabstractatid]))(var2, var_tkwabstractnode2); /* init_akwabstractatid on <var2:AKwabstractAtid>*/
}
var_patidnode1 = var2;
var_node_list = var_patidnode1;
var3 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction434> */
{
var4 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var3); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var4, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction435#action for (self: ReduceAction435, Parser) */
void nit__parser___nit__parser__ReduceAction435___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_toparnode2 /* var toparnode2: nullable Object */;
short int var5 /* : Bool */;
int cltype;
int idtype;
val* var_listnode3 /* var listnode3: nullable Object */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
val* var9 /* : Array[Object] */;
val* var_tcparnode5 /* var tcparnode5: nullable Object */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var13 /* : AParExprs */;
val* var_pexprsnode1 /* var pexprsnode1: nullable AParExprs */;
long var14 /* : Int */;
long var15 /* : Int */;
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
var_toparnode2 = var_nodearraylist1;
/* <var_toparnode2:nullable Object> isa nullable TOpar */
cltype = type_nullable__nit__TOpar.color;
idtype = type_nullable__nit__TOpar.id;
if(var_toparnode2 == NULL) {
var5 = 1;
} else {
if(cltype >= (((long)var_toparnode2&3)?type_info[((long)var_toparnode2&3)]:var_toparnode2->type)->table_size) {
var5 = 0;
} else {
var5 = (((long)var_toparnode2&3)?type_info[((long)var_toparnode2&3)]:var_toparnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var5)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9906);
fatal_exit(1);
}
var_listnode3 = var_nodearraylist3;
/* <var_listnode3:nullable Object> isa Array[Object] */
cltype7 = type_standard__Array__standard__Object.color;
idtype8 = type_standard__Array__standard__Object.id;
if(var_listnode3 == NULL) {
var6 = 0;
} else {
if(cltype7 >= (((long)var_listnode3&3)?type_info[((long)var_listnode3&3)]:var_listnode3->type)->table_size) {
var6 = 0;
} else {
var6 = (((long)var_listnode3&3)?type_info[((long)var_listnode3&3)]:var_listnode3->type)->type_table[cltype7] == idtype8;
}
}
if (unlikely(!var6)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9908);
fatal_exit(1);
}
{
var9 = ((val*(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__parser_work__ReduceAction__concat]))(self, var_listnode4, var_listnode3); /* concat on <self:ReduceAction435>*/
}
var_listnode4 = var9;
var_tcparnode5 = var_nodearraylist4;
/* <var_tcparnode5:nullable Object> isa nullable TCpar */
cltype11 = type_nullable__nit__TCpar.color;
idtype12 = type_nullable__nit__TCpar.id;
if(var_tcparnode5 == NULL) {
var10 = 1;
} else {
if(cltype11 >= (((long)var_tcparnode5&3)?type_info[((long)var_tcparnode5&3)]:var_tcparnode5->type)->table_size) {
var10 = 0;
} else {
var10 = (((long)var_tcparnode5&3)?type_info[((long)var_tcparnode5&3)]:var_tcparnode5->type)->type_table[cltype11] == idtype12;
}
}
if (unlikely(!var10)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9911);
fatal_exit(1);
}
var13 = NEW_nit__AParExprs(&type_nit__AParExprs);
{
((void(*)(val* self, val* p0, val* p1, val* p2))(var13->class->vft[COLOR_nit__parser_prod__AParExprs__init_aparexprs]))(var13, var_toparnode2, var_listnode4, var_tcparnode5); /* init_aparexprs on <var13:AParExprs>*/
}
var_pexprsnode1 = var13;
var_node_list = var_pexprsnode1;
var14 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction435> */
{
var15 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var14); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var15, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction436#action for (self: ReduceAction436, Parser) */
void nit__parser___nit__parser__ReduceAction436___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_toparnode2 /* var toparnode2: nullable Object */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var_tcparnode4 /* var tcparnode4: nullable Object */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
val* var8 /* : AParExprs */;
val* var_pexprsnode1 /* var pexprsnode1: nullable AParExprs */;
long var9 /* : Int */;
long var10 /* : Int */;
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
var_toparnode2 = var_nodearraylist1;
/* <var_toparnode2:nullable Object> isa nullable TOpar */
cltype = type_nullable__nit__TOpar.color;
idtype = type_nullable__nit__TOpar.id;
if(var_toparnode2 == NULL) {
var4 = 1;
} else {
if(cltype >= (((long)var_toparnode2&3)?type_info[((long)var_toparnode2&3)]:var_toparnode2->type)->table_size) {
var4 = 0;
} else {
var4 = (((long)var_toparnode2&3)?type_info[((long)var_toparnode2&3)]:var_toparnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9931);
fatal_exit(1);
}
var_tcparnode4 = var_nodearraylist3;
/* <var_tcparnode4:nullable Object> isa nullable TCpar */
cltype6 = type_nullable__nit__TCpar.color;
idtype7 = type_nullable__nit__TCpar.id;
if(var_tcparnode4 == NULL) {
var5 = 1;
} else {
if(cltype6 >= (((long)var_tcparnode4&3)?type_info[((long)var_tcparnode4&3)]:var_tcparnode4->type)->table_size) {
var5 = 0;
} else {
var5 = (((long)var_tcparnode4&3)?type_info[((long)var_tcparnode4&3)]:var_tcparnode4->type)->type_table[cltype6] == idtype7;
}
}
if (unlikely(!var5)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9933);
fatal_exit(1);
}
var8 = NEW_nit__AParExprs(&type_nit__AParExprs);
{
((void(*)(val* self, val* p0, val* p1, val* p2))(var8->class->vft[COLOR_nit__parser_prod__AParExprs__init_aparexprs]))(var8, var_toparnode2, var_listnode3, var_tcparnode4); /* init_aparexprs on <var8:AParExprs>*/
}
var_pexprsnode1 = var8;
var_node_list = var_pexprsnode1;
var9 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction436> */
{
var10 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var9); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var10, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction438#action for (self: ReduceAction438, Parser) */
void nit__parser___nit__parser__ReduceAction438___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var1 /* : Array[Object] */;
val* var_listnode3 /* var listnode3: Array[Object] */;
val* var_pexprnode2 /* var pexprnode2: nullable Object */;
short int var2 /* : Bool */;
int cltype;
int idtype;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var5 /* : AListExprs */;
val* var_pexprsnode1 /* var pexprsnode1: nullable AListExprs */;
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
var_pexprnode2 = var_nodearraylist1;
/* <var_pexprnode2:nullable Object> isa nullable AExpr */
cltype = type_nullable__nit__AExpr.color;
idtype = type_nullable__nit__AExpr.id;
if(var_pexprnode2 == NULL) {
var2 = 1;
} else {
if(cltype >= (((long)var_pexprnode2&3)?type_info[((long)var_pexprnode2&3)]:var_pexprnode2->type)->table_size) {
var2 = 0;
} else {
var2 = (((long)var_pexprnode2&3)?type_info[((long)var_pexprnode2&3)]:var_pexprnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9951);
fatal_exit(1);
}
if (var_pexprnode2 == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (0) {
var4 = ((short int(*)(val* self, val* p0))(var_pexprnode2->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_pexprnode2, ((val*)NULL)); /* != on <var_pexprnode2:nullable Object(nullable AExpr)>*/
var3 = var4;
}
if (var3){
{
((void(*)(val* self, val* p0))(var_listnode3->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_listnode3, var_pexprnode2); /* add on <var_listnode3:Array[Object]>*/
}
} else {
}
var5 = NEW_nit__AListExprs(&type_nit__AListExprs);
{
((void(*)(val* self, val* p0))(var5->class->vft[COLOR_nit__parser_prod__AListExprs__init_alistexprs]))(var5, var_listnode3); /* init_alistexprs on <var5:AListExprs>*/
}
var_pexprsnode1 = var5;
var_node_list = var_pexprsnode1;
var6 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction438> */
{
var7 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var6); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var7, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction440#action for (self: ReduceAction440, Parser) */
void nit__parser___nit__parser__ReduceAction440___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : Array[Object] */;
val* var_listnode2 /* var listnode2: Array[Object] */;
val* var1 /* : AListExprs */;
val* var_pexprsnode1 /* var pexprsnode1: nullable AListExprs */;
long var2 /* : Int */;
long var3 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
var = NEW_standard__Array(&type_standard__Array__standard__Object);
{
((void(*)(val* self))(var->class->vft[COLOR_standard__kernel__Object__init]))(var); /* init on <var:Array[Object]>*/
}
var_listnode2 = var;
var1 = NEW_nit__AListExprs(&type_nit__AListExprs);
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_nit__parser_prod__AListExprs__init_alistexprs]))(var1, var_listnode2); /* init_alistexprs on <var1:AListExprs>*/
}
var_pexprsnode1 = var1;
var_node_list = var_pexprsnode1;
var2 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction440> */
{
var3 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var2); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var3, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction441#action for (self: ReduceAction441, Parser) */
void nit__parser___nit__parser__ReduceAction441___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_tobranode2 /* var tobranode2: nullable Object */;
short int var5 /* : Bool */;
int cltype;
int idtype;
val* var_listnode3 /* var listnode3: nullable Object */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
val* var9 /* : Array[Object] */;
val* var_tcbranode5 /* var tcbranode5: nullable Object */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var13 /* : ABraExprs */;
val* var_pexprsnode1 /* var pexprsnode1: nullable ABraExprs */;
long var14 /* : Int */;
long var15 /* : Int */;
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
var_tobranode2 = var_nodearraylist1;
/* <var_tobranode2:nullable Object> isa nullable TObra */
cltype = type_nullable__nit__TObra.color;
idtype = type_nullable__nit__TObra.id;
if(var_tobranode2 == NULL) {
var5 = 1;
} else {
if(cltype >= (((long)var_tobranode2&3)?type_info[((long)var_tobranode2&3)]:var_tobranode2->type)->table_size) {
var5 = 0;
} else {
var5 = (((long)var_tobranode2&3)?type_info[((long)var_tobranode2&3)]:var_tobranode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var5)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9986);
fatal_exit(1);
}
var_listnode3 = var_nodearraylist3;
/* <var_listnode3:nullable Object> isa Array[Object] */
cltype7 = type_standard__Array__standard__Object.color;
idtype8 = type_standard__Array__standard__Object.id;
if(var_listnode3 == NULL) {
var6 = 0;
} else {
if(cltype7 >= (((long)var_listnode3&3)?type_info[((long)var_listnode3&3)]:var_listnode3->type)->table_size) {
var6 = 0;
} else {
var6 = (((long)var_listnode3&3)?type_info[((long)var_listnode3&3)]:var_listnode3->type)->type_table[cltype7] == idtype8;
}
}
if (unlikely(!var6)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9988);
fatal_exit(1);
}
{
var9 = ((val*(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__parser_work__ReduceAction__concat]))(self, var_listnode4, var_listnode3); /* concat on <self:ReduceAction441>*/
}
var_listnode4 = var9;
var_tcbranode5 = var_nodearraylist4;
/* <var_tcbranode5:nullable Object> isa nullable TCbra */
cltype11 = type_nullable__nit__TCbra.color;
idtype12 = type_nullable__nit__TCbra.id;
if(var_tcbranode5 == NULL) {
var10 = 1;
} else {
if(cltype11 >= (((long)var_tcbranode5&3)?type_info[((long)var_tcbranode5&3)]:var_tcbranode5->type)->table_size) {
var10 = 0;
} else {
var10 = (((long)var_tcbranode5&3)?type_info[((long)var_tcbranode5&3)]:var_tcbranode5->type)->type_table[cltype11] == idtype12;
}
}
if (unlikely(!var10)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9991);
fatal_exit(1);
}
var13 = NEW_nit__ABraExprs(&type_nit__ABraExprs);
{
((void(*)(val* self, val* p0, val* p1, val* p2))(var13->class->vft[COLOR_nit__parser_prod__ABraExprs__init_abraexprs]))(var13, var_tobranode2, var_listnode4, var_tcbranode5); /* init_abraexprs on <var13:ABraExprs>*/
}
var_pexprsnode1 = var13;
var_node_list = var_pexprsnode1;
var14 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction441> */
{
var15 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var14); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var15, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction443#action for (self: ReduceAction443, Parser) */
void nit__parser___nit__parser__ReduceAction443___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_pexprnode1 /* var pexprnode1: nullable Object */;
val* var_listnode2 /* var listnode2: nullable Object */;
short int var4 /* : Bool */;
int cltype;
int idtype;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var7 /* : Array[Object] */;
long var8 /* : Int */;
long var9 /* : Int */;
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
var_pexprnode1 = var_nodearraylist1;
var_listnode2 = var_nodearraylist3;
/* <var_listnode2:nullable Object> isa Array[Object] */
cltype = type_standard__Array__standard__Object.color;
idtype = type_standard__Array__standard__Object.id;
if(var_listnode2 == NULL) {
var4 = 0;
} else {
if(cltype >= (((long)var_listnode2&3)?type_info[((long)var_listnode2&3)]:var_listnode2->type)->table_size) {
var4 = 0;
} else {
var4 = (((long)var_listnode2&3)?type_info[((long)var_listnode2&3)]:var_listnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10012);
fatal_exit(1);
}
if (var_pexprnode1 == NULL) {
var5 = 0; /* is null */
} else {
var5 = 1; /* arg is null and recv is not */
}
if (0) {
var6 = ((short int(*)(val* self, val* p0))((((long)var_pexprnode1&3)?class_info[((long)var_pexprnode1&3)]:var_pexprnode1->class)->vft[COLOR_standard__kernel__Object___33d_61d]))(var_pexprnode1, ((val*)NULL)); /* != on <var_pexprnode1:nullable Object>*/
var5 = var6;
}
if (var5){
{
((void(*)(val* self, val* p0))(var_listnode3->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_listnode3, var_pexprnode1); /* add on <var_listnode3:Array[Object]>*/
}
} else {
}
{
var7 = ((val*(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__parser_work__ReduceAction__concat]))(self, var_listnode3, var_listnode2); /* concat on <self:ReduceAction443>*/
}
var_listnode3 = var7;
var_node_list = var_listnode3;
var8 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction443> */
{
var9 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var8); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var9, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction444#action for (self: ReduceAction444, Parser) */
void nit__parser___nit__parser__ReduceAction444___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_pexprnode1 /* var pexprnode1: nullable Object */;
long var4 /* : Int */;
long var5 /* : Int */;
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
var_pexprnode1 = var_nodearraylist3;
var_node_list = var_pexprnode1;
var4 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction444> */
{
var5 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var4); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var5, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction445#action for (self: ReduceAction445, Parser) */
void nit__parser___nit__parser__ReduceAction445___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_listnode1 /* var listnode1: nullable Object */;
short int var6 /* : Bool */;
int cltype;
int idtype;
val* var7 /* : Array[Object] */;
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
var_listnode1 = var_nodearraylist3;
/* <var_listnode1:nullable Object> isa Array[Object] */
cltype = type_standard__Array__standard__Object.color;
idtype = type_standard__Array__standard__Object.id;
if(var_listnode1 == NULL) {
var6 = 0;
} else {
if(cltype >= (((long)var_listnode1&3)?type_info[((long)var_listnode1&3)]:var_listnode1->type)->table_size) {
var6 = 0;
} else {
var6 = (((long)var_listnode1&3)?type_info[((long)var_listnode1&3)]:var_listnode1->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var6)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10047);
fatal_exit(1);
}
{
var7 = ((val*(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__parser_work__ReduceAction__concat]))(self, var_listnode2, var_listnode1); /* concat on <self:ReduceAction445>*/
}
var_listnode2 = var7;
var_node_list = var_listnode2;
var8 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction445> */
{
var9 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var8); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var9, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction446#action for (self: ReduceAction446, Parser) */
void nit__parser___nit__parser__ReduceAction446___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var1 /* : Array[Object] */;
val* var_listnode2 /* var listnode2: Array[Object] */;
val* var_listnode1 /* var listnode1: nullable Object */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var3 /* : Array[Object] */;
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
var_listnode1 = var_nodearraylist1;
/* <var_listnode1:nullable Object> isa Array[Object] */
cltype = type_standard__Array__standard__Object.color;
idtype = type_standard__Array__standard__Object.id;
if(var_listnode1 == NULL) {
var2 = 0;
} else {
if(cltype >= (((long)var_listnode1&3)?type_info[((long)var_listnode1&3)]:var_listnode1->type)->table_size) {
var2 = 0;
} else {
var2 = (((long)var_listnode1&3)?type_info[((long)var_listnode1&3)]:var_listnode1->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10061);
fatal_exit(1);
}
{
var3 = ((val*(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__parser_work__ReduceAction__concat]))(self, var_listnode2, var_listnode1); /* concat on <self:ReduceAction446>*/
}
var_listnode2 = var3;
var_node_list = var_listnode2;
var4 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction446> */
{
var5 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var4); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var5, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction447#action for (self: ReduceAction447, Parser) */
void nit__parser___nit__parser__ReduceAction447___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var1 /* : Array[Object] */;
val* var_listnode2 /* var listnode2: Array[Object] */;
val* var_tidnode1 /* var tidnode1: nullable Object */;
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
var_tidnode1 = var_nodearraylist1;
if (var_tidnode1 == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (0) {
var3 = ((short int(*)(val* self, val* p0))((((long)var_tidnode1&3)?class_info[((long)var_tidnode1&3)]:var_tidnode1->class)->vft[COLOR_standard__kernel__Object___33d_61d]))(var_tidnode1, ((val*)NULL)); /* != on <var_tidnode1:nullable Object>*/
var2 = var3;
}
if (var2){
{
((void(*)(val* self, val* p0))(var_listnode2->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_listnode2, var_tidnode1); /* add on <var_listnode2:Array[Object]>*/
}
} else {
}
var_node_list = var_listnode2;
var4 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction447> */
{
var5 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var4); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var5, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction448#action for (self: ReduceAction448, Parser) */
void nit__parser___nit__parser__ReduceAction448___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_listnode1 /* var listnode1: nullable Object */;
short int var5 /* : Bool */;
int cltype;
int idtype;
val* var_tidnode2 /* var tidnode2: nullable Object */;
val* var6 /* : Array[Object] */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
long var9 /* : Int */;
long var10 /* : Int */;
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
var_listnode1 = var_nodearraylist1;
/* <var_listnode1:nullable Object> isa Array[Object] */
cltype = type_standard__Array__standard__Object.color;
idtype = type_standard__Array__standard__Object.id;
if(var_listnode1 == NULL) {
var5 = 0;
} else {
if(cltype >= (((long)var_listnode1&3)?type_info[((long)var_listnode1&3)]:var_listnode1->type)->table_size) {
var5 = 0;
} else {
var5 = (((long)var_listnode1&3)?type_info[((long)var_listnode1&3)]:var_listnode1->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var5)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10093);
fatal_exit(1);
}
var_tidnode2 = var_nodearraylist4;
{
var6 = ((val*(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__parser_work__ReduceAction__concat]))(self, var_listnode3, var_listnode1); /* concat on <self:ReduceAction448>*/
}
var_listnode3 = var6;
if (var_tidnode2 == NULL) {
var7 = 0; /* is null */
} else {
var7 = 1; /* arg is null and recv is not */
}
if (0) {
var8 = ((short int(*)(val* self, val* p0))((((long)var_tidnode2&3)?class_info[((long)var_tidnode2&3)]:var_tidnode2->class)->vft[COLOR_standard__kernel__Object___33d_61d]))(var_tidnode2, ((val*)NULL)); /* != on <var_tidnode2:nullable Object>*/
var7 = var8;
}
if (var7){
{
((void(*)(val* self, val* p0))(var_listnode3->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_listnode3, var_tidnode2); /* add on <var_listnode3:Array[Object]>*/
}
} else {
}
var_node_list = var_listnode3;
var9 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction448> */
{
var10 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var9); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var10, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction449#action for (self: ReduceAction449, Parser) */
void nit__parser___nit__parser__ReduceAction449___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var1 /* : Array[Object] */;
val* var_listnode3 /* var listnode3: Array[Object] */;
val* var_tidnode4 /* var tidnode4: nullable Object */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var3 /* : AModuleName */;
val* var_pmodulenamenode1 /* var pmodulenamenode1: nullable AModuleName */;
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
var_listnode3 = var1;
var_tidnode4 = var_nodearraylist1;
/* <var_tidnode4:nullable Object> isa nullable TId */
cltype = type_nullable__nit__TId.color;
idtype = type_nullable__nit__TId.id;
if(var_tidnode4 == NULL) {
var2 = 1;
} else {
if(cltype >= (((long)var_tidnode4&3)?type_info[((long)var_tidnode4&3)]:var_tidnode4->type)->table_size) {
var2 = 0;
} else {
var2 = (((long)var_tidnode4&3)?type_info[((long)var_tidnode4&3)]:var_tidnode4->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10111);
fatal_exit(1);
}
var3 = NEW_nit__AModuleName(&type_nit__AModuleName);
{
((void(*)(val* self, val* p0, val* p1, val* p2))(var3->class->vft[COLOR_nit__parser_prod__AModuleName__init_amodulename]))(var3, ((val*)NULL), var_listnode3, var_tidnode4); /* init_amodulename on <var3:AModuleName>*/
}
var_pmodulenamenode1 = var3;
var_node_list = var_pmodulenamenode1;
var4 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction449> */
{
var5 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var4); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var5, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction450#action for (self: ReduceAction450, Parser) */
void nit__parser___nit__parser__ReduceAction450___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var2 /* : Array[Object] */;
val* var_listnode4 /* var listnode4: Array[Object] */;
val* var_listnode3 /* var listnode3: nullable Object */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var4 /* : Array[Object] */;
val* var_tidnode5 /* var tidnode5: nullable Object */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
val* var8 /* : AModuleName */;
val* var_pmodulenamenode1 /* var pmodulenamenode1: nullable AModuleName */;
long var9 /* : Int */;
long var10 /* : Int */;
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
var_listnode3 = var_nodearraylist1;
/* <var_listnode3:nullable Object> isa Array[Object] */
cltype = type_standard__Array__standard__Object.color;
idtype = type_standard__Array__standard__Object.id;
if(var_listnode3 == NULL) {
var3 = 0;
} else {
if(cltype >= (((long)var_listnode3&3)?type_info[((long)var_listnode3&3)]:var_listnode3->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)var_listnode3&3)?type_info[((long)var_listnode3&3)]:var_listnode3->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10130);
fatal_exit(1);
}
{
var4 = ((val*(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__parser_work__ReduceAction__concat]))(self, var_listnode4, var_listnode3); /* concat on <self:ReduceAction450>*/
}
var_listnode4 = var4;
var_tidnode5 = var_nodearraylist2;
/* <var_tidnode5:nullable Object> isa nullable TId */
cltype6 = type_nullable__nit__TId.color;
idtype7 = type_nullable__nit__TId.id;
if(var_tidnode5 == NULL) {
var5 = 1;
} else {
if(cltype6 >= (((long)var_tidnode5&3)?type_info[((long)var_tidnode5&3)]:var_tidnode5->type)->table_size) {
var5 = 0;
} else {
var5 = (((long)var_tidnode5&3)?type_info[((long)var_tidnode5&3)]:var_tidnode5->type)->type_table[cltype6] == idtype7;
}
}
if (unlikely(!var5)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10133);
fatal_exit(1);
}
var8 = NEW_nit__AModuleName(&type_nit__AModuleName);
{
((void(*)(val* self, val* p0, val* p1, val* p2))(var8->class->vft[COLOR_nit__parser_prod__AModuleName__init_amodulename]))(var8, ((val*)NULL), var_listnode4, var_tidnode5); /* init_amodulename on <var8:AModuleName>*/
}
var_pmodulenamenode1 = var8;
var_node_list = var_pmodulenamenode1;
var9 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction450> */
{
var10 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var9); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var10, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction451#action for (self: ReduceAction451, Parser) */
void nit__parser___nit__parser__ReduceAction451___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_tquadnode2 /* var tquadnode2: nullable Object */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var_tidnode4 /* var tidnode4: nullable Object */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
val* var8 /* : AModuleName */;
val* var_pmodulenamenode1 /* var pmodulenamenode1: nullable AModuleName */;
long var9 /* : Int */;
long var10 /* : Int */;
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
var_tquadnode2 = var_nodearraylist1;
/* <var_tquadnode2:nullable Object> isa nullable TQuad */
cltype = type_nullable__nit__TQuad.color;
idtype = type_nullable__nit__TQuad.id;
if(var_tquadnode2 == NULL) {
var4 = 1;
} else {
if(cltype >= (((long)var_tquadnode2&3)?type_info[((long)var_tquadnode2&3)]:var_tquadnode2->type)->table_size) {
var4 = 0;
} else {
var4 = (((long)var_tquadnode2&3)?type_info[((long)var_tquadnode2&3)]:var_tquadnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10153);
fatal_exit(1);
}
var_tidnode4 = var_nodearraylist3;
/* <var_tidnode4:nullable Object> isa nullable TId */
cltype6 = type_nullable__nit__TId.color;
idtype7 = type_nullable__nit__TId.id;
if(var_tidnode4 == NULL) {
var5 = 1;
} else {
if(cltype6 >= (((long)var_tidnode4&3)?type_info[((long)var_tidnode4&3)]:var_tidnode4->type)->table_size) {
var5 = 0;
} else {
var5 = (((long)var_tidnode4&3)?type_info[((long)var_tidnode4&3)]:var_tidnode4->type)->type_table[cltype6] == idtype7;
}
}
if (unlikely(!var5)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10155);
fatal_exit(1);
}
var8 = NEW_nit__AModuleName(&type_nit__AModuleName);
{
((void(*)(val* self, val* p0, val* p1, val* p2))(var8->class->vft[COLOR_nit__parser_prod__AModuleName__init_amodulename]))(var8, var_tquadnode2, var_listnode3, var_tidnode4); /* init_amodulename on <var8:AModuleName>*/
}
var_pmodulenamenode1 = var8;
var_node_list = var_pmodulenamenode1;
var9 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction451> */
{
var10 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var9); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var10, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction452#action for (self: ReduceAction452, Parser) */
void nit__parser___nit__parser__ReduceAction452___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_tquadnode2 /* var tquadnode2: nullable Object */;
short int var5 /* : Bool */;
int cltype;
int idtype;
val* var_listnode3 /* var listnode3: nullable Object */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
val* var9 /* : Array[Object] */;
val* var_tidnode5 /* var tidnode5: nullable Object */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var13 /* : AModuleName */;
val* var_pmodulenamenode1 /* var pmodulenamenode1: nullable AModuleName */;
long var14 /* : Int */;
long var15 /* : Int */;
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
var_tquadnode2 = var_nodearraylist1;
/* <var_tquadnode2:nullable Object> isa nullable TQuad */
cltype = type_nullable__nit__TQuad.color;
idtype = type_nullable__nit__TQuad.id;
if(var_tquadnode2 == NULL) {
var5 = 1;
} else {
if(cltype >= (((long)var_tquadnode2&3)?type_info[((long)var_tquadnode2&3)]:var_tquadnode2->type)->table_size) {
var5 = 0;
} else {
var5 = (((long)var_tquadnode2&3)?type_info[((long)var_tquadnode2&3)]:var_tquadnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var5)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10176);
fatal_exit(1);
}
var_listnode3 = var_nodearraylist3;
/* <var_listnode3:nullable Object> isa Array[Object] */
cltype7 = type_standard__Array__standard__Object.color;
idtype8 = type_standard__Array__standard__Object.id;
if(var_listnode3 == NULL) {
var6 = 0;
} else {
if(cltype7 >= (((long)var_listnode3&3)?type_info[((long)var_listnode3&3)]:var_listnode3->type)->table_size) {
var6 = 0;
} else {
var6 = (((long)var_listnode3&3)?type_info[((long)var_listnode3&3)]:var_listnode3->type)->type_table[cltype7] == idtype8;
}
}
if (unlikely(!var6)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10178);
fatal_exit(1);
}
{
var9 = ((val*(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__parser_work__ReduceAction__concat]))(self, var_listnode4, var_listnode3); /* concat on <self:ReduceAction452>*/
}
var_listnode4 = var9;
var_tidnode5 = var_nodearraylist4;
/* <var_tidnode5:nullable Object> isa nullable TId */
cltype11 = type_nullable__nit__TId.color;
idtype12 = type_nullable__nit__TId.id;
if(var_tidnode5 == NULL) {
var10 = 1;
} else {
if(cltype11 >= (((long)var_tidnode5&3)?type_info[((long)var_tidnode5&3)]:var_tidnode5->type)->table_size) {
var10 = 0;
} else {
var10 = (((long)var_tidnode5&3)?type_info[((long)var_tidnode5&3)]:var_tidnode5->type)->type_table[cltype11] == idtype12;
}
}
if (unlikely(!var10)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10181);
fatal_exit(1);
}
var13 = NEW_nit__AModuleName(&type_nit__AModuleName);
{
((void(*)(val* self, val* p0, val* p1, val* p2))(var13->class->vft[COLOR_nit__parser_prod__AModuleName__init_amodulename]))(var13, var_tquadnode2, var_listnode4, var_tidnode5); /* init_amodulename on <var13:AModuleName>*/
}
var_pmodulenamenode1 = var13;
var_node_list = var_pmodulenamenode1;
var14 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction452> */
{
var15 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var14); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var15, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction453#action for (self: ReduceAction453, Parser) */
void nit__parser___nit__parser__ReduceAction453___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var1 /* : Array[Object] */;
val* var_listnode2 /* var listnode2: Array[Object] */;
val* var_tclassidnode3 /* var tclassidnode3: nullable Object */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var3 /* : AQualified */;
val* var_pqualifiednode1 /* var pqualifiednode1: nullable AQualified */;
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
var_tclassidnode3 = var_nodearraylist1;
/* <var_tclassidnode3:nullable Object> isa nullable TClassid */
cltype = type_nullable__nit__TClassid.color;
idtype = type_nullable__nit__TClassid.id;
if(var_tclassidnode3 == NULL) {
var2 = 1;
} else {
if(cltype >= (((long)var_tclassidnode3&3)?type_info[((long)var_tclassidnode3&3)]:var_tclassidnode3->type)->table_size) {
var2 = 0;
} else {
var2 = (((long)var_tclassidnode3&3)?type_info[((long)var_tclassidnode3&3)]:var_tclassidnode3->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10199);
fatal_exit(1);
}
var3 = NEW_nit__AQualified(&type_nit__AQualified);
{
((void(*)(val* self, val* p0, val* p1))(var3->class->vft[COLOR_nit__parser_prod__AQualified__init_aqualified]))(var3, var_listnode2, var_tclassidnode3); /* init_aqualified on <var3:AQualified>*/
}
var_pqualifiednode1 = var3;
var_node_list = var_pqualifiednode1;
var4 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction453> */
{
var5 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var4); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var5, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction454#action for (self: ReduceAction454, Parser) */
void nit__parser___nit__parser__ReduceAction454___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var2 /* : Array[Object] */;
val* var_listnode3 /* var listnode3: Array[Object] */;
val* var_listnode2 /* var listnode2: nullable Object */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var4 /* : Array[Object] */;
val* var_tclassidnode4 /* var tclassidnode4: nullable Object */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
val* var8 /* : AQualified */;
val* var_pqualifiednode1 /* var pqualifiednode1: nullable AQualified */;
long var9 /* : Int */;
long var10 /* : Int */;
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
var_listnode2 = var_nodearraylist1;
/* <var_listnode2:nullable Object> isa Array[Object] */
cltype = type_standard__Array__standard__Object.color;
idtype = type_standard__Array__standard__Object.id;
if(var_listnode2 == NULL) {
var3 = 0;
} else {
if(cltype >= (((long)var_listnode2&3)?type_info[((long)var_listnode2&3)]:var_listnode2->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)var_listnode2&3)?type_info[((long)var_listnode2&3)]:var_listnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10217);
fatal_exit(1);
}
{
var4 = ((val*(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__parser_work__ReduceAction__concat]))(self, var_listnode3, var_listnode2); /* concat on <self:ReduceAction454>*/
}
var_listnode3 = var4;
var_tclassidnode4 = var_nodearraylist2;
/* <var_tclassidnode4:nullable Object> isa nullable TClassid */
cltype6 = type_nullable__nit__TClassid.color;
idtype7 = type_nullable__nit__TClassid.id;
if(var_tclassidnode4 == NULL) {
var5 = 1;
} else {
if(cltype6 >= (((long)var_tclassidnode4&3)?type_info[((long)var_tclassidnode4&3)]:var_tclassidnode4->type)->table_size) {
var5 = 0;
} else {
var5 = (((long)var_tclassidnode4&3)?type_info[((long)var_tclassidnode4&3)]:var_tclassidnode4->type)->type_table[cltype6] == idtype7;
}
}
if (unlikely(!var5)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10220);
fatal_exit(1);
}
var8 = NEW_nit__AQualified(&type_nit__AQualified);
{
((void(*)(val* self, val* p0, val* p1))(var8->class->vft[COLOR_nit__parser_prod__AQualified__init_aqualified]))(var8, var_listnode3, var_tclassidnode4); /* init_aqualified on <var8:AQualified>*/
}
var_pqualifiednode1 = var8;
var_node_list = var_pqualifiednode1;
var9 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction454> */
{
var10 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var9); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var10, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction455#action for (self: ReduceAction455, Parser) */
void nit__parser___nit__parser__ReduceAction455___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var1 /* : Array[Object] */;
val* var_listnode3 /* var listnode3: Array[Object] */;
val* var_listnode2 /* var listnode2: nullable Object */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var3 /* : Array[Object] */;
val* var4 /* : AQualified */;
val* var_pqualifiednode1 /* var pqualifiednode1: nullable AQualified */;
long var5 /* : Int */;
long var6 /* : Int */;
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
var_listnode2 = var_nodearraylist1;
/* <var_listnode2:nullable Object> isa Array[Object] */
cltype = type_standard__Array__standard__Object.color;
idtype = type_standard__Array__standard__Object.id;
if(var_listnode2 == NULL) {
var2 = 0;
} else {
if(cltype >= (((long)var_listnode2&3)?type_info[((long)var_listnode2&3)]:var_listnode2->type)->table_size) {
var2 = 0;
} else {
var2 = (((long)var_listnode2&3)?type_info[((long)var_listnode2&3)]:var_listnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10237);
fatal_exit(1);
}
{
var3 = ((val*(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__parser_work__ReduceAction__concat]))(self, var_listnode3, var_listnode2); /* concat on <self:ReduceAction455>*/
}
var_listnode3 = var3;
var4 = NEW_nit__AQualified(&type_nit__AQualified);
{
((void(*)(val* self, val* p0, val* p1))(var4->class->vft[COLOR_nit__parser_prod__AQualified__init_aqualified]))(var4, var_listnode3, ((val*)NULL)); /* init_aqualified on <var4:AQualified>*/
}
var_pqualifiednode1 = var4;
var_node_list = var_pqualifiednode1;
var5 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction455> */
{
var6 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var5); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var6, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction457#action for (self: ReduceAction457, Parser) */
void nit__parser___nit__parser__ReduceAction457___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tclassidnode1 /* var tclassidnode1: nullable Object */;
long var1 /* : Int */;
long var2 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist1 = var;
var_tclassidnode1 = var_nodearraylist1;
var_node_list = var_tclassidnode1;
var1 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction457> */
{
var2 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var1); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var2, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction458#action for (self: ReduceAction458, Parser) */
void nit__parser___nit__parser__ReduceAction458___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tclassidnode1 /* var tclassidnode1: nullable Object */;
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
var_tclassidnode1 = var_nodearraylist2;
var_node_list = var_tclassidnode1;
var2 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction458> */
{
var3 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var2); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var3, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction459#action for (self: ReduceAction459, Parser) */
void nit__parser___nit__parser__ReduceAction459___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tclassidnode1 /* var tclassidnode1: nullable Object */;
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
var_tclassidnode1 = var_nodearraylist3;
var_node_list = var_tclassidnode1;
var3 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction459> */
{
var4 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var3); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var4, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction461#action for (self: ReduceAction461, Parser) */
void nit__parser___nit__parser__ReduceAction461___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pmethidnode1 /* var pmethidnode1: nullable Object */;
long var1 /* : Int */;
long var2 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist1 = var;
var_pmethidnode1 = var_nodearraylist1;
var_node_list = var_pmethidnode1;
var1 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction461> */
{
var2 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var1); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var2, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction462#action for (self: ReduceAction462, Parser) */
void nit__parser___nit__parser__ReduceAction462___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pmethidnode1 /* var pmethidnode1: nullable Object */;
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
var_pmethidnode1 = var_nodearraylist2;
var_node_list = var_pmethidnode1;
var2 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction462> */
{
var3 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var2); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var3, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction463#action for (self: ReduceAction463, Parser) */
void nit__parser___nit__parser__ReduceAction463___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pmethidnode1 /* var pmethidnode1: nullable Object */;
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
var_pmethidnode1 = var_nodearraylist3;
var_node_list = var_pmethidnode1;
var3 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction463> */
{
var4 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var3); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var4, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction465#action for (self: ReduceAction465, Parser) */
void nit__parser___nit__parser__ReduceAction465___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tidnode1 /* var tidnode1: nullable Object */;
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
var_tidnode1 = var_nodearraylist1;
var_node_list = var_tidnode1;
var3 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction465> */
{
var4 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var3); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var4, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction466#action for (self: ReduceAction466, Parser) */
void nit__parser___nit__parser__ReduceAction466___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tclassidnode1 /* var tclassidnode1: nullable Object */;
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
var_tclassidnode1 = var_nodearraylist1;
var_node_list = var_tclassidnode1;
var3 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction466> */
{
var4 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var3); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var4, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction468#action for (self: ReduceAction468, Parser) */
void nit__parser___nit__parser__ReduceAction468___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tkwendnode1 /* var tkwendnode1: nullable Object */;
long var1 /* : Int */;
long var2 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist1 = var;
var_tkwendnode1 = var_nodearraylist1;
var_node_list = var_tkwendnode1;
var1 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction468> */
{
var2 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var1); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var2, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction469#action for (self: ReduceAction469, Parser) */
void nit__parser___nit__parser__ReduceAction469___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var1 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction469> */
{
var2 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var1); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var2, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction471#action for (self: ReduceAction471, Parser) */
void nit__parser___nit__parser__ReduceAction471___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var1 /* : Array[Object] */;
val* var_listnode3 /* var listnode3: Array[Object] */;
val* var_listnode2 /* var listnode2: nullable Object */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var3 /* : Array[Object] */;
val* var4 /* : ADoc */;
val* var_pdocnode1 /* var pdocnode1: nullable ADoc */;
long var5 /* : Int */;
long var6 /* : Int */;
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
var_listnode2 = var_nodearraylist1;
/* <var_listnode2:nullable Object> isa Array[Object] */
cltype = type_standard__Array__standard__Object.color;
idtype = type_standard__Array__standard__Object.id;
if(var_listnode2 == NULL) {
var2 = 0;
} else {
if(cltype >= (((long)var_listnode2&3)?type_info[((long)var_listnode2&3)]:var_listnode2->type)->table_size) {
var2 = 0;
} else {
var2 = (((long)var_listnode2&3)?type_info[((long)var_listnode2&3)]:var_listnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10373);
fatal_exit(1);
}
{
var3 = ((val*(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__parser_work__ReduceAction__concat]))(self, var_listnode3, var_listnode2); /* concat on <self:ReduceAction471>*/
}
var_listnode3 = var3;
var4 = NEW_nit__ADoc(&type_nit__ADoc);
{
((void(*)(val* self, val* p0))(var4->class->vft[COLOR_nit__parser_prod__ADoc__init_adoc]))(var4, var_listnode3); /* init_adoc on <var4:ADoc>*/
}
var_pdocnode1 = var4;
var_node_list = var_pdocnode1;
var5 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction471> */
{
var6 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var5); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var6, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction472#action for (self: ReduceAction472, Parser) */
void nit__parser___nit__parser__ReduceAction472___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var2 /* : Array[Object] */;
val* var_listnode3 /* var listnode3: Array[Object] */;
val* var_listnode2 /* var listnode2: nullable Object */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var4 /* : Array[Object] */;
val* var5 /* : ADoc */;
val* var_pdocnode1 /* var pdocnode1: nullable ADoc */;
long var6 /* : Int */;
long var7 /* : Int */;
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
var_listnode2 = var_nodearraylist2;
/* <var_listnode2:nullable Object> isa Array[Object] */
cltype = type_standard__Array__standard__Object.color;
idtype = type_standard__Array__standard__Object.id;
if(var_listnode2 == NULL) {
var3 = 0;
} else {
if(cltype >= (((long)var_listnode2&3)?type_info[((long)var_listnode2&3)]:var_listnode2->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)var_listnode2&3)?type_info[((long)var_listnode2&3)]:var_listnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10391);
fatal_exit(1);
}
{
var4 = ((val*(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__parser_work__ReduceAction__concat]))(self, var_listnode3, var_listnode2); /* concat on <self:ReduceAction472>*/
}
var_listnode3 = var4;
var5 = NEW_nit__ADoc(&type_nit__ADoc);
{
((void(*)(val* self, val* p0))(var5->class->vft[COLOR_nit__parser_prod__ADoc__init_adoc]))(var5, var_listnode3); /* init_adoc on <var5:ADoc>*/
}
var_pdocnode1 = var5;
var_node_list = var_pdocnode1;
var6 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction472> */
{
var7 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var6); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var7, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction475#action for (self: ReduceAction475, Parser) */
void nit__parser___nit__parser__ReduceAction475___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pdocnode1 /* var pdocnode1: nullable Object */;
long var1 /* : Int */;
long var2 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist1 = var;
var_pdocnode1 = var_nodearraylist1;
var_node_list = var_pdocnode1;
var1 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction475> */
{
var2 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var1); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var2, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction476#action for (self: ReduceAction476, Parser) */
void nit__parser___nit__parser__ReduceAction476___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
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
var2 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction476> */
{
var3 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var2); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var3, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction477#action for (self: ReduceAction477, Parser) */
void nit__parser___nit__parser__ReduceAction477___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
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
var3 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction477> */
{
var4 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var3); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var4, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction841#action for (self: ReduceAction841, Parser) */
void nit__parser___nit__parser__ReduceAction841___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_tkwissetnode2 /* var tkwissetnode2: nullable Object */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var_pexprnode3 /* var pexprnode3: nullable Object */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
val* var_tattridnode4 /* var tattridnode4: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var11 /* : AIssetAttrExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AIssetAttrExpr */;
long var12 /* : Int */;
long var13 /* : Int */;
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
var_tkwissetnode2 = var_nodearraylist1;
/* <var_tkwissetnode2:nullable Object> isa nullable TKwisset */
cltype = type_nullable__nit__TKwisset.color;
idtype = type_nullable__nit__TKwisset.id;
if(var_tkwissetnode2 == NULL) {
var4 = 1;
} else {
if(cltype >= (((long)var_tkwissetnode2&3)?type_info[((long)var_tkwissetnode2&3)]:var_tkwissetnode2->type)->table_size) {
var4 = 0;
} else {
var4 = (((long)var_tkwissetnode2&3)?type_info[((long)var_tkwissetnode2&3)]:var_tkwissetnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10442);
fatal_exit(1);
}
var_pexprnode3 = var_nodearraylist2;
/* <var_pexprnode3:nullable Object> isa nullable AExpr */
cltype6 = type_nullable__nit__AExpr.color;
idtype7 = type_nullable__nit__AExpr.id;
if(var_pexprnode3 == NULL) {
var5 = 1;
} else {
if(cltype6 >= (((long)var_pexprnode3&3)?type_info[((long)var_pexprnode3&3)]:var_pexprnode3->type)->table_size) {
var5 = 0;
} else {
var5 = (((long)var_pexprnode3&3)?type_info[((long)var_pexprnode3&3)]:var_pexprnode3->type)->type_table[cltype6] == idtype7;
}
}
if (unlikely(!var5)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10444);
fatal_exit(1);
}
var_tattridnode4 = var_nodearraylist4;
/* <var_tattridnode4:nullable Object> isa nullable TAttrid */
cltype9 = type_nullable__nit__TAttrid.color;
idtype10 = type_nullable__nit__TAttrid.id;
if(var_tattridnode4 == NULL) {
var8 = 1;
} else {
if(cltype9 >= (((long)var_tattridnode4&3)?type_info[((long)var_tattridnode4&3)]:var_tattridnode4->type)->table_size) {
var8 = 0;
} else {
var8 = (((long)var_tattridnode4&3)?type_info[((long)var_tattridnode4&3)]:var_tattridnode4->type)->type_table[cltype9] == idtype10;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10446);
fatal_exit(1);
}
var11 = NEW_nit__AIssetAttrExpr(&type_nit__AIssetAttrExpr);
{
((void(*)(val* self, val* p0, val* p1, val* p2))(var11->class->vft[COLOR_nit__parser_prod__AIssetAttrExpr__init_aissetattrexpr]))(var11, var_tkwissetnode2, var_pexprnode3, var_tattridnode4); /* init_aissetattrexpr on <var11:AIssetAttrExpr>*/
}
var_pexprnode1 = var11;
var_node_list = var_pexprnode1;
var12 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction841> */
{
var13 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var12); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var13, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction843#action for (self: ReduceAction843, Parser) */
void nit__parser___nit__parser__ReduceAction843___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pexprnode2 /* var pexprnode2: nullable Object */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var_tattridnode3 /* var tattridnode3: nullable Object */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
val* var7 /* : AAttrExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AAttrExpr */;
long var8 /* : Int */;
long var9 /* : Int */;
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
var_pexprnode2 = var_nodearraylist1;
/* <var_pexprnode2:nullable Object> isa nullable AExpr */
cltype = type_nullable__nit__AExpr.color;
idtype = type_nullable__nit__AExpr.id;
if(var_pexprnode2 == NULL) {
var3 = 1;
} else {
if(cltype >= (((long)var_pexprnode2&3)?type_info[((long)var_pexprnode2&3)]:var_pexprnode2->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)var_pexprnode2&3)?type_info[((long)var_pexprnode2&3)]:var_pexprnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10465);
fatal_exit(1);
}
var_tattridnode3 = var_nodearraylist3;
/* <var_tattridnode3:nullable Object> isa nullable TAttrid */
cltype5 = type_nullable__nit__TAttrid.color;
idtype6 = type_nullable__nit__TAttrid.id;
if(var_tattridnode3 == NULL) {
var4 = 1;
} else {
if(cltype5 >= (((long)var_tattridnode3&3)?type_info[((long)var_tattridnode3&3)]:var_tattridnode3->type)->table_size) {
var4 = 0;
} else {
var4 = (((long)var_tattridnode3&3)?type_info[((long)var_tattridnode3&3)]:var_tattridnode3->type)->type_table[cltype5] == idtype6;
}
}
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10467);
fatal_exit(1);
}
var7 = NEW_nit__AAttrExpr(&type_nit__AAttrExpr);
{
((void(*)(val* self, val* p0, val* p1))(var7->class->vft[COLOR_nit__parser_prod__AAttrExpr__init_aattrexpr]))(var7, var_pexprnode2, var_tattridnode3); /* init_aattrexpr on <var7:AAttrExpr>*/
}
var_pexprnode1 = var7;
var_node_list = var_pexprnode1;
var8 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction843> */
{
var9 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var8); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var9, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction844#action for (self: ReduceAction844, Parser) */
void nit__parser___nit__parser__ReduceAction844___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pexprnode2 /* var pexprnode2: nullable Object */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var_tidnode3 /* var tidnode3: nullable Object */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
val* var_pexprsnode4 /* var pexprsnode4: nullable Object */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
val* var10 /* : ACallExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ACallExpr */;
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
var_pexprnode2 = var_nodearraylist1;
/* <var_pexprnode2:nullable Object> isa nullable AExpr */
cltype = type_nullable__nit__AExpr.color;
idtype = type_nullable__nit__AExpr.id;
if(var_pexprnode2 == NULL) {
var3 = 1;
} else {
if(cltype >= (((long)var_pexprnode2&3)?type_info[((long)var_pexprnode2&3)]:var_pexprnode2->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)var_pexprnode2&3)?type_info[((long)var_pexprnode2&3)]:var_pexprnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10485);
fatal_exit(1);
}
var_tidnode3 = var_nodearraylist2;
/* <var_tidnode3:nullable Object> isa nullable TId */
cltype5 = type_nullable__nit__TId.color;
idtype6 = type_nullable__nit__TId.id;
if(var_tidnode3 == NULL) {
var4 = 1;
} else {
if(cltype5 >= (((long)var_tidnode3&3)?type_info[((long)var_tidnode3&3)]:var_tidnode3->type)->table_size) {
var4 = 0;
} else {
var4 = (((long)var_tidnode3&3)?type_info[((long)var_tidnode3&3)]:var_tidnode3->type)->type_table[cltype5] == idtype6;
}
}
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10487);
fatal_exit(1);
}
var_pexprsnode4 = var_nodearraylist3;
/* <var_pexprsnode4:nullable Object> isa nullable AExprs */
cltype8 = type_nullable__nit__AExprs.color;
idtype9 = type_nullable__nit__AExprs.id;
if(var_pexprsnode4 == NULL) {
var7 = 1;
} else {
if(cltype8 >= (((long)var_pexprsnode4&3)?type_info[((long)var_pexprsnode4&3)]:var_pexprsnode4->type)->table_size) {
var7 = 0;
} else {
var7 = (((long)var_pexprsnode4&3)?type_info[((long)var_pexprsnode4&3)]:var_pexprsnode4->type)->type_table[cltype8] == idtype9;
}
}
if (unlikely(!var7)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10489);
fatal_exit(1);
}
var10 = NEW_nit__ACallExpr(&type_nit__ACallExpr);
{
((void(*)(val* self, val* p0, val* p1, val* p2))(var10->class->vft[COLOR_nit__parser_prod__ACallExpr__init_acallexpr]))(var10, var_pexprnode2, var_tidnode3, var_pexprsnode4); /* init_acallexpr on <var10:ACallExpr>*/
}
var_pexprnode1 = var10;
var_node_list = var_pexprnode1;
var11 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction844> */
{
var12 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var11); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var12, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction845#action for (self: ReduceAction845, Parser) */
void nit__parser___nit__parser__ReduceAction845___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pexprnode2 /* var pexprnode2: nullable Object */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var_tidnode3 /* var tidnode3: nullable Object */;
short int var3 /* : Bool */;
int cltype4;
int idtype5;
val* var6 /* : Array[Object] */;
val* var_listnode5 /* var listnode5: Array[Object] */;
val* var7 /* : AListExprs */;
val* var_pexprsnode4 /* var pexprsnode4: nullable AListExprs */;
val* var8 /* : ACallExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ACallExpr */;
long var9 /* : Int */;
long var10 /* : Int */;
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
var_pexprnode2 = var_nodearraylist1;
/* <var_pexprnode2:nullable Object> isa nullable AExpr */
cltype = type_nullable__nit__AExpr.color;
idtype = type_nullable__nit__AExpr.id;
if(var_pexprnode2 == NULL) {
var2 = 1;
} else {
if(cltype >= (((long)var_pexprnode2&3)?type_info[((long)var_pexprnode2&3)]:var_pexprnode2->type)->table_size) {
var2 = 0;
} else {
var2 = (((long)var_pexprnode2&3)?type_info[((long)var_pexprnode2&3)]:var_pexprnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10507);
fatal_exit(1);
}
var_tidnode3 = var_nodearraylist2;
/* <var_tidnode3:nullable Object> isa nullable TId */
cltype4 = type_nullable__nit__TId.color;
idtype5 = type_nullable__nit__TId.id;
if(var_tidnode3 == NULL) {
var3 = 1;
} else {
if(cltype4 >= (((long)var_tidnode3&3)?type_info[((long)var_tidnode3&3)]:var_tidnode3->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)var_tidnode3&3)?type_info[((long)var_tidnode3&3)]:var_tidnode3->type)->type_table[cltype4] == idtype5;
}
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10509);
fatal_exit(1);
}
var6 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
((void(*)(val* self))(var6->class->vft[COLOR_standard__kernel__Object__init]))(var6); /* init on <var6:Array[Object]>*/
}
var_listnode5 = var6;
var7 = NEW_nit__AListExprs(&type_nit__AListExprs);
{
((void(*)(val* self, val* p0))(var7->class->vft[COLOR_nit__parser_prod__AListExprs__init_alistexprs]))(var7, var_listnode5); /* init_alistexprs on <var7:AListExprs>*/
}
var_pexprsnode4 = var7;
var8 = NEW_nit__ACallExpr(&type_nit__ACallExpr);
{
((void(*)(val* self, val* p0, val* p1, val* p2))(var8->class->vft[COLOR_nit__parser_prod__ACallExpr__init_acallexpr]))(var8, var_pexprnode2, var_tidnode3, var_pexprsnode4); /* init_acallexpr on <var8:ACallExpr>*/
}
var_pexprnode1 = var8;
var_node_list = var_pexprnode1;
var9 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction845> */
{
var10 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var9); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var10, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction846#action for (self: ReduceAction846, Parser) */
void nit__parser___nit__parser__ReduceAction846___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_pexprnode2 /* var pexprnode2: nullable Object */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var_tidnode3 /* var tidnode3: nullable Object */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
val* var_pexprsnode4 /* var pexprsnode4: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var11 /* : ACallExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ACallExpr */;
long var12 /* : Int */;
long var13 /* : Int */;
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
var_pexprnode2 = var_nodearraylist1;
/* <var_pexprnode2:nullable Object> isa nullable AExpr */
cltype = type_nullable__nit__AExpr.color;
idtype = type_nullable__nit__AExpr.id;
if(var_pexprnode2 == NULL) {
var4 = 1;
} else {
if(cltype >= (((long)var_pexprnode2&3)?type_info[((long)var_pexprnode2&3)]:var_pexprnode2->type)->table_size) {
var4 = 0;
} else {
var4 = (((long)var_pexprnode2&3)?type_info[((long)var_pexprnode2&3)]:var_pexprnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10533);
fatal_exit(1);
}
var_tidnode3 = var_nodearraylist3;
/* <var_tidnode3:nullable Object> isa nullable TId */
cltype6 = type_nullable__nit__TId.color;
idtype7 = type_nullable__nit__TId.id;
if(var_tidnode3 == NULL) {
var5 = 1;
} else {
if(cltype6 >= (((long)var_tidnode3&3)?type_info[((long)var_tidnode3&3)]:var_tidnode3->type)->table_size) {
var5 = 0;
} else {
var5 = (((long)var_tidnode3&3)?type_info[((long)var_tidnode3&3)]:var_tidnode3->type)->type_table[cltype6] == idtype7;
}
}
if (unlikely(!var5)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10535);
fatal_exit(1);
}
var_pexprsnode4 = var_nodearraylist4;
/* <var_pexprsnode4:nullable Object> isa nullable AExprs */
cltype9 = type_nullable__nit__AExprs.color;
idtype10 = type_nullable__nit__AExprs.id;
if(var_pexprsnode4 == NULL) {
var8 = 1;
} else {
if(cltype9 >= (((long)var_pexprsnode4&3)?type_info[((long)var_pexprsnode4&3)]:var_pexprsnode4->type)->table_size) {
var8 = 0;
} else {
var8 = (((long)var_pexprsnode4&3)?type_info[((long)var_pexprsnode4&3)]:var_pexprsnode4->type)->type_table[cltype9] == idtype10;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10537);
fatal_exit(1);
}
var11 = NEW_nit__ACallExpr(&type_nit__ACallExpr);
{
((void(*)(val* self, val* p0, val* p1, val* p2))(var11->class->vft[COLOR_nit__parser_prod__ACallExpr__init_acallexpr]))(var11, var_pexprnode2, var_tidnode3, var_pexprsnode4); /* init_acallexpr on <var11:ACallExpr>*/
}
var_pexprnode1 = var11;
var_node_list = var_pexprnode1;
var12 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction846> */
{
var13 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var12); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var13, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction847#action for (self: ReduceAction847, Parser) */
void nit__parser___nit__parser__ReduceAction847___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pexprnode2 /* var pexprnode2: nullable Object */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var_tidnode3 /* var tidnode3: nullable Object */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
val* var7 /* : Array[Object] */;
val* var_listnode5 /* var listnode5: Array[Object] */;
val* var8 /* : AListExprs */;
val* var_pexprsnode4 /* var pexprsnode4: nullable AListExprs */;
val* var9 /* : ACallExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ACallExpr */;
long var10 /* : Int */;
long var11 /* : Int */;
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
var_pexprnode2 = var_nodearraylist1;
/* <var_pexprnode2:nullable Object> isa nullable AExpr */
cltype = type_nullable__nit__AExpr.color;
idtype = type_nullable__nit__AExpr.id;
if(var_pexprnode2 == NULL) {
var3 = 1;
} else {
if(cltype >= (((long)var_pexprnode2&3)?type_info[((long)var_pexprnode2&3)]:var_pexprnode2->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)var_pexprnode2&3)?type_info[((long)var_pexprnode2&3)]:var_pexprnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10556);
fatal_exit(1);
}
var_tidnode3 = var_nodearraylist3;
/* <var_tidnode3:nullable Object> isa nullable TId */
cltype5 = type_nullable__nit__TId.color;
idtype6 = type_nullable__nit__TId.id;
if(var_tidnode3 == NULL) {
var4 = 1;
} else {
if(cltype5 >= (((long)var_tidnode3&3)?type_info[((long)var_tidnode3&3)]:var_tidnode3->type)->table_size) {
var4 = 0;
} else {
var4 = (((long)var_tidnode3&3)?type_info[((long)var_tidnode3&3)]:var_tidnode3->type)->type_table[cltype5] == idtype6;
}
}
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10558);
fatal_exit(1);
}
var7 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
((void(*)(val* self))(var7->class->vft[COLOR_standard__kernel__Object__init]))(var7); /* init on <var7:Array[Object]>*/
}
var_listnode5 = var7;
var8 = NEW_nit__AListExprs(&type_nit__AListExprs);
{
((void(*)(val* self, val* p0))(var8->class->vft[COLOR_nit__parser_prod__AListExprs__init_alistexprs]))(var8, var_listnode5); /* init_alistexprs on <var8:AListExprs>*/
}
var_pexprsnode4 = var8;
var9 = NEW_nit__ACallExpr(&type_nit__ACallExpr);
{
((void(*)(val* self, val* p0, val* p1, val* p2))(var9->class->vft[COLOR_nit__parser_prod__ACallExpr__init_acallexpr]))(var9, var_pexprnode2, var_tidnode3, var_pexprsnode4); /* init_acallexpr on <var9:ACallExpr>*/
}
var_pexprnode1 = var9;
var_node_list = var_pexprnode1;
var10 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction847> */
{
var11 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var10); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var11, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction854#action for (self: ReduceAction854, Parser) */
void nit__parser___nit__parser__ReduceAction854___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pexprnode2 /* var pexprnode2: nullable Object */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var_tkwinitnode3 /* var tkwinitnode3: nullable Object */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
val* var_pexprsnode4 /* var pexprsnode4: nullable Object */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
val* var10 /* : AInitExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AInitExpr */;
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
var_pexprnode2 = var_nodearraylist1;
/* <var_pexprnode2:nullable Object> isa nullable AExpr */
cltype = type_nullable__nit__AExpr.color;
idtype = type_nullable__nit__AExpr.id;
if(var_pexprnode2 == NULL) {
var3 = 1;
} else {
if(cltype >= (((long)var_pexprnode2&3)?type_info[((long)var_pexprnode2&3)]:var_pexprnode2->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)var_pexprnode2&3)?type_info[((long)var_pexprnode2&3)]:var_pexprnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10581);
fatal_exit(1);
}
var_tkwinitnode3 = var_nodearraylist2;
/* <var_tkwinitnode3:nullable Object> isa nullable TKwinit */
cltype5 = type_nullable__nit__TKwinit.color;
idtype6 = type_nullable__nit__TKwinit.id;
if(var_tkwinitnode3 == NULL) {
var4 = 1;
} else {
if(cltype5 >= (((long)var_tkwinitnode3&3)?type_info[((long)var_tkwinitnode3&3)]:var_tkwinitnode3->type)->table_size) {
var4 = 0;
} else {
var4 = (((long)var_tkwinitnode3&3)?type_info[((long)var_tkwinitnode3&3)]:var_tkwinitnode3->type)->type_table[cltype5] == idtype6;
}
}
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10583);
fatal_exit(1);
}
var_pexprsnode4 = var_nodearraylist3;
/* <var_pexprsnode4:nullable Object> isa nullable AExprs */
cltype8 = type_nullable__nit__AExprs.color;
idtype9 = type_nullable__nit__AExprs.id;
if(var_pexprsnode4 == NULL) {
var7 = 1;
} else {
if(cltype8 >= (((long)var_pexprsnode4&3)?type_info[((long)var_pexprsnode4&3)]:var_pexprsnode4->type)->table_size) {
var7 = 0;
} else {
var7 = (((long)var_pexprsnode4&3)?type_info[((long)var_pexprsnode4&3)]:var_pexprsnode4->type)->type_table[cltype8] == idtype9;
}
}
if (unlikely(!var7)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10585);
fatal_exit(1);
}
var10 = NEW_nit__AInitExpr(&type_nit__AInitExpr);
{
((void(*)(val* self, val* p0, val* p1, val* p2))(var10->class->vft[COLOR_nit__parser_prod__AInitExpr__init_ainitexpr]))(var10, var_pexprnode2, var_tkwinitnode3, var_pexprsnode4); /* init_ainitexpr on <var10:AInitExpr>*/
}
var_pexprnode1 = var10;
var_node_list = var_pexprnode1;
var11 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction854> */
{
var12 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var11); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var12, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction855#action for (self: ReduceAction855, Parser) */
void nit__parser___nit__parser__ReduceAction855___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pexprnode2 /* var pexprnode2: nullable Object */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var_tkwinitnode3 /* var tkwinitnode3: nullable Object */;
short int var3 /* : Bool */;
int cltype4;
int idtype5;
val* var6 /* : Array[Object] */;
val* var_listnode5 /* var listnode5: Array[Object] */;
val* var7 /* : AListExprs */;
val* var_pexprsnode4 /* var pexprsnode4: nullable AListExprs */;
val* var8 /* : AInitExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AInitExpr */;
long var9 /* : Int */;
long var10 /* : Int */;
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
var_pexprnode2 = var_nodearraylist1;
/* <var_pexprnode2:nullable Object> isa nullable AExpr */
cltype = type_nullable__nit__AExpr.color;
idtype = type_nullable__nit__AExpr.id;
if(var_pexprnode2 == NULL) {
var2 = 1;
} else {
if(cltype >= (((long)var_pexprnode2&3)?type_info[((long)var_pexprnode2&3)]:var_pexprnode2->type)->table_size) {
var2 = 0;
} else {
var2 = (((long)var_pexprnode2&3)?type_info[((long)var_pexprnode2&3)]:var_pexprnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10603);
fatal_exit(1);
}
var_tkwinitnode3 = var_nodearraylist2;
/* <var_tkwinitnode3:nullable Object> isa nullable TKwinit */
cltype4 = type_nullable__nit__TKwinit.color;
idtype5 = type_nullable__nit__TKwinit.id;
if(var_tkwinitnode3 == NULL) {
var3 = 1;
} else {
if(cltype4 >= (((long)var_tkwinitnode3&3)?type_info[((long)var_tkwinitnode3&3)]:var_tkwinitnode3->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)var_tkwinitnode3&3)?type_info[((long)var_tkwinitnode3&3)]:var_tkwinitnode3->type)->type_table[cltype4] == idtype5;
}
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10605);
fatal_exit(1);
}
var6 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
((void(*)(val* self))(var6->class->vft[COLOR_standard__kernel__Object__init]))(var6); /* init on <var6:Array[Object]>*/
}
var_listnode5 = var6;
var7 = NEW_nit__AListExprs(&type_nit__AListExprs);
{
((void(*)(val* self, val* p0))(var7->class->vft[COLOR_nit__parser_prod__AListExprs__init_alistexprs]))(var7, var_listnode5); /* init_alistexprs on <var7:AListExprs>*/
}
var_pexprsnode4 = var7;
var8 = NEW_nit__AInitExpr(&type_nit__AInitExpr);
{
((void(*)(val* self, val* p0, val* p1, val* p2))(var8->class->vft[COLOR_nit__parser_prod__AInitExpr__init_ainitexpr]))(var8, var_pexprnode2, var_tkwinitnode3, var_pexprsnode4); /* init_ainitexpr on <var8:AInitExpr>*/
}
var_pexprnode1 = var8;
var_node_list = var_pexprnode1;
var9 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction855> */
{
var10 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var9); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var10, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction880#action for (self: ReduceAction880, Parser) */
void nit__parser___nit__parser__ReduceAction880___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pexprnode1 /* var pexprnode1: nullable Object */;
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
var_pexprnode1 = var_nodearraylist1;
var_node_list = var_pexprnode1;
var3 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction880> */
{
var4 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var3); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var4, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction881#action for (self: ReduceAction881, Parser) */
void nit__parser___nit__parser__ReduceAction881___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : AImplicitSelfExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AImplicitSelfExpr */;
long var1 /* : Int */;
long var2 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
var = NEW_nit__AImplicitSelfExpr(&type_nit__AImplicitSelfExpr);
{
((void(*)(val* self))(var->class->vft[COLOR_nit__parser_prod__AImplicitSelfExpr__init_aimplicitselfexpr]))(var); /* init_aimplicitselfexpr on <var:AImplicitSelfExpr>*/
}
var_pexprnode1 = var;
var_node_list = var_pexprnode1;
var1 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction881> */
{
var2 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var1); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var2, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction1039#action for (self: ReduceAction1039, Parser) */
void nit__parser___nit__parser__ReduceAction1039___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var1 /* : Array[Object] */;
val* var_listnode2 /* var listnode2: Array[Object] */;
val* var_pimportnode1 /* var pimportnode1: nullable Object */;
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
var_pimportnode1 = var_nodearraylist1;
if (var_pimportnode1 == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (0) {
var3 = ((short int(*)(val* self, val* p0))((((long)var_pimportnode1&3)?class_info[((long)var_pimportnode1&3)]:var_pimportnode1->class)->vft[COLOR_standard__kernel__Object___33d_61d]))(var_pimportnode1, ((val*)NULL)); /* != on <var_pimportnode1:nullable Object>*/
var2 = var3;
}
if (var2){
{
((void(*)(val* self, val* p0))(var_listnode2->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_listnode2, var_pimportnode1); /* add on <var_listnode2:Array[Object]>*/
}
} else {
}
var_node_list = var_listnode2;
var4 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction1039> */
{
var5 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var4); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var5, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction1040#action for (self: ReduceAction1040, Parser) */
void nit__parser___nit__parser__ReduceAction1040___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var2 /* : Array[Object] */;
val* var_listnode3 /* var listnode3: Array[Object] */;
val* var_listnode1 /* var listnode1: nullable Object */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var_pimportnode2 /* var pimportnode2: nullable Object */;
val* var4 /* : Array[Object] */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10666);
fatal_exit(1);
}
var_pimportnode2 = var_nodearraylist2;
{
var4 = ((val*(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__parser_work__ReduceAction__concat]))(self, var_listnode3, var_listnode1); /* concat on <self:ReduceAction1040>*/
}
var_listnode3 = var4;
if (var_pimportnode2 == NULL) {
var5 = 0; /* is null */
} else {
var5 = 1; /* arg is null and recv is not */
}
if (0) {
var6 = ((short int(*)(val* self, val* p0))((((long)var_pimportnode2&3)?class_info[((long)var_pimportnode2&3)]:var_pimportnode2->class)->vft[COLOR_standard__kernel__Object___33d_61d]))(var_pimportnode2, ((val*)NULL)); /* != on <var_pimportnode2:nullable Object>*/
var5 = var6;
}
if (var5){
{
((void(*)(val* self, val* p0))(var_listnode3->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_listnode3, var_pimportnode2); /* add on <var_listnode3:Array[Object]>*/
}
} else {
}
var_node_list = var_listnode3;
var7 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction1040> */
{
var8 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var7); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var8, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction1041#action for (self: ReduceAction1041, Parser) */
void nit__parser___nit__parser__ReduceAction1041___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var1 /* : Array[Object] */;
val* var_listnode2 /* var listnode2: Array[Object] */;
val* var_pexterncodeblocknode1 /* var pexterncodeblocknode1: nullable Object */;
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
var_pexterncodeblocknode1 = var_nodearraylist1;
if (var_pexterncodeblocknode1 == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (0) {
var3 = ((short int(*)(val* self, val* p0))((((long)var_pexterncodeblocknode1&3)?class_info[((long)var_pexterncodeblocknode1&3)]:var_pexterncodeblocknode1->class)->vft[COLOR_standard__kernel__Object___33d_61d]))(var_pexterncodeblocknode1, ((val*)NULL)); /* != on <var_pexterncodeblocknode1:nullable Object>*/
var2 = var3;
}
if (var2){
{
((void(*)(val* self, val* p0))(var_listnode2->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_listnode2, var_pexterncodeblocknode1); /* add on <var_listnode2:Array[Object]>*/
}
} else {
}
var_node_list = var_listnode2;
var4 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction1041> */
{
var5 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var4); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var5, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction1042#action for (self: ReduceAction1042, Parser) */
void nit__parser___nit__parser__ReduceAction1042___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var2 /* : Array[Object] */;
val* var_listnode3 /* var listnode3: Array[Object] */;
val* var_listnode1 /* var listnode1: nullable Object */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var_pexterncodeblocknode2 /* var pexterncodeblocknode2: nullable Object */;
val* var4 /* : Array[Object] */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10700);
fatal_exit(1);
}
var_pexterncodeblocknode2 = var_nodearraylist2;
{
var4 = ((val*(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__parser_work__ReduceAction__concat]))(self, var_listnode3, var_listnode1); /* concat on <self:ReduceAction1042>*/
}
var_listnode3 = var4;
if (var_pexterncodeblocknode2 == NULL) {
var5 = 0; /* is null */
} else {
var5 = 1; /* arg is null and recv is not */
}
if (0) {
var6 = ((short int(*)(val* self, val* p0))((((long)var_pexterncodeblocknode2&3)?class_info[((long)var_pexterncodeblocknode2&3)]:var_pexterncodeblocknode2->class)->vft[COLOR_standard__kernel__Object___33d_61d]))(var_pexterncodeblocknode2, ((val*)NULL)); /* != on <var_pexterncodeblocknode2:nullable Object>*/
var5 = var6;
}
if (var5){
{
((void(*)(val* self, val* p0))(var_listnode3->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_listnode3, var_pexterncodeblocknode2); /* add on <var_listnode3:Array[Object]>*/
}
} else {
}
var_node_list = var_listnode3;
var7 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction1042> */
{
var8 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var7); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var8, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction1043#action for (self: ReduceAction1043, Parser) */
void nit__parser___nit__parser__ReduceAction1043___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var1 /* : Array[Object] */;
val* var_listnode2 /* var listnode2: Array[Object] */;
val* var_pclassdefnode1 /* var pclassdefnode1: nullable Object */;
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
var_pclassdefnode1 = var_nodearraylist1;
if (var_pclassdefnode1 == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (0) {
var3 = ((short int(*)(val* self, val* p0))((((long)var_pclassdefnode1&3)?class_info[((long)var_pclassdefnode1&3)]:var_pclassdefnode1->class)->vft[COLOR_standard__kernel__Object___33d_61d]))(var_pclassdefnode1, ((val*)NULL)); /* != on <var_pclassdefnode1:nullable Object>*/
var2 = var3;
}
if (var2){
{
((void(*)(val* self, val* p0))(var_listnode2->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_listnode2, var_pclassdefnode1); /* add on <var_listnode2:Array[Object]>*/
}
} else {
}
var_node_list = var_listnode2;
var4 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction1043> */
{
var5 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var4); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var5, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction1044#action for (self: ReduceAction1044, Parser) */
void nit__parser___nit__parser__ReduceAction1044___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var2 /* : Array[Object] */;
val* var_listnode3 /* var listnode3: Array[Object] */;
val* var_listnode1 /* var listnode1: nullable Object */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var_pclassdefnode2 /* var pclassdefnode2: nullable Object */;
val* var4 /* : Array[Object] */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10734);
fatal_exit(1);
}
var_pclassdefnode2 = var_nodearraylist2;
{
var4 = ((val*(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__parser_work__ReduceAction__concat]))(self, var_listnode3, var_listnode1); /* concat on <self:ReduceAction1044>*/
}
var_listnode3 = var4;
if (var_pclassdefnode2 == NULL) {
var5 = 0; /* is null */
} else {
var5 = 1; /* arg is null and recv is not */
}
if (0) {
var6 = ((short int(*)(val* self, val* p0))((((long)var_pclassdefnode2&3)?class_info[((long)var_pclassdefnode2&3)]:var_pclassdefnode2->class)->vft[COLOR_standard__kernel__Object___33d_61d]))(var_pclassdefnode2, ((val*)NULL)); /* != on <var_pclassdefnode2:nullable Object>*/
var5 = var6;
}
if (var5){
{
((void(*)(val* self, val* p0))(var_listnode3->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_listnode3, var_pclassdefnode2); /* add on <var_listnode3:Array[Object]>*/
}
} else {
}
var_node_list = var_listnode3;
var7 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction1044> */
{
var8 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var7); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var8, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction1045#action for (self: ReduceAction1045, Parser) */
void nit__parser___nit__parser__ReduceAction1045___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var1 /* : Array[Object] */;
val* var_listnode2 /* var listnode2: Array[Object] */;
val* var_pformaldefnode1 /* var pformaldefnode1: nullable Object */;
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
var_pformaldefnode1 = var_nodearraylist1;
if (var_pformaldefnode1 == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (0) {
var3 = ((short int(*)(val* self, val* p0))((((long)var_pformaldefnode1&3)?class_info[((long)var_pformaldefnode1&3)]:var_pformaldefnode1->class)->vft[COLOR_standard__kernel__Object___33d_61d]))(var_pformaldefnode1, ((val*)NULL)); /* != on <var_pformaldefnode1:nullable Object>*/
var2 = var3;
}
if (var2){
{
((void(*)(val* self, val* p0))(var_listnode2->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_listnode2, var_pformaldefnode1); /* add on <var_listnode2:Array[Object]>*/
}
} else {
}
var_node_list = var_listnode2;
var4 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction1045> */
{
var5 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var4); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var5, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction1046#action for (self: ReduceAction1046, Parser) */
void nit__parser___nit__parser__ReduceAction1046___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var2 /* : Array[Object] */;
val* var_listnode3 /* var listnode3: Array[Object] */;
val* var_listnode1 /* var listnode1: nullable Object */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var_pformaldefnode2 /* var pformaldefnode2: nullable Object */;
val* var4 /* : Array[Object] */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10768);
fatal_exit(1);
}
var_pformaldefnode2 = var_nodearraylist2;
{
var4 = ((val*(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__parser_work__ReduceAction__concat]))(self, var_listnode3, var_listnode1); /* concat on <self:ReduceAction1046>*/
}
var_listnode3 = var4;
if (var_pformaldefnode2 == NULL) {
var5 = 0; /* is null */
} else {
var5 = 1; /* arg is null and recv is not */
}
if (0) {
var6 = ((short int(*)(val* self, val* p0))((((long)var_pformaldefnode2&3)?class_info[((long)var_pformaldefnode2&3)]:var_pformaldefnode2->class)->vft[COLOR_standard__kernel__Object___33d_61d]))(var_pformaldefnode2, ((val*)NULL)); /* != on <var_pformaldefnode2:nullable Object>*/
var5 = var6;
}
if (var5){
{
((void(*)(val* self, val* p0))(var_listnode3->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_listnode3, var_pformaldefnode2); /* add on <var_listnode3:Array[Object]>*/
}
} else {
}
var_node_list = var_listnode3;
var7 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction1046> */
{
var8 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var7); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var8, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction1048#action for (self: ReduceAction1048, Parser) */
void nit__parser___nit__parser__ReduceAction1048___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var2 /* : Array[Object] */;
val* var_listnode3 /* var listnode3: Array[Object] */;
val* var_listnode1 /* var listnode1: nullable Object */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var_ppropdefnode2 /* var ppropdefnode2: nullable Object */;
val* var4 /* : Array[Object] */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10787);
fatal_exit(1);
}
var_ppropdefnode2 = var_nodearraylist2;
{
var4 = ((val*(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__parser_work__ReduceAction__concat]))(self, var_listnode3, var_listnode1); /* concat on <self:ReduceAction1048>*/
}
var_listnode3 = var4;
if (var_ppropdefnode2 == NULL) {
var5 = 0; /* is null */
} else {
var5 = 1; /* arg is null and recv is not */
}
if (0) {
var6 = ((short int(*)(val* self, val* p0))((((long)var_ppropdefnode2&3)?class_info[((long)var_ppropdefnode2&3)]:var_ppropdefnode2->class)->vft[COLOR_standard__kernel__Object___33d_61d]))(var_ppropdefnode2, ((val*)NULL)); /* != on <var_ppropdefnode2:nullable Object>*/
var5 = var6;
}
if (var5){
{
((void(*)(val* self, val* p0))(var_listnode3->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_listnode3, var_ppropdefnode2); /* add on <var_listnode3:Array[Object]>*/
}
} else {
}
var_node_list = var_listnode3;
var7 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction1048> */
{
var8 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var7); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var8, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction1049#action for (self: ReduceAction1049, Parser) */
void nit__parser___nit__parser__ReduceAction1049___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var1 /* : Array[Object] */;
val* var_listnode2 /* var listnode2: Array[Object] */;
val* var_pparamnode1 /* var pparamnode1: nullable Object */;
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
var_pparamnode1 = var_nodearraylist1;
if (var_pparamnode1 == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (0) {
var3 = ((short int(*)(val* self, val* p0))((((long)var_pparamnode1&3)?class_info[((long)var_pparamnode1&3)]:var_pparamnode1->class)->vft[COLOR_standard__kernel__Object___33d_61d]))(var_pparamnode1, ((val*)NULL)); /* != on <var_pparamnode1:nullable Object>*/
var2 = var3;
}
if (var2){
{
((void(*)(val* self, val* p0))(var_listnode2->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_listnode2, var_pparamnode1); /* add on <var_listnode2:Array[Object]>*/
}
} else {
}
var_node_list = var_listnode2;
var4 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction1049> */
{
var5 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var4); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var5, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction1050#action for (self: ReduceAction1050, Parser) */
void nit__parser___nit__parser__ReduceAction1050___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var2 /* : Array[Object] */;
val* var_listnode3 /* var listnode3: Array[Object] */;
val* var_listnode1 /* var listnode1: nullable Object */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var_pparamnode2 /* var pparamnode2: nullable Object */;
val* var4 /* : Array[Object] */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10821);
fatal_exit(1);
}
var_pparamnode2 = var_nodearraylist2;
{
var4 = ((val*(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__parser_work__ReduceAction__concat]))(self, var_listnode3, var_listnode1); /* concat on <self:ReduceAction1050>*/
}
var_listnode3 = var4;
if (var_pparamnode2 == NULL) {
var5 = 0; /* is null */
} else {
var5 = 1; /* arg is null and recv is not */
}
if (0) {
var6 = ((short int(*)(val* self, val* p0))((((long)var_pparamnode2&3)?class_info[((long)var_pparamnode2&3)]:var_pparamnode2->class)->vft[COLOR_standard__kernel__Object___33d_61d]))(var_pparamnode2, ((val*)NULL)); /* != on <var_pparamnode2:nullable Object>*/
var5 = var6;
}
if (var5){
{
((void(*)(val* self, val* p0))(var_listnode3->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_listnode3, var_pparamnode2); /* add on <var_listnode3:Array[Object]>*/
}
} else {
}
var_node_list = var_listnode3;
var7 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction1050> */
{
var8 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var7); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var8, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction1051#action for (self: ReduceAction1051, Parser) */
void nit__parser___nit__parser__ReduceAction1051___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var1 /* : Array[Object] */;
val* var_listnode2 /* var listnode2: Array[Object] */;
val* var_pexterncallnode1 /* var pexterncallnode1: nullable Object */;
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
var_pexterncallnode1 = var_nodearraylist1;
if (var_pexterncallnode1 == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (0) {
var3 = ((short int(*)(val* self, val* p0))((((long)var_pexterncallnode1&3)?class_info[((long)var_pexterncallnode1&3)]:var_pexterncallnode1->class)->vft[COLOR_standard__kernel__Object___33d_61d]))(var_pexterncallnode1, ((val*)NULL)); /* != on <var_pexterncallnode1:nullable Object>*/
var2 = var3;
}
if (var2){
{
((void(*)(val* self, val* p0))(var_listnode2->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_listnode2, var_pexterncallnode1); /* add on <var_listnode2:Array[Object]>*/
}
} else {
}
var_node_list = var_listnode2;
var4 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction1051> */
{
var5 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var4); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var5, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction1052#action for (self: ReduceAction1052, Parser) */
void nit__parser___nit__parser__ReduceAction1052___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var2 /* : Array[Object] */;
val* var_listnode3 /* var listnode3: Array[Object] */;
val* var_listnode1 /* var listnode1: nullable Object */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var_pexterncallnode2 /* var pexterncallnode2: nullable Object */;
val* var4 /* : Array[Object] */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10855);
fatal_exit(1);
}
var_pexterncallnode2 = var_nodearraylist2;
{
var4 = ((val*(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__parser_work__ReduceAction__concat]))(self, var_listnode3, var_listnode1); /* concat on <self:ReduceAction1052>*/
}
var_listnode3 = var4;
if (var_pexterncallnode2 == NULL) {
var5 = 0; /* is null */
} else {
var5 = 1; /* arg is null and recv is not */
}
if (0) {
var6 = ((short int(*)(val* self, val* p0))((((long)var_pexterncallnode2&3)?class_info[((long)var_pexterncallnode2&3)]:var_pexterncallnode2->class)->vft[COLOR_standard__kernel__Object___33d_61d]))(var_pexterncallnode2, ((val*)NULL)); /* != on <var_pexterncallnode2:nullable Object>*/
var5 = var6;
}
if (var5){
{
((void(*)(val* self, val* p0))(var_listnode3->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_listnode3, var_pexterncallnode2); /* add on <var_listnode3:Array[Object]>*/
}
} else {
}
var_node_list = var_listnode3;
var7 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction1052> */
{
var8 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var7); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var8, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction1054#action for (self: ReduceAction1054, Parser) */
void nit__parser___nit__parser__ReduceAction1054___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var2 /* : Array[Object] */;
val* var_listnode3 /* var listnode3: Array[Object] */;
val* var_listnode1 /* var listnode1: nullable Object */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var_ptypenode2 /* var ptypenode2: nullable Object */;
val* var4 /* : Array[Object] */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10874);
fatal_exit(1);
}
var_ptypenode2 = var_nodearraylist2;
{
var4 = ((val*(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__parser_work__ReduceAction__concat]))(self, var_listnode3, var_listnode1); /* concat on <self:ReduceAction1054>*/
}
var_listnode3 = var4;
if (var_ptypenode2 == NULL) {
var5 = 0; /* is null */
} else {
var5 = 1; /* arg is null and recv is not */
}
if (0) {
var6 = ((short int(*)(val* self, val* p0))((((long)var_ptypenode2&3)?class_info[((long)var_ptypenode2&3)]:var_ptypenode2->class)->vft[COLOR_standard__kernel__Object___33d_61d]))(var_ptypenode2, ((val*)NULL)); /* != on <var_ptypenode2:nullable Object>*/
var5 = var6;
}
if (var5){
{
((void(*)(val* self, val* p0))(var_listnode3->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_listnode3, var_ptypenode2); /* add on <var_listnode3:Array[Object]>*/
}
} else {
}
var_node_list = var_listnode3;
var7 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction1054> */
{
var8 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var7); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var8, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction1056#action for (self: ReduceAction1056, Parser) */
void nit__parser___nit__parser__ReduceAction1056___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var2 /* : Array[Object] */;
val* var_listnode3 /* var listnode3: Array[Object] */;
val* var_listnode1 /* var listnode1: nullable Object */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var_pexprnode2 /* var pexprnode2: nullable Object */;
val* var4 /* : Array[Object] */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10893);
fatal_exit(1);
}
var_pexprnode2 = var_nodearraylist2;
{
var4 = ((val*(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__parser_work__ReduceAction__concat]))(self, var_listnode3, var_listnode1); /* concat on <self:ReduceAction1056>*/
}
var_listnode3 = var4;
if (var_pexprnode2 == NULL) {
var5 = 0; /* is null */
} else {
var5 = 1; /* arg is null and recv is not */
}
if (0) {
var6 = ((short int(*)(val* self, val* p0))((((long)var_pexprnode2&3)?class_info[((long)var_pexprnode2&3)]:var_pexprnode2->class)->vft[COLOR_standard__kernel__Object___33d_61d]))(var_pexprnode2, ((val*)NULL)); /* != on <var_pexprnode2:nullable Object>*/
var5 = var6;
}
if (var5){
{
((void(*)(val* self, val* p0))(var_listnode3->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_listnode3, var_pexprnode2); /* add on <var_listnode3:Array[Object]>*/
}
} else {
}
var_node_list = var_listnode3;
var7 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction1056> */
{
var8 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var7); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var8, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction1062#action for (self: ReduceAction1062, Parser) */
void nit__parser___nit__parser__ReduceAction1062___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var2 /* : Array[Object] */;
val* var_listnode3 /* var listnode3: Array[Object] */;
val* var_listnode1 /* var listnode1: nullable Object */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var_listnode2 /* var listnode2: nullable Object */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
val* var7 /* : Array[Object] */;
val* var8 /* : Array[Object] */;
long var9 /* : Int */;
long var10 /* : Int */;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10912);
fatal_exit(1);
}
var_listnode2 = var_nodearraylist2;
/* <var_listnode2:nullable Object> isa Array[Object] */
cltype5 = type_standard__Array__standard__Object.color;
idtype6 = type_standard__Array__standard__Object.id;
if(var_listnode2 == NULL) {
var4 = 0;
} else {
if(cltype5 >= (((long)var_listnode2&3)?type_info[((long)var_listnode2&3)]:var_listnode2->type)->table_size) {
var4 = 0;
} else {
var4 = (((long)var_listnode2&3)?type_info[((long)var_listnode2&3)]:var_listnode2->type)->type_table[cltype5] == idtype6;
}
}
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10914);
fatal_exit(1);
}
{
var7 = ((val*(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__parser_work__ReduceAction__concat]))(self, var_listnode3, var_listnode1); /* concat on <self:ReduceAction1062>*/
}
var_listnode3 = var7;
{
var8 = ((val*(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__parser_work__ReduceAction__concat]))(self, var_listnode3, var_listnode2); /* concat on <self:ReduceAction1062>*/
}
var_listnode3 = var8;
var_node_list = var_listnode3;
var9 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction1062> */
{
var10 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var9); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var10, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction1064#action for (self: ReduceAction1064, Parser) */
void nit__parser___nit__parser__ReduceAction1064___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var2 /* : Array[Object] */;
val* var_listnode3 /* var listnode3: Array[Object] */;
val* var_listnode1 /* var listnode1: nullable Object */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var_pannotationnode2 /* var pannotationnode2: nullable Object */;
val* var4 /* : Array[Object] */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10930);
fatal_exit(1);
}
var_pannotationnode2 = var_nodearraylist2;
{
var4 = ((val*(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__parser_work__ReduceAction__concat]))(self, var_listnode3, var_listnode1); /* concat on <self:ReduceAction1064>*/
}
var_listnode3 = var4;
if (var_pannotationnode2 == NULL) {
var5 = 0; /* is null */
} else {
var5 = 1; /* arg is null and recv is not */
}
if (0) {
var6 = ((short int(*)(val* self, val* p0))((((long)var_pannotationnode2&3)?class_info[((long)var_pannotationnode2&3)]:var_pannotationnode2->class)->vft[COLOR_standard__kernel__Object___33d_61d]))(var_pannotationnode2, ((val*)NULL)); /* != on <var_pannotationnode2:nullable Object>*/
var5 = var6;
}
if (var5){
{
((void(*)(val* self, val* p0))(var_listnode3->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_listnode3, var_pannotationnode2); /* add on <var_listnode3:Array[Object]>*/
}
} else {
}
var_node_list = var_listnode3;
var7 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction1064> */
{
var8 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var7); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var8, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction1072#action for (self: ReduceAction1072, Parser) */
void nit__parser___nit__parser__ReduceAction1072___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var2 /* : Array[Object] */;
val* var_listnode3 /* var listnode3: Array[Object] */;
val* var_listnode1 /* var listnode1: nullable Object */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var_tidnode2 /* var tidnode2: nullable Object */;
val* var4 /* : Array[Object] */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10949);
fatal_exit(1);
}
var_tidnode2 = var_nodearraylist2;
{
var4 = ((val*(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__parser_work__ReduceAction__concat]))(self, var_listnode3, var_listnode1); /* concat on <self:ReduceAction1072>*/
}
var_listnode3 = var4;
if (var_tidnode2 == NULL) {
var5 = 0; /* is null */
} else {
var5 = 1; /* arg is null and recv is not */
}
if (0) {
var6 = ((short int(*)(val* self, val* p0))((((long)var_tidnode2&3)?class_info[((long)var_tidnode2&3)]:var_tidnode2->class)->vft[COLOR_standard__kernel__Object___33d_61d]))(var_tidnode2, ((val*)NULL)); /* != on <var_tidnode2:nullable Object>*/
var5 = var6;
}
if (var5){
{
((void(*)(val* self, val* p0))(var_listnode3->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_listnode3, var_tidnode2); /* add on <var_listnode3:Array[Object]>*/
}
} else {
}
var_node_list = var_listnode3;
var7 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction1072> */
{
var8 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var7); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var8, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction1073#action for (self: ReduceAction1073, Parser) */
void nit__parser___nit__parser__ReduceAction1073___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var1 /* : Array[Object] */;
val* var_listnode2 /* var listnode2: Array[Object] */;
val* var_tcommentnode1 /* var tcommentnode1: nullable Object */;
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
var_tcommentnode1 = var_nodearraylist1;
if (var_tcommentnode1 == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (0) {
var3 = ((short int(*)(val* self, val* p0))((((long)var_tcommentnode1&3)?class_info[((long)var_tcommentnode1&3)]:var_tcommentnode1->class)->vft[COLOR_standard__kernel__Object___33d_61d]))(var_tcommentnode1, ((val*)NULL)); /* != on <var_tcommentnode1:nullable Object>*/
var2 = var3;
}
if (var2){
{
((void(*)(val* self, val* p0))(var_listnode2->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_listnode2, var_tcommentnode1); /* add on <var_listnode2:Array[Object]>*/
}
} else {
}
var_node_list = var_listnode2;
var4 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction1073> */
{
var5 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var4); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var5, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction1074#action for (self: ReduceAction1074, Parser) */
void nit__parser___nit__parser__ReduceAction1074___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var2 /* : Array[Object] */;
val* var_listnode3 /* var listnode3: Array[Object] */;
val* var_listnode1 /* var listnode1: nullable Object */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var_tcommentnode2 /* var tcommentnode2: nullable Object */;
val* var4 /* : Array[Object] */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10983);
fatal_exit(1);
}
var_tcommentnode2 = var_nodearraylist2;
{
var4 = ((val*(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__parser_work__ReduceAction__concat]))(self, var_listnode3, var_listnode1); /* concat on <self:ReduceAction1074>*/
}
var_listnode3 = var4;
if (var_tcommentnode2 == NULL) {
var5 = 0; /* is null */
} else {
var5 = 1; /* arg is null and recv is not */
}
if (0) {
var6 = ((short int(*)(val* self, val* p0))((((long)var_tcommentnode2&3)?class_info[((long)var_tcommentnode2&3)]:var_tcommentnode2->class)->vft[COLOR_standard__kernel__Object___33d_61d]))(var_tcommentnode2, ((val*)NULL)); /* != on <var_tcommentnode2:nullable Object>*/
var5 = var6;
}
if (var5){
{
((void(*)(val* self, val* p0))(var_listnode3->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_listnode3, var_tcommentnode2); /* add on <var_listnode3:Array[Object]>*/
}
} else {
}
var_node_list = var_listnode3;
var7 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction1074> */
{
var8 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var7); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var8, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction1075#action for (self: ReduceAction1075, Parser) */
void nit__parser___nit__parser__ReduceAction1075___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var1 /* : Array[Object] */;
val* var_listnode2 /* var listnode2: Array[Object] */;
val* var_teolnode1 /* var teolnode1: nullable Object */;
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
var_teolnode1 = var_nodearraylist1;
if (var_teolnode1 == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (0) {
var3 = ((short int(*)(val* self, val* p0))((((long)var_teolnode1&3)?class_info[((long)var_teolnode1&3)]:var_teolnode1->class)->vft[COLOR_standard__kernel__Object___33d_61d]))(var_teolnode1, ((val*)NULL)); /* != on <var_teolnode1:nullable Object>*/
var2 = var3;
}
if (var2){
{
((void(*)(val* self, val* p0))(var_listnode2->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_listnode2, var_teolnode1); /* add on <var_listnode2:Array[Object]>*/
}
} else {
}
var_node_list = var_listnode2;
var4 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction1075> */
{
var5 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var4); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var5, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction1076#action for (self: ReduceAction1076, Parser) */
void nit__parser___nit__parser__ReduceAction1076___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var2 /* : Array[Object] */;
val* var_listnode3 /* var listnode3: Array[Object] */;
val* var_listnode1 /* var listnode1: nullable Object */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var_teolnode2 /* var teolnode2: nullable Object */;
val* var4 /* : Array[Object] */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 11017);
fatal_exit(1);
}
var_teolnode2 = var_nodearraylist2;
{
var4 = ((val*(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__parser_work__ReduceAction__concat]))(self, var_listnode3, var_listnode1); /* concat on <self:ReduceAction1076>*/
}
var_listnode3 = var4;
if (var_teolnode2 == NULL) {
var5 = 0; /* is null */
} else {
var5 = 1; /* arg is null and recv is not */
}
if (0) {
var6 = ((short int(*)(val* self, val* p0))((((long)var_teolnode2&3)?class_info[((long)var_teolnode2&3)]:var_teolnode2->class)->vft[COLOR_standard__kernel__Object___33d_61d]))(var_teolnode2, ((val*)NULL)); /* != on <var_teolnode2:nullable Object>*/
var5 = var6;
}
if (var5){
{
((void(*)(val* self, val* p0))(var_listnode3->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_listnode3, var_teolnode2); /* add on <var_listnode3:Array[Object]>*/
}
} else {
}
var_node_list = var_listnode3;
var7 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction1076> */
{
var8 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var7); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var8, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
