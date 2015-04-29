#include "nit__parser.sep.0.h"
/* method parser#ReduceAction298#action for (self: ReduceAction298, Parser) */
void nit__parser___nit__parser__ReduceAction298___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_tpipenode3 /* var tpipenode3: nullable Object */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
val* var_pexprnode4 /* var pexprnode4: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var11 /* : APipeExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable APipeExpr */;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 7569);
fatal_exit(1);
}
var_tpipenode3 = var_nodearraylist2;
/* <var_tpipenode3:nullable Object> isa nullable TPipe */
cltype6 = type_nullable__nit__TPipe.color;
idtype7 = type_nullable__nit__TPipe.id;
if(var_tpipenode3 == NULL) {
var5 = 1;
} else {
if(cltype6 >= (((long)var_tpipenode3&3)?type_info[((long)var_tpipenode3&3)]:var_tpipenode3->type)->table_size) {
var5 = 0;
} else {
var5 = (((long)var_tpipenode3&3)?type_info[((long)var_tpipenode3&3)]:var_tpipenode3->type)->type_table[cltype6] == idtype7;
}
}
if (unlikely(!var5)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 7571);
fatal_exit(1);
}
var_pexprnode4 = var_nodearraylist4;
/* <var_pexprnode4:nullable Object> isa nullable AExpr */
cltype9 = type_nullable__nit__AExpr.color;
idtype10 = type_nullable__nit__AExpr.id;
if(var_pexprnode4 == NULL) {
var8 = 1;
} else {
if(cltype9 >= (((long)var_pexprnode4&3)?type_info[((long)var_pexprnode4&3)]:var_pexprnode4->type)->table_size) {
var8 = 0;
} else {
var8 = (((long)var_pexprnode4&3)?type_info[((long)var_pexprnode4&3)]:var_pexprnode4->type)->type_table[cltype9] == idtype10;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 7573);
fatal_exit(1);
}
var11 = NEW_nit__APipeExpr(&type_nit__APipeExpr);
{
((void(*)(val* self, val* p0, val* p1, val* p2))(var11->class->vft[COLOR_nit__parser_prod__APipeExpr__init_apipeexpr]))(var11, var_pexprnode2, var_tpipenode3, var_pexprnode4); /* init_apipeexpr on <var11:APipeExpr>*/
}
var_pexprnode1 = var11;
var_node_list = var_pexprnode1;
var12 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction298> */
{
var13 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var12); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var13, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction300#action for (self: ReduceAction300, Parser) */
void nit__parser___nit__parser__ReduceAction300___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_tcaretnode3 /* var tcaretnode3: nullable Object */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
val* var_pexprnode4 /* var pexprnode4: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var11 /* : ACaretExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ACaretExpr */;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 7593);
fatal_exit(1);
}
var_tcaretnode3 = var_nodearraylist2;
/* <var_tcaretnode3:nullable Object> isa nullable TCaret */
cltype6 = type_nullable__nit__TCaret.color;
idtype7 = type_nullable__nit__TCaret.id;
if(var_tcaretnode3 == NULL) {
var5 = 1;
} else {
if(cltype6 >= (((long)var_tcaretnode3&3)?type_info[((long)var_tcaretnode3&3)]:var_tcaretnode3->type)->table_size) {
var5 = 0;
} else {
var5 = (((long)var_tcaretnode3&3)?type_info[((long)var_tcaretnode3&3)]:var_tcaretnode3->type)->type_table[cltype6] == idtype7;
}
}
if (unlikely(!var5)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 7595);
fatal_exit(1);
}
var_pexprnode4 = var_nodearraylist4;
/* <var_pexprnode4:nullable Object> isa nullable AExpr */
cltype9 = type_nullable__nit__AExpr.color;
idtype10 = type_nullable__nit__AExpr.id;
if(var_pexprnode4 == NULL) {
var8 = 1;
} else {
if(cltype9 >= (((long)var_pexprnode4&3)?type_info[((long)var_pexprnode4&3)]:var_pexprnode4->type)->table_size) {
var8 = 0;
} else {
var8 = (((long)var_pexprnode4&3)?type_info[((long)var_pexprnode4&3)]:var_pexprnode4->type)->type_table[cltype9] == idtype10;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 7597);
fatal_exit(1);
}
var11 = NEW_nit__ACaretExpr(&type_nit__ACaretExpr);
{
((void(*)(val* self, val* p0, val* p1, val* p2))(var11->class->vft[COLOR_nit__parser_prod__ACaretExpr__init_acaretexpr]))(var11, var_pexprnode2, var_tcaretnode3, var_pexprnode4); /* init_acaretexpr on <var11:ACaretExpr>*/
}
var_pexprnode1 = var11;
var_node_list = var_pexprnode1;
var12 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction300> */
{
var13 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var12); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var13, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction302#action for (self: ReduceAction302, Parser) */
void nit__parser___nit__parser__ReduceAction302___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_tampnode3 /* var tampnode3: nullable Object */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
val* var_pexprnode4 /* var pexprnode4: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var11 /* : AAmpExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AAmpExpr */;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 7617);
fatal_exit(1);
}
var_tampnode3 = var_nodearraylist2;
/* <var_tampnode3:nullable Object> isa nullable TAmp */
cltype6 = type_nullable__nit__TAmp.color;
idtype7 = type_nullable__nit__TAmp.id;
if(var_tampnode3 == NULL) {
var5 = 1;
} else {
if(cltype6 >= (((long)var_tampnode3&3)?type_info[((long)var_tampnode3&3)]:var_tampnode3->type)->table_size) {
var5 = 0;
} else {
var5 = (((long)var_tampnode3&3)?type_info[((long)var_tampnode3&3)]:var_tampnode3->type)->type_table[cltype6] == idtype7;
}
}
if (unlikely(!var5)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 7619);
fatal_exit(1);
}
var_pexprnode4 = var_nodearraylist4;
/* <var_pexprnode4:nullable Object> isa nullable AExpr */
cltype9 = type_nullable__nit__AExpr.color;
idtype10 = type_nullable__nit__AExpr.id;
if(var_pexprnode4 == NULL) {
var8 = 1;
} else {
if(cltype9 >= (((long)var_pexprnode4&3)?type_info[((long)var_pexprnode4&3)]:var_pexprnode4->type)->table_size) {
var8 = 0;
} else {
var8 = (((long)var_pexprnode4&3)?type_info[((long)var_pexprnode4&3)]:var_pexprnode4->type)->type_table[cltype9] == idtype10;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 7621);
fatal_exit(1);
}
var11 = NEW_nit__AAmpExpr(&type_nit__AAmpExpr);
{
((void(*)(val* self, val* p0, val* p1, val* p2))(var11->class->vft[COLOR_nit__parser_prod__AAmpExpr__init_aampexpr]))(var11, var_pexprnode2, var_tampnode3, var_pexprnode4); /* init_aampexpr on <var11:AAmpExpr>*/
}
var_pexprnode1 = var11;
var_node_list = var_pexprnode1;
var12 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction302> */
{
var13 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var12); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var13, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction304#action for (self: ReduceAction304, Parser) */
void nit__parser___nit__parser__ReduceAction304___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_tllnode3 /* var tllnode3: nullable Object */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
val* var_pexprnode4 /* var pexprnode4: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var11 /* : ALlExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ALlExpr */;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 7641);
fatal_exit(1);
}
var_tllnode3 = var_nodearraylist2;
/* <var_tllnode3:nullable Object> isa nullable TLl */
cltype6 = type_nullable__nit__TLl.color;
idtype7 = type_nullable__nit__TLl.id;
if(var_tllnode3 == NULL) {
var5 = 1;
} else {
if(cltype6 >= (((long)var_tllnode3&3)?type_info[((long)var_tllnode3&3)]:var_tllnode3->type)->table_size) {
var5 = 0;
} else {
var5 = (((long)var_tllnode3&3)?type_info[((long)var_tllnode3&3)]:var_tllnode3->type)->type_table[cltype6] == idtype7;
}
}
if (unlikely(!var5)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 7643);
fatal_exit(1);
}
var_pexprnode4 = var_nodearraylist4;
/* <var_pexprnode4:nullable Object> isa nullable AExpr */
cltype9 = type_nullable__nit__AExpr.color;
idtype10 = type_nullable__nit__AExpr.id;
if(var_pexprnode4 == NULL) {
var8 = 1;
} else {
if(cltype9 >= (((long)var_pexprnode4&3)?type_info[((long)var_pexprnode4&3)]:var_pexprnode4->type)->table_size) {
var8 = 0;
} else {
var8 = (((long)var_pexprnode4&3)?type_info[((long)var_pexprnode4&3)]:var_pexprnode4->type)->type_table[cltype9] == idtype10;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 7645);
fatal_exit(1);
}
var11 = NEW_nit__ALlExpr(&type_nit__ALlExpr);
{
((void(*)(val* self, val* p0, val* p1, val* p2))(var11->class->vft[COLOR_nit__parser_prod__ALlExpr__init_allexpr]))(var11, var_pexprnode2, var_tllnode3, var_pexprnode4); /* init_allexpr on <var11:ALlExpr>*/
}
var_pexprnode1 = var11;
var_node_list = var_pexprnode1;
var12 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction304> */
{
var13 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var12); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var13, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction305#action for (self: ReduceAction305, Parser) */
void nit__parser___nit__parser__ReduceAction305___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_tggnode3 /* var tggnode3: nullable Object */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
val* var_pexprnode4 /* var pexprnode4: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var11 /* : AGgExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AGgExpr */;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 7665);
fatal_exit(1);
}
var_tggnode3 = var_nodearraylist2;
/* <var_tggnode3:nullable Object> isa nullable TGg */
cltype6 = type_nullable__nit__TGg.color;
idtype7 = type_nullable__nit__TGg.id;
if(var_tggnode3 == NULL) {
var5 = 1;
} else {
if(cltype6 >= (((long)var_tggnode3&3)?type_info[((long)var_tggnode3&3)]:var_tggnode3->type)->table_size) {
var5 = 0;
} else {
var5 = (((long)var_tggnode3&3)?type_info[((long)var_tggnode3&3)]:var_tggnode3->type)->type_table[cltype6] == idtype7;
}
}
if (unlikely(!var5)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 7667);
fatal_exit(1);
}
var_pexprnode4 = var_nodearraylist4;
/* <var_pexprnode4:nullable Object> isa nullable AExpr */
cltype9 = type_nullable__nit__AExpr.color;
idtype10 = type_nullable__nit__AExpr.id;
if(var_pexprnode4 == NULL) {
var8 = 1;
} else {
if(cltype9 >= (((long)var_pexprnode4&3)?type_info[((long)var_pexprnode4&3)]:var_pexprnode4->type)->table_size) {
var8 = 0;
} else {
var8 = (((long)var_pexprnode4&3)?type_info[((long)var_pexprnode4&3)]:var_pexprnode4->type)->type_table[cltype9] == idtype10;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 7669);
fatal_exit(1);
}
var11 = NEW_nit__AGgExpr(&type_nit__AGgExpr);
{
((void(*)(val* self, val* p0, val* p1, val* p2))(var11->class->vft[COLOR_nit__parser_prod__AGgExpr__init_aggexpr]))(var11, var_pexprnode2, var_tggnode3, var_pexprnode4); /* init_aggexpr on <var11:AGgExpr>*/
}
var_pexprnode1 = var11;
var_node_list = var_pexprnode1;
var12 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction305> */
{
var13 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var12); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var13, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction307#action for (self: ReduceAction307, Parser) */
void nit__parser___nit__parser__ReduceAction307___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_tplusnode3 /* var tplusnode3: nullable Object */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
val* var_pexprnode4 /* var pexprnode4: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var11 /* : APlusExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable APlusExpr */;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 7689);
fatal_exit(1);
}
var_tplusnode3 = var_nodearraylist2;
/* <var_tplusnode3:nullable Object> isa nullable TPlus */
cltype6 = type_nullable__nit__TPlus.color;
idtype7 = type_nullable__nit__TPlus.id;
if(var_tplusnode3 == NULL) {
var5 = 1;
} else {
if(cltype6 >= (((long)var_tplusnode3&3)?type_info[((long)var_tplusnode3&3)]:var_tplusnode3->type)->table_size) {
var5 = 0;
} else {
var5 = (((long)var_tplusnode3&3)?type_info[((long)var_tplusnode3&3)]:var_tplusnode3->type)->type_table[cltype6] == idtype7;
}
}
if (unlikely(!var5)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 7691);
fatal_exit(1);
}
var_pexprnode4 = var_nodearraylist4;
/* <var_pexprnode4:nullable Object> isa nullable AExpr */
cltype9 = type_nullable__nit__AExpr.color;
idtype10 = type_nullable__nit__AExpr.id;
if(var_pexprnode4 == NULL) {
var8 = 1;
} else {
if(cltype9 >= (((long)var_pexprnode4&3)?type_info[((long)var_pexprnode4&3)]:var_pexprnode4->type)->table_size) {
var8 = 0;
} else {
var8 = (((long)var_pexprnode4&3)?type_info[((long)var_pexprnode4&3)]:var_pexprnode4->type)->type_table[cltype9] == idtype10;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 7693);
fatal_exit(1);
}
var11 = NEW_nit__APlusExpr(&type_nit__APlusExpr);
{
((void(*)(val* self, val* p0, val* p1, val* p2))(var11->class->vft[COLOR_nit__parser_prod__APlusExpr__init_aplusexpr]))(var11, var_pexprnode2, var_tplusnode3, var_pexprnode4); /* init_aplusexpr on <var11:APlusExpr>*/
}
var_pexprnode1 = var11;
var_node_list = var_pexprnode1;
var12 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction307> */
{
var13 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var12); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var13, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction308#action for (self: ReduceAction308, Parser) */
void nit__parser___nit__parser__ReduceAction308___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_tminusnode3 /* var tminusnode3: nullable Object */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
val* var_pexprnode4 /* var pexprnode4: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var11 /* : AMinusExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AMinusExpr */;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 7713);
fatal_exit(1);
}
var_tminusnode3 = var_nodearraylist2;
/* <var_tminusnode3:nullable Object> isa nullable TMinus */
cltype6 = type_nullable__nit__TMinus.color;
idtype7 = type_nullable__nit__TMinus.id;
if(var_tminusnode3 == NULL) {
var5 = 1;
} else {
if(cltype6 >= (((long)var_tminusnode3&3)?type_info[((long)var_tminusnode3&3)]:var_tminusnode3->type)->table_size) {
var5 = 0;
} else {
var5 = (((long)var_tminusnode3&3)?type_info[((long)var_tminusnode3&3)]:var_tminusnode3->type)->type_table[cltype6] == idtype7;
}
}
if (unlikely(!var5)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 7715);
fatal_exit(1);
}
var_pexprnode4 = var_nodearraylist4;
/* <var_pexprnode4:nullable Object> isa nullable AExpr */
cltype9 = type_nullable__nit__AExpr.color;
idtype10 = type_nullable__nit__AExpr.id;
if(var_pexprnode4 == NULL) {
var8 = 1;
} else {
if(cltype9 >= (((long)var_pexprnode4&3)?type_info[((long)var_pexprnode4&3)]:var_pexprnode4->type)->table_size) {
var8 = 0;
} else {
var8 = (((long)var_pexprnode4&3)?type_info[((long)var_pexprnode4&3)]:var_pexprnode4->type)->type_table[cltype9] == idtype10;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 7717);
fatal_exit(1);
}
var11 = NEW_nit__AMinusExpr(&type_nit__AMinusExpr);
{
((void(*)(val* self, val* p0, val* p1, val* p2))(var11->class->vft[COLOR_nit__parser_prod__AMinusExpr__init_aminusexpr]))(var11, var_pexprnode2, var_tminusnode3, var_pexprnode4); /* init_aminusexpr on <var11:AMinusExpr>*/
}
var_pexprnode1 = var11;
var_node_list = var_pexprnode1;
var12 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction308> */
{
var13 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var12); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var13, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction310#action for (self: ReduceAction310, Parser) */
void nit__parser___nit__parser__ReduceAction310___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_tstarnode3 /* var tstarnode3: nullable Object */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
val* var_pexprnode4 /* var pexprnode4: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var11 /* : AStarExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AStarExpr */;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 7737);
fatal_exit(1);
}
var_tstarnode3 = var_nodearraylist2;
/* <var_tstarnode3:nullable Object> isa nullable TStar */
cltype6 = type_nullable__nit__TStar.color;
idtype7 = type_nullable__nit__TStar.id;
if(var_tstarnode3 == NULL) {
var5 = 1;
} else {
if(cltype6 >= (((long)var_tstarnode3&3)?type_info[((long)var_tstarnode3&3)]:var_tstarnode3->type)->table_size) {
var5 = 0;
} else {
var5 = (((long)var_tstarnode3&3)?type_info[((long)var_tstarnode3&3)]:var_tstarnode3->type)->type_table[cltype6] == idtype7;
}
}
if (unlikely(!var5)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 7739);
fatal_exit(1);
}
var_pexprnode4 = var_nodearraylist4;
/* <var_pexprnode4:nullable Object> isa nullable AExpr */
cltype9 = type_nullable__nit__AExpr.color;
idtype10 = type_nullable__nit__AExpr.id;
if(var_pexprnode4 == NULL) {
var8 = 1;
} else {
if(cltype9 >= (((long)var_pexprnode4&3)?type_info[((long)var_pexprnode4&3)]:var_pexprnode4->type)->table_size) {
var8 = 0;
} else {
var8 = (((long)var_pexprnode4&3)?type_info[((long)var_pexprnode4&3)]:var_pexprnode4->type)->type_table[cltype9] == idtype10;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 7741);
fatal_exit(1);
}
var11 = NEW_nit__AStarExpr(&type_nit__AStarExpr);
{
((void(*)(val* self, val* p0, val* p1, val* p2))(var11->class->vft[COLOR_nit__parser_prod__AStarExpr__init_astarexpr]))(var11, var_pexprnode2, var_tstarnode3, var_pexprnode4); /* init_astarexpr on <var11:AStarExpr>*/
}
var_pexprnode1 = var11;
var_node_list = var_pexprnode1;
var12 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction310> */
{
var13 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var12); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var13, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction311#action for (self: ReduceAction311, Parser) */
void nit__parser___nit__parser__ReduceAction311___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_tslashnode3 /* var tslashnode3: nullable Object */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
val* var_pexprnode4 /* var pexprnode4: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var11 /* : ASlashExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ASlashExpr */;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 7761);
fatal_exit(1);
}
var_tslashnode3 = var_nodearraylist2;
/* <var_tslashnode3:nullable Object> isa nullable TSlash */
cltype6 = type_nullable__nit__TSlash.color;
idtype7 = type_nullable__nit__TSlash.id;
if(var_tslashnode3 == NULL) {
var5 = 1;
} else {
if(cltype6 >= (((long)var_tslashnode3&3)?type_info[((long)var_tslashnode3&3)]:var_tslashnode3->type)->table_size) {
var5 = 0;
} else {
var5 = (((long)var_tslashnode3&3)?type_info[((long)var_tslashnode3&3)]:var_tslashnode3->type)->type_table[cltype6] == idtype7;
}
}
if (unlikely(!var5)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 7763);
fatal_exit(1);
}
var_pexprnode4 = var_nodearraylist4;
/* <var_pexprnode4:nullable Object> isa nullable AExpr */
cltype9 = type_nullable__nit__AExpr.color;
idtype10 = type_nullable__nit__AExpr.id;
if(var_pexprnode4 == NULL) {
var8 = 1;
} else {
if(cltype9 >= (((long)var_pexprnode4&3)?type_info[((long)var_pexprnode4&3)]:var_pexprnode4->type)->table_size) {
var8 = 0;
} else {
var8 = (((long)var_pexprnode4&3)?type_info[((long)var_pexprnode4&3)]:var_pexprnode4->type)->type_table[cltype9] == idtype10;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 7765);
fatal_exit(1);
}
var11 = NEW_nit__ASlashExpr(&type_nit__ASlashExpr);
{
((void(*)(val* self, val* p0, val* p1, val* p2))(var11->class->vft[COLOR_nit__parser_prod__ASlashExpr__init_aslashexpr]))(var11, var_pexprnode2, var_tslashnode3, var_pexprnode4); /* init_aslashexpr on <var11:ASlashExpr>*/
}
var_pexprnode1 = var11;
var_node_list = var_pexprnode1;
var12 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction311> */
{
var13 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var12); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var13, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction312#action for (self: ReduceAction312, Parser) */
void nit__parser___nit__parser__ReduceAction312___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_tpercentnode3 /* var tpercentnode3: nullable Object */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
val* var_pexprnode4 /* var pexprnode4: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var11 /* : APercentExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable APercentExpr */;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 7785);
fatal_exit(1);
}
var_tpercentnode3 = var_nodearraylist2;
/* <var_tpercentnode3:nullable Object> isa nullable TPercent */
cltype6 = type_nullable__nit__TPercent.color;
idtype7 = type_nullable__nit__TPercent.id;
if(var_tpercentnode3 == NULL) {
var5 = 1;
} else {
if(cltype6 >= (((long)var_tpercentnode3&3)?type_info[((long)var_tpercentnode3&3)]:var_tpercentnode3->type)->table_size) {
var5 = 0;
} else {
var5 = (((long)var_tpercentnode3&3)?type_info[((long)var_tpercentnode3&3)]:var_tpercentnode3->type)->type_table[cltype6] == idtype7;
}
}
if (unlikely(!var5)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 7787);
fatal_exit(1);
}
var_pexprnode4 = var_nodearraylist4;
/* <var_pexprnode4:nullable Object> isa nullable AExpr */
cltype9 = type_nullable__nit__AExpr.color;
idtype10 = type_nullable__nit__AExpr.id;
if(var_pexprnode4 == NULL) {
var8 = 1;
} else {
if(cltype9 >= (((long)var_pexprnode4&3)?type_info[((long)var_pexprnode4&3)]:var_pexprnode4->type)->table_size) {
var8 = 0;
} else {
var8 = (((long)var_pexprnode4&3)?type_info[((long)var_pexprnode4&3)]:var_pexprnode4->type)->type_table[cltype9] == idtype10;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 7789);
fatal_exit(1);
}
var11 = NEW_nit__APercentExpr(&type_nit__APercentExpr);
{
((void(*)(val* self, val* p0, val* p1, val* p2))(var11->class->vft[COLOR_nit__parser_prod__APercentExpr__init_apercentexpr]))(var11, var_pexprnode2, var_tpercentnode3, var_pexprnode4); /* init_apercentexpr on <var11:APercentExpr>*/
}
var_pexprnode1 = var11;
var_node_list = var_pexprnode1;
var12 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction312> */
{
var13 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var12); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var13, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction314#action for (self: ReduceAction314, Parser) */
void nit__parser___nit__parser__ReduceAction314___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_tstarstarnode3 /* var tstarstarnode3: nullable Object */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
val* var_pexprnode4 /* var pexprnode4: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var11 /* : AStarstarExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AStarstarExpr */;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 7809);
fatal_exit(1);
}
var_tstarstarnode3 = var_nodearraylist2;
/* <var_tstarstarnode3:nullable Object> isa nullable TStarstar */
cltype6 = type_nullable__nit__TStarstar.color;
idtype7 = type_nullable__nit__TStarstar.id;
if(var_tstarstarnode3 == NULL) {
var5 = 1;
} else {
if(cltype6 >= (((long)var_tstarstarnode3&3)?type_info[((long)var_tstarstarnode3&3)]:var_tstarstarnode3->type)->table_size) {
var5 = 0;
} else {
var5 = (((long)var_tstarstarnode3&3)?type_info[((long)var_tstarstarnode3&3)]:var_tstarstarnode3->type)->type_table[cltype6] == idtype7;
}
}
if (unlikely(!var5)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 7811);
fatal_exit(1);
}
var_pexprnode4 = var_nodearraylist4;
/* <var_pexprnode4:nullable Object> isa nullable AExpr */
cltype9 = type_nullable__nit__AExpr.color;
idtype10 = type_nullable__nit__AExpr.id;
if(var_pexprnode4 == NULL) {
var8 = 1;
} else {
if(cltype9 >= (((long)var_pexprnode4&3)?type_info[((long)var_pexprnode4&3)]:var_pexprnode4->type)->table_size) {
var8 = 0;
} else {
var8 = (((long)var_pexprnode4&3)?type_info[((long)var_pexprnode4&3)]:var_pexprnode4->type)->type_table[cltype9] == idtype10;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 7813);
fatal_exit(1);
}
var11 = NEW_nit__AStarstarExpr(&type_nit__AStarstarExpr);
{
((void(*)(val* self, val* p0, val* p1, val* p2))(var11->class->vft[COLOR_nit__parser_prod__AStarstarExpr__init_astarstarexpr]))(var11, var_pexprnode2, var_tstarstarnode3, var_pexprnode4); /* init_astarstarexpr on <var11:AStarstarExpr>*/
}
var_pexprnode1 = var11;
var_node_list = var_pexprnode1;
var12 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction314> */
{
var13 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var12); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var13, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction316#action for (self: ReduceAction316, Parser) */
void nit__parser___nit__parser__ReduceAction316___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tminusnode2 /* var tminusnode2: nullable Object */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var_pexprnode3 /* var pexprnode3: nullable Object */;
short int var3 /* : Bool */;
int cltype4;
int idtype5;
val* var6 /* : AUminusExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AUminusExpr */;
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
var_tminusnode2 = var_nodearraylist1;
/* <var_tminusnode2:nullable Object> isa nullable TMinus */
cltype = type_nullable__nit__TMinus.color;
idtype = type_nullable__nit__TMinus.id;
if(var_tminusnode2 == NULL) {
var2 = 1;
} else {
if(cltype >= (((long)var_tminusnode2&3)?type_info[((long)var_tminusnode2&3)]:var_tminusnode2->type)->table_size) {
var2 = 0;
} else {
var2 = (((long)var_tminusnode2&3)?type_info[((long)var_tminusnode2&3)]:var_tminusnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 7831);
fatal_exit(1);
}
var_pexprnode3 = var_nodearraylist2;
/* <var_pexprnode3:nullable Object> isa nullable AExpr */
cltype4 = type_nullable__nit__AExpr.color;
idtype5 = type_nullable__nit__AExpr.id;
if(var_pexprnode3 == NULL) {
var3 = 1;
} else {
if(cltype4 >= (((long)var_pexprnode3&3)?type_info[((long)var_pexprnode3&3)]:var_pexprnode3->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)var_pexprnode3&3)?type_info[((long)var_pexprnode3&3)]:var_pexprnode3->type)->type_table[cltype4] == idtype5;
}
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 7833);
fatal_exit(1);
}
var6 = NEW_nit__AUminusExpr(&type_nit__AUminusExpr);
{
((void(*)(val* self, val* p0, val* p1))(var6->class->vft[COLOR_nit__parser_prod__AUminusExpr__init_auminusexpr]))(var6, var_tminusnode2, var_pexprnode3); /* init_auminusexpr on <var6:AUminusExpr>*/
}
var_pexprnode1 = var6;
var_node_list = var_pexprnode1;
var7 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction316> */
{
var8 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var7); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var8, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction317#action for (self: ReduceAction317, Parser) */
void nit__parser___nit__parser__ReduceAction317___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tplusnode2 /* var tplusnode2: nullable Object */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var_pexprnode3 /* var pexprnode3: nullable Object */;
short int var3 /* : Bool */;
int cltype4;
int idtype5;
val* var6 /* : AUplusExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AUplusExpr */;
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
var_tplusnode2 = var_nodearraylist1;
/* <var_tplusnode2:nullable Object> isa nullable TPlus */
cltype = type_nullable__nit__TPlus.color;
idtype = type_nullable__nit__TPlus.id;
if(var_tplusnode2 == NULL) {
var2 = 1;
} else {
if(cltype >= (((long)var_tplusnode2&3)?type_info[((long)var_tplusnode2&3)]:var_tplusnode2->type)->table_size) {
var2 = 0;
} else {
var2 = (((long)var_tplusnode2&3)?type_info[((long)var_tplusnode2&3)]:var_tplusnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 7850);
fatal_exit(1);
}
var_pexprnode3 = var_nodearraylist2;
/* <var_pexprnode3:nullable Object> isa nullable AExpr */
cltype4 = type_nullable__nit__AExpr.color;
idtype5 = type_nullable__nit__AExpr.id;
if(var_pexprnode3 == NULL) {
var3 = 1;
} else {
if(cltype4 >= (((long)var_pexprnode3&3)?type_info[((long)var_pexprnode3&3)]:var_pexprnode3->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)var_pexprnode3&3)?type_info[((long)var_pexprnode3&3)]:var_pexprnode3->type)->type_table[cltype4] == idtype5;
}
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 7852);
fatal_exit(1);
}
var6 = NEW_nit__AUplusExpr(&type_nit__AUplusExpr);
{
((void(*)(val* self, val* p0, val* p1))(var6->class->vft[COLOR_nit__parser_prod__AUplusExpr__init_auplusexpr]))(var6, var_tplusnode2, var_pexprnode3); /* init_auplusexpr on <var6:AUplusExpr>*/
}
var_pexprnode1 = var6;
var_node_list = var_pexprnode1;
var7 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction317> */
{
var8 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var7); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var8, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction318#action for (self: ReduceAction318, Parser) */
void nit__parser___nit__parser__ReduceAction318___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_ttildenode2 /* var ttildenode2: nullable Object */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var_pexprnode3 /* var pexprnode3: nullable Object */;
short int var3 /* : Bool */;
int cltype4;
int idtype5;
val* var6 /* : AUtildeExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AUtildeExpr */;
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
var_ttildenode2 = var_nodearraylist1;
/* <var_ttildenode2:nullable Object> isa nullable TTilde */
cltype = type_nullable__nit__TTilde.color;
idtype = type_nullable__nit__TTilde.id;
if(var_ttildenode2 == NULL) {
var2 = 1;
} else {
if(cltype >= (((long)var_ttildenode2&3)?type_info[((long)var_ttildenode2&3)]:var_ttildenode2->type)->table_size) {
var2 = 0;
} else {
var2 = (((long)var_ttildenode2&3)?type_info[((long)var_ttildenode2&3)]:var_ttildenode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 7869);
fatal_exit(1);
}
var_pexprnode3 = var_nodearraylist2;
/* <var_pexprnode3:nullable Object> isa nullable AExpr */
cltype4 = type_nullable__nit__AExpr.color;
idtype5 = type_nullable__nit__AExpr.id;
if(var_pexprnode3 == NULL) {
var3 = 1;
} else {
if(cltype4 >= (((long)var_pexprnode3&3)?type_info[((long)var_pexprnode3&3)]:var_pexprnode3->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)var_pexprnode3&3)?type_info[((long)var_pexprnode3&3)]:var_pexprnode3->type)->type_table[cltype4] == idtype5;
}
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 7871);
fatal_exit(1);
}
var6 = NEW_nit__AUtildeExpr(&type_nit__AUtildeExpr);
{
((void(*)(val* self, val* p0, val* p1))(var6->class->vft[COLOR_nit__parser_prod__AUtildeExpr__init_autildeexpr]))(var6, var_ttildenode2, var_pexprnode3); /* init_autildeexpr on <var6:AUtildeExpr>*/
}
var_pexprnode1 = var6;
var_node_list = var_pexprnode1;
var7 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction318> */
{
var8 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var7); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var8, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction319#action for (self: ReduceAction319, Parser) */
void nit__parser___nit__parser__ReduceAction319___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tkwoncenode2 /* var tkwoncenode2: nullable Object */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var_pexprnode3 /* var pexprnode3: nullable Object */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
val* var7 /* : AOnceExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AOnceExpr */;
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
var_tkwoncenode2 = var_nodearraylist1;
/* <var_tkwoncenode2:nullable Object> isa nullable TKwonce */
cltype = type_nullable__nit__TKwonce.color;
idtype = type_nullable__nit__TKwonce.id;
if(var_tkwoncenode2 == NULL) {
var3 = 1;
} else {
if(cltype >= (((long)var_tkwoncenode2&3)?type_info[((long)var_tkwoncenode2&3)]:var_tkwoncenode2->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)var_tkwoncenode2&3)?type_info[((long)var_tkwoncenode2&3)]:var_tkwoncenode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 7889);
fatal_exit(1);
}
var_pexprnode3 = var_nodearraylist3;
/* <var_pexprnode3:nullable Object> isa nullable AExpr */
cltype5 = type_nullable__nit__AExpr.color;
idtype6 = type_nullable__nit__AExpr.id;
if(var_pexprnode3 == NULL) {
var4 = 1;
} else {
if(cltype5 >= (((long)var_pexprnode3&3)?type_info[((long)var_pexprnode3&3)]:var_pexprnode3->type)->table_size) {
var4 = 0;
} else {
var4 = (((long)var_pexprnode3&3)?type_info[((long)var_pexprnode3&3)]:var_pexprnode3->type)->type_table[cltype5] == idtype6;
}
}
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 7891);
fatal_exit(1);
}
var7 = NEW_nit__AOnceExpr(&type_nit__AOnceExpr);
{
((void(*)(val* self, val* p0, val* p1))(var7->class->vft[COLOR_nit__parser_prod__AOnceExpr__init_aonceexpr]))(var7, var_tkwoncenode2, var_pexprnode3); /* init_aonceexpr on <var7:AOnceExpr>*/
}
var_pexprnode1 = var7;
var_node_list = var_pexprnode1;
var8 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction319> */
{
var9 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var8); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var9, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction321#action for (self: ReduceAction321, Parser) */
void nit__parser___nit__parser__ReduceAction321___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_tkwnewnode2 /* var tkwnewnode2: nullable Object */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var_ptypenode3 /* var ptypenode3: nullable Object */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
val* var_pexprsnode5 /* var pexprsnode5: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var11 /* : ANewExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ANewExpr */;
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
var_tkwnewnode2 = var_nodearraylist1;
/* <var_tkwnewnode2:nullable Object> isa nullable TKwnew */
cltype = type_nullable__nit__TKwnew.color;
idtype = type_nullable__nit__TKwnew.id;
if(var_tkwnewnode2 == NULL) {
var4 = 1;
} else {
if(cltype >= (((long)var_tkwnewnode2&3)?type_info[((long)var_tkwnewnode2&3)]:var_tkwnewnode2->type)->table_size) {
var4 = 0;
} else {
var4 = (((long)var_tkwnewnode2&3)?type_info[((long)var_tkwnewnode2&3)]:var_tkwnewnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 7910);
fatal_exit(1);
}
var_ptypenode3 = var_nodearraylist3;
/* <var_ptypenode3:nullable Object> isa nullable AType */
cltype6 = type_nullable__nit__AType.color;
idtype7 = type_nullable__nit__AType.id;
if(var_ptypenode3 == NULL) {
var5 = 1;
} else {
if(cltype6 >= (((long)var_ptypenode3&3)?type_info[((long)var_ptypenode3&3)]:var_ptypenode3->type)->table_size) {
var5 = 0;
} else {
var5 = (((long)var_ptypenode3&3)?type_info[((long)var_ptypenode3&3)]:var_ptypenode3->type)->type_table[cltype6] == idtype7;
}
}
if (unlikely(!var5)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 7912);
fatal_exit(1);
}
var_pexprsnode5 = var_nodearraylist4;
/* <var_pexprsnode5:nullable Object> isa nullable AExprs */
cltype9 = type_nullable__nit__AExprs.color;
idtype10 = type_nullable__nit__AExprs.id;
if(var_pexprsnode5 == NULL) {
var8 = 1;
} else {
if(cltype9 >= (((long)var_pexprsnode5&3)?type_info[((long)var_pexprsnode5&3)]:var_pexprsnode5->type)->table_size) {
var8 = 0;
} else {
var8 = (((long)var_pexprsnode5&3)?type_info[((long)var_pexprsnode5&3)]:var_pexprsnode5->type)->type_table[cltype9] == idtype10;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 7914);
fatal_exit(1);
}
var11 = NEW_nit__ANewExpr(&type_nit__ANewExpr);
{
((void(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var11->class->vft[COLOR_nit__parser_prod__ANewExpr__init_anewexpr]))(var11, var_tkwnewnode2, var_ptypenode3, ((val*)NULL), var_pexprsnode5); /* init_anewexpr on <var11:ANewExpr>*/
}
var_pexprnode1 = var11;
var_node_list = var_pexprnode1;
var12 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction321> */
{
var13 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var12); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var13, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction322#action for (self: ReduceAction322, Parser) */
void nit__parser___nit__parser__ReduceAction322___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tkwnewnode2 /* var tkwnewnode2: nullable Object */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var_ptypenode3 /* var ptypenode3: nullable Object */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
val* var7 /* : Array[Object] */;
val* var_listnode6 /* var listnode6: Array[Object] */;
val* var8 /* : AListExprs */;
val* var_pexprsnode5 /* var pexprsnode5: nullable AListExprs */;
val* var9 /* : ANewExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ANewExpr */;
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
var_tkwnewnode2 = var_nodearraylist1;
/* <var_tkwnewnode2:nullable Object> isa nullable TKwnew */
cltype = type_nullable__nit__TKwnew.color;
idtype = type_nullable__nit__TKwnew.id;
if(var_tkwnewnode2 == NULL) {
var3 = 1;
} else {
if(cltype >= (((long)var_tkwnewnode2&3)?type_info[((long)var_tkwnewnode2&3)]:var_tkwnewnode2->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)var_tkwnewnode2&3)?type_info[((long)var_tkwnewnode2&3)]:var_tkwnewnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 7934);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 7936);
fatal_exit(1);
}
var7 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
((void(*)(val* self))(var7->class->vft[COLOR_standard__kernel__Object__init]))(var7); /* init on <var7:Array[Object]>*/
}
var_listnode6 = var7;
var8 = NEW_nit__AListExprs(&type_nit__AListExprs);
{
((void(*)(val* self, val* p0))(var8->class->vft[COLOR_nit__parser_prod__AListExprs__init_alistexprs]))(var8, var_listnode6); /* init_alistexprs on <var8:AListExprs>*/
}
var_pexprsnode5 = var8;
var9 = NEW_nit__ANewExpr(&type_nit__ANewExpr);
{
((void(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var9->class->vft[COLOR_nit__parser_prod__ANewExpr__init_anewexpr]))(var9, var_tkwnewnode2, var_ptypenode3, ((val*)NULL), var_pexprsnode5); /* init_anewexpr on <var9:ANewExpr>*/
}
var_pexprnode1 = var9;
var_node_list = var_pexprnode1;
var10 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction322> */
{
var11 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var10); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var11, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction323#action for (self: ReduceAction323, Parser) */
void nit__parser___nit__parser__ReduceAction323___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_tkwissetnode2 /* var tkwissetnode2: nullable Object */;
short int var6 /* : Bool */;
int cltype;
int idtype;
val* var_pexprnode3 /* var pexprnode3: nullable Object */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
val* var_tattridnode4 /* var tattridnode4: nullable Object */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var13 /* : AIssetAttrExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AIssetAttrExpr */;
long var14 /* : Int */;
long var15 /* : Int */;
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
var_tkwissetnode2 = var_nodearraylist1;
/* <var_tkwissetnode2:nullable Object> isa nullable TKwisset */
cltype = type_nullable__nit__TKwisset.color;
idtype = type_nullable__nit__TKwisset.id;
if(var_tkwissetnode2 == NULL) {
var6 = 1;
} else {
if(cltype >= (((long)var_tkwissetnode2&3)?type_info[((long)var_tkwissetnode2&3)]:var_tkwissetnode2->type)->table_size) {
var6 = 0;
} else {
var6 = (((long)var_tkwissetnode2&3)?type_info[((long)var_tkwissetnode2&3)]:var_tkwissetnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var6)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 7963);
fatal_exit(1);
}
var_pexprnode3 = var_nodearraylist2;
/* <var_pexprnode3:nullable Object> isa nullable AExpr */
cltype8 = type_nullable__nit__AExpr.color;
idtype9 = type_nullable__nit__AExpr.id;
if(var_pexprnode3 == NULL) {
var7 = 1;
} else {
if(cltype8 >= (((long)var_pexprnode3&3)?type_info[((long)var_pexprnode3&3)]:var_pexprnode3->type)->table_size) {
var7 = 0;
} else {
var7 = (((long)var_pexprnode3&3)?type_info[((long)var_pexprnode3&3)]:var_pexprnode3->type)->type_table[cltype8] == idtype9;
}
}
if (unlikely(!var7)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 7965);
fatal_exit(1);
}
var_tattridnode4 = var_nodearraylist6;
/* <var_tattridnode4:nullable Object> isa nullable TAttrid */
cltype11 = type_nullable__nit__TAttrid.color;
idtype12 = type_nullable__nit__TAttrid.id;
if(var_tattridnode4 == NULL) {
var10 = 1;
} else {
if(cltype11 >= (((long)var_tattridnode4&3)?type_info[((long)var_tattridnode4&3)]:var_tattridnode4->type)->table_size) {
var10 = 0;
} else {
var10 = (((long)var_tattridnode4&3)?type_info[((long)var_tattridnode4&3)]:var_tattridnode4->type)->type_table[cltype11] == idtype12;
}
}
if (unlikely(!var10)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 7967);
fatal_exit(1);
}
var13 = NEW_nit__AIssetAttrExpr(&type_nit__AIssetAttrExpr);
{
((void(*)(val* self, val* p0, val* p1, val* p2))(var13->class->vft[COLOR_nit__parser_prod__AIssetAttrExpr__init_aissetattrexpr]))(var13, var_tkwissetnode2, var_pexprnode3, var_tattridnode4); /* init_aissetattrexpr on <var13:AIssetAttrExpr>*/
}
var_pexprnode1 = var13;
var_node_list = var_pexprnode1;
var14 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction323> */
{
var15 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var14); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var15, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction324#action for (self: ReduceAction324, Parser) */
void nit__parser___nit__parser__ReduceAction324___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tkwissetnode2 /* var tkwissetnode2: nullable Object */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var4 /* : AImplicitSelfExpr */;
val* var_pexprnode3 /* var pexprnode3: nullable AImplicitSelfExpr */;
val* var_tattridnode4 /* var tattridnode4: nullable Object */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
val* var8 /* : AIssetAttrExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AIssetAttrExpr */;
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
var_tkwissetnode2 = var_nodearraylist1;
/* <var_tkwissetnode2:nullable Object> isa nullable TKwisset */
cltype = type_nullable__nit__TKwisset.color;
idtype = type_nullable__nit__TKwisset.id;
if(var_tkwissetnode2 == NULL) {
var3 = 1;
} else {
if(cltype >= (((long)var_tkwissetnode2&3)?type_info[((long)var_tkwissetnode2&3)]:var_tkwissetnode2->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)var_tkwissetnode2&3)?type_info[((long)var_tkwissetnode2&3)]:var_tkwissetnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 7986);
fatal_exit(1);
}
var4 = NEW_nit__AImplicitSelfExpr(&type_nit__AImplicitSelfExpr);
{
((void(*)(val* self))(var4->class->vft[COLOR_nit__parser_prod__AImplicitSelfExpr__init_aimplicitselfexpr]))(var4); /* init_aimplicitselfexpr on <var4:AImplicitSelfExpr>*/
}
var_pexprnode3 = var4;
var_tattridnode4 = var_nodearraylist3;
/* <var_tattridnode4:nullable Object> isa nullable TAttrid */
cltype6 = type_nullable__nit__TAttrid.color;
idtype7 = type_nullable__nit__TAttrid.id;
if(var_tattridnode4 == NULL) {
var5 = 1;
} else {
if(cltype6 >= (((long)var_tattridnode4&3)?type_info[((long)var_tattridnode4&3)]:var_tattridnode4->type)->table_size) {
var5 = 0;
} else {
var5 = (((long)var_tattridnode4&3)?type_info[((long)var_tattridnode4&3)]:var_tattridnode4->type)->type_table[cltype6] == idtype7;
}
}
if (unlikely(!var5)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 7989);
fatal_exit(1);
}
var8 = NEW_nit__AIssetAttrExpr(&type_nit__AIssetAttrExpr);
{
((void(*)(val* self, val* p0, val* p1, val* p2))(var8->class->vft[COLOR_nit__parser_prod__AIssetAttrExpr__init_aissetattrexpr]))(var8, var_tkwissetnode2, var_pexprnode3, var_tattridnode4); /* init_aissetattrexpr on <var8:AIssetAttrExpr>*/
}
var_pexprnode1 = var8;
var_node_list = var_pexprnode1;
var9 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction324> */
{
var10 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var9); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var10, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction326#action for (self: ReduceAction326, Parser) */
void nit__parser___nit__parser__ReduceAction326___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_pexprnode2 /* var pexprnode2: nullable Object */;
short int var5 /* : Bool */;
int cltype;
int idtype;
val* var_tattridnode3 /* var tattridnode3: nullable Object */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
val* var9 /* : AAttrExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AAttrExpr */;
long var10 /* : Int */;
long var11 /* : Int */;
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
var_pexprnode2 = var_nodearraylist1;
/* <var_pexprnode2:nullable Object> isa nullable AExpr */
cltype = type_nullable__nit__AExpr.color;
idtype = type_nullable__nit__AExpr.id;
if(var_pexprnode2 == NULL) {
var5 = 1;
} else {
if(cltype >= (((long)var_pexprnode2&3)?type_info[((long)var_pexprnode2&3)]:var_pexprnode2->type)->table_size) {
var5 = 0;
} else {
var5 = (((long)var_pexprnode2&3)?type_info[((long)var_pexprnode2&3)]:var_pexprnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var5)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8010);
fatal_exit(1);
}
var_tattridnode3 = var_nodearraylist5;
/* <var_tattridnode3:nullable Object> isa nullable TAttrid */
cltype7 = type_nullable__nit__TAttrid.color;
idtype8 = type_nullable__nit__TAttrid.id;
if(var_tattridnode3 == NULL) {
var6 = 1;
} else {
if(cltype7 >= (((long)var_tattridnode3&3)?type_info[((long)var_tattridnode3&3)]:var_tattridnode3->type)->table_size) {
var6 = 0;
} else {
var6 = (((long)var_tattridnode3&3)?type_info[((long)var_tattridnode3&3)]:var_tattridnode3->type)->type_table[cltype7] == idtype8;
}
}
if (unlikely(!var6)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8012);
fatal_exit(1);
}
var9 = NEW_nit__AAttrExpr(&type_nit__AAttrExpr);
{
((void(*)(val* self, val* p0, val* p1))(var9->class->vft[COLOR_nit__parser_prod__AAttrExpr__init_aattrexpr]))(var9, var_pexprnode2, var_tattridnode3); /* init_aattrexpr on <var9:AAttrExpr>*/
}
var_pexprnode1 = var9;
var_node_list = var_pexprnode1;
var10 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction326> */
{
var11 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var10); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var11, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction327#action for (self: ReduceAction327, Parser) */
void nit__parser___nit__parser__ReduceAction327___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var2 /* : AImplicitSelfExpr */;
val* var_pexprnode2 /* var pexprnode2: nullable AImplicitSelfExpr */;
val* var_tattridnode3 /* var tattridnode3: nullable Object */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var4 /* : AAttrExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AAttrExpr */;
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
var2 = NEW_nit__AImplicitSelfExpr(&type_nit__AImplicitSelfExpr);
{
((void(*)(val* self))(var2->class->vft[COLOR_nit__parser_prod__AImplicitSelfExpr__init_aimplicitselfexpr]))(var2); /* init_aimplicitselfexpr on <var2:AImplicitSelfExpr>*/
}
var_pexprnode2 = var2;
var_tattridnode3 = var_nodearraylist2;
/* <var_tattridnode3:nullable Object> isa nullable TAttrid */
cltype = type_nullable__nit__TAttrid.color;
idtype = type_nullable__nit__TAttrid.id;
if(var_tattridnode3 == NULL) {
var3 = 1;
} else {
if(cltype >= (((long)var_tattridnode3&3)?type_info[((long)var_tattridnode3&3)]:var_tattridnode3->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)var_tattridnode3&3)?type_info[((long)var_tattridnode3&3)]:var_tattridnode3->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8030);
fatal_exit(1);
}
var4 = NEW_nit__AAttrExpr(&type_nit__AAttrExpr);
{
((void(*)(val* self, val* p0, val* p1))(var4->class->vft[COLOR_nit__parser_prod__AAttrExpr__init_aattrexpr]))(var4, var_pexprnode2, var_tattridnode3); /* init_aattrexpr on <var4:AAttrExpr>*/
}
var_pexprnode1 = var4;
var_node_list = var_pexprnode1;
var5 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction327> */
{
var6 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var5); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var6, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction329#action for (self: ReduceAction329, Parser) */
void nit__parser___nit__parser__ReduceAction329___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var8 /* : Array[Object] */;
val* var_listnode5 /* var listnode5: Array[Object] */;
val* var9 /* : AListExprs */;
val* var_pexprsnode4 /* var pexprsnode4: nullable AListExprs */;
val* var10 /* : ACallExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ACallExpr */;
long var11 /* : Int */;
long var12 /* : Int */;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8049);
fatal_exit(1);
}
var_tidnode3 = var_nodearraylist4;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8051);
fatal_exit(1);
}
var8 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
((void(*)(val* self))(var8->class->vft[COLOR_standard__kernel__Object__init]))(var8); /* init on <var8:Array[Object]>*/
}
var_listnode5 = var8;
var9 = NEW_nit__AListExprs(&type_nit__AListExprs);
{
((void(*)(val* self, val* p0))(var9->class->vft[COLOR_nit__parser_prod__AListExprs__init_alistexprs]))(var9, var_listnode5); /* init_alistexprs on <var9:AListExprs>*/
}
var_pexprsnode4 = var9;
var10 = NEW_nit__ACallExpr(&type_nit__ACallExpr);
{
((void(*)(val* self, val* p0, val* p1, val* p2))(var10->class->vft[COLOR_nit__parser_prod__ACallExpr__init_acallexpr]))(var10, var_pexprnode2, var_tidnode3, var_pexprsnode4); /* init_acallexpr on <var10:ACallExpr>*/
}
var_pexprnode1 = var10;
var_node_list = var_pexprnode1;
var11 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction329> */
{
var12 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var11); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var12, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction331#action for (self: ReduceAction331, Parser) */
void nit__parser___nit__parser__ReduceAction331___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_pexprnode2 /* var pexprnode2: nullable Object */;
short int var5 /* : Bool */;
int cltype;
int idtype;
val* var_tidnode3 /* var tidnode3: nullable Object */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
val* var9 /* : Array[Object] */;
val* var_listnode5 /* var listnode5: Array[Object] */;
val* var10 /* : AListExprs */;
val* var_pexprsnode4 /* var pexprsnode4: nullable AListExprs */;
val* var11 /* : ACallExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ACallExpr */;
long var12 /* : Int */;
long var13 /* : Int */;
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
var_pexprnode2 = var_nodearraylist1;
/* <var_pexprnode2:nullable Object> isa nullable AExpr */
cltype = type_nullable__nit__AExpr.color;
idtype = type_nullable__nit__AExpr.id;
if(var_pexprnode2 == NULL) {
var5 = 1;
} else {
if(cltype >= (((long)var_pexprnode2&3)?type_info[((long)var_pexprnode2&3)]:var_pexprnode2->type)->table_size) {
var5 = 0;
} else {
var5 = (((long)var_pexprnode2&3)?type_info[((long)var_pexprnode2&3)]:var_pexprnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var5)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8076);
fatal_exit(1);
}
var_tidnode3 = var_nodearraylist5;
/* <var_tidnode3:nullable Object> isa nullable TId */
cltype7 = type_nullable__nit__TId.color;
idtype8 = type_nullable__nit__TId.id;
if(var_tidnode3 == NULL) {
var6 = 1;
} else {
if(cltype7 >= (((long)var_tidnode3&3)?type_info[((long)var_tidnode3&3)]:var_tidnode3->type)->table_size) {
var6 = 0;
} else {
var6 = (((long)var_tidnode3&3)?type_info[((long)var_tidnode3&3)]:var_tidnode3->type)->type_table[cltype7] == idtype8;
}
}
if (unlikely(!var6)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8078);
fatal_exit(1);
}
var9 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
((void(*)(val* self))(var9->class->vft[COLOR_standard__kernel__Object__init]))(var9); /* init on <var9:Array[Object]>*/
}
var_listnode5 = var9;
var10 = NEW_nit__AListExprs(&type_nit__AListExprs);
{
((void(*)(val* self, val* p0))(var10->class->vft[COLOR_nit__parser_prod__AListExprs__init_alistexprs]))(var10, var_listnode5); /* init_alistexprs on <var10:AListExprs>*/
}
var_pexprsnode4 = var10;
var11 = NEW_nit__ACallExpr(&type_nit__ACallExpr);
{
((void(*)(val* self, val* p0, val* p1, val* p2))(var11->class->vft[COLOR_nit__parser_prod__ACallExpr__init_acallexpr]))(var11, var_pexprnode2, var_tidnode3, var_pexprsnode4); /* init_acallexpr on <var11:ACallExpr>*/
}
var_pexprnode1 = var11;
var_node_list = var_pexprnode1;
var12 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction331> */
{
var13 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var12); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var13, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction333#action for (self: ReduceAction333, Parser) */
void nit__parser___nit__parser__ReduceAction333___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_pexprnode2 /* var pexprnode2: nullable Object */;
short int var6 /* : Bool */;
int cltype;
int idtype;
val* var_tidnode3 /* var tidnode3: nullable Object */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
val* var10 /* : Array[Object] */;
val* var_listnode5 /* var listnode5: Array[Object] */;
val* var11 /* : AListExprs */;
val* var_pexprsnode4 /* var pexprsnode4: nullable AListExprs */;
val* var12 /* : ACallExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ACallExpr */;
long var13 /* : Int */;
long var14 /* : Int */;
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
var_pexprnode2 = var_nodearraylist1;
/* <var_pexprnode2:nullable Object> isa nullable AExpr */
cltype = type_nullable__nit__AExpr.color;
idtype = type_nullable__nit__AExpr.id;
if(var_pexprnode2 == NULL) {
var6 = 1;
} else {
if(cltype >= (((long)var_pexprnode2&3)?type_info[((long)var_pexprnode2&3)]:var_pexprnode2->type)->table_size) {
var6 = 0;
} else {
var6 = (((long)var_pexprnode2&3)?type_info[((long)var_pexprnode2&3)]:var_pexprnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var6)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8104);
fatal_exit(1);
}
var_tidnode3 = var_nodearraylist6;
/* <var_tidnode3:nullable Object> isa nullable TId */
cltype8 = type_nullable__nit__TId.color;
idtype9 = type_nullable__nit__TId.id;
if(var_tidnode3 == NULL) {
var7 = 1;
} else {
if(cltype8 >= (((long)var_tidnode3&3)?type_info[((long)var_tidnode3&3)]:var_tidnode3->type)->table_size) {
var7 = 0;
} else {
var7 = (((long)var_tidnode3&3)?type_info[((long)var_tidnode3&3)]:var_tidnode3->type)->type_table[cltype8] == idtype9;
}
}
if (unlikely(!var7)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8106);
fatal_exit(1);
}
var10 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
((void(*)(val* self))(var10->class->vft[COLOR_standard__kernel__Object__init]))(var10); /* init on <var10:Array[Object]>*/
}
var_listnode5 = var10;
var11 = NEW_nit__AListExprs(&type_nit__AListExprs);
{
((void(*)(val* self, val* p0))(var11->class->vft[COLOR_nit__parser_prod__AListExprs__init_alistexprs]))(var11, var_listnode5); /* init_alistexprs on <var11:AListExprs>*/
}
var_pexprsnode4 = var11;
var12 = NEW_nit__ACallExpr(&type_nit__ACallExpr);
{
((void(*)(val* self, val* p0, val* p1, val* p2))(var12->class->vft[COLOR_nit__parser_prod__ACallExpr__init_acallexpr]))(var12, var_pexprnode2, var_tidnode3, var_pexprsnode4); /* init_acallexpr on <var12:ACallExpr>*/
}
var_pexprnode1 = var12;
var_node_list = var_pexprnode1;
var13 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction333> */
{
var14 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var13); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var14, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction337#action for (self: ReduceAction337, Parser) */
void nit__parser___nit__parser__ReduceAction337___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var1 /* : AImplicitSelfExpr */;
val* var_pexprnode2 /* var pexprnode2: nullable AImplicitSelfExpr */;
val* var_tidnode3 /* var tidnode3: nullable Object */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var3 /* : Array[Object] */;
val* var_listnode5 /* var listnode5: Array[Object] */;
val* var4 /* : AListExprs */;
val* var_pexprsnode4 /* var pexprsnode4: nullable AListExprs */;
val* var5 /* : ACallExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ACallExpr */;
long var6 /* : Int */;
long var7 /* : Int */;
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
var_tidnode3 = var_nodearraylist1;
/* <var_tidnode3:nullable Object> isa nullable TId */
cltype = type_nullable__nit__TId.color;
idtype = type_nullable__nit__TId.id;
if(var_tidnode3 == NULL) {
var2 = 1;
} else {
if(cltype >= (((long)var_tidnode3&3)?type_info[((long)var_tidnode3&3)]:var_tidnode3->type)->table_size) {
var2 = 0;
} else {
var2 = (((long)var_tidnode3&3)?type_info[((long)var_tidnode3&3)]:var_tidnode3->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8128);
fatal_exit(1);
}
var3 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
((void(*)(val* self))(var3->class->vft[COLOR_standard__kernel__Object__init]))(var3); /* init on <var3:Array[Object]>*/
}
var_listnode5 = var3;
var4 = NEW_nit__AListExprs(&type_nit__AListExprs);
{
((void(*)(val* self, val* p0))(var4->class->vft[COLOR_nit__parser_prod__AListExprs__init_alistexprs]))(var4, var_listnode5); /* init_alistexprs on <var4:AListExprs>*/
}
var_pexprsnode4 = var4;
var5 = NEW_nit__ACallExpr(&type_nit__ACallExpr);
{
((void(*)(val* self, val* p0, val* p1, val* p2))(var5->class->vft[COLOR_nit__parser_prod__ACallExpr__init_acallexpr]))(var5, var_pexprnode2, var_tidnode3, var_pexprsnode4); /* init_acallexpr on <var5:ACallExpr>*/
}
var_pexprnode1 = var5;
var_node_list = var_pexprnode1;
var6 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction337> */
{
var7 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var6); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var7, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction339#action for (self: ReduceAction339, Parser) */
void nit__parser___nit__parser__ReduceAction339___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var2 /* : AImplicitSelfExpr */;
val* var_pexprnode2 /* var pexprnode2: nullable AImplicitSelfExpr */;
val* var_tidnode3 /* var tidnode3: nullable Object */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var4 /* : Array[Object] */;
val* var_listnode5 /* var listnode5: Array[Object] */;
val* var5 /* : AListExprs */;
val* var_pexprsnode4 /* var pexprsnode4: nullable AListExprs */;
val* var6 /* : ACallExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ACallExpr */;
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
var2 = NEW_nit__AImplicitSelfExpr(&type_nit__AImplicitSelfExpr);
{
((void(*)(val* self))(var2->class->vft[COLOR_nit__parser_prod__AImplicitSelfExpr__init_aimplicitselfexpr]))(var2); /* init_aimplicitselfexpr on <var2:AImplicitSelfExpr>*/
}
var_pexprnode2 = var2;
var_tidnode3 = var_nodearraylist2;
/* <var_tidnode3:nullable Object> isa nullable TId */
cltype = type_nullable__nit__TId.color;
idtype = type_nullable__nit__TId.id;
if(var_tidnode3 == NULL) {
var3 = 1;
} else {
if(cltype >= (((long)var_tidnode3&3)?type_info[((long)var_tidnode3&3)]:var_tidnode3->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)var_tidnode3&3)?type_info[((long)var_tidnode3&3)]:var_tidnode3->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8151);
fatal_exit(1);
}
var4 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
((void(*)(val* self))(var4->class->vft[COLOR_standard__kernel__Object__init]))(var4); /* init on <var4:Array[Object]>*/
}
var_listnode5 = var4;
var5 = NEW_nit__AListExprs(&type_nit__AListExprs);
{
((void(*)(val* self, val* p0))(var5->class->vft[COLOR_nit__parser_prod__AListExprs__init_alistexprs]))(var5, var_listnode5); /* init_alistexprs on <var5:AListExprs>*/
}
var_pexprsnode4 = var5;
var6 = NEW_nit__ACallExpr(&type_nit__ACallExpr);
{
((void(*)(val* self, val* p0, val* p1, val* p2))(var6->class->vft[COLOR_nit__parser_prod__ACallExpr__init_acallexpr]))(var6, var_pexprnode2, var_tidnode3, var_pexprsnode4); /* init_acallexpr on <var6:ACallExpr>*/
}
var_pexprnode1 = var6;
var_node_list = var_pexprnode1;
var7 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction339> */
{
var8 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var7); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var8, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction341#action for (self: ReduceAction341, Parser) */
void nit__parser___nit__parser__ReduceAction341___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var3 /* : AImplicitSelfExpr */;
val* var_pexprnode2 /* var pexprnode2: nullable AImplicitSelfExpr */;
val* var_tidnode3 /* var tidnode3: nullable Object */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var5 /* : Array[Object] */;
val* var_listnode5 /* var listnode5: Array[Object] */;
val* var6 /* : AListExprs */;
val* var_pexprsnode4 /* var pexprsnode4: nullable AListExprs */;
val* var7 /* : ACallExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ACallExpr */;
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
var3 = NEW_nit__AImplicitSelfExpr(&type_nit__AImplicitSelfExpr);
{
((void(*)(val* self))(var3->class->vft[COLOR_nit__parser_prod__AImplicitSelfExpr__init_aimplicitselfexpr]))(var3); /* init_aimplicitselfexpr on <var3:AImplicitSelfExpr>*/
}
var_pexprnode2 = var3;
var_tidnode3 = var_nodearraylist3;
/* <var_tidnode3:nullable Object> isa nullable TId */
cltype = type_nullable__nit__TId.color;
idtype = type_nullable__nit__TId.id;
if(var_tidnode3 == NULL) {
var4 = 1;
} else {
if(cltype >= (((long)var_tidnode3&3)?type_info[((long)var_tidnode3&3)]:var_tidnode3->type)->table_size) {
var4 = 0;
} else {
var4 = (((long)var_tidnode3&3)?type_info[((long)var_tidnode3&3)]:var_tidnode3->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8175);
fatal_exit(1);
}
var5 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
((void(*)(val* self))(var5->class->vft[COLOR_standard__kernel__Object__init]))(var5); /* init on <var5:Array[Object]>*/
}
var_listnode5 = var5;
var6 = NEW_nit__AListExprs(&type_nit__AListExprs);
{
((void(*)(val* self, val* p0))(var6->class->vft[COLOR_nit__parser_prod__AListExprs__init_alistexprs]))(var6, var_listnode5); /* init_alistexprs on <var6:AListExprs>*/
}
var_pexprsnode4 = var6;
var7 = NEW_nit__ACallExpr(&type_nit__ACallExpr);
{
((void(*)(val* self, val* p0, val* p1, val* p2))(var7->class->vft[COLOR_nit__parser_prod__ACallExpr__init_acallexpr]))(var7, var_pexprnode2, var_tidnode3, var_pexprsnode4); /* init_acallexpr on <var7:ACallExpr>*/
}
var_pexprnode1 = var7;
var_node_list = var_pexprnode1;
var8 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction341> */
{
var9 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var8); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var9, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction345#action for (self: ReduceAction345, Parser) */
void nit__parser___nit__parser__ReduceAction345___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pqualifiednode2 /* var pqualifiednode2: nullable Object */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var_tkwsupernode3 /* var tkwsupernode3: nullable Object */;
short int var3 /* : Bool */;
int cltype4;
int idtype5;
val* var6 /* : Array[Object] */;
val* var_listnode5 /* var listnode5: Array[Object] */;
val* var7 /* : AListExprs */;
val* var_pexprsnode4 /* var pexprsnode4: nullable AListExprs */;
val* var8 /* : ASuperExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ASuperExpr */;
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
var_pqualifiednode2 = var_nodearraylist1;
/* <var_pqualifiednode2:nullable Object> isa nullable AQualified */
cltype = type_nullable__nit__AQualified.color;
idtype = type_nullable__nit__AQualified.id;
if(var_pqualifiednode2 == NULL) {
var2 = 1;
} else {
if(cltype >= (((long)var_pqualifiednode2&3)?type_info[((long)var_pqualifiednode2&3)]:var_pqualifiednode2->type)->table_size) {
var2 = 0;
} else {
var2 = (((long)var_pqualifiednode2&3)?type_info[((long)var_pqualifiednode2&3)]:var_pqualifiednode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8197);
fatal_exit(1);
}
var_tkwsupernode3 = var_nodearraylist2;
/* <var_tkwsupernode3:nullable Object> isa nullable TKwsuper */
cltype4 = type_nullable__nit__TKwsuper.color;
idtype5 = type_nullable__nit__TKwsuper.id;
if(var_tkwsupernode3 == NULL) {
var3 = 1;
} else {
if(cltype4 >= (((long)var_tkwsupernode3&3)?type_info[((long)var_tkwsupernode3&3)]:var_tkwsupernode3->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)var_tkwsupernode3&3)?type_info[((long)var_tkwsupernode3&3)]:var_tkwsupernode3->type)->type_table[cltype4] == idtype5;
}
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8199);
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
var8 = NEW_nit__ASuperExpr(&type_nit__ASuperExpr);
{
((void(*)(val* self, val* p0, val* p1, val* p2))(var8->class->vft[COLOR_nit__parser_prod__ASuperExpr__init_asuperexpr]))(var8, var_pqualifiednode2, var_tkwsupernode3, var_pexprsnode4); /* init_asuperexpr on <var8:ASuperExpr>*/
}
var_pexprnode1 = var8;
var_node_list = var_pexprnode1;
var9 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction345> */
{
var10 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var9); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var10, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction347#action for (self: ReduceAction347, Parser) */
void nit__parser___nit__parser__ReduceAction347___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_tkwinitnode3 /* var tkwinitnode3: nullable Object */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
val* var8 /* : Array[Object] */;
val* var_listnode5 /* var listnode5: Array[Object] */;
val* var9 /* : AListExprs */;
val* var_pexprsnode4 /* var pexprsnode4: nullable AListExprs */;
val* var10 /* : AInitExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AInitExpr */;
long var11 /* : Int */;
long var12 /* : Int */;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8223);
fatal_exit(1);
}
var_tkwinitnode3 = var_nodearraylist4;
/* <var_tkwinitnode3:nullable Object> isa nullable TKwinit */
cltype6 = type_nullable__nit__TKwinit.color;
idtype7 = type_nullable__nit__TKwinit.id;
if(var_tkwinitnode3 == NULL) {
var5 = 1;
} else {
if(cltype6 >= (((long)var_tkwinitnode3&3)?type_info[((long)var_tkwinitnode3&3)]:var_tkwinitnode3->type)->table_size) {
var5 = 0;
} else {
var5 = (((long)var_tkwinitnode3&3)?type_info[((long)var_tkwinitnode3&3)]:var_tkwinitnode3->type)->type_table[cltype6] == idtype7;
}
}
if (unlikely(!var5)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8225);
fatal_exit(1);
}
var8 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
((void(*)(val* self))(var8->class->vft[COLOR_standard__kernel__Object__init]))(var8); /* init on <var8:Array[Object]>*/
}
var_listnode5 = var8;
var9 = NEW_nit__AListExprs(&type_nit__AListExprs);
{
((void(*)(val* self, val* p0))(var9->class->vft[COLOR_nit__parser_prod__AListExprs__init_alistexprs]))(var9, var_listnode5); /* init_alistexprs on <var9:AListExprs>*/
}
var_pexprsnode4 = var9;
var10 = NEW_nit__AInitExpr(&type_nit__AInitExpr);
{
((void(*)(val* self, val* p0, val* p1, val* p2))(var10->class->vft[COLOR_nit__parser_prod__AInitExpr__init_ainitexpr]))(var10, var_pexprnode2, var_tkwinitnode3, var_pexprsnode4); /* init_ainitexpr on <var10:AInitExpr>*/
}
var_pexprnode1 = var10;
var_node_list = var_pexprnode1;
var11 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction347> */
{
var12 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var11); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var12, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction349#action for (self: ReduceAction349, Parser) */
void nit__parser___nit__parser__ReduceAction349___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var1 /* : AImplicitSelfExpr */;
val* var_pexprnode2 /* var pexprnode2: nullable AImplicitSelfExpr */;
val* var_tkwinitnode3 /* var tkwinitnode3: nullable Object */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var3 /* : Array[Object] */;
val* var_listnode5 /* var listnode5: Array[Object] */;
val* var4 /* : AListExprs */;
val* var_pexprsnode4 /* var pexprsnode4: nullable AListExprs */;
val* var5 /* : AInitExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AInitExpr */;
long var6 /* : Int */;
long var7 /* : Int */;
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
var_tkwinitnode3 = var_nodearraylist1;
/* <var_tkwinitnode3:nullable Object> isa nullable TKwinit */
cltype = type_nullable__nit__TKwinit.color;
idtype = type_nullable__nit__TKwinit.id;
if(var_tkwinitnode3 == NULL) {
var2 = 1;
} else {
if(cltype >= (((long)var_tkwinitnode3&3)?type_info[((long)var_tkwinitnode3&3)]:var_tkwinitnode3->type)->table_size) {
var2 = 0;
} else {
var2 = (((long)var_tkwinitnode3&3)?type_info[((long)var_tkwinitnode3&3)]:var_tkwinitnode3->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8247);
fatal_exit(1);
}
var3 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
((void(*)(val* self))(var3->class->vft[COLOR_standard__kernel__Object__init]))(var3); /* init on <var3:Array[Object]>*/
}
var_listnode5 = var3;
var4 = NEW_nit__AListExprs(&type_nit__AListExprs);
{
((void(*)(val* self, val* p0))(var4->class->vft[COLOR_nit__parser_prod__AListExprs__init_alistexprs]))(var4, var_listnode5); /* init_alistexprs on <var4:AListExprs>*/
}
var_pexprsnode4 = var4;
var5 = NEW_nit__AInitExpr(&type_nit__AInitExpr);
{
((void(*)(val* self, val* p0, val* p1, val* p2))(var5->class->vft[COLOR_nit__parser_prod__AInitExpr__init_ainitexpr]))(var5, var_pexprnode2, var_tkwinitnode3, var_pexprsnode4); /* init_ainitexpr on <var5:AInitExpr>*/
}
var_pexprnode1 = var5;
var_node_list = var_pexprnode1;
var6 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction349> */
{
var7 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var6); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var7, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction350#action for (self: ReduceAction350, Parser) */
void nit__parser___nit__parser__ReduceAction350___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_pexprsnode3 /* var pexprsnode3: nullable Object */;
short int var3 /* : Bool */;
int cltype4;
int idtype5;
val* var6 /* : ABraExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ABraExpr */;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8269);
fatal_exit(1);
}
var_pexprsnode3 = var_nodearraylist2;
/* <var_pexprsnode3:nullable Object> isa nullable AExprs */
cltype4 = type_nullable__nit__AExprs.color;
idtype5 = type_nullable__nit__AExprs.id;
if(var_pexprsnode3 == NULL) {
var3 = 1;
} else {
if(cltype4 >= (((long)var_pexprsnode3&3)?type_info[((long)var_pexprsnode3&3)]:var_pexprsnode3->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)var_pexprsnode3&3)?type_info[((long)var_pexprsnode3&3)]:var_pexprsnode3->type)->type_table[cltype4] == idtype5;
}
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8271);
fatal_exit(1);
}
var6 = NEW_nit__ABraExpr(&type_nit__ABraExpr);
{
((void(*)(val* self, val* p0, val* p1))(var6->class->vft[COLOR_nit__parser_prod__ABraExpr__init_abraexpr]))(var6, var_pexprnode2, var_pexprsnode3); /* init_abraexpr on <var6:ABraExpr>*/
}
var_pexprnode1 = var6;
var_node_list = var_pexprnode1;
var7 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction350> */
{
var8 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var7); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var8, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction351#action for (self: ReduceAction351, Parser) */
void nit__parser___nit__parser__ReduceAction351___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_tkwnewnode2 /* var tkwnewnode2: nullable Object */;
short int var7 /* : Bool */;
int cltype;
int idtype;
val* var_ptypenode3 /* var ptypenode3: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var_tidnode4 /* var tidnode4: nullable Object */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
val* var_pexprsnode5 /* var pexprsnode5: nullable Object */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
val* var17 /* : ANewExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ANewExpr */;
long var18 /* : Int */;
long var19 /* : Int */;
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
var_tkwnewnode2 = var_nodearraylist1;
/* <var_tkwnewnode2:nullable Object> isa nullable TKwnew */
cltype = type_nullable__nit__TKwnew.color;
idtype = type_nullable__nit__TKwnew.id;
if(var_tkwnewnode2 == NULL) {
var7 = 1;
} else {
if(cltype >= (((long)var_tkwnewnode2&3)?type_info[((long)var_tkwnewnode2&3)]:var_tkwnewnode2->type)->table_size) {
var7 = 0;
} else {
var7 = (((long)var_tkwnewnode2&3)?type_info[((long)var_tkwnewnode2&3)]:var_tkwnewnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var7)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8293);
fatal_exit(1);
}
var_ptypenode3 = var_nodearraylist3;
/* <var_ptypenode3:nullable Object> isa nullable AType */
cltype9 = type_nullable__nit__AType.color;
idtype10 = type_nullable__nit__AType.id;
if(var_ptypenode3 == NULL) {
var8 = 1;
} else {
if(cltype9 >= (((long)var_ptypenode3&3)?type_info[((long)var_ptypenode3&3)]:var_ptypenode3->type)->table_size) {
var8 = 0;
} else {
var8 = (((long)var_ptypenode3&3)?type_info[((long)var_ptypenode3&3)]:var_ptypenode3->type)->type_table[cltype9] == idtype10;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8295);
fatal_exit(1);
}
var_tidnode4 = var_nodearraylist6;
/* <var_tidnode4:nullable Object> isa nullable TId */
cltype12 = type_nullable__nit__TId.color;
idtype13 = type_nullable__nit__TId.id;
if(var_tidnode4 == NULL) {
var11 = 1;
} else {
if(cltype12 >= (((long)var_tidnode4&3)?type_info[((long)var_tidnode4&3)]:var_tidnode4->type)->table_size) {
var11 = 0;
} else {
var11 = (((long)var_tidnode4&3)?type_info[((long)var_tidnode4&3)]:var_tidnode4->type)->type_table[cltype12] == idtype13;
}
}
if (unlikely(!var11)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8297);
fatal_exit(1);
}
var_pexprsnode5 = var_nodearraylist7;
/* <var_pexprsnode5:nullable Object> isa nullable AExprs */
cltype15 = type_nullable__nit__AExprs.color;
idtype16 = type_nullable__nit__AExprs.id;
if(var_pexprsnode5 == NULL) {
var14 = 1;
} else {
if(cltype15 >= (((long)var_pexprsnode5&3)?type_info[((long)var_pexprsnode5&3)]:var_pexprsnode5->type)->table_size) {
var14 = 0;
} else {
var14 = (((long)var_pexprsnode5&3)?type_info[((long)var_pexprsnode5&3)]:var_pexprsnode5->type)->type_table[cltype15] == idtype16;
}
}
if (unlikely(!var14)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8299);
fatal_exit(1);
}
var17 = NEW_nit__ANewExpr(&type_nit__ANewExpr);
{
((void(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var17->class->vft[COLOR_nit__parser_prod__ANewExpr__init_anewexpr]))(var17, var_tkwnewnode2, var_ptypenode3, var_tidnode4, var_pexprsnode5); /* init_anewexpr on <var17:ANewExpr>*/
}
var_pexprnode1 = var17;
var_node_list = var_pexprnode1;
var18 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction351> */
{
var19 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var18); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var19, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction352#action for (self: ReduceAction352, Parser) */
void nit__parser___nit__parser__ReduceAction352___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_tkwnewnode2 /* var tkwnewnode2: nullable Object */;
short int var6 /* : Bool */;
int cltype;
int idtype;
val* var_ptypenode3 /* var ptypenode3: nullable Object */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
val* var_tidnode4 /* var tidnode4: nullable Object */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var13 /* : Array[Object] */;
val* var_listnode6 /* var listnode6: Array[Object] */;
val* var14 /* : AListExprs */;
val* var_pexprsnode5 /* var pexprsnode5: nullable AListExprs */;
val* var15 /* : ANewExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ANewExpr */;
long var16 /* : Int */;
long var17 /* : Int */;
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
var_tkwnewnode2 = var_nodearraylist1;
/* <var_tkwnewnode2:nullable Object> isa nullable TKwnew */
cltype = type_nullable__nit__TKwnew.color;
idtype = type_nullable__nit__TKwnew.id;
if(var_tkwnewnode2 == NULL) {
var6 = 1;
} else {
if(cltype >= (((long)var_tkwnewnode2&3)?type_info[((long)var_tkwnewnode2&3)]:var_tkwnewnode2->type)->table_size) {
var6 = 0;
} else {
var6 = (((long)var_tkwnewnode2&3)?type_info[((long)var_tkwnewnode2&3)]:var_tkwnewnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var6)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8322);
fatal_exit(1);
}
var_ptypenode3 = var_nodearraylist3;
/* <var_ptypenode3:nullable Object> isa nullable AType */
cltype8 = type_nullable__nit__AType.color;
idtype9 = type_nullable__nit__AType.id;
if(var_ptypenode3 == NULL) {
var7 = 1;
} else {
if(cltype8 >= (((long)var_ptypenode3&3)?type_info[((long)var_ptypenode3&3)]:var_ptypenode3->type)->table_size) {
var7 = 0;
} else {
var7 = (((long)var_ptypenode3&3)?type_info[((long)var_ptypenode3&3)]:var_ptypenode3->type)->type_table[cltype8] == idtype9;
}
}
if (unlikely(!var7)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8324);
fatal_exit(1);
}
var_tidnode4 = var_nodearraylist6;
/* <var_tidnode4:nullable Object> isa nullable TId */
cltype11 = type_nullable__nit__TId.color;
idtype12 = type_nullable__nit__TId.id;
if(var_tidnode4 == NULL) {
var10 = 1;
} else {
if(cltype11 >= (((long)var_tidnode4&3)?type_info[((long)var_tidnode4&3)]:var_tidnode4->type)->table_size) {
var10 = 0;
} else {
var10 = (((long)var_tidnode4&3)?type_info[((long)var_tidnode4&3)]:var_tidnode4->type)->type_table[cltype11] == idtype12;
}
}
if (unlikely(!var10)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8326);
fatal_exit(1);
}
var13 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
((void(*)(val* self))(var13->class->vft[COLOR_standard__kernel__Object__init]))(var13); /* init on <var13:Array[Object]>*/
}
var_listnode6 = var13;
var14 = NEW_nit__AListExprs(&type_nit__AListExprs);
{
((void(*)(val* self, val* p0))(var14->class->vft[COLOR_nit__parser_prod__AListExprs__init_alistexprs]))(var14, var_listnode6); /* init_alistexprs on <var14:AListExprs>*/
}
var_pexprsnode5 = var14;
var15 = NEW_nit__ANewExpr(&type_nit__ANewExpr);
{
((void(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var15->class->vft[COLOR_nit__parser_prod__ANewExpr__init_anewexpr]))(var15, var_tkwnewnode2, var_ptypenode3, var_tidnode4, var_pexprsnode5); /* init_anewexpr on <var15:ANewExpr>*/
}
var_pexprnode1 = var15;
var_node_list = var_pexprnode1;
var16 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction352> */
{
var17 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var16); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var17, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction353#action for (self: ReduceAction353, Parser) */
void nit__parser___nit__parser__ReduceAction353___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_tkwnewnode2 /* var tkwnewnode2: nullable Object */;
short int var8 /* : Bool */;
int cltype;
int idtype;
val* var_ptypenode3 /* var ptypenode3: nullable Object */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var_tidnode4 /* var tidnode4: nullable Object */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
val* var_pexprsnode5 /* var pexprsnode5: nullable Object */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
val* var18 /* : ANewExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ANewExpr */;
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
var_tkwnewnode2 = var_nodearraylist1;
/* <var_tkwnewnode2:nullable Object> isa nullable TKwnew */
cltype = type_nullable__nit__TKwnew.color;
idtype = type_nullable__nit__TKwnew.id;
if(var_tkwnewnode2 == NULL) {
var8 = 1;
} else {
if(cltype >= (((long)var_tkwnewnode2&3)?type_info[((long)var_tkwnewnode2&3)]:var_tkwnewnode2->type)->table_size) {
var8 = 0;
} else {
var8 = (((long)var_tkwnewnode2&3)?type_info[((long)var_tkwnewnode2&3)]:var_tkwnewnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8355);
fatal_exit(1);
}
var_ptypenode3 = var_nodearraylist3;
/* <var_ptypenode3:nullable Object> isa nullable AType */
cltype10 = type_nullable__nit__AType.color;
idtype11 = type_nullable__nit__AType.id;
if(var_ptypenode3 == NULL) {
var9 = 1;
} else {
if(cltype10 >= (((long)var_ptypenode3&3)?type_info[((long)var_ptypenode3&3)]:var_ptypenode3->type)->table_size) {
var9 = 0;
} else {
var9 = (((long)var_ptypenode3&3)?type_info[((long)var_ptypenode3&3)]:var_ptypenode3->type)->type_table[cltype10] == idtype11;
}
}
if (unlikely(!var9)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8357);
fatal_exit(1);
}
var_tidnode4 = var_nodearraylist7;
/* <var_tidnode4:nullable Object> isa nullable TId */
cltype13 = type_nullable__nit__TId.color;
idtype14 = type_nullable__nit__TId.id;
if(var_tidnode4 == NULL) {
var12 = 1;
} else {
if(cltype13 >= (((long)var_tidnode4&3)?type_info[((long)var_tidnode4&3)]:var_tidnode4->type)->table_size) {
var12 = 0;
} else {
var12 = (((long)var_tidnode4&3)?type_info[((long)var_tidnode4&3)]:var_tidnode4->type)->type_table[cltype13] == idtype14;
}
}
if (unlikely(!var12)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8359);
fatal_exit(1);
}
var_pexprsnode5 = var_nodearraylist8;
/* <var_pexprsnode5:nullable Object> isa nullable AExprs */
cltype16 = type_nullable__nit__AExprs.color;
idtype17 = type_nullable__nit__AExprs.id;
if(var_pexprsnode5 == NULL) {
var15 = 1;
} else {
if(cltype16 >= (((long)var_pexprsnode5&3)?type_info[((long)var_pexprsnode5&3)]:var_pexprsnode5->type)->table_size) {
var15 = 0;
} else {
var15 = (((long)var_pexprsnode5&3)?type_info[((long)var_pexprsnode5&3)]:var_pexprsnode5->type)->type_table[cltype16] == idtype17;
}
}
if (unlikely(!var15)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8361);
fatal_exit(1);
}
var18 = NEW_nit__ANewExpr(&type_nit__ANewExpr);
{
((void(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var18->class->vft[COLOR_nit__parser_prod__ANewExpr__init_anewexpr]))(var18, var_tkwnewnode2, var_ptypenode3, var_tidnode4, var_pexprsnode5); /* init_anewexpr on <var18:ANewExpr>*/
}
var_pexprnode1 = var18;
var_node_list = var_pexprnode1;
var19 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction353> */
{
var20 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var19); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var20, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction354#action for (self: ReduceAction354, Parser) */
void nit__parser___nit__parser__ReduceAction354___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_tkwnewnode2 /* var tkwnewnode2: nullable Object */;
short int var7 /* : Bool */;
int cltype;
int idtype;
val* var_ptypenode3 /* var ptypenode3: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var_tidnode4 /* var tidnode4: nullable Object */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
val* var14 /* : Array[Object] */;
val* var_listnode6 /* var listnode6: Array[Object] */;
val* var15 /* : AListExprs */;
val* var_pexprsnode5 /* var pexprsnode5: nullable AListExprs */;
val* var16 /* : ANewExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ANewExpr */;
long var17 /* : Int */;
long var18 /* : Int */;
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
var_tkwnewnode2 = var_nodearraylist1;
/* <var_tkwnewnode2:nullable Object> isa nullable TKwnew */
cltype = type_nullable__nit__TKwnew.color;
idtype = type_nullable__nit__TKwnew.id;
if(var_tkwnewnode2 == NULL) {
var7 = 1;
} else {
if(cltype >= (((long)var_tkwnewnode2&3)?type_info[((long)var_tkwnewnode2&3)]:var_tkwnewnode2->type)->table_size) {
var7 = 0;
} else {
var7 = (((long)var_tkwnewnode2&3)?type_info[((long)var_tkwnewnode2&3)]:var_tkwnewnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var7)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8385);
fatal_exit(1);
}
var_ptypenode3 = var_nodearraylist3;
/* <var_ptypenode3:nullable Object> isa nullable AType */
cltype9 = type_nullable__nit__AType.color;
idtype10 = type_nullable__nit__AType.id;
if(var_ptypenode3 == NULL) {
var8 = 1;
} else {
if(cltype9 >= (((long)var_ptypenode3&3)?type_info[((long)var_ptypenode3&3)]:var_ptypenode3->type)->table_size) {
var8 = 0;
} else {
var8 = (((long)var_ptypenode3&3)?type_info[((long)var_ptypenode3&3)]:var_ptypenode3->type)->type_table[cltype9] == idtype10;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8387);
fatal_exit(1);
}
var_tidnode4 = var_nodearraylist7;
/* <var_tidnode4:nullable Object> isa nullable TId */
cltype12 = type_nullable__nit__TId.color;
idtype13 = type_nullable__nit__TId.id;
if(var_tidnode4 == NULL) {
var11 = 1;
} else {
if(cltype12 >= (((long)var_tidnode4&3)?type_info[((long)var_tidnode4&3)]:var_tidnode4->type)->table_size) {
var11 = 0;
} else {
var11 = (((long)var_tidnode4&3)?type_info[((long)var_tidnode4&3)]:var_tidnode4->type)->type_table[cltype12] == idtype13;
}
}
if (unlikely(!var11)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8389);
fatal_exit(1);
}
var14 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
((void(*)(val* self))(var14->class->vft[COLOR_standard__kernel__Object__init]))(var14); /* init on <var14:Array[Object]>*/
}
var_listnode6 = var14;
var15 = NEW_nit__AListExprs(&type_nit__AListExprs);
{
((void(*)(val* self, val* p0))(var15->class->vft[COLOR_nit__parser_prod__AListExprs__init_alistexprs]))(var15, var_listnode6); /* init_alistexprs on <var15:AListExprs>*/
}
var_pexprsnode5 = var15;
var16 = NEW_nit__ANewExpr(&type_nit__ANewExpr);
{
((void(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var16->class->vft[COLOR_nit__parser_prod__ANewExpr__init_anewexpr]))(var16, var_tkwnewnode2, var_ptypenode3, var_tidnode4, var_pexprsnode5); /* init_anewexpr on <var16:ANewExpr>*/
}
var_pexprnode1 = var16;
var_node_list = var_pexprnode1;
var17 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction354> */
{
var18 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var17); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var18, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction355#action for (self: ReduceAction355, Parser) */
void nit__parser___nit__parser__ReduceAction355___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_tkwnewnode2 /* var tkwnewnode2: nullable Object */;
short int var9 /* : Bool */;
int cltype;
int idtype;
val* var_ptypenode3 /* var ptypenode3: nullable Object */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var_tidnode4 /* var tidnode4: nullable Object */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
val* var_pexprsnode5 /* var pexprsnode5: nullable Object */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
val* var19 /* : ANewExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ANewExpr */;
long var20 /* : Int */;
long var21 /* : Int */;
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
var_tkwnewnode2 = var_nodearraylist1;
/* <var_tkwnewnode2:nullable Object> isa nullable TKwnew */
cltype = type_nullable__nit__TKwnew.color;
idtype = type_nullable__nit__TKwnew.id;
if(var_tkwnewnode2 == NULL) {
var9 = 1;
} else {
if(cltype >= (((long)var_tkwnewnode2&3)?type_info[((long)var_tkwnewnode2&3)]:var_tkwnewnode2->type)->table_size) {
var9 = 0;
} else {
var9 = (((long)var_tkwnewnode2&3)?type_info[((long)var_tkwnewnode2&3)]:var_tkwnewnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var9)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8419);
fatal_exit(1);
}
var_ptypenode3 = var_nodearraylist3;
/* <var_ptypenode3:nullable Object> isa nullable AType */
cltype11 = type_nullable__nit__AType.color;
idtype12 = type_nullable__nit__AType.id;
if(var_ptypenode3 == NULL) {
var10 = 1;
} else {
if(cltype11 >= (((long)var_ptypenode3&3)?type_info[((long)var_ptypenode3&3)]:var_ptypenode3->type)->table_size) {
var10 = 0;
} else {
var10 = (((long)var_ptypenode3&3)?type_info[((long)var_ptypenode3&3)]:var_ptypenode3->type)->type_table[cltype11] == idtype12;
}
}
if (unlikely(!var10)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8421);
fatal_exit(1);
}
var_tidnode4 = var_nodearraylist8;
/* <var_tidnode4:nullable Object> isa nullable TId */
cltype14 = type_nullable__nit__TId.color;
idtype15 = type_nullable__nit__TId.id;
if(var_tidnode4 == NULL) {
var13 = 1;
} else {
if(cltype14 >= (((long)var_tidnode4&3)?type_info[((long)var_tidnode4&3)]:var_tidnode4->type)->table_size) {
var13 = 0;
} else {
var13 = (((long)var_tidnode4&3)?type_info[((long)var_tidnode4&3)]:var_tidnode4->type)->type_table[cltype14] == idtype15;
}
}
if (unlikely(!var13)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8423);
fatal_exit(1);
}
var_pexprsnode5 = var_nodearraylist9;
/* <var_pexprsnode5:nullable Object> isa nullable AExprs */
cltype17 = type_nullable__nit__AExprs.color;
idtype18 = type_nullable__nit__AExprs.id;
if(var_pexprsnode5 == NULL) {
var16 = 1;
} else {
if(cltype17 >= (((long)var_pexprsnode5&3)?type_info[((long)var_pexprsnode5&3)]:var_pexprsnode5->type)->table_size) {
var16 = 0;
} else {
var16 = (((long)var_pexprsnode5&3)?type_info[((long)var_pexprsnode5&3)]:var_pexprsnode5->type)->type_table[cltype17] == idtype18;
}
}
if (unlikely(!var16)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8425);
fatal_exit(1);
}
var19 = NEW_nit__ANewExpr(&type_nit__ANewExpr);
{
((void(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var19->class->vft[COLOR_nit__parser_prod__ANewExpr__init_anewexpr]))(var19, var_tkwnewnode2, var_ptypenode3, var_tidnode4, var_pexprsnode5); /* init_anewexpr on <var19:ANewExpr>*/
}
var_pexprnode1 = var19;
var_node_list = var_pexprnode1;
var20 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction355> */
{
var21 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var20); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var21, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction356#action for (self: ReduceAction356, Parser) */
void nit__parser___nit__parser__ReduceAction356___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_tkwnewnode2 /* var tkwnewnode2: nullable Object */;
short int var8 /* : Bool */;
int cltype;
int idtype;
val* var_ptypenode3 /* var ptypenode3: nullable Object */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var_tidnode4 /* var tidnode4: nullable Object */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
val* var15 /* : Array[Object] */;
val* var_listnode6 /* var listnode6: Array[Object] */;
val* var16 /* : AListExprs */;
val* var_pexprsnode5 /* var pexprsnode5: nullable AListExprs */;
val* var17 /* : ANewExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ANewExpr */;
long var18 /* : Int */;
long var19 /* : Int */;
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
var_tkwnewnode2 = var_nodearraylist1;
/* <var_tkwnewnode2:nullable Object> isa nullable TKwnew */
cltype = type_nullable__nit__TKwnew.color;
idtype = type_nullable__nit__TKwnew.id;
if(var_tkwnewnode2 == NULL) {
var8 = 1;
} else {
if(cltype >= (((long)var_tkwnewnode2&3)?type_info[((long)var_tkwnewnode2&3)]:var_tkwnewnode2->type)->table_size) {
var8 = 0;
} else {
var8 = (((long)var_tkwnewnode2&3)?type_info[((long)var_tkwnewnode2&3)]:var_tkwnewnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8450);
fatal_exit(1);
}
var_ptypenode3 = var_nodearraylist3;
/* <var_ptypenode3:nullable Object> isa nullable AType */
cltype10 = type_nullable__nit__AType.color;
idtype11 = type_nullable__nit__AType.id;
if(var_ptypenode3 == NULL) {
var9 = 1;
} else {
if(cltype10 >= (((long)var_ptypenode3&3)?type_info[((long)var_ptypenode3&3)]:var_ptypenode3->type)->table_size) {
var9 = 0;
} else {
var9 = (((long)var_ptypenode3&3)?type_info[((long)var_ptypenode3&3)]:var_ptypenode3->type)->type_table[cltype10] == idtype11;
}
}
if (unlikely(!var9)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8452);
fatal_exit(1);
}
var_tidnode4 = var_nodearraylist8;
/* <var_tidnode4:nullable Object> isa nullable TId */
cltype13 = type_nullable__nit__TId.color;
idtype14 = type_nullable__nit__TId.id;
if(var_tidnode4 == NULL) {
var12 = 1;
} else {
if(cltype13 >= (((long)var_tidnode4&3)?type_info[((long)var_tidnode4&3)]:var_tidnode4->type)->table_size) {
var12 = 0;
} else {
var12 = (((long)var_tidnode4&3)?type_info[((long)var_tidnode4&3)]:var_tidnode4->type)->type_table[cltype13] == idtype14;
}
}
if (unlikely(!var12)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8454);
fatal_exit(1);
}
var15 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
((void(*)(val* self))(var15->class->vft[COLOR_standard__kernel__Object__init]))(var15); /* init on <var15:Array[Object]>*/
}
var_listnode6 = var15;
var16 = NEW_nit__AListExprs(&type_nit__AListExprs);
{
((void(*)(val* self, val* p0))(var16->class->vft[COLOR_nit__parser_prod__AListExprs__init_alistexprs]))(var16, var_listnode6); /* init_alistexprs on <var16:AListExprs>*/
}
var_pexprsnode5 = var16;
var17 = NEW_nit__ANewExpr(&type_nit__ANewExpr);
{
((void(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var17->class->vft[COLOR_nit__parser_prod__ANewExpr__init_anewexpr]))(var17, var_tkwnewnode2, var_ptypenode3, var_tidnode4, var_pexprsnode5); /* init_anewexpr on <var17:ANewExpr>*/
}
var_pexprnode1 = var17;
var_node_list = var_pexprnode1;
var18 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction356> */
{
var19 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var18); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var19, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction359#action for (self: ReduceAction359, Parser) */
void nit__parser___nit__parser__ReduceAction359___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_pexprnode2 /* var pexprnode2: nullable Object */;
short int var10 /* : Bool */;
int cltype;
int idtype;
val* var_tkwasnode3 /* var tkwasnode3: nullable Object */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
val* var_toparnode4 /* var toparnode4: nullable Object */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
val* var_ptypenode5 /* var ptypenode5: nullable Object */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
val* var_tcparnode6 /* var tcparnode6: nullable Object */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
val* var23 /* : AAsCastExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AAsCastExpr */;
long var24 /* : Int */;
long var25 /* : Int */;
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
var_pexprnode2 = var_nodearraylist1;
/* <var_pexprnode2:nullable Object> isa nullable AExpr */
cltype = type_nullable__nit__AExpr.color;
idtype = type_nullable__nit__AExpr.id;
if(var_pexprnode2 == NULL) {
var10 = 1;
} else {
if(cltype >= (((long)var_pexprnode2&3)?type_info[((long)var_pexprnode2&3)]:var_pexprnode2->type)->table_size) {
var10 = 0;
} else {
var10 = (((long)var_pexprnode2&3)?type_info[((long)var_pexprnode2&3)]:var_pexprnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var10)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8485);
fatal_exit(1);
}
var_tkwasnode3 = var_nodearraylist4;
/* <var_tkwasnode3:nullable Object> isa nullable TKwas */
cltype12 = type_nullable__nit__TKwas.color;
idtype13 = type_nullable__nit__TKwas.id;
if(var_tkwasnode3 == NULL) {
var11 = 1;
} else {
if(cltype12 >= (((long)var_tkwasnode3&3)?type_info[((long)var_tkwasnode3&3)]:var_tkwasnode3->type)->table_size) {
var11 = 0;
} else {
var11 = (((long)var_tkwasnode3&3)?type_info[((long)var_tkwasnode3&3)]:var_tkwasnode3->type)->type_table[cltype12] == idtype13;
}
}
if (unlikely(!var11)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8487);
fatal_exit(1);
}
var_toparnode4 = var_nodearraylist6;
/* <var_toparnode4:nullable Object> isa nullable TOpar */
cltype15 = type_nullable__nit__TOpar.color;
idtype16 = type_nullable__nit__TOpar.id;
if(var_toparnode4 == NULL) {
var14 = 1;
} else {
if(cltype15 >= (((long)var_toparnode4&3)?type_info[((long)var_toparnode4&3)]:var_toparnode4->type)->table_size) {
var14 = 0;
} else {
var14 = (((long)var_toparnode4&3)?type_info[((long)var_toparnode4&3)]:var_toparnode4->type)->type_table[cltype15] == idtype16;
}
}
if (unlikely(!var14)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8489);
fatal_exit(1);
}
var_ptypenode5 = var_nodearraylist8;
/* <var_ptypenode5:nullable Object> isa nullable AType */
cltype18 = type_nullable__nit__AType.color;
idtype19 = type_nullable__nit__AType.id;
if(var_ptypenode5 == NULL) {
var17 = 1;
} else {
if(cltype18 >= (((long)var_ptypenode5&3)?type_info[((long)var_ptypenode5&3)]:var_ptypenode5->type)->table_size) {
var17 = 0;
} else {
var17 = (((long)var_ptypenode5&3)?type_info[((long)var_ptypenode5&3)]:var_ptypenode5->type)->type_table[cltype18] == idtype19;
}
}
if (unlikely(!var17)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8491);
fatal_exit(1);
}
var_tcparnode6 = var_nodearraylist10;
/* <var_tcparnode6:nullable Object> isa nullable TCpar */
cltype21 = type_nullable__nit__TCpar.color;
idtype22 = type_nullable__nit__TCpar.id;
if(var_tcparnode6 == NULL) {
var20 = 1;
} else {
if(cltype21 >= (((long)var_tcparnode6&3)?type_info[((long)var_tcparnode6&3)]:var_tcparnode6->type)->table_size) {
var20 = 0;
} else {
var20 = (((long)var_tcparnode6&3)?type_info[((long)var_tcparnode6&3)]:var_tcparnode6->type)->type_table[cltype21] == idtype22;
}
}
if (unlikely(!var20)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8493);
fatal_exit(1);
}
var23 = NEW_nit__AAsCastExpr(&type_nit__AAsCastExpr);
{
((void(*)(val* self, val* p0, val* p1, val* p2, val* p3, val* p4))(var23->class->vft[COLOR_nit__parser_prod__AAsCastExpr__init_aascastexpr]))(var23, var_pexprnode2, var_tkwasnode3, var_toparnode4, var_ptypenode5, var_tcparnode6); /* init_aascastexpr on <var23:AAsCastExpr>*/
}
var_pexprnode1 = var23;
var_node_list = var_pexprnode1;
var24 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction359> */
{
var25 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var24); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var25, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction360#action for (self: ReduceAction360, Parser) */
void nit__parser___nit__parser__ReduceAction360___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist12 /* var nodearraylist12: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist11 /* var nodearraylist11: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist10 /* var nodearraylist10: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist9 /* var nodearraylist9: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist8 /* var nodearraylist8: nullable Object */;
val* var5 /* : nullable Object */;
val* var_nodearraylist7 /* var nodearraylist7: nullable Object */;
val* var6 /* : nullable Object */;
val* var_nodearraylist6 /* var nodearraylist6: nullable Object */;
val* var7 /* : nullable Object */;
val* var_nodearraylist5 /* var nodearraylist5: nullable Object */;
val* var8 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var9 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var10 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var11 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pexprnode2 /* var pexprnode2: nullable Object */;
short int var12 /* : Bool */;
int cltype;
int idtype;
val* var_tkwasnode3 /* var tkwasnode3: nullable Object */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
val* var_toparnode4 /* var toparnode4: nullable Object */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
val* var_tkwnotnode5 /* var tkwnotnode5: nullable Object */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
val* var_tkwnullnode6 /* var tkwnullnode6: nullable Object */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
val* var_tcparnode7 /* var tcparnode7: nullable Object */;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
val* var28 /* : AAsNotnullExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AAsNotnullExpr */;
long var29 /* : Int */;
long var30 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist12 = var;
{
var1 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist11 = var1;
{
var2 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist10 = var2;
{
var3 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist9 = var3;
{
var4 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist8 = var4;
{
var5 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist7 = var5;
{
var6 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist6 = var6;
{
var7 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist5 = var7;
{
var8 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist4 = var8;
{
var9 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist3 = var9;
{
var10 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist2 = var10;
{
var11 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist1 = var11;
var_pexprnode2 = var_nodearraylist1;
/* <var_pexprnode2:nullable Object> isa nullable AExpr */
cltype = type_nullable__nit__AExpr.color;
idtype = type_nullable__nit__AExpr.id;
if(var_pexprnode2 == NULL) {
var12 = 1;
} else {
if(cltype >= (((long)var_pexprnode2&3)?type_info[((long)var_pexprnode2&3)]:var_pexprnode2->type)->table_size) {
var12 = 0;
} else {
var12 = (((long)var_pexprnode2&3)?type_info[((long)var_pexprnode2&3)]:var_pexprnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var12)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8523);
fatal_exit(1);
}
var_tkwasnode3 = var_nodearraylist4;
/* <var_tkwasnode3:nullable Object> isa nullable TKwas */
cltype14 = type_nullable__nit__TKwas.color;
idtype15 = type_nullable__nit__TKwas.id;
if(var_tkwasnode3 == NULL) {
var13 = 1;
} else {
if(cltype14 >= (((long)var_tkwasnode3&3)?type_info[((long)var_tkwasnode3&3)]:var_tkwasnode3->type)->table_size) {
var13 = 0;
} else {
var13 = (((long)var_tkwasnode3&3)?type_info[((long)var_tkwasnode3&3)]:var_tkwasnode3->type)->type_table[cltype14] == idtype15;
}
}
if (unlikely(!var13)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8525);
fatal_exit(1);
}
var_toparnode4 = var_nodearraylist6;
/* <var_toparnode4:nullable Object> isa nullable TOpar */
cltype17 = type_nullable__nit__TOpar.color;
idtype18 = type_nullable__nit__TOpar.id;
if(var_toparnode4 == NULL) {
var16 = 1;
} else {
if(cltype17 >= (((long)var_toparnode4&3)?type_info[((long)var_toparnode4&3)]:var_toparnode4->type)->table_size) {
var16 = 0;
} else {
var16 = (((long)var_toparnode4&3)?type_info[((long)var_toparnode4&3)]:var_toparnode4->type)->type_table[cltype17] == idtype18;
}
}
if (unlikely(!var16)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8527);
fatal_exit(1);
}
var_tkwnotnode5 = var_nodearraylist8;
/* <var_tkwnotnode5:nullable Object> isa nullable TKwnot */
cltype20 = type_nullable__nit__TKwnot.color;
idtype21 = type_nullable__nit__TKwnot.id;
if(var_tkwnotnode5 == NULL) {
var19 = 1;
} else {
if(cltype20 >= (((long)var_tkwnotnode5&3)?type_info[((long)var_tkwnotnode5&3)]:var_tkwnotnode5->type)->table_size) {
var19 = 0;
} else {
var19 = (((long)var_tkwnotnode5&3)?type_info[((long)var_tkwnotnode5&3)]:var_tkwnotnode5->type)->type_table[cltype20] == idtype21;
}
}
if (unlikely(!var19)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8529);
fatal_exit(1);
}
var_tkwnullnode6 = var_nodearraylist10;
/* <var_tkwnullnode6:nullable Object> isa nullable TKwnull */
cltype23 = type_nullable__nit__TKwnull.color;
idtype24 = type_nullable__nit__TKwnull.id;
if(var_tkwnullnode6 == NULL) {
var22 = 1;
} else {
if(cltype23 >= (((long)var_tkwnullnode6&3)?type_info[((long)var_tkwnullnode6&3)]:var_tkwnullnode6->type)->table_size) {
var22 = 0;
} else {
var22 = (((long)var_tkwnullnode6&3)?type_info[((long)var_tkwnullnode6&3)]:var_tkwnullnode6->type)->type_table[cltype23] == idtype24;
}
}
if (unlikely(!var22)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8531);
fatal_exit(1);
}
var_tcparnode7 = var_nodearraylist12;
/* <var_tcparnode7:nullable Object> isa nullable TCpar */
cltype26 = type_nullable__nit__TCpar.color;
idtype27 = type_nullable__nit__TCpar.id;
if(var_tcparnode7 == NULL) {
var25 = 1;
} else {
if(cltype26 >= (((long)var_tcparnode7&3)?type_info[((long)var_tcparnode7&3)]:var_tcparnode7->type)->table_size) {
var25 = 0;
} else {
var25 = (((long)var_tcparnode7&3)?type_info[((long)var_tcparnode7&3)]:var_tcparnode7->type)->type_table[cltype26] == idtype27;
}
}
if (unlikely(!var25)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8533);
fatal_exit(1);
}
var28 = NEW_nit__AAsNotnullExpr(&type_nit__AAsNotnullExpr);
{
((void(*)(val* self, val* p0, val* p1, val* p2, val* p3, val* p4, val* p5))(var28->class->vft[COLOR_nit__parser_prod__AAsNotnullExpr__init_aasnotnullexpr]))(var28, var_pexprnode2, var_tkwasnode3, var_toparnode4, var_tkwnotnode5, var_tkwnullnode6, var_tcparnode7); /* init_aasnotnullexpr on <var28:AAsNotnullExpr>*/
}
var_pexprnode1 = var28;
var_node_list = var_pexprnode1;
var29 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction360> */
{
var30 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var29); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var30, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction361#action for (self: ReduceAction361, Parser) */
void nit__parser___nit__parser__ReduceAction361___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_pexprnode2 /* var pexprnode2: nullable Object */;
short int var8 /* : Bool */;
int cltype;
int idtype;
val* var_tkwasnode3 /* var tkwasnode3: nullable Object */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var_tkwnotnode5 /* var tkwnotnode5: nullable Object */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
val* var_tkwnullnode6 /* var tkwnullnode6: nullable Object */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
val* var18 /* : AAsNotnullExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AAsNotnullExpr */;
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
var_pexprnode2 = var_nodearraylist1;
/* <var_pexprnode2:nullable Object> isa nullable AExpr */
cltype = type_nullable__nit__AExpr.color;
idtype = type_nullable__nit__AExpr.id;
if(var_pexprnode2 == NULL) {
var8 = 1;
} else {
if(cltype >= (((long)var_pexprnode2&3)?type_info[((long)var_pexprnode2&3)]:var_pexprnode2->type)->table_size) {
var8 = 0;
} else {
var8 = (((long)var_pexprnode2&3)?type_info[((long)var_pexprnode2&3)]:var_pexprnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8560);
fatal_exit(1);
}
var_tkwasnode3 = var_nodearraylist4;
/* <var_tkwasnode3:nullable Object> isa nullable TKwas */
cltype10 = type_nullable__nit__TKwas.color;
idtype11 = type_nullable__nit__TKwas.id;
if(var_tkwasnode3 == NULL) {
var9 = 1;
} else {
if(cltype10 >= (((long)var_tkwasnode3&3)?type_info[((long)var_tkwasnode3&3)]:var_tkwasnode3->type)->table_size) {
var9 = 0;
} else {
var9 = (((long)var_tkwasnode3&3)?type_info[((long)var_tkwasnode3&3)]:var_tkwasnode3->type)->type_table[cltype10] == idtype11;
}
}
if (unlikely(!var9)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8562);
fatal_exit(1);
}
var_tkwnotnode5 = var_nodearraylist6;
/* <var_tkwnotnode5:nullable Object> isa nullable TKwnot */
cltype13 = type_nullable__nit__TKwnot.color;
idtype14 = type_nullable__nit__TKwnot.id;
if(var_tkwnotnode5 == NULL) {
var12 = 1;
} else {
if(cltype13 >= (((long)var_tkwnotnode5&3)?type_info[((long)var_tkwnotnode5&3)]:var_tkwnotnode5->type)->table_size) {
var12 = 0;
} else {
var12 = (((long)var_tkwnotnode5&3)?type_info[((long)var_tkwnotnode5&3)]:var_tkwnotnode5->type)->type_table[cltype13] == idtype14;
}
}
if (unlikely(!var12)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8564);
fatal_exit(1);
}
var_tkwnullnode6 = var_nodearraylist8;
/* <var_tkwnullnode6:nullable Object> isa nullable TKwnull */
cltype16 = type_nullable__nit__TKwnull.color;
idtype17 = type_nullable__nit__TKwnull.id;
if(var_tkwnullnode6 == NULL) {
var15 = 1;
} else {
if(cltype16 >= (((long)var_tkwnullnode6&3)?type_info[((long)var_tkwnullnode6&3)]:var_tkwnullnode6->type)->table_size) {
var15 = 0;
} else {
var15 = (((long)var_tkwnullnode6&3)?type_info[((long)var_tkwnullnode6&3)]:var_tkwnullnode6->type)->type_table[cltype16] == idtype17;
}
}
if (unlikely(!var15)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8566);
fatal_exit(1);
}
var18 = NEW_nit__AAsNotnullExpr(&type_nit__AAsNotnullExpr);
{
((void(*)(val* self, val* p0, val* p1, val* p2, val* p3, val* p4, val* p5))(var18->class->vft[COLOR_nit__parser_prod__AAsNotnullExpr__init_aasnotnullexpr]))(var18, var_pexprnode2, var_tkwasnode3, ((val*)NULL), var_tkwnotnode5, var_tkwnullnode6, ((val*)NULL)); /* init_aasnotnullexpr on <var18:AAsNotnullExpr>*/
}
var_pexprnode1 = var18;
var_node_list = var_pexprnode1;
var19 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction361> */
{
var20 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var19); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var20, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction363#action for (self: ReduceAction363, Parser) */
void nit__parser___nit__parser__ReduceAction363___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_tdotdotdotnode3 /* var tdotdotdotnode3: nullable Object */;
short int var3 /* : Bool */;
int cltype4;
int idtype5;
val* var6 /* : AVarargExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AVarargExpr */;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8587);
fatal_exit(1);
}
var_tdotdotdotnode3 = var_nodearraylist2;
/* <var_tdotdotdotnode3:nullable Object> isa nullable TDotdotdot */
cltype4 = type_nullable__nit__TDotdotdot.color;
idtype5 = type_nullable__nit__TDotdotdot.id;
if(var_tdotdotdotnode3 == NULL) {
var3 = 1;
} else {
if(cltype4 >= (((long)var_tdotdotdotnode3&3)?type_info[((long)var_tdotdotdotnode3&3)]:var_tdotdotdotnode3->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)var_tdotdotdotnode3&3)?type_info[((long)var_tdotdotdotnode3&3)]:var_tdotdotdotnode3->type)->type_table[cltype4] == idtype5;
}
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8589);
fatal_exit(1);
}
var6 = NEW_nit__AVarargExpr(&type_nit__AVarargExpr);
{
((void(*)(val* self, val* p0, val* p1))(var6->class->vft[COLOR_nit__parser_prod__AVarargExpr__init_avarargexpr]))(var6, var_pexprnode2, var_tdotdotdotnode3); /* init_avarargexpr on <var6:AVarargExpr>*/
}
var_pexprnode1 = var6;
var_node_list = var_pexprnode1;
var7 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction363> */
{
var8 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var7); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var8, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction364#action for (self: ReduceAction364, Parser) */
void nit__parser___nit__parser__ReduceAction364___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tidnode2 /* var tidnode2: nullable Object */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var_tassignnode3 /* var tassignnode3: nullable Object */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
val* var_pexprnode4 /* var pexprnode4: nullable Object */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
val* var10 /* : ANamedargExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ANamedargExpr */;
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
var_tidnode2 = var_nodearraylist1;
/* <var_tidnode2:nullable Object> isa nullable TId */
cltype = type_nullable__nit__TId.color;
idtype = type_nullable__nit__TId.id;
if(var_tidnode2 == NULL) {
var3 = 1;
} else {
if(cltype >= (((long)var_tidnode2&3)?type_info[((long)var_tidnode2&3)]:var_tidnode2->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)var_tidnode2&3)?type_info[((long)var_tidnode2&3)]:var_tidnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8607);
fatal_exit(1);
}
var_tassignnode3 = var_nodearraylist2;
/* <var_tassignnode3:nullable Object> isa nullable TAssign */
cltype5 = type_nullable__nit__TAssign.color;
idtype6 = type_nullable__nit__TAssign.id;
if(var_tassignnode3 == NULL) {
var4 = 1;
} else {
if(cltype5 >= (((long)var_tassignnode3&3)?type_info[((long)var_tassignnode3&3)]:var_tassignnode3->type)->table_size) {
var4 = 0;
} else {
var4 = (((long)var_tassignnode3&3)?type_info[((long)var_tassignnode3&3)]:var_tassignnode3->type)->type_table[cltype5] == idtype6;
}
}
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8609);
fatal_exit(1);
}
var_pexprnode4 = var_nodearraylist3;
/* <var_pexprnode4:nullable Object> isa nullable AExpr */
cltype8 = type_nullable__nit__AExpr.color;
idtype9 = type_nullable__nit__AExpr.id;
if(var_pexprnode4 == NULL) {
var7 = 1;
} else {
if(cltype8 >= (((long)var_pexprnode4&3)?type_info[((long)var_pexprnode4&3)]:var_pexprnode4->type)->table_size) {
var7 = 0;
} else {
var7 = (((long)var_pexprnode4&3)?type_info[((long)var_pexprnode4&3)]:var_pexprnode4->type)->type_table[cltype8] == idtype9;
}
}
if (unlikely(!var7)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8611);
fatal_exit(1);
}
var10 = NEW_nit__ANamedargExpr(&type_nit__ANamedargExpr);
{
((void(*)(val* self, val* p0, val* p1, val* p2))(var10->class->vft[COLOR_nit__parser_prod__ANamedargExpr__init_anamedargexpr]))(var10, var_tidnode2, var_tassignnode3, var_pexprnode4); /* init_anamedargexpr on <var10:ANamedargExpr>*/
}
var_pexprnode1 = var10;
var_node_list = var_pexprnode1;
var11 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction364> */
{
var12 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var11); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var12, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction365#action for (self: ReduceAction365, Parser) */
void nit__parser___nit__parser__ReduceAction365___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tkwselfnode2 /* var tkwselfnode2: nullable Object */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var_pannotationsnode3 /* var pannotationsnode3: nullable Object */;
short int var3 /* : Bool */;
int cltype4;
int idtype5;
val* var6 /* : ASelfExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ASelfExpr */;
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
var_tkwselfnode2 = var_nodearraylist1;
/* <var_tkwselfnode2:nullable Object> isa nullable TKwself */
cltype = type_nullable__nit__TKwself.color;
idtype = type_nullable__nit__TKwself.id;
if(var_tkwselfnode2 == NULL) {
var2 = 1;
} else {
if(cltype >= (((long)var_tkwselfnode2&3)?type_info[((long)var_tkwselfnode2&3)]:var_tkwselfnode2->type)->table_size) {
var2 = 0;
} else {
var2 = (((long)var_tkwselfnode2&3)?type_info[((long)var_tkwselfnode2&3)]:var_tkwselfnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8629);
fatal_exit(1);
}
var_pannotationsnode3 = var_nodearraylist2;
/* <var_pannotationsnode3:nullable Object> isa nullable AAnnotations */
cltype4 = type_nullable__nit__AAnnotations.color;
idtype5 = type_nullable__nit__AAnnotations.id;
if(var_pannotationsnode3 == NULL) {
var3 = 1;
} else {
if(cltype4 >= (((long)var_pannotationsnode3&3)?type_info[((long)var_pannotationsnode3&3)]:var_pannotationsnode3->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)var_pannotationsnode3&3)?type_info[((long)var_pannotationsnode3&3)]:var_pannotationsnode3->type)->type_table[cltype4] == idtype5;
}
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8631);
fatal_exit(1);
}
var6 = NEW_nit__ASelfExpr(&type_nit__ASelfExpr);
{
((void(*)(val* self, val* p0, val* p1))(var6->class->vft[COLOR_nit__parser_prod__ASelfExpr__init_aselfexpr]))(var6, var_tkwselfnode2, var_pannotationsnode3); /* init_aselfexpr on <var6:ASelfExpr>*/
}
var_pexprnode1 = var6;
var_node_list = var_pexprnode1;
var7 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction365> */
{
var8 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var7); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var8, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction366#action for (self: ReduceAction366, Parser) */
void nit__parser___nit__parser__ReduceAction366___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tkwtruenode2 /* var tkwtruenode2: nullable Object */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var_pannotationsnode3 /* var pannotationsnode3: nullable Object */;
short int var3 /* : Bool */;
int cltype4;
int idtype5;
val* var6 /* : ATrueExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ATrueExpr */;
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
var_tkwtruenode2 = var_nodearraylist1;
/* <var_tkwtruenode2:nullable Object> isa nullable TKwtrue */
cltype = type_nullable__nit__TKwtrue.color;
idtype = type_nullable__nit__TKwtrue.id;
if(var_tkwtruenode2 == NULL) {
var2 = 1;
} else {
if(cltype >= (((long)var_tkwtruenode2&3)?type_info[((long)var_tkwtruenode2&3)]:var_tkwtruenode2->type)->table_size) {
var2 = 0;
} else {
var2 = (((long)var_tkwtruenode2&3)?type_info[((long)var_tkwtruenode2&3)]:var_tkwtruenode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8648);
fatal_exit(1);
}
var_pannotationsnode3 = var_nodearraylist2;
/* <var_pannotationsnode3:nullable Object> isa nullable AAnnotations */
cltype4 = type_nullable__nit__AAnnotations.color;
idtype5 = type_nullable__nit__AAnnotations.id;
if(var_pannotationsnode3 == NULL) {
var3 = 1;
} else {
if(cltype4 >= (((long)var_pannotationsnode3&3)?type_info[((long)var_pannotationsnode3&3)]:var_pannotationsnode3->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)var_pannotationsnode3&3)?type_info[((long)var_pannotationsnode3&3)]:var_pannotationsnode3->type)->type_table[cltype4] == idtype5;
}
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8650);
fatal_exit(1);
}
var6 = NEW_nit__ATrueExpr(&type_nit__ATrueExpr);
{
((void(*)(val* self, val* p0, val* p1))(var6->class->vft[COLOR_nit__parser_prod__ATrueExpr__init_atrueexpr]))(var6, var_tkwtruenode2, var_pannotationsnode3); /* init_atrueexpr on <var6:ATrueExpr>*/
}
var_pexprnode1 = var6;
var_node_list = var_pexprnode1;
var7 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction366> */
{
var8 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var7); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var8, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction367#action for (self: ReduceAction367, Parser) */
void nit__parser___nit__parser__ReduceAction367___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tkwfalsenode2 /* var tkwfalsenode2: nullable Object */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var_pannotationsnode3 /* var pannotationsnode3: nullable Object */;
short int var3 /* : Bool */;
int cltype4;
int idtype5;
val* var6 /* : AFalseExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AFalseExpr */;
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
var_tkwfalsenode2 = var_nodearraylist1;
/* <var_tkwfalsenode2:nullable Object> isa nullable TKwfalse */
cltype = type_nullable__nit__TKwfalse.color;
idtype = type_nullable__nit__TKwfalse.id;
if(var_tkwfalsenode2 == NULL) {
var2 = 1;
} else {
if(cltype >= (((long)var_tkwfalsenode2&3)?type_info[((long)var_tkwfalsenode2&3)]:var_tkwfalsenode2->type)->table_size) {
var2 = 0;
} else {
var2 = (((long)var_tkwfalsenode2&3)?type_info[((long)var_tkwfalsenode2&3)]:var_tkwfalsenode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8667);
fatal_exit(1);
}
var_pannotationsnode3 = var_nodearraylist2;
/* <var_pannotationsnode3:nullable Object> isa nullable AAnnotations */
cltype4 = type_nullable__nit__AAnnotations.color;
idtype5 = type_nullable__nit__AAnnotations.id;
if(var_pannotationsnode3 == NULL) {
var3 = 1;
} else {
if(cltype4 >= (((long)var_pannotationsnode3&3)?type_info[((long)var_pannotationsnode3&3)]:var_pannotationsnode3->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)var_pannotationsnode3&3)?type_info[((long)var_pannotationsnode3&3)]:var_pannotationsnode3->type)->type_table[cltype4] == idtype5;
}
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8669);
fatal_exit(1);
}
var6 = NEW_nit__AFalseExpr(&type_nit__AFalseExpr);
{
((void(*)(val* self, val* p0, val* p1))(var6->class->vft[COLOR_nit__parser_prod__AFalseExpr__init_afalseexpr]))(var6, var_tkwfalsenode2, var_pannotationsnode3); /* init_afalseexpr on <var6:AFalseExpr>*/
}
var_pexprnode1 = var6;
var_node_list = var_pexprnode1;
var7 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction367> */
{
var8 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var7); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var8, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction368#action for (self: ReduceAction368, Parser) */
void nit__parser___nit__parser__ReduceAction368___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tkwnullnode2 /* var tkwnullnode2: nullable Object */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var_pannotationsnode3 /* var pannotationsnode3: nullable Object */;
short int var3 /* : Bool */;
int cltype4;
int idtype5;
val* var6 /* : ANullExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ANullExpr */;
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
var_tkwnullnode2 = var_nodearraylist1;
/* <var_tkwnullnode2:nullable Object> isa nullable TKwnull */
cltype = type_nullable__nit__TKwnull.color;
idtype = type_nullable__nit__TKwnull.id;
if(var_tkwnullnode2 == NULL) {
var2 = 1;
} else {
if(cltype >= (((long)var_tkwnullnode2&3)?type_info[((long)var_tkwnullnode2&3)]:var_tkwnullnode2->type)->table_size) {
var2 = 0;
} else {
var2 = (((long)var_tkwnullnode2&3)?type_info[((long)var_tkwnullnode2&3)]:var_tkwnullnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8686);
fatal_exit(1);
}
var_pannotationsnode3 = var_nodearraylist2;
/* <var_pannotationsnode3:nullable Object> isa nullable AAnnotations */
cltype4 = type_nullable__nit__AAnnotations.color;
idtype5 = type_nullable__nit__AAnnotations.id;
if(var_pannotationsnode3 == NULL) {
var3 = 1;
} else {
if(cltype4 >= (((long)var_pannotationsnode3&3)?type_info[((long)var_pannotationsnode3&3)]:var_pannotationsnode3->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)var_pannotationsnode3&3)?type_info[((long)var_pannotationsnode3&3)]:var_pannotationsnode3->type)->type_table[cltype4] == idtype5;
}
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8688);
fatal_exit(1);
}
var6 = NEW_nit__ANullExpr(&type_nit__ANullExpr);
{
((void(*)(val* self, val* p0, val* p1))(var6->class->vft[COLOR_nit__parser_prod__ANullExpr__init_anullexpr]))(var6, var_tkwnullnode2, var_pannotationsnode3); /* init_anullexpr on <var6:ANullExpr>*/
}
var_pexprnode1 = var6;
var_node_list = var_pexprnode1;
var7 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction368> */
{
var8 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var7); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var8, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction369#action for (self: ReduceAction369, Parser) */
void nit__parser___nit__parser__ReduceAction369___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tnumbernode2 /* var tnumbernode2: nullable Object */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var_pannotationsnode3 /* var pannotationsnode3: nullable Object */;
short int var3 /* : Bool */;
int cltype4;
int idtype5;
val* var6 /* : ADecIntExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ADecIntExpr */;
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
var_tnumbernode2 = var_nodearraylist1;
/* <var_tnumbernode2:nullable Object> isa nullable TNumber */
cltype = type_nullable__nit__TNumber.color;
idtype = type_nullable__nit__TNumber.id;
if(var_tnumbernode2 == NULL) {
var2 = 1;
} else {
if(cltype >= (((long)var_tnumbernode2&3)?type_info[((long)var_tnumbernode2&3)]:var_tnumbernode2->type)->table_size) {
var2 = 0;
} else {
var2 = (((long)var_tnumbernode2&3)?type_info[((long)var_tnumbernode2&3)]:var_tnumbernode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8705);
fatal_exit(1);
}
var_pannotationsnode3 = var_nodearraylist2;
/* <var_pannotationsnode3:nullable Object> isa nullable AAnnotations */
cltype4 = type_nullable__nit__AAnnotations.color;
idtype5 = type_nullable__nit__AAnnotations.id;
if(var_pannotationsnode3 == NULL) {
var3 = 1;
} else {
if(cltype4 >= (((long)var_pannotationsnode3&3)?type_info[((long)var_pannotationsnode3&3)]:var_pannotationsnode3->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)var_pannotationsnode3&3)?type_info[((long)var_pannotationsnode3&3)]:var_pannotationsnode3->type)->type_table[cltype4] == idtype5;
}
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8707);
fatal_exit(1);
}
var6 = NEW_nit__ADecIntExpr(&type_nit__ADecIntExpr);
{
((void(*)(val* self, val* p0, val* p1))(var6->class->vft[COLOR_nit__parser_prod__ADecIntExpr__init_adecintexpr]))(var6, var_tnumbernode2, var_pannotationsnode3); /* init_adecintexpr on <var6:ADecIntExpr>*/
}
var_pexprnode1 = var6;
var_node_list = var_pexprnode1;
var7 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction369> */
{
var8 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var7); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var8, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction370#action for (self: ReduceAction370, Parser) */
void nit__parser___nit__parser__ReduceAction370___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_thexnumbernode2 /* var thexnumbernode2: nullable Object */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var_pannotationsnode3 /* var pannotationsnode3: nullable Object */;
short int var3 /* : Bool */;
int cltype4;
int idtype5;
val* var6 /* : AHexIntExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AHexIntExpr */;
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
var_thexnumbernode2 = var_nodearraylist1;
/* <var_thexnumbernode2:nullable Object> isa nullable THexNumber */
cltype = type_nullable__nit__THexNumber.color;
idtype = type_nullable__nit__THexNumber.id;
if(var_thexnumbernode2 == NULL) {
var2 = 1;
} else {
if(cltype >= (((long)var_thexnumbernode2&3)?type_info[((long)var_thexnumbernode2&3)]:var_thexnumbernode2->type)->table_size) {
var2 = 0;
} else {
var2 = (((long)var_thexnumbernode2&3)?type_info[((long)var_thexnumbernode2&3)]:var_thexnumbernode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8724);
fatal_exit(1);
}
var_pannotationsnode3 = var_nodearraylist2;
/* <var_pannotationsnode3:nullable Object> isa nullable AAnnotations */
cltype4 = type_nullable__nit__AAnnotations.color;
idtype5 = type_nullable__nit__AAnnotations.id;
if(var_pannotationsnode3 == NULL) {
var3 = 1;
} else {
if(cltype4 >= (((long)var_pannotationsnode3&3)?type_info[((long)var_pannotationsnode3&3)]:var_pannotationsnode3->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)var_pannotationsnode3&3)?type_info[((long)var_pannotationsnode3&3)]:var_pannotationsnode3->type)->type_table[cltype4] == idtype5;
}
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8726);
fatal_exit(1);
}
var6 = NEW_nit__AHexIntExpr(&type_nit__AHexIntExpr);
{
((void(*)(val* self, val* p0, val* p1))(var6->class->vft[COLOR_nit__parser_prod__AHexIntExpr__init_ahexintexpr]))(var6, var_thexnumbernode2, var_pannotationsnode3); /* init_ahexintexpr on <var6:AHexIntExpr>*/
}
var_pexprnode1 = var6;
var_node_list = var_pexprnode1;
var7 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction370> */
{
var8 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var7); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var8, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction371#action for (self: ReduceAction371, Parser) */
void nit__parser___nit__parser__ReduceAction371___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tfloatnode2 /* var tfloatnode2: nullable Object */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var_pannotationsnode3 /* var pannotationsnode3: nullable Object */;
short int var3 /* : Bool */;
int cltype4;
int idtype5;
val* var6 /* : AFloatExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AFloatExpr */;
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
var_tfloatnode2 = var_nodearraylist1;
/* <var_tfloatnode2:nullable Object> isa nullable TFloat */
cltype = type_nullable__nit__TFloat.color;
idtype = type_nullable__nit__TFloat.id;
if(var_tfloatnode2 == NULL) {
var2 = 1;
} else {
if(cltype >= (((long)var_tfloatnode2&3)?type_info[((long)var_tfloatnode2&3)]:var_tfloatnode2->type)->table_size) {
var2 = 0;
} else {
var2 = (((long)var_tfloatnode2&3)?type_info[((long)var_tfloatnode2&3)]:var_tfloatnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8743);
fatal_exit(1);
}
var_pannotationsnode3 = var_nodearraylist2;
/* <var_pannotationsnode3:nullable Object> isa nullable AAnnotations */
cltype4 = type_nullable__nit__AAnnotations.color;
idtype5 = type_nullable__nit__AAnnotations.id;
if(var_pannotationsnode3 == NULL) {
var3 = 1;
} else {
if(cltype4 >= (((long)var_pannotationsnode3&3)?type_info[((long)var_pannotationsnode3&3)]:var_pannotationsnode3->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)var_pannotationsnode3&3)?type_info[((long)var_pannotationsnode3&3)]:var_pannotationsnode3->type)->type_table[cltype4] == idtype5;
}
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8745);
fatal_exit(1);
}
var6 = NEW_nit__AFloatExpr(&type_nit__AFloatExpr);
{
((void(*)(val* self, val* p0, val* p1))(var6->class->vft[COLOR_nit__parser_prod__AFloatExpr__init_afloatexpr]))(var6, var_tfloatnode2, var_pannotationsnode3); /* init_afloatexpr on <var6:AFloatExpr>*/
}
var_pexprnode1 = var6;
var_node_list = var_pexprnode1;
var7 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction371> */
{
var8 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var7); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var8, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction372#action for (self: ReduceAction372, Parser) */
void nit__parser___nit__parser__ReduceAction372___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tcharnode2 /* var tcharnode2: nullable Object */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var_pannotationsnode3 /* var pannotationsnode3: nullable Object */;
short int var3 /* : Bool */;
int cltype4;
int idtype5;
val* var6 /* : ACharExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ACharExpr */;
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
var_tcharnode2 = var_nodearraylist1;
/* <var_tcharnode2:nullable Object> isa nullable TChar */
cltype = type_nullable__nit__TChar.color;
idtype = type_nullable__nit__TChar.id;
if(var_tcharnode2 == NULL) {
var2 = 1;
} else {
if(cltype >= (((long)var_tcharnode2&3)?type_info[((long)var_tcharnode2&3)]:var_tcharnode2->type)->table_size) {
var2 = 0;
} else {
var2 = (((long)var_tcharnode2&3)?type_info[((long)var_tcharnode2&3)]:var_tcharnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8762);
fatal_exit(1);
}
var_pannotationsnode3 = var_nodearraylist2;
/* <var_pannotationsnode3:nullable Object> isa nullable AAnnotations */
cltype4 = type_nullable__nit__AAnnotations.color;
idtype5 = type_nullable__nit__AAnnotations.id;
if(var_pannotationsnode3 == NULL) {
var3 = 1;
} else {
if(cltype4 >= (((long)var_pannotationsnode3&3)?type_info[((long)var_pannotationsnode3&3)]:var_pannotationsnode3->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)var_pannotationsnode3&3)?type_info[((long)var_pannotationsnode3&3)]:var_pannotationsnode3->type)->type_table[cltype4] == idtype5;
}
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8764);
fatal_exit(1);
}
var6 = NEW_nit__ACharExpr(&type_nit__ACharExpr);
{
((void(*)(val* self, val* p0, val* p1))(var6->class->vft[COLOR_nit__parser_prod__ACharExpr__init_acharexpr]))(var6, var_tcharnode2, var_pannotationsnode3); /* init_acharexpr on <var6:ACharExpr>*/
}
var_pexprnode1 = var6;
var_node_list = var_pexprnode1;
var7 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction372> */
{
var8 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var7); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var8, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction373#action for (self: ReduceAction373, Parser) */
void nit__parser___nit__parser__ReduceAction373___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tstringnode2 /* var tstringnode2: nullable Object */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var_pannotationsnode3 /* var pannotationsnode3: nullable Object */;
short int var3 /* : Bool */;
int cltype4;
int idtype5;
val* var6 /* : AStringExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AStringExpr */;
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
var_tstringnode2 = var_nodearraylist1;
/* <var_tstringnode2:nullable Object> isa nullable TString */
cltype = type_nullable__nit__TString.color;
idtype = type_nullable__nit__TString.id;
if(var_tstringnode2 == NULL) {
var2 = 1;
} else {
if(cltype >= (((long)var_tstringnode2&3)?type_info[((long)var_tstringnode2&3)]:var_tstringnode2->type)->table_size) {
var2 = 0;
} else {
var2 = (((long)var_tstringnode2&3)?type_info[((long)var_tstringnode2&3)]:var_tstringnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8781);
fatal_exit(1);
}
var_pannotationsnode3 = var_nodearraylist2;
/* <var_pannotationsnode3:nullable Object> isa nullable AAnnotations */
cltype4 = type_nullable__nit__AAnnotations.color;
idtype5 = type_nullable__nit__AAnnotations.id;
if(var_pannotationsnode3 == NULL) {
var3 = 1;
} else {
if(cltype4 >= (((long)var_pannotationsnode3&3)?type_info[((long)var_pannotationsnode3&3)]:var_pannotationsnode3->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)var_pannotationsnode3&3)?type_info[((long)var_pannotationsnode3&3)]:var_pannotationsnode3->type)->type_table[cltype4] == idtype5;
}
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8783);
fatal_exit(1);
}
var6 = NEW_nit__AStringExpr(&type_nit__AStringExpr);
{
((void(*)(val* self, val* p0, val* p1))(var6->class->vft[COLOR_nit__parser_prod__AStringExpr__init_astringexpr]))(var6, var_tstringnode2, var_pannotationsnode3); /* init_astringexpr on <var6:AStringExpr>*/
}
var_pexprnode1 = var6;
var_node_list = var_pexprnode1;
var7 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction373> */
{
var8 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var7); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var8, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction376#action for (self: ReduceAction376, Parser) */
void nit__parser___nit__parser__ReduceAction376___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_tobranode2 /* var tobranode2: nullable Object */;
short int var10 /* : Bool */;
int cltype;
int idtype;
val* var_pexprnode3 /* var pexprnode3: nullable Object */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
val* var_pexprnode4 /* var pexprnode4: nullable Object */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
val* var_tcbranode5 /* var tcbranode5: nullable Object */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
val* var_pannotationsnode6 /* var pannotationsnode6: nullable Object */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
val* var23 /* : ACrangeExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ACrangeExpr */;
long var24 /* : Int */;
long var25 /* : Int */;
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
var_tobranode2 = var_nodearraylist1;
/* <var_tobranode2:nullable Object> isa nullable TObra */
cltype = type_nullable__nit__TObra.color;
idtype = type_nullable__nit__TObra.id;
if(var_tobranode2 == NULL) {
var10 = 1;
} else {
if(cltype >= (((long)var_tobranode2&3)?type_info[((long)var_tobranode2&3)]:var_tobranode2->type)->table_size) {
var10 = 0;
} else {
var10 = (((long)var_tobranode2&3)?type_info[((long)var_tobranode2&3)]:var_tobranode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var10)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8808);
fatal_exit(1);
}
var_pexprnode3 = var_nodearraylist3;
/* <var_pexprnode3:nullable Object> isa nullable AExpr */
cltype12 = type_nullable__nit__AExpr.color;
idtype13 = type_nullable__nit__AExpr.id;
if(var_pexprnode3 == NULL) {
var11 = 1;
} else {
if(cltype12 >= (((long)var_pexprnode3&3)?type_info[((long)var_pexprnode3&3)]:var_pexprnode3->type)->table_size) {
var11 = 0;
} else {
var11 = (((long)var_pexprnode3&3)?type_info[((long)var_pexprnode3&3)]:var_pexprnode3->type)->type_table[cltype12] == idtype13;
}
}
if (unlikely(!var11)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8810);
fatal_exit(1);
}
var_pexprnode4 = var_nodearraylist7;
/* <var_pexprnode4:nullable Object> isa nullable AExpr */
cltype15 = type_nullable__nit__AExpr.color;
idtype16 = type_nullable__nit__AExpr.id;
if(var_pexprnode4 == NULL) {
var14 = 1;
} else {
if(cltype15 >= (((long)var_pexprnode4&3)?type_info[((long)var_pexprnode4&3)]:var_pexprnode4->type)->table_size) {
var14 = 0;
} else {
var14 = (((long)var_pexprnode4&3)?type_info[((long)var_pexprnode4&3)]:var_pexprnode4->type)->type_table[cltype15] == idtype16;
}
}
if (unlikely(!var14)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8812);
fatal_exit(1);
}
var_tcbranode5 = var_nodearraylist9;
/* <var_tcbranode5:nullable Object> isa nullable TCbra */
cltype18 = type_nullable__nit__TCbra.color;
idtype19 = type_nullable__nit__TCbra.id;
if(var_tcbranode5 == NULL) {
var17 = 1;
} else {
if(cltype18 >= (((long)var_tcbranode5&3)?type_info[((long)var_tcbranode5&3)]:var_tcbranode5->type)->table_size) {
var17 = 0;
} else {
var17 = (((long)var_tcbranode5&3)?type_info[((long)var_tcbranode5&3)]:var_tcbranode5->type)->type_table[cltype18] == idtype19;
}
}
if (unlikely(!var17)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8814);
fatal_exit(1);
}
var_pannotationsnode6 = var_nodearraylist10;
/* <var_pannotationsnode6:nullable Object> isa nullable AAnnotations */
cltype21 = type_nullable__nit__AAnnotations.color;
idtype22 = type_nullable__nit__AAnnotations.id;
if(var_pannotationsnode6 == NULL) {
var20 = 1;
} else {
if(cltype21 >= (((long)var_pannotationsnode6&3)?type_info[((long)var_pannotationsnode6&3)]:var_pannotationsnode6->type)->table_size) {
var20 = 0;
} else {
var20 = (((long)var_pannotationsnode6&3)?type_info[((long)var_pannotationsnode6&3)]:var_pannotationsnode6->type)->type_table[cltype21] == idtype22;
}
}
if (unlikely(!var20)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8816);
fatal_exit(1);
}
var23 = NEW_nit__ACrangeExpr(&type_nit__ACrangeExpr);
{
((void(*)(val* self, val* p0, val* p1, val* p2, val* p3, val* p4))(var23->class->vft[COLOR_nit__parser_prod__ACrangeExpr__init_acrangeexpr]))(var23, var_tobranode2, var_pexprnode3, var_pexprnode4, var_tcbranode5, var_pannotationsnode6); /* init_acrangeexpr on <var23:ACrangeExpr>*/
}
var_pexprnode1 = var23;
var_node_list = var_pexprnode1;
var24 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction376> */
{
var25 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var24); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var25, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction377#action for (self: ReduceAction377, Parser) */
void nit__parser___nit__parser__ReduceAction377___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_tobranode2 /* var tobranode2: nullable Object */;
short int var10 /* : Bool */;
int cltype;
int idtype;
val* var_pexprnode3 /* var pexprnode3: nullable Object */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
val* var_pexprnode4 /* var pexprnode4: nullable Object */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
val* var_tobranode5 /* var tobranode5: nullable Object */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
val* var_pannotationsnode6 /* var pannotationsnode6: nullable Object */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
val* var23 /* : AOrangeExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AOrangeExpr */;
long var24 /* : Int */;
long var25 /* : Int */;
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
var_tobranode2 = var_nodearraylist1;
/* <var_tobranode2:nullable Object> isa nullable TObra */
cltype = type_nullable__nit__TObra.color;
idtype = type_nullable__nit__TObra.id;
if(var_tobranode2 == NULL) {
var10 = 1;
} else {
if(cltype >= (((long)var_tobranode2&3)?type_info[((long)var_tobranode2&3)]:var_tobranode2->type)->table_size) {
var10 = 0;
} else {
var10 = (((long)var_tobranode2&3)?type_info[((long)var_tobranode2&3)]:var_tobranode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var10)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8844);
fatal_exit(1);
}
var_pexprnode3 = var_nodearraylist3;
/* <var_pexprnode3:nullable Object> isa nullable AExpr */
cltype12 = type_nullable__nit__AExpr.color;
idtype13 = type_nullable__nit__AExpr.id;
if(var_pexprnode3 == NULL) {
var11 = 1;
} else {
if(cltype12 >= (((long)var_pexprnode3&3)?type_info[((long)var_pexprnode3&3)]:var_pexprnode3->type)->table_size) {
var11 = 0;
} else {
var11 = (((long)var_pexprnode3&3)?type_info[((long)var_pexprnode3&3)]:var_pexprnode3->type)->type_table[cltype12] == idtype13;
}
}
if (unlikely(!var11)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8846);
fatal_exit(1);
}
var_pexprnode4 = var_nodearraylist7;
/* <var_pexprnode4:nullable Object> isa nullable AExpr */
cltype15 = type_nullable__nit__AExpr.color;
idtype16 = type_nullable__nit__AExpr.id;
if(var_pexprnode4 == NULL) {
var14 = 1;
} else {
if(cltype15 >= (((long)var_pexprnode4&3)?type_info[((long)var_pexprnode4&3)]:var_pexprnode4->type)->table_size) {
var14 = 0;
} else {
var14 = (((long)var_pexprnode4&3)?type_info[((long)var_pexprnode4&3)]:var_pexprnode4->type)->type_table[cltype15] == idtype16;
}
}
if (unlikely(!var14)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8848);
fatal_exit(1);
}
var_tobranode5 = var_nodearraylist9;
/* <var_tobranode5:nullable Object> isa nullable TObra */
cltype18 = type_nullable__nit__TObra.color;
idtype19 = type_nullable__nit__TObra.id;
if(var_tobranode5 == NULL) {
var17 = 1;
} else {
if(cltype18 >= (((long)var_tobranode5&3)?type_info[((long)var_tobranode5&3)]:var_tobranode5->type)->table_size) {
var17 = 0;
} else {
var17 = (((long)var_tobranode5&3)?type_info[((long)var_tobranode5&3)]:var_tobranode5->type)->type_table[cltype18] == idtype19;
}
}
if (unlikely(!var17)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8850);
fatal_exit(1);
}
var_pannotationsnode6 = var_nodearraylist10;
/* <var_pannotationsnode6:nullable Object> isa nullable AAnnotations */
cltype21 = type_nullable__nit__AAnnotations.color;
idtype22 = type_nullable__nit__AAnnotations.id;
if(var_pannotationsnode6 == NULL) {
var20 = 1;
} else {
if(cltype21 >= (((long)var_pannotationsnode6&3)?type_info[((long)var_pannotationsnode6&3)]:var_pannotationsnode6->type)->table_size) {
var20 = 0;
} else {
var20 = (((long)var_pannotationsnode6&3)?type_info[((long)var_pannotationsnode6&3)]:var_pannotationsnode6->type)->type_table[cltype21] == idtype22;
}
}
if (unlikely(!var20)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8852);
fatal_exit(1);
}
var23 = NEW_nit__AOrangeExpr(&type_nit__AOrangeExpr);
{
((void(*)(val* self, val* p0, val* p1, val* p2, val* p3, val* p4))(var23->class->vft[COLOR_nit__parser_prod__AOrangeExpr__init_aorangeexpr]))(var23, var_tobranode2, var_pexprnode3, var_pexprnode4, var_tobranode5, var_pannotationsnode6); /* init_aorangeexpr on <var23:AOrangeExpr>*/
}
var_pexprnode1 = var23;
var_node_list = var_pexprnode1;
var24 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction377> */
{
var25 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var24); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var25, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction378#action for (self: ReduceAction378, Parser) */
void nit__parser___nit__parser__ReduceAction378___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_listnode4 /* var listnode4: Array[Object] */;
val* var_tobranode2 /* var tobranode2: nullable Object */;
short int var7 /* : Bool */;
int cltype;
int idtype;
val* var_listnode3 /* var listnode3: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var11 /* : Array[Object] */;
val* var_ptypenode5 /* var ptypenode5: nullable Object */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
val* var_tcbranode6 /* var tcbranode6: nullable Object */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
val* var_pannotationsnode7 /* var pannotationsnode7: nullable Object */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
val* var21 /* : AArrayExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AArrayExpr */;
long var22 /* : Int */;
long var23 /* : Int */;
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
var_listnode4 = var6;
var_tobranode2 = var_nodearraylist1;
/* <var_tobranode2:nullable Object> isa nullable TObra */
cltype = type_nullable__nit__TObra.color;
idtype = type_nullable__nit__TObra.id;
if(var_tobranode2 == NULL) {
var7 = 1;
} else {
if(cltype >= (((long)var_tobranode2&3)?type_info[((long)var_tobranode2&3)]:var_tobranode2->type)->table_size) {
var7 = 0;
} else {
var7 = (((long)var_tobranode2&3)?type_info[((long)var_tobranode2&3)]:var_tobranode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var7)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8877);
fatal_exit(1);
}
var_listnode3 = var_nodearraylist3;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8879);
fatal_exit(1);
}
{
var11 = ((val*(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__parser_work__ReduceAction__concat]))(self, var_listnode4, var_listnode3); /* concat on <self:ReduceAction378>*/
}
var_listnode4 = var11;
var_ptypenode5 = var_nodearraylist4;
/* <var_ptypenode5:nullable Object> isa nullable AType */
cltype13 = type_nullable__nit__AType.color;
idtype14 = type_nullable__nit__AType.id;
if(var_ptypenode5 == NULL) {
var12 = 1;
} else {
if(cltype13 >= (((long)var_ptypenode5&3)?type_info[((long)var_ptypenode5&3)]:var_ptypenode5->type)->table_size) {
var12 = 0;
} else {
var12 = (((long)var_ptypenode5&3)?type_info[((long)var_ptypenode5&3)]:var_ptypenode5->type)->type_table[cltype13] == idtype14;
}
}
if (unlikely(!var12)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8882);
fatal_exit(1);
}
var_tcbranode6 = var_nodearraylist5;
/* <var_tcbranode6:nullable Object> isa nullable TCbra */
cltype16 = type_nullable__nit__TCbra.color;
idtype17 = type_nullable__nit__TCbra.id;
if(var_tcbranode6 == NULL) {
var15 = 1;
} else {
if(cltype16 >= (((long)var_tcbranode6&3)?type_info[((long)var_tcbranode6&3)]:var_tcbranode6->type)->table_size) {
var15 = 0;
} else {
var15 = (((long)var_tcbranode6&3)?type_info[((long)var_tcbranode6&3)]:var_tcbranode6->type)->type_table[cltype16] == idtype17;
}
}
if (unlikely(!var15)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8884);
fatal_exit(1);
}
var_pannotationsnode7 = var_nodearraylist6;
/* <var_pannotationsnode7:nullable Object> isa nullable AAnnotations */
cltype19 = type_nullable__nit__AAnnotations.color;
idtype20 = type_nullable__nit__AAnnotations.id;
if(var_pannotationsnode7 == NULL) {
var18 = 1;
} else {
if(cltype19 >= (((long)var_pannotationsnode7&3)?type_info[((long)var_pannotationsnode7&3)]:var_pannotationsnode7->type)->table_size) {
var18 = 0;
} else {
var18 = (((long)var_pannotationsnode7&3)?type_info[((long)var_pannotationsnode7&3)]:var_pannotationsnode7->type)->type_table[cltype19] == idtype20;
}
}
if (unlikely(!var18)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8886);
fatal_exit(1);
}
var21 = NEW_nit__AArrayExpr(&type_nit__AArrayExpr);
{
((void(*)(val* self, val* p0, val* p1, val* p2, val* p3, val* p4))(var21->class->vft[COLOR_nit__parser_prod__AArrayExpr__init_aarrayexpr]))(var21, var_tobranode2, var_listnode4, var_ptypenode5, var_tcbranode6, var_pannotationsnode7); /* init_aarrayexpr on <var21:AArrayExpr>*/
}
var_pexprnode1 = var21;
var_node_list = var_pexprnode1;
var22 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction378> */
{
var23 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var22); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var23, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction379#action for (self: ReduceAction379, Parser) */
void nit__parser___nit__parser__ReduceAction379___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_toparnode2 /* var toparnode2: nullable Object */;
short int var6 /* : Bool */;
int cltype;
int idtype;
val* var_pexprnode3 /* var pexprnode3: nullable Object */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
val* var_tcparnode4 /* var tcparnode4: nullable Object */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var_pannotationsnode5 /* var pannotationsnode5: nullable Object */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
val* var16 /* : AParExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AParExpr */;
long var17 /* : Int */;
long var18 /* : Int */;
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
var_toparnode2 = var_nodearraylist1;
/* <var_toparnode2:nullable Object> isa nullable TOpar */
cltype = type_nullable__nit__TOpar.color;
idtype = type_nullable__nit__TOpar.id;
if(var_toparnode2 == NULL) {
var6 = 1;
} else {
if(cltype >= (((long)var_toparnode2&3)?type_info[((long)var_toparnode2&3)]:var_toparnode2->type)->table_size) {
var6 = 0;
} else {
var6 = (((long)var_toparnode2&3)?type_info[((long)var_toparnode2&3)]:var_toparnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var6)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8910);
fatal_exit(1);
}
var_pexprnode3 = var_nodearraylist3;
/* <var_pexprnode3:nullable Object> isa nullable AExpr */
cltype8 = type_nullable__nit__AExpr.color;
idtype9 = type_nullable__nit__AExpr.id;
if(var_pexprnode3 == NULL) {
var7 = 1;
} else {
if(cltype8 >= (((long)var_pexprnode3&3)?type_info[((long)var_pexprnode3&3)]:var_pexprnode3->type)->table_size) {
var7 = 0;
} else {
var7 = (((long)var_pexprnode3&3)?type_info[((long)var_pexprnode3&3)]:var_pexprnode3->type)->type_table[cltype8] == idtype9;
}
}
if (unlikely(!var7)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8912);
fatal_exit(1);
}
var_tcparnode4 = var_nodearraylist5;
/* <var_tcparnode4:nullable Object> isa nullable TCpar */
cltype11 = type_nullable__nit__TCpar.color;
idtype12 = type_nullable__nit__TCpar.id;
if(var_tcparnode4 == NULL) {
var10 = 1;
} else {
if(cltype11 >= (((long)var_tcparnode4&3)?type_info[((long)var_tcparnode4&3)]:var_tcparnode4->type)->table_size) {
var10 = 0;
} else {
var10 = (((long)var_tcparnode4&3)?type_info[((long)var_tcparnode4&3)]:var_tcparnode4->type)->type_table[cltype11] == idtype12;
}
}
if (unlikely(!var10)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8914);
fatal_exit(1);
}
var_pannotationsnode5 = var_nodearraylist6;
/* <var_pannotationsnode5:nullable Object> isa nullable AAnnotations */
cltype14 = type_nullable__nit__AAnnotations.color;
idtype15 = type_nullable__nit__AAnnotations.id;
if(var_pannotationsnode5 == NULL) {
var13 = 1;
} else {
if(cltype14 >= (((long)var_pannotationsnode5&3)?type_info[((long)var_pannotationsnode5&3)]:var_pannotationsnode5->type)->table_size) {
var13 = 0;
} else {
var13 = (((long)var_pannotationsnode5&3)?type_info[((long)var_pannotationsnode5&3)]:var_pannotationsnode5->type)->type_table[cltype14] == idtype15;
}
}
if (unlikely(!var13)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8916);
fatal_exit(1);
}
var16 = NEW_nit__AParExpr(&type_nit__AParExpr);
{
((void(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var16->class->vft[COLOR_nit__parser_prod__AParExpr__init_aparexpr]))(var16, var_toparnode2, var_pexprnode3, var_tcparnode4, var_pannotationsnode5); /* init_aparexpr on <var16:AParExpr>*/
}
var_pexprnode1 = var16;
var_node_list = var_pexprnode1;
var17 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction379> */
{
var18 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var17); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var18, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction381#action for (self: ReduceAction381, Parser) */
void nit__parser___nit__parser__ReduceAction381___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var2 /* : Array[Object] */;
val* var_listnode4 /* var listnode4: Array[Object] */;
val* var_pexprnode2 /* var pexprnode2: nullable Object */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var_listnode3 /* var listnode3: nullable Object */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
val* var9 /* : Array[Object] */;
val* var10 /* : AManyExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AManyExpr */;
long var11 /* : Int */;
long var12 /* : Int */;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8936);
fatal_exit(1);
}
var_listnode3 = var_nodearraylist2;
/* <var_listnode3:nullable Object> isa Array[Object] */
cltype5 = type_standard__Array__standard__Object.color;
idtype6 = type_standard__Array__standard__Object.id;
if(var_listnode3 == NULL) {
var4 = 0;
} else {
if(cltype5 >= (((long)var_listnode3&3)?type_info[((long)var_listnode3&3)]:var_listnode3->type)->table_size) {
var4 = 0;
} else {
var4 = (((long)var_listnode3&3)?type_info[((long)var_listnode3&3)]:var_listnode3->type)->type_table[cltype5] == idtype6;
}
}
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8938);
fatal_exit(1);
}
if (var_pexprnode2 == NULL) {
var7 = 0; /* is null */
} else {
var7 = 1; /* arg is null and recv is not */
}
if (0) {
var8 = ((short int(*)(val* self, val* p0))(var_pexprnode2->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_pexprnode2, ((val*)NULL)); /* != on <var_pexprnode2:nullable Object(nullable AExpr)>*/
var7 = var8;
}
if (var7){
{
((void(*)(val* self, val* p0))(var_listnode4->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_listnode4, var_pexprnode2); /* add on <var_listnode4:Array[Object]>*/
}
} else {
}
{
var9 = ((val*(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__parser_work__ReduceAction__concat]))(self, var_listnode4, var_listnode3); /* concat on <self:ReduceAction381>*/
}
var_listnode4 = var9;
var10 = NEW_nit__AManyExpr(&type_nit__AManyExpr);
{
((void(*)(val* self, val* p0))(var10->class->vft[COLOR_nit__parser_prod__AManyExpr__init_amanyexpr]))(var10, var_listnode4); /* init_amanyexpr on <var10:AManyExpr>*/
}
var_pexprnode1 = var10;
var_node_list = var_pexprnode1;
var11 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction381> */
{
var12 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var11); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var12, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction382#action for (self: ReduceAction382, Parser) */
void nit__parser___nit__parser__ReduceAction382___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var_pexprnode1 = var_nodearraylist3;
var_node_list = var_pexprnode1;
var3 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction382> */
{
var4 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var3); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var4, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction383#action for (self: ReduceAction383, Parser) */
void nit__parser___nit__parser__ReduceAction383___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var1 /* : Array[Object] */;
val* var_listnode2 /* var listnode2: Array[Object] */;
val* var_pexprnode1 /* var pexprnode1: nullable Object */;
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
var_pexprnode1 = var_nodearraylist1;
if (var_pexprnode1 == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (0) {
var3 = ((short int(*)(val* self, val* p0))((((long)var_pexprnode1&3)?class_info[((long)var_pexprnode1&3)]:var_pexprnode1->class)->vft[COLOR_standard__kernel__Object___33d_61d]))(var_pexprnode1, ((val*)NULL)); /* != on <var_pexprnode1:nullable Object>*/
var2 = var3;
}
if (var2){
{
((void(*)(val* self, val* p0))(var_listnode2->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_listnode2, var_pexprnode1); /* add on <var_listnode2:Array[Object]>*/
}
} else {
}
var_node_list = var_listnode2;
var4 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction383> */
{
var5 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var4); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var5, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction384#action for (self: ReduceAction384, Parser) */
void nit__parser___nit__parser__ReduceAction384___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var2 /* : Array[Object] */;
val* var_listnode3 /* var listnode3: Array[Object] */;
val* var_pexprnode1 /* var pexprnode1: nullable Object */;
val* var_listnode2 /* var listnode2: nullable Object */;
short int var3 /* : Bool */;
int cltype;
int idtype;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var6 /* : Array[Object] */;
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
var_pexprnode1 = var_nodearraylist1;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8988);
fatal_exit(1);
}
if (var_pexprnode1 == NULL) {
var4 = 0; /* is null */
} else {
var4 = 1; /* arg is null and recv is not */
}
if (0) {
var5 = ((short int(*)(val* self, val* p0))((((long)var_pexprnode1&3)?class_info[((long)var_pexprnode1&3)]:var_pexprnode1->class)->vft[COLOR_standard__kernel__Object___33d_61d]))(var_pexprnode1, ((val*)NULL)); /* != on <var_pexprnode1:nullable Object>*/
var4 = var5;
}
if (var4){
{
((void(*)(val* self, val* p0))(var_listnode3->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_listnode3, var_pexprnode1); /* add on <var_listnode3:Array[Object]>*/
}
} else {
}
{
var6 = ((val*(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__parser_work__ReduceAction__concat]))(self, var_listnode3, var_listnode2); /* concat on <self:ReduceAction384>*/
}
var_listnode3 = var6;
var_node_list = var_listnode3;
var7 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction384> */
{
var8 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var7); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var8, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction386#action for (self: ReduceAction386, Parser) */
void nit__parser___nit__parser__ReduceAction386___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pexprnode1 /* var pexprnode1: nullable Object */;
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
var_pexprnode1 = var_nodearraylist1;
var_node_list = var_pexprnode1;
var2 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction386> */
{
var3 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var2); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var3, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction388#action for (self: ReduceAction388, Parser) */
void nit__parser___nit__parser__ReduceAction388___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_tkwifnode2 /* var tkwifnode2: nullable Object */;
short int var7 /* : Bool */;
int cltype;
int idtype;
val* var_pexprnode3 /* var pexprnode3: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var_pexprnode4 /* var pexprnode4: nullable Object */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
val* var14 /* : AIfExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AIfExpr */;
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
var_tkwifnode2 = var_nodearraylist1;
/* <var_tkwifnode2:nullable Object> isa nullable TKwif */
cltype = type_nullable__nit__TKwif.color;
idtype = type_nullable__nit__TKwif.id;
if(var_tkwifnode2 == NULL) {
var7 = 1;
} else {
if(cltype >= (((long)var_tkwifnode2&3)?type_info[((long)var_tkwifnode2&3)]:var_tkwifnode2->type)->table_size) {
var7 = 0;
} else {
var7 = (((long)var_tkwifnode2&3)?type_info[((long)var_tkwifnode2&3)]:var_tkwifnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var7)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9022);
fatal_exit(1);
}
var_pexprnode3 = var_nodearraylist3;
/* <var_pexprnode3:nullable Object> isa nullable AExpr */
cltype9 = type_nullable__nit__AExpr.color;
idtype10 = type_nullable__nit__AExpr.id;
if(var_pexprnode3 == NULL) {
var8 = 1;
} else {
if(cltype9 >= (((long)var_pexprnode3&3)?type_info[((long)var_pexprnode3&3)]:var_pexprnode3->type)->table_size) {
var8 = 0;
} else {
var8 = (((long)var_pexprnode3&3)?type_info[((long)var_pexprnode3&3)]:var_pexprnode3->type)->type_table[cltype9] == idtype10;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9024);
fatal_exit(1);
}
var_pexprnode4 = var_nodearraylist7;
/* <var_pexprnode4:nullable Object> isa nullable AExpr */
cltype12 = type_nullable__nit__AExpr.color;
idtype13 = type_nullable__nit__AExpr.id;
if(var_pexprnode4 == NULL) {
var11 = 1;
} else {
if(cltype12 >= (((long)var_pexprnode4&3)?type_info[((long)var_pexprnode4&3)]:var_pexprnode4->type)->table_size) {
var11 = 0;
} else {
var11 = (((long)var_pexprnode4&3)?type_info[((long)var_pexprnode4&3)]:var_pexprnode4->type)->type_table[cltype12] == idtype13;
}
}
if (unlikely(!var11)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9026);
fatal_exit(1);
}
var14 = NEW_nit__AIfExpr(&type_nit__AIfExpr);
{
((void(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var14->class->vft[COLOR_nit__parser_prod__AIfExpr__init_aifexpr]))(var14, var_tkwifnode2, var_pexprnode3, var_pexprnode4, ((val*)NULL)); /* init_aifexpr on <var14:AIfExpr>*/
}
var_pexprnode1 = var14;
var_node_list = var_pexprnode1;
var15 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction388> */
{
var16 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var15); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var16, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction389#action for (self: ReduceAction389, Parser) */
void nit__parser___nit__parser__ReduceAction389___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_listnode2 /* var listnode2: nullable Object */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var_pexprnode3 /* var pexprnode3: nullable Object */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
val* var8 /* : Array[Object] */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
val* var_pannotationsnode5 /* var pannotationsnode5: nullable Object */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
val* var14 /* : ASuperstringExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ASuperstringExpr */;
long var15 /* : Int */;
long var16 /* : Int */;
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
var_listnode2 = var_nodearraylist1;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9047);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9049);
fatal_exit(1);
}
{
var8 = ((val*(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__parser_work__ReduceAction__concat]))(self, var_listnode4, var_listnode2); /* concat on <self:ReduceAction389>*/
}
var_listnode4 = var8;
if (var_pexprnode3 == NULL) {
var9 = 0; /* is null */
} else {
var9 = 1; /* arg is null and recv is not */
}
if (0) {
var10 = ((short int(*)(val* self, val* p0))(var_pexprnode3->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_pexprnode3, ((val*)NULL)); /* != on <var_pexprnode3:nullable Object(nullable AExpr)>*/
var9 = var10;
}
if (var9){
{
((void(*)(val* self, val* p0))(var_listnode4->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_listnode4, var_pexprnode3); /* add on <var_listnode4:Array[Object]>*/
}
} else {
}
var_pannotationsnode5 = var_nodearraylist3;
/* <var_pannotationsnode5:nullable Object> isa nullable AAnnotations */
cltype12 = type_nullable__nit__AAnnotations.color;
idtype13 = type_nullable__nit__AAnnotations.id;
if(var_pannotationsnode5 == NULL) {
var11 = 1;
} else {
if(cltype12 >= (((long)var_pannotationsnode5&3)?type_info[((long)var_pannotationsnode5&3)]:var_pannotationsnode5->type)->table_size) {
var11 = 0;
} else {
var11 = (((long)var_pannotationsnode5&3)?type_info[((long)var_pannotationsnode5&3)]:var_pannotationsnode5->type)->type_table[cltype12] == idtype13;
}
}
if (unlikely(!var11)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9055);
fatal_exit(1);
}
var14 = NEW_nit__ASuperstringExpr(&type_nit__ASuperstringExpr);
{
((void(*)(val* self, val* p0, val* p1))(var14->class->vft[COLOR_nit__parser_prod__ASuperstringExpr__init_asuperstringexpr]))(var14, var_listnode4, var_pannotationsnode5); /* init_asuperstringexpr on <var14:ASuperstringExpr>*/
}
var_pexprnode1 = var14;
var_node_list = var_pexprnode1;
var15 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction389> */
{
var16 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var15); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var16, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction390#action for (self: ReduceAction390, Parser) */
void nit__parser___nit__parser__ReduceAction390___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_listnode5 /* var listnode5: Array[Object] */;
val* var_listnode2 /* var listnode2: nullable Object */;
short int var5 /* : Bool */;
int cltype;
int idtype;
val* var_listnode3 /* var listnode3: nullable Object */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
val* var_pexprnode4 /* var pexprnode4: nullable Object */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var12 /* : Array[Object] */;
val* var13 /* : Array[Object] */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
val* var_pannotationsnode6 /* var pannotationsnode6: nullable Object */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
val* var19 /* : ASuperstringExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ASuperstringExpr */;
long var20 /* : Int */;
long var21 /* : Int */;
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
var_listnode5 = var4;
var_listnode2 = var_nodearraylist1;
/* <var_listnode2:nullable Object> isa Array[Object] */
cltype = type_standard__Array__standard__Object.color;
idtype = type_standard__Array__standard__Object.id;
if(var_listnode2 == NULL) {
var5 = 0;
} else {
if(cltype >= (((long)var_listnode2&3)?type_info[((long)var_listnode2&3)]:var_listnode2->type)->table_size) {
var5 = 0;
} else {
var5 = (((long)var_listnode2&3)?type_info[((long)var_listnode2&3)]:var_listnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var5)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9075);
fatal_exit(1);
}
var_listnode3 = var_nodearraylist2;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9077);
fatal_exit(1);
}
var_pexprnode4 = var_nodearraylist3;
/* <var_pexprnode4:nullable Object> isa nullable AExpr */
cltype10 = type_nullable__nit__AExpr.color;
idtype11 = type_nullable__nit__AExpr.id;
if(var_pexprnode4 == NULL) {
var9 = 1;
} else {
if(cltype10 >= (((long)var_pexprnode4&3)?type_info[((long)var_pexprnode4&3)]:var_pexprnode4->type)->table_size) {
var9 = 0;
} else {
var9 = (((long)var_pexprnode4&3)?type_info[((long)var_pexprnode4&3)]:var_pexprnode4->type)->type_table[cltype10] == idtype11;
}
}
if (unlikely(!var9)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9079);
fatal_exit(1);
}
{
var12 = ((val*(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__parser_work__ReduceAction__concat]))(self, var_listnode5, var_listnode2); /* concat on <self:ReduceAction390>*/
}
var_listnode5 = var12;
{
var13 = ((val*(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__parser_work__ReduceAction__concat]))(self, var_listnode5, var_listnode3); /* concat on <self:ReduceAction390>*/
}
var_listnode5 = var13;
if (var_pexprnode4 == NULL) {
var14 = 0; /* is null */
} else {
var14 = 1; /* arg is null and recv is not */
}
if (0) {
var15 = ((short int(*)(val* self, val* p0))(var_pexprnode4->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_pexprnode4, ((val*)NULL)); /* != on <var_pexprnode4:nullable Object(nullable AExpr)>*/
var14 = var15;
}
if (var14){
{
((void(*)(val* self, val* p0))(var_listnode5->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_listnode5, var_pexprnode4); /* add on <var_listnode5:Array[Object]>*/
}
} else {
}
var_pannotationsnode6 = var_nodearraylist4;
/* <var_pannotationsnode6:nullable Object> isa nullable AAnnotations */
cltype17 = type_nullable__nit__AAnnotations.color;
idtype18 = type_nullable__nit__AAnnotations.id;
if(var_pannotationsnode6 == NULL) {
var16 = 1;
} else {
if(cltype17 >= (((long)var_pannotationsnode6&3)?type_info[((long)var_pannotationsnode6&3)]:var_pannotationsnode6->type)->table_size) {
var16 = 0;
} else {
var16 = (((long)var_pannotationsnode6&3)?type_info[((long)var_pannotationsnode6&3)]:var_pannotationsnode6->type)->type_table[cltype17] == idtype18;
}
}
if (unlikely(!var16)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9086);
fatal_exit(1);
}
var19 = NEW_nit__ASuperstringExpr(&type_nit__ASuperstringExpr);
{
((void(*)(val* self, val* p0, val* p1))(var19->class->vft[COLOR_nit__parser_prod__ASuperstringExpr__init_asuperstringexpr]))(var19, var_listnode5, var_pannotationsnode6); /* init_asuperstringexpr on <var19:ASuperstringExpr>*/
}
var_pexprnode1 = var19;
var_node_list = var_pexprnode1;
var20 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction390> */
{
var21 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var20); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var21, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction391#action for (self: ReduceAction391, Parser) */
void nit__parser___nit__parser__ReduceAction391___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_pexprnode1 /* var pexprnode1: nullable Object */;
val* var_pexprnode2 /* var pexprnode2: nullable Object */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
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
var_pexprnode1 = var_nodearraylist1;
var_pexprnode2 = var_nodearraylist3;
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
if (var_pexprnode2 == NULL) {
var7 = 0; /* is null */
} else {
var7 = 1; /* arg is null and recv is not */
}
if (0) {
var8 = ((short int(*)(val* self, val* p0))((((long)var_pexprnode2&3)?class_info[((long)var_pexprnode2&3)]:var_pexprnode2->class)->vft[COLOR_standard__kernel__Object___33d_61d]))(var_pexprnode2, ((val*)NULL)); /* != on <var_pexprnode2:nullable Object>*/
var7 = var8;
}
if (var7){
{
((void(*)(val* self, val* p0))(var_listnode3->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_listnode3, var_pexprnode2); /* add on <var_listnode3:Array[Object]>*/
}
} else {
}
var_node_list = var_listnode3;
var9 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction391> */
{
var10 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var9); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var10, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction392#action for (self: ReduceAction392, Parser) */
void nit__parser___nit__parser__ReduceAction392___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var2 /* : Array[Object] */;
val* var_listnode2 /* var listnode2: Array[Object] */;
val* var_pexprnode1 /* var pexprnode1: nullable Object */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
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
var_pexprnode1 = var_nodearraylist1;
if (var_pexprnode1 == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (0) {
var4 = ((short int(*)(val* self, val* p0))((((long)var_pexprnode1&3)?class_info[((long)var_pexprnode1&3)]:var_pexprnode1->class)->vft[COLOR_standard__kernel__Object___33d_61d]))(var_pexprnode1, ((val*)NULL)); /* != on <var_pexprnode1:nullable Object>*/
var3 = var4;
}
if (var3){
{
((void(*)(val* self, val* p0))(var_listnode2->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_listnode2, var_pexprnode1); /* add on <var_listnode2:Array[Object]>*/
}
} else {
}
var_node_list = var_listnode2;
var5 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction392> */
{
var6 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var5); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var6, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction393#action for (self: ReduceAction393, Parser) */
void nit__parser___nit__parser__ReduceAction393___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tstartstringnode2 /* var tstartstringnode2: nullable Object */;
short int var1 /* : Bool */;
int cltype;
int idtype;
val* var2 /* : AStartStringExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AStartStringExpr */;
long var3 /* : Int */;
long var4 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist1 = var;
var_tstartstringnode2 = var_nodearraylist1;
/* <var_tstartstringnode2:nullable Object> isa nullable TStartString */
cltype = type_nullable__nit__TStartString.color;
idtype = type_nullable__nit__TStartString.id;
if(var_tstartstringnode2 == NULL) {
var1 = 1;
} else {
if(cltype >= (((long)var_tstartstringnode2&3)?type_info[((long)var_tstartstringnode2&3)]:var_tstartstringnode2->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)var_tstartstringnode2&3)?type_info[((long)var_tstartstringnode2&3)]:var_tstartstringnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9140);
fatal_exit(1);
}
var2 = NEW_nit__AStartStringExpr(&type_nit__AStartStringExpr);
{
((void(*)(val* self, val* p0))(var2->class->vft[COLOR_nit__parser_prod__AStartStringExpr__init_astartstringexpr]))(var2, var_tstartstringnode2); /* init_astartstringexpr on <var2:AStartStringExpr>*/
}
var_pexprnode1 = var2;
var_node_list = var_pexprnode1;
var3 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction393> */
{
var4 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var3); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var4, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction396#action for (self: ReduceAction396, Parser) */
void nit__parser___nit__parser__ReduceAction396___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tmidstringnode2 /* var tmidstringnode2: nullable Object */;
short int var1 /* : Bool */;
int cltype;
int idtype;
val* var2 /* : AMidStringExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AMidStringExpr */;
long var3 /* : Int */;
long var4 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist1 = var;
var_tmidstringnode2 = var_nodearraylist1;
/* <var_tmidstringnode2:nullable Object> isa nullable TMidString */
cltype = type_nullable__nit__TMidString.color;
idtype = type_nullable__nit__TMidString.id;
if(var_tmidstringnode2 == NULL) {
var1 = 1;
} else {
if(cltype >= (((long)var_tmidstringnode2&3)?type_info[((long)var_tmidstringnode2&3)]:var_tmidstringnode2->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)var_tmidstringnode2&3)?type_info[((long)var_tmidstringnode2&3)]:var_tmidstringnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9155);
fatal_exit(1);
}
var2 = NEW_nit__AMidStringExpr(&type_nit__AMidStringExpr);
{
((void(*)(val* self, val* p0))(var2->class->vft[COLOR_nit__parser_prod__AMidStringExpr__init_amidstringexpr]))(var2, var_tmidstringnode2); /* init_amidstringexpr on <var2:AMidStringExpr>*/
}
var_pexprnode1 = var2;
var_node_list = var_pexprnode1;
var3 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction396> */
{
var4 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var3); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var4, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction397#action for (self: ReduceAction397, Parser) */
void nit__parser___nit__parser__ReduceAction397___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tendstringnode2 /* var tendstringnode2: nullable Object */;
short int var1 /* : Bool */;
int cltype;
int idtype;
val* var2 /* : AEndStringExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AEndStringExpr */;
long var3 /* : Int */;
long var4 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist1 = var;
var_tendstringnode2 = var_nodearraylist1;
/* <var_tendstringnode2:nullable Object> isa nullable TEndString */
cltype = type_nullable__nit__TEndString.color;
idtype = type_nullable__nit__TEndString.id;
if(var_tendstringnode2 == NULL) {
var1 = 1;
} else {
if(cltype >= (((long)var_tendstringnode2&3)?type_info[((long)var_tendstringnode2&3)]:var_tendstringnode2->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)var_tendstringnode2&3)?type_info[((long)var_tendstringnode2&3)]:var_tendstringnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9170);
fatal_exit(1);
}
var2 = NEW_nit__AEndStringExpr(&type_nit__AEndStringExpr);
{
((void(*)(val* self, val* p0))(var2->class->vft[COLOR_nit__parser_prod__AEndStringExpr__init_aendstringexpr]))(var2, var_tendstringnode2); /* init_aendstringexpr on <var2:AEndStringExpr>*/
}
var_pexprnode1 = var2;
var_node_list = var_pexprnode1;
var3 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction397> */
{
var4 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var3); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var4, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction398#action for (self: ReduceAction398, Parser) */
void nit__parser___nit__parser__ReduceAction398___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var2 /* : Array[Object] */;
val* var_listnode5 /* var listnode5: Array[Object] */;
val* var_tatnode2 /* var tatnode2: nullable Object */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var_pannotationnode4 /* var pannotationnode4: nullable Object */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
val* var9 /* : AAnnotations */;
val* var_pannotationsnode1 /* var pannotationsnode1: nullable AAnnotations */;
long var10 /* : Int */;
long var11 /* : Int */;
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
var_listnode5 = var2;
var_tatnode2 = var_nodearraylist1;
/* <var_tatnode2:nullable Object> isa nullable TAt */
cltype = type_nullable__nit__TAt.color;
idtype = type_nullable__nit__TAt.id;
if(var_tatnode2 == NULL) {
var3 = 1;
} else {
if(cltype >= (((long)var_tatnode2&3)?type_info[((long)var_tatnode2&3)]:var_tatnode2->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)var_tatnode2&3)?type_info[((long)var_tatnode2&3)]:var_tatnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9187);
fatal_exit(1);
}
var_pannotationnode4 = var_nodearraylist2;
/* <var_pannotationnode4:nullable Object> isa nullable AAnnotation */
cltype5 = type_nullable__nit__AAnnotation.color;
idtype6 = type_nullable__nit__AAnnotation.id;
if(var_pannotationnode4 == NULL) {
var4 = 1;
} else {
if(cltype5 >= (((long)var_pannotationnode4&3)?type_info[((long)var_pannotationnode4&3)]:var_pannotationnode4->type)->table_size) {
var4 = 0;
} else {
var4 = (((long)var_pannotationnode4&3)?type_info[((long)var_pannotationnode4&3)]:var_pannotationnode4->type)->type_table[cltype5] == idtype6;
}
}
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9189);
fatal_exit(1);
}
if (var_pannotationnode4 == NULL) {
var7 = 0; /* is null */
} else {
var7 = 1; /* arg is null and recv is not */
}
if (0) {
var8 = ((short int(*)(val* self, val* p0))(var_pannotationnode4->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_pannotationnode4, ((val*)NULL)); /* != on <var_pannotationnode4:nullable Object(nullable AAnnotation)>*/
var7 = var8;
}
if (var7){
{
((void(*)(val* self, val* p0))(var_listnode5->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_listnode5, var_pannotationnode4); /* add on <var_listnode5:Array[Object]>*/
}
} else {
}
var9 = NEW_nit__AAnnotations(&type_nit__AAnnotations);
{
((void(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var9->class->vft[COLOR_nit__parser_prod__AAnnotations__init_aannotations]))(var9, var_tatnode2, ((val*)NULL), var_listnode5, ((val*)NULL)); /* init_aannotations on <var9:AAnnotations>*/
}
var_pannotationsnode1 = var9;
var_node_list = var_pannotationsnode1;
var10 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction398> */
{
var11 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var10); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var11, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction399#action for (self: ReduceAction399, Parser) */
void nit__parser___nit__parser__ReduceAction399___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_listnode5 /* var listnode5: Array[Object] */;
val* var_tatnode2 /* var tatnode2: nullable Object */;
short int var7 /* : Bool */;
int cltype;
int idtype;
val* var_toparnode3 /* var toparnode3: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var_listnode4 /* var listnode4: nullable Object */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
val* var14 /* : Array[Object] */;
val* var_tcparnode6 /* var tcparnode6: nullable Object */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
val* var18 /* : AAnnotations */;
val* var_pannotationsnode1 /* var pannotationsnode1: nullable AAnnotations */;
long var19 /* : Int */;
long var20 /* : Int */;
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
var_listnode5 = var6;
var_tatnode2 = var_nodearraylist1;
/* <var_tatnode2:nullable Object> isa nullable TAt */
cltype = type_nullable__nit__TAt.color;
idtype = type_nullable__nit__TAt.id;
if(var_tatnode2 == NULL) {
var7 = 1;
} else {
if(cltype >= (((long)var_tatnode2&3)?type_info[((long)var_tatnode2&3)]:var_tatnode2->type)->table_size) {
var7 = 0;
} else {
var7 = (((long)var_tatnode2&3)?type_info[((long)var_tatnode2&3)]:var_tatnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var7)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9216);
fatal_exit(1);
}
var_toparnode3 = var_nodearraylist2;
/* <var_toparnode3:nullable Object> isa nullable TOpar */
cltype9 = type_nullable__nit__TOpar.color;
idtype10 = type_nullable__nit__TOpar.id;
if(var_toparnode3 == NULL) {
var8 = 1;
} else {
if(cltype9 >= (((long)var_toparnode3&3)?type_info[((long)var_toparnode3&3)]:var_toparnode3->type)->table_size) {
var8 = 0;
} else {
var8 = (((long)var_toparnode3&3)?type_info[((long)var_toparnode3&3)]:var_toparnode3->type)->type_table[cltype9] == idtype10;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9218);
fatal_exit(1);
}
var_listnode4 = var_nodearraylist4;
/* <var_listnode4:nullable Object> isa Array[Object] */
cltype12 = type_standard__Array__standard__Object.color;
idtype13 = type_standard__Array__standard__Object.id;
if(var_listnode4 == NULL) {
var11 = 0;
} else {
if(cltype12 >= (((long)var_listnode4&3)?type_info[((long)var_listnode4&3)]:var_listnode4->type)->table_size) {
var11 = 0;
} else {
var11 = (((long)var_listnode4&3)?type_info[((long)var_listnode4&3)]:var_listnode4->type)->type_table[cltype12] == idtype13;
}
}
if (unlikely(!var11)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9220);
fatal_exit(1);
}
{
var14 = ((val*(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__parser_work__ReduceAction__concat]))(self, var_listnode5, var_listnode4); /* concat on <self:ReduceAction399>*/
}
var_listnode5 = var14;
var_tcparnode6 = var_nodearraylist6;
/* <var_tcparnode6:nullable Object> isa nullable TCpar */
cltype16 = type_nullable__nit__TCpar.color;
idtype17 = type_nullable__nit__TCpar.id;
if(var_tcparnode6 == NULL) {
var15 = 1;
} else {
if(cltype16 >= (((long)var_tcparnode6&3)?type_info[((long)var_tcparnode6&3)]:var_tcparnode6->type)->table_size) {
var15 = 0;
} else {
var15 = (((long)var_tcparnode6&3)?type_info[((long)var_tcparnode6&3)]:var_tcparnode6->type)->type_table[cltype16] == idtype17;
}
}
if (unlikely(!var15)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9223);
fatal_exit(1);
}
var18 = NEW_nit__AAnnotations(&type_nit__AAnnotations);
{
((void(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var18->class->vft[COLOR_nit__parser_prod__AAnnotations__init_aannotations]))(var18, var_tatnode2, var_toparnode3, var_listnode5, var_tcparnode6); /* init_aannotations on <var18:AAnnotations>*/
}
var_pannotationsnode1 = var18;
var_node_list = var_pannotationsnode1;
var19 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction399> */
{
var20 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var19); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var20, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction400#action for (self: ReduceAction400, Parser) */
void nit__parser___nit__parser__ReduceAction400___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pannotationsnode1 /* var pannotationsnode1: nullable Object */;
long var1 /* : Int */;
long var2 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist1 = var;
var_pannotationsnode1 = var_nodearraylist1;
var_node_list = var_pannotationsnode1;
var1 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction400> */
{
var2 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var1); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var2, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction402#action for (self: ReduceAction402, Parser) */
void nit__parser___nit__parser__ReduceAction402___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_listnode7 /* var listnode7: Array[Object] */;
val* var_tkwredefnode3 /* var tkwredefnode3: nullable Object */;
short int var5 /* : Bool */;
int cltype;
int idtype;
val* var_pvisibilitynode4 /* var pvisibilitynode4: nullable Object */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
val* var_patidnode5 /* var patidnode5: nullable Object */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var_pannotationsnode9 /* var pannotationsnode9: nullable Object */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
val* var15 /* : AAnnotation */;
val* var_pannotationnode1 /* var pannotationnode1: nullable AAnnotation */;
long var16 /* : Int */;
long var17 /* : Int */;
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
var_listnode7 = var4;
var_tkwredefnode3 = var_nodearraylist1;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype = type_nullable__nit__TKwredef.color;
idtype = type_nullable__nit__TKwredef.id;
if(var_tkwredefnode3 == NULL) {
var5 = 1;
} else {
if(cltype >= (((long)var_tkwredefnode3&3)?type_info[((long)var_tkwredefnode3&3)]:var_tkwredefnode3->type)->table_size) {
var5 = 0;
} else {
var5 = (((long)var_tkwredefnode3&3)?type_info[((long)var_tkwredefnode3&3)]:var_tkwredefnode3->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var5)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9256);
fatal_exit(1);
}
var_pvisibilitynode4 = var_nodearraylist2;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype7 = type_nullable__nit__AVisibility.color;
idtype8 = type_nullable__nit__AVisibility.id;
if(var_pvisibilitynode4 == NULL) {
var6 = 1;
} else {
if(cltype7 >= (((long)var_pvisibilitynode4&3)?type_info[((long)var_pvisibilitynode4&3)]:var_pvisibilitynode4->type)->table_size) {
var6 = 0;
} else {
var6 = (((long)var_pvisibilitynode4&3)?type_info[((long)var_pvisibilitynode4&3)]:var_pvisibilitynode4->type)->type_table[cltype7] == idtype8;
}
}
if (unlikely(!var6)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9258);
fatal_exit(1);
}
var_patidnode5 = var_nodearraylist3;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9260);
fatal_exit(1);
}
var_pannotationsnode9 = var_nodearraylist4;
/* <var_pannotationsnode9:nullable Object> isa nullable AAnnotations */
cltype13 = type_nullable__nit__AAnnotations.color;
idtype14 = type_nullable__nit__AAnnotations.id;
if(var_pannotationsnode9 == NULL) {
var12 = 1;
} else {
if(cltype13 >= (((long)var_pannotationsnode9&3)?type_info[((long)var_pannotationsnode9&3)]:var_pannotationsnode9->type)->table_size) {
var12 = 0;
} else {
var12 = (((long)var_pannotationsnode9&3)?type_info[((long)var_pannotationsnode9&3)]:var_pannotationsnode9->type)->type_table[cltype13] == idtype14;
}
}
if (unlikely(!var12)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9262);
fatal_exit(1);
}
var15 = NEW_nit__AAnnotation(&type_nit__AAnnotation);
{
((void(*)(val* self, val* p0, val* p1, val* p2, val* p3, val* p4, val* p5, val* p6, val* p7))(var15->class->vft[COLOR_nit__parser_prod__AAnnotation__init_aannotation]))(var15, ((val*)NULL), var_tkwredefnode3, var_pvisibilitynode4, var_patidnode5, ((val*)NULL), var_listnode7, ((val*)NULL), var_pannotationsnode9); /* init_aannotation on <var15:AAnnotation>*/
}
var_pannotationnode1 = var15;
var_node_list = var_pannotationnode1;
var16 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction402> */
{
var17 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var16); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var17, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction403#action for (self: ReduceAction403, Parser) */
void nit__parser___nit__parser__ReduceAction403___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_tkwredefnode3 /* var tkwredefnode3: nullable Object */;
short int var10 /* : Bool */;
int cltype;
int idtype;
val* var_pvisibilitynode4 /* var pvisibilitynode4: nullable Object */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
val* var_patidnode5 /* var patidnode5: nullable Object */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
val* var_toparnode6 /* var toparnode6: nullable Object */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
val* var_listnode7 /* var listnode7: nullable Object */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
val* var23 /* : Array[Object] */;
val* var_tcparnode9 /* var tcparnode9: nullable Object */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
val* var_pannotationsnode10 /* var pannotationsnode10: nullable Object */;
short int var27 /* : Bool */;
int cltype28;
int idtype29;
val* var30 /* : AAnnotation */;
val* var_pannotationnode1 /* var pannotationnode1: nullable AAnnotation */;
long var31 /* : Int */;
long var32 /* : Int */;
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
var_tkwredefnode3 = var_nodearraylist1;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype = type_nullable__nit__TKwredef.color;
idtype = type_nullable__nit__TKwredef.id;
if(var_tkwredefnode3 == NULL) {
var10 = 1;
} else {
if(cltype >= (((long)var_tkwredefnode3&3)?type_info[((long)var_tkwredefnode3&3)]:var_tkwredefnode3->type)->table_size) {
var10 = 0;
} else {
var10 = (((long)var_tkwredefnode3&3)?type_info[((long)var_tkwredefnode3&3)]:var_tkwredefnode3->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var10)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9293);
fatal_exit(1);
}
var_pvisibilitynode4 = var_nodearraylist2;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9295);
fatal_exit(1);
}
var_patidnode5 = var_nodearraylist3;
/* <var_patidnode5:nullable Object> isa nullable AAtid */
cltype15 = type_nullable__nit__AAtid.color;
idtype16 = type_nullable__nit__AAtid.id;
if(var_patidnode5 == NULL) {
var14 = 1;
} else {
if(cltype15 >= (((long)var_patidnode5&3)?type_info[((long)var_patidnode5&3)]:var_patidnode5->type)->table_size) {
var14 = 0;
} else {
var14 = (((long)var_patidnode5&3)?type_info[((long)var_patidnode5&3)]:var_patidnode5->type)->type_table[cltype15] == idtype16;
}
}
if (unlikely(!var14)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9297);
fatal_exit(1);
}
var_toparnode6 = var_nodearraylist4;
/* <var_toparnode6:nullable Object> isa nullable TOpar */
cltype18 = type_nullable__nit__TOpar.color;
idtype19 = type_nullable__nit__TOpar.id;
if(var_toparnode6 == NULL) {
var17 = 1;
} else {
if(cltype18 >= (((long)var_toparnode6&3)?type_info[((long)var_toparnode6&3)]:var_toparnode6->type)->table_size) {
var17 = 0;
} else {
var17 = (((long)var_toparnode6&3)?type_info[((long)var_toparnode6&3)]:var_toparnode6->type)->type_table[cltype18] == idtype19;
}
}
if (unlikely(!var17)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9299);
fatal_exit(1);
}
var_listnode7 = var_nodearraylist6;
/* <var_listnode7:nullable Object> isa Array[Object] */
cltype21 = type_standard__Array__standard__Object.color;
idtype22 = type_standard__Array__standard__Object.id;
if(var_listnode7 == NULL) {
var20 = 0;
} else {
if(cltype21 >= (((long)var_listnode7&3)?type_info[((long)var_listnode7&3)]:var_listnode7->type)->table_size) {
var20 = 0;
} else {
var20 = (((long)var_listnode7&3)?type_info[((long)var_listnode7&3)]:var_listnode7->type)->type_table[cltype21] == idtype22;
}
}
if (unlikely(!var20)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9301);
fatal_exit(1);
}
{
var23 = ((val*(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__parser_work__ReduceAction__concat]))(self, var_listnode8, var_listnode7); /* concat on <self:ReduceAction403>*/
}
var_listnode8 = var23;
var_tcparnode9 = var_nodearraylist8;
/* <var_tcparnode9:nullable Object> isa nullable TCpar */
cltype25 = type_nullable__nit__TCpar.color;
idtype26 = type_nullable__nit__TCpar.id;
if(var_tcparnode9 == NULL) {
var24 = 1;
} else {
if(cltype25 >= (((long)var_tcparnode9&3)?type_info[((long)var_tcparnode9&3)]:var_tcparnode9->type)->table_size) {
var24 = 0;
} else {
var24 = (((long)var_tcparnode9&3)?type_info[((long)var_tcparnode9&3)]:var_tcparnode9->type)->type_table[cltype25] == idtype26;
}
}
if (unlikely(!var24)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9304);
fatal_exit(1);
}
var_pannotationsnode10 = var_nodearraylist9;
/* <var_pannotationsnode10:nullable Object> isa nullable AAnnotations */
cltype28 = type_nullable__nit__AAnnotations.color;
idtype29 = type_nullable__nit__AAnnotations.id;
if(var_pannotationsnode10 == NULL) {
var27 = 1;
} else {
if(cltype28 >= (((long)var_pannotationsnode10&3)?type_info[((long)var_pannotationsnode10&3)]:var_pannotationsnode10->type)->table_size) {
var27 = 0;
} else {
var27 = (((long)var_pannotationsnode10&3)?type_info[((long)var_pannotationsnode10&3)]:var_pannotationsnode10->type)->type_table[cltype28] == idtype29;
}
}
if (unlikely(!var27)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9306);
fatal_exit(1);
}
var30 = NEW_nit__AAnnotation(&type_nit__AAnnotation);
{
((void(*)(val* self, val* p0, val* p1, val* p2, val* p3, val* p4, val* p5, val* p6, val* p7))(var30->class->vft[COLOR_nit__parser_prod__AAnnotation__init_aannotation]))(var30, ((val*)NULL), var_tkwredefnode3, var_pvisibilitynode4, var_patidnode5, var_toparnode6, var_listnode8, var_tcparnode9, var_pannotationsnode10); /* init_aannotation on <var30:AAnnotation>*/
}
var_pannotationnode1 = var30;
var_node_list = var_pannotationnode1;
var31 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction403> */
{
var32 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var31); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var32, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction404#action for (self: ReduceAction404, Parser) */
void nit__parser___nit__parser__ReduceAction404___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var1 /* : Array[Object] */;
val* var_listnode5 /* var listnode5: Array[Object] */;
val* var_listnode4 /* var listnode4: nullable Object */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var3 /* : Array[Object] */;
val* var4 /* : AAnnotations */;
val* var_pannotationsnode1 /* var pannotationsnode1: nullable AAnnotations */;
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
var_listnode5 = var1;
var_listnode4 = var_nodearraylist1;
/* <var_listnode4:nullable Object> isa Array[Object] */
cltype = type_standard__Array__standard__Object.color;
idtype = type_standard__Array__standard__Object.id;
if(var_listnode4 == NULL) {
var2 = 0;
} else {
if(cltype >= (((long)var_listnode4&3)?type_info[((long)var_listnode4&3)]:var_listnode4->type)->table_size) {
var2 = 0;
} else {
var2 = (((long)var_listnode4&3)?type_info[((long)var_listnode4&3)]:var_listnode4->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9329);
fatal_exit(1);
}
{
var3 = ((val*(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__parser_work__ReduceAction__concat]))(self, var_listnode5, var_listnode4); /* concat on <self:ReduceAction404>*/
}
var_listnode5 = var3;
var4 = NEW_nit__AAnnotations(&type_nit__AAnnotations);
{
((void(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var4->class->vft[COLOR_nit__parser_prod__AAnnotations__init_aannotations]))(var4, ((val*)NULL), ((val*)NULL), var_listnode5, ((val*)NULL)); /* init_aannotations on <var4:AAnnotations>*/
}
var_pannotationsnode1 = var4;
var_node_list = var_pannotationsnode1;
var5 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction404> */
{
var6 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var5); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var6, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction405#action for (self: ReduceAction405, Parser) */
void nit__parser___nit__parser__ReduceAction405___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var1 /* : Array[Object] */;
val* var_listnode2 /* var listnode2: Array[Object] */;
val* var_pannotationnode1 /* var pannotationnode1: nullable Object */;
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
var_pannotationnode1 = var_nodearraylist1;
if (var_pannotationnode1 == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (0) {
var3 = ((short int(*)(val* self, val* p0))((((long)var_pannotationnode1&3)?class_info[((long)var_pannotationnode1&3)]:var_pannotationnode1->class)->vft[COLOR_standard__kernel__Object___33d_61d]))(var_pannotationnode1, ((val*)NULL)); /* != on <var_pannotationnode1:nullable Object>*/
var2 = var3;
}
if (var2){
{
((void(*)(val* self, val* p0))(var_listnode2->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_listnode2, var_pannotationnode1); /* add on <var_listnode2:Array[Object]>*/
}
} else {
}
var_node_list = var_listnode2;
var4 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction405> */
{
var5 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var4); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var5, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction406#action for (self: ReduceAction406, Parser) */
void nit__parser___nit__parser__ReduceAction406___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var2 /* : Array[Object] */;
val* var_listnode3 /* var listnode3: Array[Object] */;
val* var_pannotationnode1 /* var pannotationnode1: nullable Object */;
val* var_listnode2 /* var listnode2: nullable Object */;
short int var3 /* : Bool */;
int cltype;
int idtype;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var6 /* : Array[Object] */;
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
var_pannotationnode1 = var_nodearraylist1;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9366);
fatal_exit(1);
}
if (var_pannotationnode1 == NULL) {
var4 = 0; /* is null */
} else {
var4 = 1; /* arg is null and recv is not */
}
if (0) {
var5 = ((short int(*)(val* self, val* p0))((((long)var_pannotationnode1&3)?class_info[((long)var_pannotationnode1&3)]:var_pannotationnode1->class)->vft[COLOR_standard__kernel__Object___33d_61d]))(var_pannotationnode1, ((val*)NULL)); /* != on <var_pannotationnode1:nullable Object>*/
var4 = var5;
}
if (var4){
{
((void(*)(val* self, val* p0))(var_listnode3->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_listnode3, var_pannotationnode1); /* add on <var_listnode3:Array[Object]>*/
}
} else {
}
{
var6 = ((val*(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__parser_work__ReduceAction__concat]))(self, var_listnode3, var_listnode2); /* concat on <self:ReduceAction406>*/
}
var_listnode3 = var6;
var_node_list = var_listnode3;
var7 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction406> */
{
var8 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var7); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var8, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction409#action for (self: ReduceAction409, Parser) */
void nit__parser___nit__parser__ReduceAction409___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_listnode8 /* var listnode8: Array[Object] */;
val* var_tkwredefnode3 /* var tkwredefnode3: nullable Object */;
short int var5 /* : Bool */;
int cltype;
int idtype;
val* var_pvisibilitynode4 /* var pvisibilitynode4: nullable Object */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
val* var_patidnode5 /* var patidnode5: nullable Object */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var_pexprnode7 /* var pexprnode7: nullable Object */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
val* var17 /* : AAnnotation */;
val* var_pannotationnode1 /* var pannotationnode1: nullable AAnnotation */;
long var18 /* : Int */;
long var19 /* : Int */;
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
var_listnode8 = var4;
var_tkwredefnode3 = var_nodearraylist1;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype = type_nullable__nit__TKwredef.color;
idtype = type_nullable__nit__TKwredef.id;
if(var_tkwredefnode3 == NULL) {
var5 = 1;
} else {
if(cltype >= (((long)var_tkwredefnode3&3)?type_info[((long)var_tkwredefnode3&3)]:var_tkwredefnode3->type)->table_size) {
var5 = 0;
} else {
var5 = (((long)var_tkwredefnode3&3)?type_info[((long)var_tkwredefnode3&3)]:var_tkwredefnode3->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var5)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9386);
fatal_exit(1);
}
var_pvisibilitynode4 = var_nodearraylist2;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype7 = type_nullable__nit__AVisibility.color;
idtype8 = type_nullable__nit__AVisibility.id;
if(var_pvisibilitynode4 == NULL) {
var6 = 1;
} else {
if(cltype7 >= (((long)var_pvisibilitynode4&3)?type_info[((long)var_pvisibilitynode4&3)]:var_pvisibilitynode4->type)->table_size) {
var6 = 0;
} else {
var6 = (((long)var_pvisibilitynode4&3)?type_info[((long)var_pvisibilitynode4&3)]:var_pvisibilitynode4->type)->type_table[cltype7] == idtype8;
}
}
if (unlikely(!var6)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9388);
fatal_exit(1);
}
var_patidnode5 = var_nodearraylist3;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9390);
fatal_exit(1);
}
var_pexprnode7 = var_nodearraylist4;
/* <var_pexprnode7:nullable Object> isa nullable AExpr */
cltype13 = type_nullable__nit__AExpr.color;
idtype14 = type_nullable__nit__AExpr.id;
if(var_pexprnode7 == NULL) {
var12 = 1;
} else {
if(cltype13 >= (((long)var_pexprnode7&3)?type_info[((long)var_pexprnode7&3)]:var_pexprnode7->type)->table_size) {
var12 = 0;
} else {
var12 = (((long)var_pexprnode7&3)?type_info[((long)var_pexprnode7&3)]:var_pexprnode7->type)->type_table[cltype13] == idtype14;
}
}
if (unlikely(!var12)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9392);
fatal_exit(1);
}
if (var_pexprnode7 == NULL) {
var15 = 0; /* is null */
} else {
var15 = 1; /* arg is null and recv is not */
}
if (0) {
var16 = ((short int(*)(val* self, val* p0))(var_pexprnode7->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_pexprnode7, ((val*)NULL)); /* != on <var_pexprnode7:nullable Object(nullable AExpr)>*/
var15 = var16;
}
if (var15){
{
((void(*)(val* self, val* p0))(var_listnode8->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_listnode8, var_pexprnode7); /* add on <var_listnode8:Array[Object]>*/
}
} else {
}
var17 = NEW_nit__AAnnotation(&type_nit__AAnnotation);
{
((void(*)(val* self, val* p0, val* p1, val* p2, val* p3, val* p4, val* p5, val* p6, val* p7))(var17->class->vft[COLOR_nit__parser_prod__AAnnotation__init_aannotation]))(var17, ((val*)NULL), var_tkwredefnode3, var_pvisibilitynode4, var_patidnode5, ((val*)NULL), var_listnode8, ((val*)NULL), ((val*)NULL)); /* init_aannotation on <var17:AAnnotation>*/
}
var_pannotationnode1 = var17;
var_node_list = var_pannotationnode1;
var18 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction409> */
{
var19 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var18); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var19, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction411#action for (self: ReduceAction411, Parser) */
void nit__parser___nit__parser__ReduceAction411___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pannotationnode1 /* var pannotationnode1: nullable Object */;
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
var_pannotationnode1 = var_nodearraylist3;
var_node_list = var_pannotationnode1;
var3 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction411> */
{
var4 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var3); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var4, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction413#action for (self: ReduceAction413, Parser) */
void nit__parser___nit__parser__ReduceAction413___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_listnode7 /* var listnode7: Array[Object] */;
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
val* var_patidnode5 /* var patidnode5: nullable Object */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
val* var16 /* : AAnnotation */;
val* var_pannotationnode1 /* var pannotationnode1: nullable AAnnotation */;
long var17 /* : Int */;
long var18 /* : Int */;
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
var_listnode7 = var5;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9435);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9437);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9439);
fatal_exit(1);
}
var_patidnode5 = var_nodearraylist4;
/* <var_patidnode5:nullable Object> isa nullable AAtid */
cltype14 = type_nullable__nit__AAtid.color;
idtype15 = type_nullable__nit__AAtid.id;
if(var_patidnode5 == NULL) {
var13 = 1;
} else {
if(cltype14 >= (((long)var_patidnode5&3)?type_info[((long)var_patidnode5&3)]:var_patidnode5->type)->table_size) {
var13 = 0;
} else {
var13 = (((long)var_patidnode5&3)?type_info[((long)var_patidnode5&3)]:var_patidnode5->type)->type_table[cltype14] == idtype15;
}
}
if (unlikely(!var13)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9441);
fatal_exit(1);
}
var16 = NEW_nit__AAnnotation(&type_nit__AAnnotation);
{
((void(*)(val* self, val* p0, val* p1, val* p2, val* p3, val* p4, val* p5, val* p6, val* p7))(var16->class->vft[COLOR_nit__parser_prod__AAnnotation__init_aannotation]))(var16, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_patidnode5, ((val*)NULL), var_listnode7, ((val*)NULL), ((val*)NULL)); /* init_aannotation on <var16:AAnnotation>*/
}
var_pannotationnode1 = var16;
var_node_list = var_pannotationnode1;
var17 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction413> */
{
var18 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var17); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var18, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction414#action for (self: ReduceAction414, Parser) */
void nit__parser___nit__parser__ReduceAction414___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_listnode7 /* var listnode7: Array[Object] */;
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
val* var_patidnode5 /* var patidnode5: nullable Object */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
val* var_pannotationsnode9 /* var pannotationsnode9: nullable Object */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
val* var20 /* : AAnnotation */;
val* var_pannotationnode1 /* var pannotationnode1: nullable AAnnotation */;
long var21 /* : Int */;
long var22 /* : Int */;
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
var_listnode7 = var6;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9469);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9471);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9473);
fatal_exit(1);
}
var_patidnode5 = var_nodearraylist4;
/* <var_patidnode5:nullable Object> isa nullable AAtid */
cltype15 = type_nullable__nit__AAtid.color;
idtype16 = type_nullable__nit__AAtid.id;
if(var_patidnode5 == NULL) {
var14 = 1;
} else {
if(cltype15 >= (((long)var_patidnode5&3)?type_info[((long)var_patidnode5&3)]:var_patidnode5->type)->table_size) {
var14 = 0;
} else {
var14 = (((long)var_patidnode5&3)?type_info[((long)var_patidnode5&3)]:var_patidnode5->type)->type_table[cltype15] == idtype16;
}
}
if (unlikely(!var14)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9475);
fatal_exit(1);
}
var_pannotationsnode9 = var_nodearraylist5;
/* <var_pannotationsnode9:nullable Object> isa nullable AAnnotations */
cltype18 = type_nullable__nit__AAnnotations.color;
idtype19 = type_nullable__nit__AAnnotations.id;
if(var_pannotationsnode9 == NULL) {
var17 = 1;
} else {
if(cltype18 >= (((long)var_pannotationsnode9&3)?type_info[((long)var_pannotationsnode9&3)]:var_pannotationsnode9->type)->table_size) {
var17 = 0;
} else {
var17 = (((long)var_pannotationsnode9&3)?type_info[((long)var_pannotationsnode9&3)]:var_pannotationsnode9->type)->type_table[cltype18] == idtype19;
}
}
if (unlikely(!var17)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9477);
fatal_exit(1);
}
var20 = NEW_nit__AAnnotation(&type_nit__AAnnotation);
{
((void(*)(val* self, val* p0, val* p1, val* p2, val* p3, val* p4, val* p5, val* p6, val* p7))(var20->class->vft[COLOR_nit__parser_prod__AAnnotation__init_aannotation]))(var20, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_patidnode5, ((val*)NULL), var_listnode7, ((val*)NULL), var_pannotationsnode9); /* init_aannotation on <var20:AAnnotation>*/
}
var_pannotationnode1 = var20;
var_node_list = var_pannotationnode1;
var21 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction414> */
{
var22 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var21); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var22, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction415#action for (self: ReduceAction415, Parser) */
void nit__parser___nit__parser__ReduceAction415___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_patidnode5 /* var patidnode5: nullable Object */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
val* var_toparnode6 /* var toparnode6: nullable Object */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
val* var_listnode7 /* var listnode7: nullable Object */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
val* var26 /* : Array[Object] */;
val* var_tcparnode9 /* var tcparnode9: nullable Object */;
short int var27 /* : Bool */;
int cltype28;
int idtype29;
val* var30 /* : AAnnotation */;
val* var_pannotationnode1 /* var pannotationnode1: nullable AAnnotation */;
long var31 /* : Int */;
long var32 /* : Int */;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9508);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9510);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9512);
fatal_exit(1);
}
var_patidnode5 = var_nodearraylist4;
/* <var_patidnode5:nullable Object> isa nullable AAtid */
cltype18 = type_nullable__nit__AAtid.color;
idtype19 = type_nullable__nit__AAtid.id;
if(var_patidnode5 == NULL) {
var17 = 1;
} else {
if(cltype18 >= (((long)var_patidnode5&3)?type_info[((long)var_patidnode5&3)]:var_patidnode5->type)->table_size) {
var17 = 0;
} else {
var17 = (((long)var_patidnode5&3)?type_info[((long)var_patidnode5&3)]:var_patidnode5->type)->type_table[cltype18] == idtype19;
}
}
if (unlikely(!var17)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9514);
fatal_exit(1);
}
var_toparnode6 = var_nodearraylist5;
/* <var_toparnode6:nullable Object> isa nullable TOpar */
cltype21 = type_nullable__nit__TOpar.color;
idtype22 = type_nullable__nit__TOpar.id;
if(var_toparnode6 == NULL) {
var20 = 1;
} else {
if(cltype21 >= (((long)var_toparnode6&3)?type_info[((long)var_toparnode6&3)]:var_toparnode6->type)->table_size) {
var20 = 0;
} else {
var20 = (((long)var_toparnode6&3)?type_info[((long)var_toparnode6&3)]:var_toparnode6->type)->type_table[cltype21] == idtype22;
}
}
if (unlikely(!var20)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9516);
fatal_exit(1);
}
var_listnode7 = var_nodearraylist7;
/* <var_listnode7:nullable Object> isa Array[Object] */
cltype24 = type_standard__Array__standard__Object.color;
idtype25 = type_standard__Array__standard__Object.id;
if(var_listnode7 == NULL) {
var23 = 0;
} else {
if(cltype24 >= (((long)var_listnode7&3)?type_info[((long)var_listnode7&3)]:var_listnode7->type)->table_size) {
var23 = 0;
} else {
var23 = (((long)var_listnode7&3)?type_info[((long)var_listnode7&3)]:var_listnode7->type)->type_table[cltype24] == idtype25;
}
}
if (unlikely(!var23)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9518);
fatal_exit(1);
}
{
var26 = ((val*(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__parser_work__ReduceAction__concat]))(self, var_listnode8, var_listnode7); /* concat on <self:ReduceAction415>*/
}
var_listnode8 = var26;
var_tcparnode9 = var_nodearraylist8;
/* <var_tcparnode9:nullable Object> isa nullable TCpar */
cltype28 = type_nullable__nit__TCpar.color;
idtype29 = type_nullable__nit__TCpar.id;
if(var_tcparnode9 == NULL) {
var27 = 1;
} else {
if(cltype28 >= (((long)var_tcparnode9&3)?type_info[((long)var_tcparnode9&3)]:var_tcparnode9->type)->table_size) {
var27 = 0;
} else {
var27 = (((long)var_tcparnode9&3)?type_info[((long)var_tcparnode9&3)]:var_tcparnode9->type)->type_table[cltype28] == idtype29;
}
}
if (unlikely(!var27)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9521);
fatal_exit(1);
}
var30 = NEW_nit__AAnnotation(&type_nit__AAnnotation);
{
((void(*)(val* self, val* p0, val* p1, val* p2, val* p3, val* p4, val* p5, val* p6, val* p7))(var30->class->vft[COLOR_nit__parser_prod__AAnnotation__init_aannotation]))(var30, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_patidnode5, var_toparnode6, var_listnode8, var_tcparnode9, ((val*)NULL)); /* init_aannotation on <var30:AAnnotation>*/
}
var_pannotationnode1 = var30;
var_node_list = var_pannotationnode1;
var31 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction415> */
{
var32 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var31); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var32, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction416#action for (self: ReduceAction416, Parser) */
void nit__parser___nit__parser__ReduceAction416___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_patidnode5 /* var patidnode5: nullable Object */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
val* var_toparnode6 /* var toparnode6: nullable Object */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
val* var_listnode7 /* var listnode7: nullable Object */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
val* var27 /* : Array[Object] */;
val* var_tcparnode9 /* var tcparnode9: nullable Object */;
short int var28 /* : Bool */;
int cltype29;
int idtype30;
val* var_pannotationsnode10 /* var pannotationsnode10: nullable Object */;
short int var31 /* : Bool */;
int cltype32;
int idtype33;
val* var34 /* : AAnnotation */;
val* var_pannotationnode1 /* var pannotationnode1: nullable AAnnotation */;
long var35 /* : Int */;
long var36 /* : Int */;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9553);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9555);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9557);
fatal_exit(1);
}
var_patidnode5 = var_nodearraylist4;
/* <var_patidnode5:nullable Object> isa nullable AAtid */
cltype19 = type_nullable__nit__AAtid.color;
idtype20 = type_nullable__nit__AAtid.id;
if(var_patidnode5 == NULL) {
var18 = 1;
} else {
if(cltype19 >= (((long)var_patidnode5&3)?type_info[((long)var_patidnode5&3)]:var_patidnode5->type)->table_size) {
var18 = 0;
} else {
var18 = (((long)var_patidnode5&3)?type_info[((long)var_patidnode5&3)]:var_patidnode5->type)->type_table[cltype19] == idtype20;
}
}
if (unlikely(!var18)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9559);
fatal_exit(1);
}
var_toparnode6 = var_nodearraylist5;
/* <var_toparnode6:nullable Object> isa nullable TOpar */
cltype22 = type_nullable__nit__TOpar.color;
idtype23 = type_nullable__nit__TOpar.id;
if(var_toparnode6 == NULL) {
var21 = 1;
} else {
if(cltype22 >= (((long)var_toparnode6&3)?type_info[((long)var_toparnode6&3)]:var_toparnode6->type)->table_size) {
var21 = 0;
} else {
var21 = (((long)var_toparnode6&3)?type_info[((long)var_toparnode6&3)]:var_toparnode6->type)->type_table[cltype22] == idtype23;
}
}
if (unlikely(!var21)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9561);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9563);
fatal_exit(1);
}
{
var27 = ((val*(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__parser_work__ReduceAction__concat]))(self, var_listnode8, var_listnode7); /* concat on <self:ReduceAction416>*/
}
var_listnode8 = var27;
var_tcparnode9 = var_nodearraylist8;
/* <var_tcparnode9:nullable Object> isa nullable TCpar */
cltype29 = type_nullable__nit__TCpar.color;
idtype30 = type_nullable__nit__TCpar.id;
if(var_tcparnode9 == NULL) {
var28 = 1;
} else {
if(cltype29 >= (((long)var_tcparnode9&3)?type_info[((long)var_tcparnode9&3)]:var_tcparnode9->type)->table_size) {
var28 = 0;
} else {
var28 = (((long)var_tcparnode9&3)?type_info[((long)var_tcparnode9&3)]:var_tcparnode9->type)->type_table[cltype29] == idtype30;
}
}
if (unlikely(!var28)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9566);
fatal_exit(1);
}
var_pannotationsnode10 = var_nodearraylist9;
/* <var_pannotationsnode10:nullable Object> isa nullable AAnnotations */
cltype32 = type_nullable__nit__AAnnotations.color;
idtype33 = type_nullable__nit__AAnnotations.id;
if(var_pannotationsnode10 == NULL) {
var31 = 1;
} else {
if(cltype32 >= (((long)var_pannotationsnode10&3)?type_info[((long)var_pannotationsnode10&3)]:var_pannotationsnode10->type)->table_size) {
var31 = 0;
} else {
var31 = (((long)var_pannotationsnode10&3)?type_info[((long)var_pannotationsnode10&3)]:var_pannotationsnode10->type)->type_table[cltype32] == idtype33;
}
}
if (unlikely(!var31)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9568);
fatal_exit(1);
}
var34 = NEW_nit__AAnnotation(&type_nit__AAnnotation);
{
((void(*)(val* self, val* p0, val* p1, val* p2, val* p3, val* p4, val* p5, val* p6, val* p7))(var34->class->vft[COLOR_nit__parser_prod__AAnnotation__init_aannotation]))(var34, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_patidnode5, var_toparnode6, var_listnode8, var_tcparnode9, var_pannotationsnode10); /* init_aannotation on <var34:AAnnotation>*/
}
var_pannotationnode1 = var34;
var_node_list = var_pannotationnode1;
var35 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction416> */
{
var36 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var35); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var36, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction417#action for (self: ReduceAction417, Parser) */
void nit__parser___nit__parser__ReduceAction417___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_listnode8 /* var listnode8: Array[Object] */;
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
val* var_patidnode5 /* var patidnode5: nullable Object */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
val* var_listnode7 /* var listnode7: nullable Object */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
val* var20 /* : Array[Object] */;
val* var21 /* : AAnnotation */;
val* var_pannotationnode1 /* var pannotationnode1: nullable AAnnotation */;
long var22 /* : Int */;
long var23 /* : Int */;
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
var_listnode8 = var6;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9596);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9598);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9600);
fatal_exit(1);
}
var_patidnode5 = var_nodearraylist4;
/* <var_patidnode5:nullable Object> isa nullable AAtid */
cltype15 = type_nullable__nit__AAtid.color;
idtype16 = type_nullable__nit__AAtid.id;
if(var_patidnode5 == NULL) {
var14 = 1;
} else {
if(cltype15 >= (((long)var_patidnode5&3)?type_info[((long)var_patidnode5&3)]:var_patidnode5->type)->table_size) {
var14 = 0;
} else {
var14 = (((long)var_patidnode5&3)?type_info[((long)var_patidnode5&3)]:var_patidnode5->type)->type_table[cltype15] == idtype16;
}
}
if (unlikely(!var14)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9602);
fatal_exit(1);
}
var_listnode7 = var_nodearraylist5;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9604);
fatal_exit(1);
}
{
var20 = ((val*(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__parser_work__ReduceAction__concat]))(self, var_listnode8, var_listnode7); /* concat on <self:ReduceAction417>*/
}
var_listnode8 = var20;
var21 = NEW_nit__AAnnotation(&type_nit__AAnnotation);
{
((void(*)(val* self, val* p0, val* p1, val* p2, val* p3, val* p4, val* p5, val* p6, val* p7))(var21->class->vft[COLOR_nit__parser_prod__AAnnotation__init_aannotation]))(var21, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_patidnode5, ((val*)NULL), var_listnode8, ((val*)NULL), ((val*)NULL)); /* init_aannotation on <var21:AAnnotation>*/
}
var_pannotationnode1 = var21;
var_node_list = var_pannotationnode1;
var22 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction417> */
{
var23 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var22); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var23, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction418#action for (self: ReduceAction418, Parser) */
void nit__parser___nit__parser__ReduceAction418___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var2 /* : Array[Object] */;
val* var_listnode7 /* var listnode7: Array[Object] */;
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var_patidnode5 /* var patidnode5: nullable Object */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
val* var7 /* : AAnnotPropdef */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AAnnotPropdef */;
long var8 /* : Int */;
long var9 /* : Int */;
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
var_listnode7 = var2;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable__nit__ADoc.color;
idtype = type_nullable__nit__ADoc.id;
if(var_pdocnode2 == NULL) {
var3 = 1;
} else {
if(cltype >= (((long)var_pdocnode2&3)?type_info[((long)var_pdocnode2&3)]:var_pdocnode2->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)var_pdocnode2&3)?type_info[((long)var_pdocnode2&3)]:var_pdocnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9629);
fatal_exit(1);
}
var_patidnode5 = var_nodearraylist2;
/* <var_patidnode5:nullable Object> isa nullable AAtid */
cltype5 = type_nullable__nit__AAtid.color;
idtype6 = type_nullable__nit__AAtid.id;
if(var_patidnode5 == NULL) {
var4 = 1;
} else {
if(cltype5 >= (((long)var_patidnode5&3)?type_info[((long)var_patidnode5&3)]:var_patidnode5->type)->table_size) {
var4 = 0;
} else {
var4 = (((long)var_patidnode5&3)?type_info[((long)var_patidnode5&3)]:var_patidnode5->type)->type_table[cltype5] == idtype6;
}
}
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9631);
fatal_exit(1);
}
var7 = NEW_nit__AAnnotPropdef(&type_nit__AAnnotPropdef);
{
((void(*)(val* self, val* p0, val* p1, val* p2, val* p3, val* p4, val* p5, val* p6, val* p7))(var7->class->vft[COLOR_nit__parser_prod__AAnnotPropdef__init_aannotpropdef]))(var7, var_pdocnode2, ((val*)NULL), ((val*)NULL), var_patidnode5, ((val*)NULL), var_listnode7, ((val*)NULL), ((val*)NULL)); /* init_aannotpropdef on <var7:AAnnotPropdef>*/
}
var_ppropdefnode1 = var7;
var_node_list = var_ppropdefnode1;
var8 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction418> */
{
var9 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var8); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var9, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction419#action for (self: ReduceAction419, Parser) */
void nit__parser___nit__parser__ReduceAction419___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var3 /* : Array[Object] */;
val* var_listnode7 /* var listnode7: Array[Object] */;
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var_patidnode5 /* var patidnode5: nullable Object */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
val* var_pannotationsnode9 /* var pannotationsnode9: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var11 /* : AAnnotPropdef */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AAnnotPropdef */;
long var12 /* : Int */;
long var13 /* : Int */;
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
var_listnode7 = var3;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9656);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9658);
fatal_exit(1);
}
var_pannotationsnode9 = var_nodearraylist3;
/* <var_pannotationsnode9:nullable Object> isa nullable AAnnotations */
cltype9 = type_nullable__nit__AAnnotations.color;
idtype10 = type_nullable__nit__AAnnotations.id;
if(var_pannotationsnode9 == NULL) {
var8 = 1;
} else {
if(cltype9 >= (((long)var_pannotationsnode9&3)?type_info[((long)var_pannotationsnode9&3)]:var_pannotationsnode9->type)->table_size) {
var8 = 0;
} else {
var8 = (((long)var_pannotationsnode9&3)?type_info[((long)var_pannotationsnode9&3)]:var_pannotationsnode9->type)->type_table[cltype9] == idtype10;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9660);
fatal_exit(1);
}
var11 = NEW_nit__AAnnotPropdef(&type_nit__AAnnotPropdef);
{
((void(*)(val* self, val* p0, val* p1, val* p2, val* p3, val* p4, val* p5, val* p6, val* p7))(var11->class->vft[COLOR_nit__parser_prod__AAnnotPropdef__init_aannotpropdef]))(var11, var_pdocnode2, ((val*)NULL), ((val*)NULL), var_patidnode5, ((val*)NULL), var_listnode7, ((val*)NULL), var_pannotationsnode9); /* init_aannotpropdef on <var11:AAnnotPropdef>*/
}
var_ppropdefnode1 = var11;
var_node_list = var_ppropdefnode1;
var12 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction419> */
{
var13 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var12); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var13, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction420#action for (self: ReduceAction420, Parser) */
void nit__parser___nit__parser__ReduceAction420___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_listnode8 /* var listnode8: Array[Object] */;
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var7 /* : Bool */;
int cltype;
int idtype;
val* var_patidnode5 /* var patidnode5: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var_toparnode6 /* var toparnode6: nullable Object */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
val* var_listnode7 /* var listnode7: nullable Object */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
val* var17 /* : Array[Object] */;
val* var_tcparnode9 /* var tcparnode9: nullable Object */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
val* var21 /* : AAnnotPropdef */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AAnnotPropdef */;
long var22 /* : Int */;
long var23 /* : Int */;
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
var_listnode8 = var6;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9688);
fatal_exit(1);
}
var_patidnode5 = var_nodearraylist2;
/* <var_patidnode5:nullable Object> isa nullable AAtid */
cltype9 = type_nullable__nit__AAtid.color;
idtype10 = type_nullable__nit__AAtid.id;
if(var_patidnode5 == NULL) {
var8 = 1;
} else {
if(cltype9 >= (((long)var_patidnode5&3)?type_info[((long)var_patidnode5&3)]:var_patidnode5->type)->table_size) {
var8 = 0;
} else {
var8 = (((long)var_patidnode5&3)?type_info[((long)var_patidnode5&3)]:var_patidnode5->type)->type_table[cltype9] == idtype10;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9690);
fatal_exit(1);
}
var_toparnode6 = var_nodearraylist3;
/* <var_toparnode6:nullable Object> isa nullable TOpar */
cltype12 = type_nullable__nit__TOpar.color;
idtype13 = type_nullable__nit__TOpar.id;
if(var_toparnode6 == NULL) {
var11 = 1;
} else {
if(cltype12 >= (((long)var_toparnode6&3)?type_info[((long)var_toparnode6&3)]:var_toparnode6->type)->table_size) {
var11 = 0;
} else {
var11 = (((long)var_toparnode6&3)?type_info[((long)var_toparnode6&3)]:var_toparnode6->type)->type_table[cltype12] == idtype13;
}
}
if (unlikely(!var11)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9692);
fatal_exit(1);
}
var_listnode7 = var_nodearraylist5;
/* <var_listnode7:nullable Object> isa Array[Object] */
cltype15 = type_standard__Array__standard__Object.color;
idtype16 = type_standard__Array__standard__Object.id;
if(var_listnode7 == NULL) {
var14 = 0;
} else {
if(cltype15 >= (((long)var_listnode7&3)?type_info[((long)var_listnode7&3)]:var_listnode7->type)->table_size) {
var14 = 0;
} else {
var14 = (((long)var_listnode7&3)?type_info[((long)var_listnode7&3)]:var_listnode7->type)->type_table[cltype15] == idtype16;
}
}
if (unlikely(!var14)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9694);
fatal_exit(1);
}
{
var17 = ((val*(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__parser_work__ReduceAction__concat]))(self, var_listnode8, var_listnode7); /* concat on <self:ReduceAction420>*/
}
var_listnode8 = var17;
var_tcparnode9 = var_nodearraylist6;
/* <var_tcparnode9:nullable Object> isa nullable TCpar */
cltype19 = type_nullable__nit__TCpar.color;
idtype20 = type_nullable__nit__TCpar.id;
if(var_tcparnode9 == NULL) {
var18 = 1;
} else {
if(cltype19 >= (((long)var_tcparnode9&3)?type_info[((long)var_tcparnode9&3)]:var_tcparnode9->type)->table_size) {
var18 = 0;
} else {
var18 = (((long)var_tcparnode9&3)?type_info[((long)var_tcparnode9&3)]:var_tcparnode9->type)->type_table[cltype19] == idtype20;
}
}
if (unlikely(!var18)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9697);
fatal_exit(1);
}
var21 = NEW_nit__AAnnotPropdef(&type_nit__AAnnotPropdef);
{
((void(*)(val* self, val* p0, val* p1, val* p2, val* p3, val* p4, val* p5, val* p6, val* p7))(var21->class->vft[COLOR_nit__parser_prod__AAnnotPropdef__init_aannotpropdef]))(var21, var_pdocnode2, ((val*)NULL), ((val*)NULL), var_patidnode5, var_toparnode6, var_listnode8, var_tcparnode9, ((val*)NULL)); /* init_aannotpropdef on <var21:AAnnotPropdef>*/
}
var_ppropdefnode1 = var21;
var_node_list = var_ppropdefnode1;
var22 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction420> */
{
var23 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var22); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var23, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
