#include "nit__parser.sep.0.h"
/* method parser#ReduceAction68#action for (self: ReduceAction68, Parser) */
void nit__parser___nit__parser__ReduceAction68___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_psignaturenode9 /* var psignaturenode9: nullable Object */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
val* var_pexterncallsnode11 /* var pexterncallsnode11: nullable Object */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
val* var_pexterncodeblocknode12 /* var pexterncodeblocknode12: nullable Object */;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3175);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3177);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3179);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3181);
fatal_exit(1);
}
var_psignaturenode9 = var_nodearraylist5;
/* <var_psignaturenode9:nullable Object> isa nullable ASignature */
cltype18 = type_nullable__nit__ASignature.color;
idtype19 = type_nullable__nit__ASignature.id;
if(var_psignaturenode9 == NULL) {
var17 = 1;
} else {
if(cltype18 >= (((long)var_psignaturenode9&3)?type_info[((long)var_psignaturenode9&3)]:var_psignaturenode9->type)->table_size) {
var17 = 0;
} else {
var17 = (((long)var_psignaturenode9&3)?type_info[((long)var_psignaturenode9&3)]:var_psignaturenode9->type)->type_table[cltype18] == idtype19;
}
}
if (unlikely(!var17)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3183);
fatal_exit(1);
}
var_pexterncallsnode11 = var_nodearraylist6;
/* <var_pexterncallsnode11:nullable Object> isa nullable AExternCalls */
cltype21 = type_nullable__nit__AExternCalls.color;
idtype22 = type_nullable__nit__AExternCalls.id;
if(var_pexterncallsnode11 == NULL) {
var20 = 1;
} else {
if(cltype21 >= (((long)var_pexterncallsnode11&3)?type_info[((long)var_pexterncallsnode11&3)]:var_pexterncallsnode11->type)->table_size) {
var20 = 0;
} else {
var20 = (((long)var_pexterncallsnode11&3)?type_info[((long)var_pexterncallsnode11&3)]:var_pexterncallsnode11->type)->type_table[cltype21] == idtype22;
}
}
if (unlikely(!var20)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3185);
fatal_exit(1);
}
var_pexterncodeblocknode12 = var_nodearraylist7;
/* <var_pexterncodeblocknode12:nullable Object> isa nullable AExternCodeBlock */
cltype24 = type_nullable__nit__AExternCodeBlock.color;
idtype25 = type_nullable__nit__AExternCodeBlock.id;
if(var_pexterncodeblocknode12 == NULL) {
var23 = 1;
} else {
if(cltype24 >= (((long)var_pexterncodeblocknode12&3)?type_info[((long)var_pexterncodeblocknode12&3)]:var_pexterncodeblocknode12->type)->table_size) {
var23 = 0;
} else {
var23 = (((long)var_pexterncodeblocknode12&3)?type_info[((long)var_pexterncodeblocknode12&3)]:var_pexterncodeblocknode12->type)->type_table[cltype24] == idtype25;
}
}
if (unlikely(!var23)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3187);
fatal_exit(1);
}
var26 = NEW_nit__AMethPropdef(&type_nit__AMethPropdef);
{
((void(*)(val* self, val* p0, val* p1, val* p2, val* p3, val* p4, val* p5, val* p6, val* p7, val* p8, val* p9, val* p10, val* p11))(var26->class->vft[COLOR_nit__parser_prod__AMethPropdef__init_amethpropdef]))(var26, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, ((val*)NULL), ((val*)NULL), var_tkwnewnode7, ((val*)NULL), var_psignaturenode9, ((val*)NULL), var_pexterncallsnode11, var_pexterncodeblocknode12, ((val*)NULL)); /* init_amethpropdef on <var26:AMethPropdef>*/
}
var_ppropdefnode1 = var26;
var_node_list = var_ppropdefnode1;
var27 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction68> */
{
var28 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var27); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var28, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction69#action for (self: ReduceAction69, Parser) */
void nit__parser___nit__parser__ReduceAction69___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3220);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3222);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3224);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3226);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3228);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3230);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3232);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3234);
fatal_exit(1);
}
var30 = NEW_nit__AMethPropdef(&type_nit__AMethPropdef);
{
((void(*)(val* self, val* p0, val* p1, val* p2, val* p3, val* p4, val* p5, val* p6, val* p7, val* p8, val* p9, val* p10, val* p11))(var30->class->vft[COLOR_nit__parser_prod__AMethPropdef__init_amethpropdef]))(var30, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, ((val*)NULL), ((val*)NULL), var_tkwnewnode7, var_pmethidnode8, var_psignaturenode9, ((val*)NULL), var_pexterncallsnode11, var_pexterncodeblocknode12, ((val*)NULL)); /* init_amethpropdef on <var30:AMethPropdef>*/
}
var_ppropdefnode1 = var30;
var_node_list = var_ppropdefnode1;
var31 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction69> */
{
var32 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var31); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var32, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction70#action for (self: ReduceAction70, Parser) */
void nit__parser___nit__parser__ReduceAction70___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_pannotationsnode10 /* var pannotationsnode10: nullable Object */;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3267);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3269);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3271);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3273);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3275);
fatal_exit(1);
}
var_pannotationsnode10 = var_nodearraylist6;
/* <var_pannotationsnode10:nullable Object> isa nullable AAnnotations */
cltype22 = type_nullable__nit__AAnnotations.color;
idtype23 = type_nullable__nit__AAnnotations.id;
if(var_pannotationsnode10 == NULL) {
var21 = 1;
} else {
if(cltype22 >= (((long)var_pannotationsnode10&3)?type_info[((long)var_pannotationsnode10&3)]:var_pannotationsnode10->type)->table_size) {
var21 = 0;
} else {
var21 = (((long)var_pannotationsnode10&3)?type_info[((long)var_pannotationsnode10&3)]:var_pannotationsnode10->type)->type_table[cltype22] == idtype23;
}
}
if (unlikely(!var21)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3277);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3279);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3281);
fatal_exit(1);
}
var30 = NEW_nit__AMethPropdef(&type_nit__AMethPropdef);
{
((void(*)(val* self, val* p0, val* p1, val* p2, val* p3, val* p4, val* p5, val* p6, val* p7, val* p8, val* p9, val* p10, val* p11))(var30->class->vft[COLOR_nit__parser_prod__AMethPropdef__init_amethpropdef]))(var30, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, ((val*)NULL), ((val*)NULL), var_tkwnewnode7, ((val*)NULL), var_psignaturenode9, var_pannotationsnode10, var_pexterncallsnode11, var_pexterncodeblocknode12, ((val*)NULL)); /* init_amethpropdef on <var30:AMethPropdef>*/
}
var_ppropdefnode1 = var30;
var_node_list = var_ppropdefnode1;
var31 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction70> */
{
var32 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var31); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var32, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction71#action for (self: ReduceAction71, Parser) */
void nit__parser___nit__parser__ReduceAction71___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3315);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3317);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3319);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3321);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3323);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3325);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3327);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3329);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3331);
fatal_exit(1);
}
var34 = NEW_nit__AMethPropdef(&type_nit__AMethPropdef);
{
((void(*)(val* self, val* p0, val* p1, val* p2, val* p3, val* p4, val* p5, val* p6, val* p7, val* p8, val* p9, val* p10, val* p11))(var34->class->vft[COLOR_nit__parser_prod__AMethPropdef__init_amethpropdef]))(var34, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, ((val*)NULL), ((val*)NULL), var_tkwnewnode7, var_pmethidnode8, var_psignaturenode9, var_pannotationsnode10, var_pexterncallsnode11, var_pexterncodeblocknode12, ((val*)NULL)); /* init_amethpropdef on <var34:AMethPropdef>*/
}
var_ppropdefnode1 = var34;
var_node_list = var_ppropdefnode1;
var35 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction71> */
{
var36 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var35); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var36, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction72#action for (self: ReduceAction72, Parser) */
void nit__parser___nit__parser__ReduceAction72___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable Object */;
long var1 /* : Int */;
long var2 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist1 = var;
var_ppropdefnode1 = var_nodearraylist1;
var_node_list = var_ppropdefnode1;
var1 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction72> */
{
var2 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var1); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var2, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction74#action for (self: ReduceAction74, Parser) */
void nit__parser___nit__parser__ReduceAction74___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pannotationsnode1 /* var pannotationsnode1: nullable Object */;
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
var_pannotationsnode1 = var_nodearraylist2;
var_node_list = var_pannotationsnode1;
var2 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction74> */
{
var3 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var2); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var3, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction75#action for (self: ReduceAction75, Parser) */
void nit__parser___nit__parser__ReduceAction75___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_pannotationsnode1 /* var pannotationsnode1: nullable Object */;
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
var_pannotationsnode1 = var_nodearraylist3;
var_node_list = var_pannotationsnode1;
var4 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction75> */
{
var5 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var4); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var5, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction78#action for (self: ReduceAction78, Parser) */
void nit__parser___nit__parser__ReduceAction78___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pannotationsnode1 /* var pannotationsnode1: nullable Object */;
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
var_pannotationsnode1 = var_nodearraylist3;
var_node_list = var_pannotationsnode1;
var3 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction78> */
{
var4 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var3); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var4, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction79#action for (self: ReduceAction79, Parser) */
void nit__parser___nit__parser__ReduceAction79___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : APublicVisibility */;
val* var_pvisibilitynode1 /* var pvisibilitynode1: nullable APublicVisibility */;
long var1 /* : Int */;
long var2 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
var = NEW_nit__APublicVisibility(&type_nit__APublicVisibility);
{
((void(*)(val* self, val* p0))(var->class->vft[COLOR_nit__parser_prod__APublicVisibility__init_apublicvisibility]))(var, ((val*)NULL)); /* init_apublicvisibility on <var:APublicVisibility>*/
}
var_pvisibilitynode1 = var;
var_node_list = var_pvisibilitynode1;
var1 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction79> */
{
var2 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var1); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var2, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction80#action for (self: ReduceAction80, Parser) */
void nit__parser___nit__parser__ReduceAction80___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tkwpublicnode2 /* var tkwpublicnode2: nullable Object */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var3 /* : APublicVisibility */;
val* var_pvisibilitynode1 /* var pvisibilitynode1: nullable APublicVisibility */;
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
var_tkwpublicnode2 = var_nodearraylist1;
/* <var_tkwpublicnode2:nullable Object> isa nullable TKwpublic */
cltype = type_nullable__nit__TKwpublic.color;
idtype = type_nullable__nit__TKwpublic.id;
if(var_tkwpublicnode2 == NULL) {
var2 = 1;
} else {
if(cltype >= (((long)var_tkwpublicnode2&3)?type_info[((long)var_tkwpublicnode2&3)]:var_tkwpublicnode2->type)->table_size) {
var2 = 0;
} else {
var2 = (((long)var_tkwpublicnode2&3)?type_info[((long)var_tkwpublicnode2&3)]:var_tkwpublicnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3420);
fatal_exit(1);
}
var3 = NEW_nit__APublicVisibility(&type_nit__APublicVisibility);
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_nit__parser_prod__APublicVisibility__init_apublicvisibility]))(var3, var_tkwpublicnode2); /* init_apublicvisibility on <var3:APublicVisibility>*/
}
var_pvisibilitynode1 = var3;
var_node_list = var_pvisibilitynode1;
var4 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction80> */
{
var5 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var4); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var5, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction81#action for (self: ReduceAction81, Parser) */
void nit__parser___nit__parser__ReduceAction81___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tkwprivatenode2 /* var tkwprivatenode2: nullable Object */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var3 /* : APrivateVisibility */;
val* var_pvisibilitynode1 /* var pvisibilitynode1: nullable APrivateVisibility */;
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
var_tkwprivatenode2 = var_nodearraylist1;
/* <var_tkwprivatenode2:nullable Object> isa nullable TKwprivate */
cltype = type_nullable__nit__TKwprivate.color;
idtype = type_nullable__nit__TKwprivate.id;
if(var_tkwprivatenode2 == NULL) {
var2 = 1;
} else {
if(cltype >= (((long)var_tkwprivatenode2&3)?type_info[((long)var_tkwprivatenode2&3)]:var_tkwprivatenode2->type)->table_size) {
var2 = 0;
} else {
var2 = (((long)var_tkwprivatenode2&3)?type_info[((long)var_tkwprivatenode2&3)]:var_tkwprivatenode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3436);
fatal_exit(1);
}
var3 = NEW_nit__APrivateVisibility(&type_nit__APrivateVisibility);
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_nit__parser_prod__APrivateVisibility__init_aprivatevisibility]))(var3, var_tkwprivatenode2); /* init_aprivatevisibility on <var3:APrivateVisibility>*/
}
var_pvisibilitynode1 = var3;
var_node_list = var_pvisibilitynode1;
var4 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction81> */
{
var5 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var4); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var5, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction82#action for (self: ReduceAction82, Parser) */
void nit__parser___nit__parser__ReduceAction82___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tkwprotectednode2 /* var tkwprotectednode2: nullable Object */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var3 /* : AProtectedVisibility */;
val* var_pvisibilitynode1 /* var pvisibilitynode1: nullable AProtectedVisibility */;
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
var_tkwprotectednode2 = var_nodearraylist1;
/* <var_tkwprotectednode2:nullable Object> isa nullable TKwprotected */
cltype = type_nullable__nit__TKwprotected.color;
idtype = type_nullable__nit__TKwprotected.id;
if(var_tkwprotectednode2 == NULL) {
var2 = 1;
} else {
if(cltype >= (((long)var_tkwprotectednode2&3)?type_info[((long)var_tkwprotectednode2&3)]:var_tkwprotectednode2->type)->table_size) {
var2 = 0;
} else {
var2 = (((long)var_tkwprotectednode2&3)?type_info[((long)var_tkwprotectednode2&3)]:var_tkwprotectednode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3452);
fatal_exit(1);
}
var3 = NEW_nit__AProtectedVisibility(&type_nit__AProtectedVisibility);
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_nit__parser_prod__AProtectedVisibility__init_aprotectedvisibility]))(var3, var_tkwprotectednode2); /* init_aprotectedvisibility on <var3:AProtectedVisibility>*/
}
var_pvisibilitynode1 = var3;
var_node_list = var_pvisibilitynode1;
var4 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction82> */
{
var5 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var4); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var5, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction83#action for (self: ReduceAction83, Parser) */
void nit__parser___nit__parser__ReduceAction83___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tkwintrudenode2 /* var tkwintrudenode2: nullable Object */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var3 /* : AIntrudeVisibility */;
val* var_pvisibilitynode1 /* var pvisibilitynode1: nullable AIntrudeVisibility */;
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
var_tkwintrudenode2 = var_nodearraylist1;
/* <var_tkwintrudenode2:nullable Object> isa nullable TKwintrude */
cltype = type_nullable__nit__TKwintrude.color;
idtype = type_nullable__nit__TKwintrude.id;
if(var_tkwintrudenode2 == NULL) {
var2 = 1;
} else {
if(cltype >= (((long)var_tkwintrudenode2&3)?type_info[((long)var_tkwintrudenode2&3)]:var_tkwintrudenode2->type)->table_size) {
var2 = 0;
} else {
var2 = (((long)var_tkwintrudenode2&3)?type_info[((long)var_tkwintrudenode2&3)]:var_tkwintrudenode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3468);
fatal_exit(1);
}
var3 = NEW_nit__AIntrudeVisibility(&type_nit__AIntrudeVisibility);
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_nit__parser_prod__AIntrudeVisibility__init_aintrudevisibility]))(var3, var_tkwintrudenode2); /* init_aintrudevisibility on <var3:AIntrudeVisibility>*/
}
var_pvisibilitynode1 = var3;
var_node_list = var_pvisibilitynode1;
var4 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction83> */
{
var5 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var4); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var5, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction84#action for (self: ReduceAction84, Parser) */
void nit__parser___nit__parser__ReduceAction84___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tplusnode2 /* var tplusnode2: nullable Object */;
short int var1 /* : Bool */;
int cltype;
int idtype;
val* var2 /* : APlusMethid */;
val* var_pmethidnode1 /* var pmethidnode1: nullable APlusMethid */;
long var3 /* : Int */;
long var4 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist1 = var;
var_tplusnode2 = var_nodearraylist1;
/* <var_tplusnode2:nullable Object> isa nullable TPlus */
cltype = type_nullable__nit__TPlus.color;
idtype = type_nullable__nit__TPlus.id;
if(var_tplusnode2 == NULL) {
var1 = 1;
} else {
if(cltype >= (((long)var_tplusnode2&3)?type_info[((long)var_tplusnode2&3)]:var_tplusnode2->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)var_tplusnode2&3)?type_info[((long)var_tplusnode2&3)]:var_tplusnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3483);
fatal_exit(1);
}
var2 = NEW_nit__APlusMethid(&type_nit__APlusMethid);
{
((void(*)(val* self, val* p0))(var2->class->vft[COLOR_nit__parser_prod__APlusMethid__init_aplusmethid]))(var2, var_tplusnode2); /* init_aplusmethid on <var2:APlusMethid>*/
}
var_pmethidnode1 = var2;
var_node_list = var_pmethidnode1;
var3 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction84> */
{
var4 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var3); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var4, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction85#action for (self: ReduceAction85, Parser) */
void nit__parser___nit__parser__ReduceAction85___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tminusnode2 /* var tminusnode2: nullable Object */;
short int var1 /* : Bool */;
int cltype;
int idtype;
val* var2 /* : AMinusMethid */;
val* var_pmethidnode1 /* var pmethidnode1: nullable AMinusMethid */;
long var3 /* : Int */;
long var4 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist1 = var;
var_tminusnode2 = var_nodearraylist1;
/* <var_tminusnode2:nullable Object> isa nullable TMinus */
cltype = type_nullable__nit__TMinus.color;
idtype = type_nullable__nit__TMinus.id;
if(var_tminusnode2 == NULL) {
var1 = 1;
} else {
if(cltype >= (((long)var_tminusnode2&3)?type_info[((long)var_tminusnode2&3)]:var_tminusnode2->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)var_tminusnode2&3)?type_info[((long)var_tminusnode2&3)]:var_tminusnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3498);
fatal_exit(1);
}
var2 = NEW_nit__AMinusMethid(&type_nit__AMinusMethid);
{
((void(*)(val* self, val* p0))(var2->class->vft[COLOR_nit__parser_prod__AMinusMethid__init_aminusmethid]))(var2, var_tminusnode2); /* init_aminusmethid on <var2:AMinusMethid>*/
}
var_pmethidnode1 = var2;
var_node_list = var_pmethidnode1;
var3 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction85> */
{
var4 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var3); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var4, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction86#action for (self: ReduceAction86, Parser) */
void nit__parser___nit__parser__ReduceAction86___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tstarnode2 /* var tstarnode2: nullable Object */;
short int var1 /* : Bool */;
int cltype;
int idtype;
val* var2 /* : AStarMethid */;
val* var_pmethidnode1 /* var pmethidnode1: nullable AStarMethid */;
long var3 /* : Int */;
long var4 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist1 = var;
var_tstarnode2 = var_nodearraylist1;
/* <var_tstarnode2:nullable Object> isa nullable TStar */
cltype = type_nullable__nit__TStar.color;
idtype = type_nullable__nit__TStar.id;
if(var_tstarnode2 == NULL) {
var1 = 1;
} else {
if(cltype >= (((long)var_tstarnode2&3)?type_info[((long)var_tstarnode2&3)]:var_tstarnode2->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)var_tstarnode2&3)?type_info[((long)var_tstarnode2&3)]:var_tstarnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3513);
fatal_exit(1);
}
var2 = NEW_nit__AStarMethid(&type_nit__AStarMethid);
{
((void(*)(val* self, val* p0))(var2->class->vft[COLOR_nit__parser_prod__AStarMethid__init_astarmethid]))(var2, var_tstarnode2); /* init_astarmethid on <var2:AStarMethid>*/
}
var_pmethidnode1 = var2;
var_node_list = var_pmethidnode1;
var3 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction86> */
{
var4 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var3); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var4, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction87#action for (self: ReduceAction87, Parser) */
void nit__parser___nit__parser__ReduceAction87___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tstarstarnode2 /* var tstarstarnode2: nullable Object */;
short int var1 /* : Bool */;
int cltype;
int idtype;
val* var2 /* : AStarstarMethid */;
val* var_pmethidnode1 /* var pmethidnode1: nullable AStarstarMethid */;
long var3 /* : Int */;
long var4 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist1 = var;
var_tstarstarnode2 = var_nodearraylist1;
/* <var_tstarstarnode2:nullable Object> isa nullable TStarstar */
cltype = type_nullable__nit__TStarstar.color;
idtype = type_nullable__nit__TStarstar.id;
if(var_tstarstarnode2 == NULL) {
var1 = 1;
} else {
if(cltype >= (((long)var_tstarstarnode2&3)?type_info[((long)var_tstarstarnode2&3)]:var_tstarstarnode2->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)var_tstarstarnode2&3)?type_info[((long)var_tstarstarnode2&3)]:var_tstarstarnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3528);
fatal_exit(1);
}
var2 = NEW_nit__AStarstarMethid(&type_nit__AStarstarMethid);
{
((void(*)(val* self, val* p0))(var2->class->vft[COLOR_nit__parser_prod__AStarstarMethid__init_astarstarmethid]))(var2, var_tstarstarnode2); /* init_astarstarmethid on <var2:AStarstarMethid>*/
}
var_pmethidnode1 = var2;
var_node_list = var_pmethidnode1;
var3 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction87> */
{
var4 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var3); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var4, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction88#action for (self: ReduceAction88, Parser) */
void nit__parser___nit__parser__ReduceAction88___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tslashnode2 /* var tslashnode2: nullable Object */;
short int var1 /* : Bool */;
int cltype;
int idtype;
val* var2 /* : ASlashMethid */;
val* var_pmethidnode1 /* var pmethidnode1: nullable ASlashMethid */;
long var3 /* : Int */;
long var4 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist1 = var;
var_tslashnode2 = var_nodearraylist1;
/* <var_tslashnode2:nullable Object> isa nullable TSlash */
cltype = type_nullable__nit__TSlash.color;
idtype = type_nullable__nit__TSlash.id;
if(var_tslashnode2 == NULL) {
var1 = 1;
} else {
if(cltype >= (((long)var_tslashnode2&3)?type_info[((long)var_tslashnode2&3)]:var_tslashnode2->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)var_tslashnode2&3)?type_info[((long)var_tslashnode2&3)]:var_tslashnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3543);
fatal_exit(1);
}
var2 = NEW_nit__ASlashMethid(&type_nit__ASlashMethid);
{
((void(*)(val* self, val* p0))(var2->class->vft[COLOR_nit__parser_prod__ASlashMethid__init_aslashmethid]))(var2, var_tslashnode2); /* init_aslashmethid on <var2:ASlashMethid>*/
}
var_pmethidnode1 = var2;
var_node_list = var_pmethidnode1;
var3 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction88> */
{
var4 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var3); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var4, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction89#action for (self: ReduceAction89, Parser) */
void nit__parser___nit__parser__ReduceAction89___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tpercentnode2 /* var tpercentnode2: nullable Object */;
short int var1 /* : Bool */;
int cltype;
int idtype;
val* var2 /* : APercentMethid */;
val* var_pmethidnode1 /* var pmethidnode1: nullable APercentMethid */;
long var3 /* : Int */;
long var4 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist1 = var;
var_tpercentnode2 = var_nodearraylist1;
/* <var_tpercentnode2:nullable Object> isa nullable TPercent */
cltype = type_nullable__nit__TPercent.color;
idtype = type_nullable__nit__TPercent.id;
if(var_tpercentnode2 == NULL) {
var1 = 1;
} else {
if(cltype >= (((long)var_tpercentnode2&3)?type_info[((long)var_tpercentnode2&3)]:var_tpercentnode2->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)var_tpercentnode2&3)?type_info[((long)var_tpercentnode2&3)]:var_tpercentnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3558);
fatal_exit(1);
}
var2 = NEW_nit__APercentMethid(&type_nit__APercentMethid);
{
((void(*)(val* self, val* p0))(var2->class->vft[COLOR_nit__parser_prod__APercentMethid__init_apercentmethid]))(var2, var_tpercentnode2); /* init_apercentmethid on <var2:APercentMethid>*/
}
var_pmethidnode1 = var2;
var_node_list = var_pmethidnode1;
var3 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction89> */
{
var4 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var3); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var4, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction90#action for (self: ReduceAction90, Parser) */
void nit__parser___nit__parser__ReduceAction90___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tpipenode2 /* var tpipenode2: nullable Object */;
short int var1 /* : Bool */;
int cltype;
int idtype;
val* var2 /* : APipeMethid */;
val* var_pmethidnode1 /* var pmethidnode1: nullable APipeMethid */;
long var3 /* : Int */;
long var4 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist1 = var;
var_tpipenode2 = var_nodearraylist1;
/* <var_tpipenode2:nullable Object> isa nullable TPipe */
cltype = type_nullable__nit__TPipe.color;
idtype = type_nullable__nit__TPipe.id;
if(var_tpipenode2 == NULL) {
var1 = 1;
} else {
if(cltype >= (((long)var_tpipenode2&3)?type_info[((long)var_tpipenode2&3)]:var_tpipenode2->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)var_tpipenode2&3)?type_info[((long)var_tpipenode2&3)]:var_tpipenode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3573);
fatal_exit(1);
}
var2 = NEW_nit__APipeMethid(&type_nit__APipeMethid);
{
((void(*)(val* self, val* p0))(var2->class->vft[COLOR_nit__parser_prod__APipeMethid__init_apipemethid]))(var2, var_tpipenode2); /* init_apipemethid on <var2:APipeMethid>*/
}
var_pmethidnode1 = var2;
var_node_list = var_pmethidnode1;
var3 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction90> */
{
var4 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var3); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var4, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction91#action for (self: ReduceAction91, Parser) */
void nit__parser___nit__parser__ReduceAction91___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tcaretnode2 /* var tcaretnode2: nullable Object */;
short int var1 /* : Bool */;
int cltype;
int idtype;
val* var2 /* : ACaretMethid */;
val* var_pmethidnode1 /* var pmethidnode1: nullable ACaretMethid */;
long var3 /* : Int */;
long var4 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist1 = var;
var_tcaretnode2 = var_nodearraylist1;
/* <var_tcaretnode2:nullable Object> isa nullable TCaret */
cltype = type_nullable__nit__TCaret.color;
idtype = type_nullable__nit__TCaret.id;
if(var_tcaretnode2 == NULL) {
var1 = 1;
} else {
if(cltype >= (((long)var_tcaretnode2&3)?type_info[((long)var_tcaretnode2&3)]:var_tcaretnode2->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)var_tcaretnode2&3)?type_info[((long)var_tcaretnode2&3)]:var_tcaretnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3588);
fatal_exit(1);
}
var2 = NEW_nit__ACaretMethid(&type_nit__ACaretMethid);
{
((void(*)(val* self, val* p0))(var2->class->vft[COLOR_nit__parser_prod__ACaretMethid__init_acaretmethid]))(var2, var_tcaretnode2); /* init_acaretmethid on <var2:ACaretMethid>*/
}
var_pmethidnode1 = var2;
var_node_list = var_pmethidnode1;
var3 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction91> */
{
var4 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var3); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var4, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction92#action for (self: ReduceAction92, Parser) */
void nit__parser___nit__parser__ReduceAction92___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tampnode2 /* var tampnode2: nullable Object */;
short int var1 /* : Bool */;
int cltype;
int idtype;
val* var2 /* : AAmpMethid */;
val* var_pmethidnode1 /* var pmethidnode1: nullable AAmpMethid */;
long var3 /* : Int */;
long var4 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist1 = var;
var_tampnode2 = var_nodearraylist1;
/* <var_tampnode2:nullable Object> isa nullable TAmp */
cltype = type_nullable__nit__TAmp.color;
idtype = type_nullable__nit__TAmp.id;
if(var_tampnode2 == NULL) {
var1 = 1;
} else {
if(cltype >= (((long)var_tampnode2&3)?type_info[((long)var_tampnode2&3)]:var_tampnode2->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)var_tampnode2&3)?type_info[((long)var_tampnode2&3)]:var_tampnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3603);
fatal_exit(1);
}
var2 = NEW_nit__AAmpMethid(&type_nit__AAmpMethid);
{
((void(*)(val* self, val* p0))(var2->class->vft[COLOR_nit__parser_prod__AAmpMethid__init_aampmethid]))(var2, var_tampnode2); /* init_aampmethid on <var2:AAmpMethid>*/
}
var_pmethidnode1 = var2;
var_node_list = var_pmethidnode1;
var3 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction92> */
{
var4 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var3); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var4, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction93#action for (self: ReduceAction93, Parser) */
void nit__parser___nit__parser__ReduceAction93___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_ttildenode2 /* var ttildenode2: nullable Object */;
short int var1 /* : Bool */;
int cltype;
int idtype;
val* var2 /* : ATildeMethid */;
val* var_pmethidnode1 /* var pmethidnode1: nullable ATildeMethid */;
long var3 /* : Int */;
long var4 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist1 = var;
var_ttildenode2 = var_nodearraylist1;
/* <var_ttildenode2:nullable Object> isa nullable TTilde */
cltype = type_nullable__nit__TTilde.color;
idtype = type_nullable__nit__TTilde.id;
if(var_ttildenode2 == NULL) {
var1 = 1;
} else {
if(cltype >= (((long)var_ttildenode2&3)?type_info[((long)var_ttildenode2&3)]:var_ttildenode2->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)var_ttildenode2&3)?type_info[((long)var_ttildenode2&3)]:var_ttildenode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3618);
fatal_exit(1);
}
var2 = NEW_nit__ATildeMethid(&type_nit__ATildeMethid);
{
((void(*)(val* self, val* p0))(var2->class->vft[COLOR_nit__parser_prod__ATildeMethid__init_atildemethid]))(var2, var_ttildenode2); /* init_atildemethid on <var2:ATildeMethid>*/
}
var_pmethidnode1 = var2;
var_node_list = var_pmethidnode1;
var3 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction93> */
{
var4 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var3); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var4, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction94#action for (self: ReduceAction94, Parser) */
void nit__parser___nit__parser__ReduceAction94___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_teqnode2 /* var teqnode2: nullable Object */;
short int var1 /* : Bool */;
int cltype;
int idtype;
val* var2 /* : AEqMethid */;
val* var_pmethidnode1 /* var pmethidnode1: nullable AEqMethid */;
long var3 /* : Int */;
long var4 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist1 = var;
var_teqnode2 = var_nodearraylist1;
/* <var_teqnode2:nullable Object> isa nullable TEq */
cltype = type_nullable__nit__TEq.color;
idtype = type_nullable__nit__TEq.id;
if(var_teqnode2 == NULL) {
var1 = 1;
} else {
if(cltype >= (((long)var_teqnode2&3)?type_info[((long)var_teqnode2&3)]:var_teqnode2->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)var_teqnode2&3)?type_info[((long)var_teqnode2&3)]:var_teqnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3633);
fatal_exit(1);
}
var2 = NEW_nit__AEqMethid(&type_nit__AEqMethid);
{
((void(*)(val* self, val* p0))(var2->class->vft[COLOR_nit__parser_prod__AEqMethid__init_aeqmethid]))(var2, var_teqnode2); /* init_aeqmethid on <var2:AEqMethid>*/
}
var_pmethidnode1 = var2;
var_node_list = var_pmethidnode1;
var3 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction94> */
{
var4 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var3); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var4, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction95#action for (self: ReduceAction95, Parser) */
void nit__parser___nit__parser__ReduceAction95___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tnenode2 /* var tnenode2: nullable Object */;
short int var1 /* : Bool */;
int cltype;
int idtype;
val* var2 /* : ANeMethid */;
val* var_pmethidnode1 /* var pmethidnode1: nullable ANeMethid */;
long var3 /* : Int */;
long var4 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist1 = var;
var_tnenode2 = var_nodearraylist1;
/* <var_tnenode2:nullable Object> isa nullable TNe */
cltype = type_nullable__nit__TNe.color;
idtype = type_nullable__nit__TNe.id;
if(var_tnenode2 == NULL) {
var1 = 1;
} else {
if(cltype >= (((long)var_tnenode2&3)?type_info[((long)var_tnenode2&3)]:var_tnenode2->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)var_tnenode2&3)?type_info[((long)var_tnenode2&3)]:var_tnenode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3648);
fatal_exit(1);
}
var2 = NEW_nit__ANeMethid(&type_nit__ANeMethid);
{
((void(*)(val* self, val* p0))(var2->class->vft[COLOR_nit__parser_prod__ANeMethid__init_anemethid]))(var2, var_tnenode2); /* init_anemethid on <var2:ANeMethid>*/
}
var_pmethidnode1 = var2;
var_node_list = var_pmethidnode1;
var3 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction95> */
{
var4 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var3); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var4, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction96#action for (self: ReduceAction96, Parser) */
void nit__parser___nit__parser__ReduceAction96___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tlenode2 /* var tlenode2: nullable Object */;
short int var1 /* : Bool */;
int cltype;
int idtype;
val* var2 /* : ALeMethid */;
val* var_pmethidnode1 /* var pmethidnode1: nullable ALeMethid */;
long var3 /* : Int */;
long var4 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist1 = var;
var_tlenode2 = var_nodearraylist1;
/* <var_tlenode2:nullable Object> isa nullable TLe */
cltype = type_nullable__nit__TLe.color;
idtype = type_nullable__nit__TLe.id;
if(var_tlenode2 == NULL) {
var1 = 1;
} else {
if(cltype >= (((long)var_tlenode2&3)?type_info[((long)var_tlenode2&3)]:var_tlenode2->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)var_tlenode2&3)?type_info[((long)var_tlenode2&3)]:var_tlenode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3663);
fatal_exit(1);
}
var2 = NEW_nit__ALeMethid(&type_nit__ALeMethid);
{
((void(*)(val* self, val* p0))(var2->class->vft[COLOR_nit__parser_prod__ALeMethid__init_alemethid]))(var2, var_tlenode2); /* init_alemethid on <var2:ALeMethid>*/
}
var_pmethidnode1 = var2;
var_node_list = var_pmethidnode1;
var3 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction96> */
{
var4 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var3); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var4, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction97#action for (self: ReduceAction97, Parser) */
void nit__parser___nit__parser__ReduceAction97___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tgenode2 /* var tgenode2: nullable Object */;
short int var1 /* : Bool */;
int cltype;
int idtype;
val* var2 /* : AGeMethid */;
val* var_pmethidnode1 /* var pmethidnode1: nullable AGeMethid */;
long var3 /* : Int */;
long var4 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist1 = var;
var_tgenode2 = var_nodearraylist1;
/* <var_tgenode2:nullable Object> isa nullable TGe */
cltype = type_nullable__nit__TGe.color;
idtype = type_nullable__nit__TGe.id;
if(var_tgenode2 == NULL) {
var1 = 1;
} else {
if(cltype >= (((long)var_tgenode2&3)?type_info[((long)var_tgenode2&3)]:var_tgenode2->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)var_tgenode2&3)?type_info[((long)var_tgenode2&3)]:var_tgenode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3678);
fatal_exit(1);
}
var2 = NEW_nit__AGeMethid(&type_nit__AGeMethid);
{
((void(*)(val* self, val* p0))(var2->class->vft[COLOR_nit__parser_prod__AGeMethid__init_agemethid]))(var2, var_tgenode2); /* init_agemethid on <var2:AGeMethid>*/
}
var_pmethidnode1 = var2;
var_node_list = var_pmethidnode1;
var3 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction97> */
{
var4 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var3); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var4, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction98#action for (self: ReduceAction98, Parser) */
void nit__parser___nit__parser__ReduceAction98___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tltnode2 /* var tltnode2: nullable Object */;
short int var1 /* : Bool */;
int cltype;
int idtype;
val* var2 /* : ALtMethid */;
val* var_pmethidnode1 /* var pmethidnode1: nullable ALtMethid */;
long var3 /* : Int */;
long var4 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist1 = var;
var_tltnode2 = var_nodearraylist1;
/* <var_tltnode2:nullable Object> isa nullable TLt */
cltype = type_nullable__nit__TLt.color;
idtype = type_nullable__nit__TLt.id;
if(var_tltnode2 == NULL) {
var1 = 1;
} else {
if(cltype >= (((long)var_tltnode2&3)?type_info[((long)var_tltnode2&3)]:var_tltnode2->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)var_tltnode2&3)?type_info[((long)var_tltnode2&3)]:var_tltnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3693);
fatal_exit(1);
}
var2 = NEW_nit__ALtMethid(&type_nit__ALtMethid);
{
((void(*)(val* self, val* p0))(var2->class->vft[COLOR_nit__parser_prod__ALtMethid__init_altmethid]))(var2, var_tltnode2); /* init_altmethid on <var2:ALtMethid>*/
}
var_pmethidnode1 = var2;
var_node_list = var_pmethidnode1;
var3 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction98> */
{
var4 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var3); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var4, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction99#action for (self: ReduceAction99, Parser) */
void nit__parser___nit__parser__ReduceAction99___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tgtnode2 /* var tgtnode2: nullable Object */;
short int var1 /* : Bool */;
int cltype;
int idtype;
val* var2 /* : AGtMethid */;
val* var_pmethidnode1 /* var pmethidnode1: nullable AGtMethid */;
long var3 /* : Int */;
long var4 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist1 = var;
var_tgtnode2 = var_nodearraylist1;
/* <var_tgtnode2:nullable Object> isa nullable TGt */
cltype = type_nullable__nit__TGt.color;
idtype = type_nullable__nit__TGt.id;
if(var_tgtnode2 == NULL) {
var1 = 1;
} else {
if(cltype >= (((long)var_tgtnode2&3)?type_info[((long)var_tgtnode2&3)]:var_tgtnode2->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)var_tgtnode2&3)?type_info[((long)var_tgtnode2&3)]:var_tgtnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3708);
fatal_exit(1);
}
var2 = NEW_nit__AGtMethid(&type_nit__AGtMethid);
{
((void(*)(val* self, val* p0))(var2->class->vft[COLOR_nit__parser_prod__AGtMethid__init_agtmethid]))(var2, var_tgtnode2); /* init_agtmethid on <var2:AGtMethid>*/
}
var_pmethidnode1 = var2;
var_node_list = var_pmethidnode1;
var3 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction99> */
{
var4 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var3); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var4, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction100#action for (self: ReduceAction100, Parser) */
void nit__parser___nit__parser__ReduceAction100___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tllnode2 /* var tllnode2: nullable Object */;
short int var1 /* : Bool */;
int cltype;
int idtype;
val* var2 /* : ALlMethid */;
val* var_pmethidnode1 /* var pmethidnode1: nullable ALlMethid */;
long var3 /* : Int */;
long var4 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist1 = var;
var_tllnode2 = var_nodearraylist1;
/* <var_tllnode2:nullable Object> isa nullable TLl */
cltype = type_nullable__nit__TLl.color;
idtype = type_nullable__nit__TLl.id;
if(var_tllnode2 == NULL) {
var1 = 1;
} else {
if(cltype >= (((long)var_tllnode2&3)?type_info[((long)var_tllnode2&3)]:var_tllnode2->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)var_tllnode2&3)?type_info[((long)var_tllnode2&3)]:var_tllnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3723);
fatal_exit(1);
}
var2 = NEW_nit__ALlMethid(&type_nit__ALlMethid);
{
((void(*)(val* self, val* p0))(var2->class->vft[COLOR_nit__parser_prod__ALlMethid__init_allmethid]))(var2, var_tllnode2); /* init_allmethid on <var2:ALlMethid>*/
}
var_pmethidnode1 = var2;
var_node_list = var_pmethidnode1;
var3 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction100> */
{
var4 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var3); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var4, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction101#action for (self: ReduceAction101, Parser) */
void nit__parser___nit__parser__ReduceAction101___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tggnode2 /* var tggnode2: nullable Object */;
short int var1 /* : Bool */;
int cltype;
int idtype;
val* var2 /* : AGgMethid */;
val* var_pmethidnode1 /* var pmethidnode1: nullable AGgMethid */;
long var3 /* : Int */;
long var4 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist1 = var;
var_tggnode2 = var_nodearraylist1;
/* <var_tggnode2:nullable Object> isa nullable TGg */
cltype = type_nullable__nit__TGg.color;
idtype = type_nullable__nit__TGg.id;
if(var_tggnode2 == NULL) {
var1 = 1;
} else {
if(cltype >= (((long)var_tggnode2&3)?type_info[((long)var_tggnode2&3)]:var_tggnode2->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)var_tggnode2&3)?type_info[((long)var_tggnode2&3)]:var_tggnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3738);
fatal_exit(1);
}
var2 = NEW_nit__AGgMethid(&type_nit__AGgMethid);
{
((void(*)(val* self, val* p0))(var2->class->vft[COLOR_nit__parser_prod__AGgMethid__init_aggmethid]))(var2, var_tggnode2); /* init_aggmethid on <var2:AGgMethid>*/
}
var_pmethidnode1 = var2;
var_node_list = var_pmethidnode1;
var3 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction101> */
{
var4 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var3); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var4, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction102#action for (self: ReduceAction102, Parser) */
void nit__parser___nit__parser__ReduceAction102___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tobranode2 /* var tobranode2: nullable Object */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var_tcbranode3 /* var tcbranode3: nullable Object */;
short int var3 /* : Bool */;
int cltype4;
int idtype5;
val* var6 /* : ABraMethid */;
val* var_pmethidnode1 /* var pmethidnode1: nullable ABraMethid */;
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
var_tobranode2 = var_nodearraylist1;
/* <var_tobranode2:nullable Object> isa nullable TObra */
cltype = type_nullable__nit__TObra.color;
idtype = type_nullable__nit__TObra.id;
if(var_tobranode2 == NULL) {
var2 = 1;
} else {
if(cltype >= (((long)var_tobranode2&3)?type_info[((long)var_tobranode2&3)]:var_tobranode2->type)->table_size) {
var2 = 0;
} else {
var2 = (((long)var_tobranode2&3)?type_info[((long)var_tobranode2&3)]:var_tobranode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3754);
fatal_exit(1);
}
var_tcbranode3 = var_nodearraylist2;
/* <var_tcbranode3:nullable Object> isa nullable TCbra */
cltype4 = type_nullable__nit__TCbra.color;
idtype5 = type_nullable__nit__TCbra.id;
if(var_tcbranode3 == NULL) {
var3 = 1;
} else {
if(cltype4 >= (((long)var_tcbranode3&3)?type_info[((long)var_tcbranode3&3)]:var_tcbranode3->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)var_tcbranode3&3)?type_info[((long)var_tcbranode3&3)]:var_tcbranode3->type)->type_table[cltype4] == idtype5;
}
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3756);
fatal_exit(1);
}
var6 = NEW_nit__ABraMethid(&type_nit__ABraMethid);
{
((void(*)(val* self, val* p0, val* p1))(var6->class->vft[COLOR_nit__parser_prod__ABraMethid__init_abramethid]))(var6, var_tobranode2, var_tcbranode3); /* init_abramethid on <var6:ABraMethid>*/
}
var_pmethidnode1 = var6;
var_node_list = var_pmethidnode1;
var7 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction102> */
{
var8 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var7); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var8, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction103#action for (self: ReduceAction103, Parser) */
void nit__parser___nit__parser__ReduceAction103___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tstarshipnode2 /* var tstarshipnode2: nullable Object */;
short int var1 /* : Bool */;
int cltype;
int idtype;
val* var2 /* : AStarshipMethid */;
val* var_pmethidnode1 /* var pmethidnode1: nullable AStarshipMethid */;
long var3 /* : Int */;
long var4 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist1 = var;
var_tstarshipnode2 = var_nodearraylist1;
/* <var_tstarshipnode2:nullable Object> isa nullable TStarship */
cltype = type_nullable__nit__TStarship.color;
idtype = type_nullable__nit__TStarship.id;
if(var_tstarshipnode2 == NULL) {
var1 = 1;
} else {
if(cltype >= (((long)var_tstarshipnode2&3)?type_info[((long)var_tstarshipnode2&3)]:var_tstarshipnode2->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)var_tstarshipnode2&3)?type_info[((long)var_tstarshipnode2&3)]:var_tstarshipnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3772);
fatal_exit(1);
}
var2 = NEW_nit__AStarshipMethid(&type_nit__AStarshipMethid);
{
((void(*)(val* self, val* p0))(var2->class->vft[COLOR_nit__parser_prod__AStarshipMethid__init_astarshipmethid]))(var2, var_tstarshipnode2); /* init_astarshipmethid on <var2:AStarshipMethid>*/
}
var_pmethidnode1 = var2;
var_node_list = var_pmethidnode1;
var3 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction103> */
{
var4 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var3); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var4, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction104#action for (self: ReduceAction104, Parser) */
void nit__parser___nit__parser__ReduceAction104___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tidnode2 /* var tidnode2: nullable Object */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var_tassignnode3 /* var tassignnode3: nullable Object */;
short int var3 /* : Bool */;
int cltype4;
int idtype5;
val* var6 /* : AAssignMethid */;
val* var_pmethidnode1 /* var pmethidnode1: nullable AAssignMethid */;
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
var_tidnode2 = var_nodearraylist1;
/* <var_tidnode2:nullable Object> isa nullable TId */
cltype = type_nullable__nit__TId.color;
idtype = type_nullable__nit__TId.id;
if(var_tidnode2 == NULL) {
var2 = 1;
} else {
if(cltype >= (((long)var_tidnode2&3)?type_info[((long)var_tidnode2&3)]:var_tidnode2->type)->table_size) {
var2 = 0;
} else {
var2 = (((long)var_tidnode2&3)?type_info[((long)var_tidnode2&3)]:var_tidnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3788);
fatal_exit(1);
}
var_tassignnode3 = var_nodearraylist2;
/* <var_tassignnode3:nullable Object> isa nullable TAssign */
cltype4 = type_nullable__nit__TAssign.color;
idtype5 = type_nullable__nit__TAssign.id;
if(var_tassignnode3 == NULL) {
var3 = 1;
} else {
if(cltype4 >= (((long)var_tassignnode3&3)?type_info[((long)var_tassignnode3&3)]:var_tassignnode3->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)var_tassignnode3&3)?type_info[((long)var_tassignnode3&3)]:var_tassignnode3->type)->type_table[cltype4] == idtype5;
}
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3790);
fatal_exit(1);
}
var6 = NEW_nit__AAssignMethid(&type_nit__AAssignMethid);
{
((void(*)(val* self, val* p0, val* p1))(var6->class->vft[COLOR_nit__parser_prod__AAssignMethid__init_aassignmethid]))(var6, var_tidnode2, var_tassignnode3); /* init_aassignmethid on <var6:AAssignMethid>*/
}
var_pmethidnode1 = var6;
var_node_list = var_pmethidnode1;
var7 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction104> */
{
var8 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var7); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var8, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction105#action for (self: ReduceAction105, Parser) */
void nit__parser___nit__parser__ReduceAction105___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tobranode2 /* var tobranode2: nullable Object */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var_tcbranode3 /* var tcbranode3: nullable Object */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
val* var_tassignnode4 /* var tassignnode4: nullable Object */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
val* var10 /* : ABraassignMethid */;
val* var_pmethidnode1 /* var pmethidnode1: nullable ABraassignMethid */;
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
var_tobranode2 = var_nodearraylist1;
/* <var_tobranode2:nullable Object> isa nullable TObra */
cltype = type_nullable__nit__TObra.color;
idtype = type_nullable__nit__TObra.id;
if(var_tobranode2 == NULL) {
var3 = 1;
} else {
if(cltype >= (((long)var_tobranode2&3)?type_info[((long)var_tobranode2&3)]:var_tobranode2->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)var_tobranode2&3)?type_info[((long)var_tobranode2&3)]:var_tobranode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3808);
fatal_exit(1);
}
var_tcbranode3 = var_nodearraylist2;
/* <var_tcbranode3:nullable Object> isa nullable TCbra */
cltype5 = type_nullable__nit__TCbra.color;
idtype6 = type_nullable__nit__TCbra.id;
if(var_tcbranode3 == NULL) {
var4 = 1;
} else {
if(cltype5 >= (((long)var_tcbranode3&3)?type_info[((long)var_tcbranode3&3)]:var_tcbranode3->type)->table_size) {
var4 = 0;
} else {
var4 = (((long)var_tcbranode3&3)?type_info[((long)var_tcbranode3&3)]:var_tcbranode3->type)->type_table[cltype5] == idtype6;
}
}
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3810);
fatal_exit(1);
}
var_tassignnode4 = var_nodearraylist3;
/* <var_tassignnode4:nullable Object> isa nullable TAssign */
cltype8 = type_nullable__nit__TAssign.color;
idtype9 = type_nullable__nit__TAssign.id;
if(var_tassignnode4 == NULL) {
var7 = 1;
} else {
if(cltype8 >= (((long)var_tassignnode4&3)?type_info[((long)var_tassignnode4&3)]:var_tassignnode4->type)->table_size) {
var7 = 0;
} else {
var7 = (((long)var_tassignnode4&3)?type_info[((long)var_tassignnode4&3)]:var_tassignnode4->type)->type_table[cltype8] == idtype9;
}
}
if (unlikely(!var7)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3812);
fatal_exit(1);
}
var10 = NEW_nit__ABraassignMethid(&type_nit__ABraassignMethid);
{
((void(*)(val* self, val* p0, val* p1, val* p2))(var10->class->vft[COLOR_nit__parser_prod__ABraassignMethid__init_abraassignmethid]))(var10, var_tobranode2, var_tcbranode3, var_tassignnode4); /* init_abraassignmethid on <var10:ABraassignMethid>*/
}
var_pmethidnode1 = var10;
var_node_list = var_pmethidnode1;
var11 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction105> */
{
var12 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var11); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var12, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction106#action for (self: ReduceAction106, Parser) */
void nit__parser___nit__parser__ReduceAction106___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tidnode2 /* var tidnode2: nullable Object */;
short int var1 /* : Bool */;
int cltype;
int idtype;
val* var2 /* : AIdMethid */;
val* var_pmethidnode1 /* var pmethidnode1: nullable AIdMethid */;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3829);
fatal_exit(1);
}
var2 = NEW_nit__AIdMethid(&type_nit__AIdMethid);
{
((void(*)(val* self, val* p0))(var2->class->vft[COLOR_nit__parser_prod__AIdMethid__init_aidmethid]))(var2, var_tidnode2); /* init_aidmethid on <var2:AIdMethid>*/
}
var_pmethidnode1 = var2;
var_node_list = var_pmethidnode1;
var3 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction106> */
{
var4 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var3); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var4, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction107#action for (self: ReduceAction107, Parser) */
void nit__parser___nit__parser__ReduceAction107___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_toparnode2 /* var toparnode2: nullable Object */;
short int var7 /* : Bool */;
int cltype;
int idtype;
val* var_listnode3 /* var listnode3: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var11 /* : Array[Object] */;
val* var_tcparnode5 /* var tcparnode5: nullable Object */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
val* var_ptypenode6 /* var ptypenode6: nullable Object */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
val* var18 /* : ASignature */;
val* var_psignaturenode1 /* var psignaturenode1: nullable ASignature */;
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
var_listnode4 = var6;
var_toparnode2 = var_nodearraylist1;
/* <var_toparnode2:nullable Object> isa nullable TOpar */
cltype = type_nullable__nit__TOpar.color;
idtype = type_nullable__nit__TOpar.id;
if(var_toparnode2 == NULL) {
var7 = 1;
} else {
if(cltype >= (((long)var_toparnode2&3)?type_info[((long)var_toparnode2&3)]:var_toparnode2->type)->table_size) {
var7 = 0;
} else {
var7 = (((long)var_toparnode2&3)?type_info[((long)var_toparnode2&3)]:var_toparnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var7)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3850);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3852);
fatal_exit(1);
}
{
var11 = ((val*(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__parser_work__ReduceAction__concat]))(self, var_listnode4, var_listnode3); /* concat on <self:ReduceAction107>*/
}
var_listnode4 = var11;
var_tcparnode5 = var_nodearraylist4;
/* <var_tcparnode5:nullable Object> isa nullable TCpar */
cltype13 = type_nullable__nit__TCpar.color;
idtype14 = type_nullable__nit__TCpar.id;
if(var_tcparnode5 == NULL) {
var12 = 1;
} else {
if(cltype13 >= (((long)var_tcparnode5&3)?type_info[((long)var_tcparnode5&3)]:var_tcparnode5->type)->table_size) {
var12 = 0;
} else {
var12 = (((long)var_tcparnode5&3)?type_info[((long)var_tcparnode5&3)]:var_tcparnode5->type)->type_table[cltype13] == idtype14;
}
}
if (unlikely(!var12)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3855);
fatal_exit(1);
}
var_ptypenode6 = var_nodearraylist5;
/* <var_ptypenode6:nullable Object> isa nullable AType */
cltype16 = type_nullable__nit__AType.color;
idtype17 = type_nullable__nit__AType.id;
if(var_ptypenode6 == NULL) {
var15 = 1;
} else {
if(cltype16 >= (((long)var_ptypenode6&3)?type_info[((long)var_ptypenode6&3)]:var_ptypenode6->type)->table_size) {
var15 = 0;
} else {
var15 = (((long)var_ptypenode6&3)?type_info[((long)var_ptypenode6&3)]:var_ptypenode6->type)->type_table[cltype16] == idtype17;
}
}
if (unlikely(!var15)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3857);
fatal_exit(1);
}
var18 = NEW_nit__ASignature(&type_nit__ASignature);
{
((void(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var18->class->vft[COLOR_nit__parser_prod__ASignature__init_asignature]))(var18, var_toparnode2, var_listnode4, var_tcparnode5, var_ptypenode6); /* init_asignature on <var18:ASignature>*/
}
var_psignaturenode1 = var18;
var_node_list = var_psignaturenode1;
var19 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction107> */
{
var20 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var19); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var20, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction108#action for (self: ReduceAction108, Parser) */
void nit__parser___nit__parser__ReduceAction108___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_toparnode2 /* var toparnode2: nullable Object */;
short int var6 /* : Bool */;
int cltype;
int idtype;
val* var_listnode3 /* var listnode3: nullable Object */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
val* var10 /* : Array[Object] */;
val* var_tcparnode5 /* var tcparnode5: nullable Object */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
val* var14 /* : ASignature */;
val* var_psignaturenode1 /* var psignaturenode1: nullable ASignature */;
long var15 /* : Int */;
long var16 /* : Int */;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3880);
fatal_exit(1);
}
var_listnode3 = var_nodearraylist3;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3882);
fatal_exit(1);
}
{
var10 = ((val*(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__parser_work__ReduceAction__concat]))(self, var_listnode4, var_listnode3); /* concat on <self:ReduceAction108>*/
}
var_listnode4 = var10;
var_tcparnode5 = var_nodearraylist4;
/* <var_tcparnode5:nullable Object> isa nullable TCpar */
cltype12 = type_nullable__nit__TCpar.color;
idtype13 = type_nullable__nit__TCpar.id;
if(var_tcparnode5 == NULL) {
var11 = 1;
} else {
if(cltype12 >= (((long)var_tcparnode5&3)?type_info[((long)var_tcparnode5&3)]:var_tcparnode5->type)->table_size) {
var11 = 0;
} else {
var11 = (((long)var_tcparnode5&3)?type_info[((long)var_tcparnode5&3)]:var_tcparnode5->type)->type_table[cltype12] == idtype13;
}
}
if (unlikely(!var11)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3885);
fatal_exit(1);
}
var14 = NEW_nit__ASignature(&type_nit__ASignature);
{
((void(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var14->class->vft[COLOR_nit__parser_prod__ASignature__init_asignature]))(var14, var_toparnode2, var_listnode4, var_tcparnode5, ((val*)NULL)); /* init_asignature on <var14:ASignature>*/
}
var_psignaturenode1 = var14;
var_node_list = var_psignaturenode1;
var15 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction108> */
{
var16 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var15); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var16, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction109#action for (self: ReduceAction109, Parser) */
void nit__parser___nit__parser__ReduceAction109___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var2 /* : Array[Object] */;
val* var_listnode3 /* var listnode3: Array[Object] */;
val* var_ptypenode5 /* var ptypenode5: nullable Object */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var4 /* : ASignature */;
val* var_psignaturenode1 /* var psignaturenode1: nullable ASignature */;
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
var_listnode3 = var2;
var_ptypenode5 = var_nodearraylist1;
/* <var_ptypenode5:nullable Object> isa nullable AType */
cltype = type_nullable__nit__AType.color;
idtype = type_nullable__nit__AType.id;
if(var_ptypenode5 == NULL) {
var3 = 1;
} else {
if(cltype >= (((long)var_ptypenode5&3)?type_info[((long)var_ptypenode5&3)]:var_ptypenode5->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)var_ptypenode5&3)?type_info[((long)var_ptypenode5&3)]:var_ptypenode5->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3905);
fatal_exit(1);
}
var4 = NEW_nit__ASignature(&type_nit__ASignature);
{
((void(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var4->class->vft[COLOR_nit__parser_prod__ASignature__init_asignature]))(var4, ((val*)NULL), var_listnode3, ((val*)NULL), var_ptypenode5); /* init_asignature on <var4:ASignature>*/
}
var_psignaturenode1 = var4;
var_node_list = var_psignaturenode1;
var5 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction109> */
{
var6 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var5); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var6, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction110#action for (self: ReduceAction110, Parser) */
void nit__parser___nit__parser__ReduceAction110___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var1 /* : Array[Object] */;
val* var_listnode3 /* var listnode3: Array[Object] */;
val* var2 /* : ASignature */;
val* var_psignaturenode1 /* var psignaturenode1: nullable ASignature */;
long var3 /* : Int */;
long var4 /* : Int */;
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
var2 = NEW_nit__ASignature(&type_nit__ASignature);
{
((void(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var2->class->vft[COLOR_nit__parser_prod__ASignature__init_asignature]))(var2, ((val*)NULL), var_listnode3, ((val*)NULL), ((val*)NULL)); /* init_asignature on <var2:ASignature>*/
}
var_psignaturenode1 = var2;
var_node_list = var_psignaturenode1;
var3 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction110> */
{
var4 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var3); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var4, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction111#action for (self: ReduceAction111, Parser) */
void nit__parser___nit__parser__ReduceAction111___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var2 /* : Array[Object] */;
val* var_listnode2 /* var listnode2: Array[Object] */;
val* var_pparamnode1 /* var pparamnode1: nullable Object */;
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
var_pparamnode1 = var_nodearraylist1;
if (var_pparamnode1 == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (0) {
var4 = ((short int(*)(val* self, val* p0))((((long)var_pparamnode1&3)?class_info[((long)var_pparamnode1&3)]:var_pparamnode1->class)->vft[COLOR_standard__kernel__Object___33d_61d]))(var_pparamnode1, ((val*)NULL)); /* != on <var_pparamnode1:nullable Object>*/
var3 = var4;
}
if (var3){
{
((void(*)(val* self, val* p0))(var_listnode2->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_listnode2, var_pparamnode1); /* add on <var_listnode2:Array[Object]>*/
}
} else {
}
var_node_list = var_listnode2;
var5 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction111> */
{
var6 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var5); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var6, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction112#action for (self: ReduceAction112, Parser) */
void nit__parser___nit__parser__ReduceAction112___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_pparamnode1 /* var pparamnode1: nullable Object */;
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
var_pparamnode1 = var_nodearraylist1;
var_listnode2 = var_nodearraylist2;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3960);
fatal_exit(1);
}
if (var_pparamnode1 == NULL) {
var5 = 0; /* is null */
} else {
var5 = 1; /* arg is null and recv is not */
}
if (0) {
var6 = ((short int(*)(val* self, val* p0))((((long)var_pparamnode1&3)?class_info[((long)var_pparamnode1&3)]:var_pparamnode1->class)->vft[COLOR_standard__kernel__Object___33d_61d]))(var_pparamnode1, ((val*)NULL)); /* != on <var_pparamnode1:nullable Object>*/
var5 = var6;
}
if (var5){
{
((void(*)(val* self, val* p0))(var_listnode3->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_listnode3, var_pparamnode1); /* add on <var_listnode3:Array[Object]>*/
}
} else {
}
{
var7 = ((val*(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__parser_work__ReduceAction__concat]))(self, var_listnode3, var_listnode2); /* concat on <self:ReduceAction112>*/
}
var_listnode3 = var7;
var_node_list = var_listnode3;
var8 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction112> */
{
var9 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var8); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var9, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction114#action for (self: ReduceAction114, Parser) */
void nit__parser___nit__parser__ReduceAction114___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pparamnode1 /* var pparamnode1: nullable Object */;
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
var_pparamnode1 = var_nodearraylist3;
var_node_list = var_pparamnode1;
var3 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction114> */
{
var4 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var3); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var4, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction115#action for (self: ReduceAction115, Parser) */
void nit__parser___nit__parser__ReduceAction115___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tidnode2 /* var tidnode2: nullable Object */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var_pannotationsnode5 /* var pannotationsnode5: nullable Object */;
short int var3 /* : Bool */;
int cltype4;
int idtype5;
val* var6 /* : AParam */;
val* var_pparamnode1 /* var pparamnode1: nullable AParam */;
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
var_tidnode2 = var_nodearraylist1;
/* <var_tidnode2:nullable Object> isa nullable TId */
cltype = type_nullable__nit__TId.color;
idtype = type_nullable__nit__TId.id;
if(var_tidnode2 == NULL) {
var2 = 1;
} else {
if(cltype >= (((long)var_tidnode2&3)?type_info[((long)var_tidnode2&3)]:var_tidnode2->type)->table_size) {
var2 = 0;
} else {
var2 = (((long)var_tidnode2&3)?type_info[((long)var_tidnode2&3)]:var_tidnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3990);
fatal_exit(1);
}
var_pannotationsnode5 = var_nodearraylist2;
/* <var_pannotationsnode5:nullable Object> isa nullable AAnnotations */
cltype4 = type_nullable__nit__AAnnotations.color;
idtype5 = type_nullable__nit__AAnnotations.id;
if(var_pannotationsnode5 == NULL) {
var3 = 1;
} else {
if(cltype4 >= (((long)var_pannotationsnode5&3)?type_info[((long)var_pannotationsnode5&3)]:var_pannotationsnode5->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)var_pannotationsnode5&3)?type_info[((long)var_pannotationsnode5&3)]:var_pannotationsnode5->type)->type_table[cltype4] == idtype5;
}
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3992);
fatal_exit(1);
}
var6 = NEW_nit__AParam(&type_nit__AParam);
{
((void(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var6->class->vft[COLOR_nit__parser_prod__AParam__init_aparam]))(var6, var_tidnode2, ((val*)NULL), ((val*)NULL), var_pannotationsnode5); /* init_aparam on <var6:AParam>*/
}
var_pparamnode1 = var6;
var_node_list = var_pparamnode1;
var7 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction115> */
{
var8 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var7); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var8, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction116#action for (self: ReduceAction116, Parser) */
void nit__parser___nit__parser__ReduceAction116___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tidnode2 /* var tidnode2: nullable Object */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var_ptypenode3 /* var ptypenode3: nullable Object */;
short int var3 /* : Bool */;
int cltype4;
int idtype5;
val* var6 /* : AParam */;
val* var_pparamnode1 /* var pparamnode1: nullable AParam */;
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
var_tidnode2 = var_nodearraylist1;
/* <var_tidnode2:nullable Object> isa nullable TId */
cltype = type_nullable__nit__TId.color;
idtype = type_nullable__nit__TId.id;
if(var_tidnode2 == NULL) {
var2 = 1;
} else {
if(cltype >= (((long)var_tidnode2&3)?type_info[((long)var_tidnode2&3)]:var_tidnode2->type)->table_size) {
var2 = 0;
} else {
var2 = (((long)var_tidnode2&3)?type_info[((long)var_tidnode2&3)]:var_tidnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4011);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4013);
fatal_exit(1);
}
var6 = NEW_nit__AParam(&type_nit__AParam);
{
((void(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var6->class->vft[COLOR_nit__parser_prod__AParam__init_aparam]))(var6, var_tidnode2, var_ptypenode3, ((val*)NULL), ((val*)NULL)); /* init_aparam on <var6:AParam>*/
}
var_pparamnode1 = var6;
var_node_list = var_pparamnode1;
var7 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction116> */
{
var8 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var7); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var8, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction117#action for (self: ReduceAction117, Parser) */
void nit__parser___nit__parser__ReduceAction117___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_ptypenode3 /* var ptypenode3: nullable Object */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
val* var_pannotationsnode5 /* var pannotationsnode5: nullable Object */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
val* var10 /* : AParam */;
val* var_pparamnode1 /* var pparamnode1: nullable AParam */;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4033);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4035);
fatal_exit(1);
}
var_pannotationsnode5 = var_nodearraylist2;
/* <var_pannotationsnode5:nullable Object> isa nullable AAnnotations */
cltype8 = type_nullable__nit__AAnnotations.color;
idtype9 = type_nullable__nit__AAnnotations.id;
if(var_pannotationsnode5 == NULL) {
var7 = 1;
} else {
if(cltype8 >= (((long)var_pannotationsnode5&3)?type_info[((long)var_pannotationsnode5&3)]:var_pannotationsnode5->type)->table_size) {
var7 = 0;
} else {
var7 = (((long)var_pannotationsnode5&3)?type_info[((long)var_pannotationsnode5&3)]:var_pannotationsnode5->type)->type_table[cltype8] == idtype9;
}
}
if (unlikely(!var7)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4037);
fatal_exit(1);
}
var10 = NEW_nit__AParam(&type_nit__AParam);
{
((void(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var10->class->vft[COLOR_nit__parser_prod__AParam__init_aparam]))(var10, var_tidnode2, var_ptypenode3, ((val*)NULL), var_pannotationsnode5); /* init_aparam on <var10:AParam>*/
}
var_pparamnode1 = var10;
var_node_list = var_pparamnode1;
var11 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction117> */
{
var12 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var11); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var12, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction118#action for (self: ReduceAction118, Parser) */
void nit__parser___nit__parser__ReduceAction118___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_ptypenode3 /* var ptypenode3: nullable Object */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
val* var_tdotdotdotnode4 /* var tdotdotdotnode4: nullable Object */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
val* var10 /* : AParam */;
val* var_pparamnode1 /* var pparamnode1: nullable AParam */;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4057);
fatal_exit(1);
}
var_ptypenode3 = var_nodearraylist2;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4059);
fatal_exit(1);
}
var_tdotdotdotnode4 = var_nodearraylist3;
/* <var_tdotdotdotnode4:nullable Object> isa nullable TDotdotdot */
cltype8 = type_nullable__nit__TDotdotdot.color;
idtype9 = type_nullable__nit__TDotdotdot.id;
if(var_tdotdotdotnode4 == NULL) {
var7 = 1;
} else {
if(cltype8 >= (((long)var_tdotdotdotnode4&3)?type_info[((long)var_tdotdotdotnode4&3)]:var_tdotdotdotnode4->type)->table_size) {
var7 = 0;
} else {
var7 = (((long)var_tdotdotdotnode4&3)?type_info[((long)var_tdotdotdotnode4&3)]:var_tdotdotdotnode4->type)->type_table[cltype8] == idtype9;
}
}
if (unlikely(!var7)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4061);
fatal_exit(1);
}
var10 = NEW_nit__AParam(&type_nit__AParam);
{
((void(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var10->class->vft[COLOR_nit__parser_prod__AParam__init_aparam]))(var10, var_tidnode2, var_ptypenode3, var_tdotdotdotnode4, ((val*)NULL)); /* init_aparam on <var10:AParam>*/
}
var_pparamnode1 = var10;
var_node_list = var_pparamnode1;
var11 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction118> */
{
var12 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var11); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var12, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction119#action for (self: ReduceAction119, Parser) */
void nit__parser___nit__parser__ReduceAction119___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_tidnode2 /* var tidnode2: nullable Object */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var_ptypenode3 /* var ptypenode3: nullable Object */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
val* var_tdotdotdotnode4 /* var tdotdotdotnode4: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var_pannotationsnode5 /* var pannotationsnode5: nullable Object */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
val* var14 /* : AParam */;
val* var_pparamnode1 /* var pparamnode1: nullable AParam */;
long var15 /* : Int */;
long var16 /* : Int */;
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
var_tidnode2 = var_nodearraylist1;
/* <var_tidnode2:nullable Object> isa nullable TId */
cltype = type_nullable__nit__TId.color;
idtype = type_nullable__nit__TId.id;
if(var_tidnode2 == NULL) {
var4 = 1;
} else {
if(cltype >= (((long)var_tidnode2&3)?type_info[((long)var_tidnode2&3)]:var_tidnode2->type)->table_size) {
var4 = 0;
} else {
var4 = (((long)var_tidnode2&3)?type_info[((long)var_tidnode2&3)]:var_tidnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4082);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4084);
fatal_exit(1);
}
var_tdotdotdotnode4 = var_nodearraylist4;
/* <var_tdotdotdotnode4:nullable Object> isa nullable TDotdotdot */
cltype9 = type_nullable__nit__TDotdotdot.color;
idtype10 = type_nullable__nit__TDotdotdot.id;
if(var_tdotdotdotnode4 == NULL) {
var8 = 1;
} else {
if(cltype9 >= (((long)var_tdotdotdotnode4&3)?type_info[((long)var_tdotdotdotnode4&3)]:var_tdotdotdotnode4->type)->table_size) {
var8 = 0;
} else {
var8 = (((long)var_tdotdotdotnode4&3)?type_info[((long)var_tdotdotdotnode4&3)]:var_tdotdotdotnode4->type)->type_table[cltype9] == idtype10;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4086);
fatal_exit(1);
}
var_pannotationsnode5 = var_nodearraylist2;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4088);
fatal_exit(1);
}
var14 = NEW_nit__AParam(&type_nit__AParam);
{
((void(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var14->class->vft[COLOR_nit__parser_prod__AParam__init_aparam]))(var14, var_tidnode2, var_ptypenode3, var_tdotdotdotnode4, var_pannotationsnode5); /* init_aparam on <var14:AParam>*/
}
var_pparamnode1 = var14;
var_node_list = var_pparamnode1;
var15 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction119> */
{
var16 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var15); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var16, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction120#action for (self: ReduceAction120, Parser) */
void nit__parser___nit__parser__ReduceAction120___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_tkwimportnode2 /* var tkwimportnode2: nullable Object */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var_pexterncallnode3 /* var pexterncallnode3: nullable Object */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
val* var10 /* : AExternCalls */;
val* var_pexterncallsnode1 /* var pexterncallsnode1: nullable AExternCalls */;
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
var3 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
((void(*)(val* self))(var3->class->vft[COLOR_standard__kernel__Object__init]))(var3); /* init on <var3:Array[Object]>*/
}
var_listnode4 = var3;
var_tkwimportnode2 = var_nodearraylist1;
/* <var_tkwimportnode2:nullable Object> isa nullable TKwimport */
cltype = type_nullable__nit__TKwimport.color;
idtype = type_nullable__nit__TKwimport.id;
if(var_tkwimportnode2 == NULL) {
var4 = 1;
} else {
if(cltype >= (((long)var_tkwimportnode2&3)?type_info[((long)var_tkwimportnode2&3)]:var_tkwimportnode2->type)->table_size) {
var4 = 0;
} else {
var4 = (((long)var_tkwimportnode2&3)?type_info[((long)var_tkwimportnode2&3)]:var_tkwimportnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4109);
fatal_exit(1);
}
var_pexterncallnode3 = var_nodearraylist3;
/* <var_pexterncallnode3:nullable Object> isa nullable AExternCall */
cltype6 = type_nullable__nit__AExternCall.color;
idtype7 = type_nullable__nit__AExternCall.id;
if(var_pexterncallnode3 == NULL) {
var5 = 1;
} else {
if(cltype6 >= (((long)var_pexterncallnode3&3)?type_info[((long)var_pexterncallnode3&3)]:var_pexterncallnode3->type)->table_size) {
var5 = 0;
} else {
var5 = (((long)var_pexterncallnode3&3)?type_info[((long)var_pexterncallnode3&3)]:var_pexterncallnode3->type)->type_table[cltype6] == idtype7;
}
}
if (unlikely(!var5)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4111);
fatal_exit(1);
}
if (var_pexterncallnode3 == NULL) {
var8 = 0; /* is null */
} else {
var8 = 1; /* arg is null and recv is not */
}
if (0) {
var9 = ((short int(*)(val* self, val* p0))(var_pexterncallnode3->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_pexterncallnode3, ((val*)NULL)); /* != on <var_pexterncallnode3:nullable Object(nullable AExternCall)>*/
var8 = var9;
}
if (var8){
{
((void(*)(val* self, val* p0))(var_listnode4->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_listnode4, var_pexterncallnode3); /* add on <var_listnode4:Array[Object]>*/
}
} else {
}
var10 = NEW_nit__AExternCalls(&type_nit__AExternCalls);
{
((void(*)(val* self, val* p0, val* p1))(var10->class->vft[COLOR_nit__parser_prod__AExternCalls__init_aexterncalls]))(var10, var_tkwimportnode2, var_listnode4); /* init_aexterncalls on <var10:AExternCalls>*/
}
var_pexterncallsnode1 = var10;
var_node_list = var_pexterncallsnode1;
var11 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction120> */
{
var12 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var11); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var12, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction121#action for (self: ReduceAction121, Parser) */
void nit__parser___nit__parser__ReduceAction121___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_tkwimportnode2 /* var tkwimportnode2: nullable Object */;
short int var5 /* : Bool */;
int cltype;
int idtype;
val* var_pexterncallnode3 /* var pexterncallnode3: nullable Object */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
val* var_listnode4 /* var listnode4: nullable Object */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
val* var14 /* : Array[Object] */;
val* var15 /* : AExternCalls */;
val* var_pexterncallsnode1 /* var pexterncallsnode1: nullable AExternCalls */;
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
var_listnode5 = var4;
var_tkwimportnode2 = var_nodearraylist1;
/* <var_tkwimportnode2:nullable Object> isa nullable TKwimport */
cltype = type_nullable__nit__TKwimport.color;
idtype = type_nullable__nit__TKwimport.id;
if(var_tkwimportnode2 == NULL) {
var5 = 1;
} else {
if(cltype >= (((long)var_tkwimportnode2&3)?type_info[((long)var_tkwimportnode2&3)]:var_tkwimportnode2->type)->table_size) {
var5 = 0;
} else {
var5 = (((long)var_tkwimportnode2&3)?type_info[((long)var_tkwimportnode2&3)]:var_tkwimportnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var5)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4134);
fatal_exit(1);
}
var_pexterncallnode3 = var_nodearraylist3;
/* <var_pexterncallnode3:nullable Object> isa nullable AExternCall */
cltype7 = type_nullable__nit__AExternCall.color;
idtype8 = type_nullable__nit__AExternCall.id;
if(var_pexterncallnode3 == NULL) {
var6 = 1;
} else {
if(cltype7 >= (((long)var_pexterncallnode3&3)?type_info[((long)var_pexterncallnode3&3)]:var_pexterncallnode3->type)->table_size) {
var6 = 0;
} else {
var6 = (((long)var_pexterncallnode3&3)?type_info[((long)var_pexterncallnode3&3)]:var_pexterncallnode3->type)->type_table[cltype7] == idtype8;
}
}
if (unlikely(!var6)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4136);
fatal_exit(1);
}
var_listnode4 = var_nodearraylist4;
/* <var_listnode4:nullable Object> isa Array[Object] */
cltype10 = type_standard__Array__standard__Object.color;
idtype11 = type_standard__Array__standard__Object.id;
if(var_listnode4 == NULL) {
var9 = 0;
} else {
if(cltype10 >= (((long)var_listnode4&3)?type_info[((long)var_listnode4&3)]:var_listnode4->type)->table_size) {
var9 = 0;
} else {
var9 = (((long)var_listnode4&3)?type_info[((long)var_listnode4&3)]:var_listnode4->type)->type_table[cltype10] == idtype11;
}
}
if (unlikely(!var9)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4138);
fatal_exit(1);
}
if (var_pexterncallnode3 == NULL) {
var12 = 0; /* is null */
} else {
var12 = 1; /* arg is null and recv is not */
}
if (0) {
var13 = ((short int(*)(val* self, val* p0))(var_pexterncallnode3->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_pexterncallnode3, ((val*)NULL)); /* != on <var_pexterncallnode3:nullable Object(nullable AExternCall)>*/
var12 = var13;
}
if (var12){
{
((void(*)(val* self, val* p0))(var_listnode5->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_listnode5, var_pexterncallnode3); /* add on <var_listnode5:Array[Object]>*/
}
} else {
}
{
var14 = ((val*(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__parser_work__ReduceAction__concat]))(self, var_listnode5, var_listnode4); /* concat on <self:ReduceAction121>*/
}
var_listnode5 = var14;
var15 = NEW_nit__AExternCalls(&type_nit__AExternCalls);
{
((void(*)(val* self, val* p0, val* p1))(var15->class->vft[COLOR_nit__parser_prod__AExternCalls__init_aexterncalls]))(var15, var_tkwimportnode2, var_listnode5); /* init_aexterncalls on <var15:AExternCalls>*/
}
var_pexterncallsnode1 = var15;
var_node_list = var_pexterncallsnode1;
var16 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction121> */
{
var17 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var16); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var17, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction123#action for (self: ReduceAction123, Parser) */
void nit__parser___nit__parser__ReduceAction123___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pexterncallnode1 /* var pexterncallnode1: nullable Object */;
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
var_pexterncallnode1 = var_nodearraylist3;
var_node_list = var_pexterncallnode1;
var3 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction123> */
{
var4 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var3); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var4, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction124#action for (self: ReduceAction124, Parser) */
void nit__parser___nit__parser__ReduceAction124___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pexterncallnode1 /* var pexterncallnode1: nullable Object */;
long var1 /* : Int */;
long var2 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist1 = var;
var_pexterncallnode1 = var_nodearraylist1;
var_node_list = var_pexterncallnode1;
var1 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction124> */
{
var2 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var1); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var2, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction126#action for (self: ReduceAction126, Parser) */
void nit__parser___nit__parser__ReduceAction126___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tkwsupernode2 /* var tkwsupernode2: nullable Object */;
short int var1 /* : Bool */;
int cltype;
int idtype;
val* var2 /* : ASuperExternCall */;
val* var_pexterncallnode1 /* var pexterncallnode1: nullable ASuperExternCall */;
long var3 /* : Int */;
long var4 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist1 = var;
var_tkwsupernode2 = var_nodearraylist1;
/* <var_tkwsupernode2:nullable Object> isa nullable TKwsuper */
cltype = type_nullable__nit__TKwsuper.color;
idtype = type_nullable__nit__TKwsuper.id;
if(var_tkwsupernode2 == NULL) {
var1 = 1;
} else {
if(cltype >= (((long)var_tkwsupernode2&3)?type_info[((long)var_tkwsupernode2&3)]:var_tkwsupernode2->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)var_tkwsupernode2&3)?type_info[((long)var_tkwsupernode2&3)]:var_tkwsupernode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4182);
fatal_exit(1);
}
var2 = NEW_nit__ASuperExternCall(&type_nit__ASuperExternCall);
{
((void(*)(val* self, val* p0))(var2->class->vft[COLOR_nit__parser_prod__ASuperExternCall__init_asuperexterncall]))(var2, var_tkwsupernode2); /* init_asuperexterncall on <var2:ASuperExternCall>*/
}
var_pexterncallnode1 = var2;
var_node_list = var_pexterncallnode1;
var3 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction126> */
{
var4 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var3); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var4, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction127#action for (self: ReduceAction127, Parser) */
void nit__parser___nit__parser__ReduceAction127___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pmethidnode2 /* var pmethidnode2: nullable Object */;
short int var1 /* : Bool */;
int cltype;
int idtype;
val* var2 /* : ALocalPropExternCall */;
val* var_pexterncallnode1 /* var pexterncallnode1: nullable ALocalPropExternCall */;
long var3 /* : Int */;
long var4 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist1 = var;
var_pmethidnode2 = var_nodearraylist1;
/* <var_pmethidnode2:nullable Object> isa nullable AMethid */
cltype = type_nullable__nit__AMethid.color;
idtype = type_nullable__nit__AMethid.id;
if(var_pmethidnode2 == NULL) {
var1 = 1;
} else {
if(cltype >= (((long)var_pmethidnode2&3)?type_info[((long)var_pmethidnode2&3)]:var_pmethidnode2->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)var_pmethidnode2&3)?type_info[((long)var_pmethidnode2&3)]:var_pmethidnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4197);
fatal_exit(1);
}
var2 = NEW_nit__ALocalPropExternCall(&type_nit__ALocalPropExternCall);
{
((void(*)(val* self, val* p0))(var2->class->vft[COLOR_nit__parser_prod__ALocalPropExternCall__init_alocalpropexterncall]))(var2, var_pmethidnode2); /* init_alocalpropexterncall on <var2:ALocalPropExternCall>*/
}
var_pexterncallnode1 = var2;
var_node_list = var_pexterncallnode1;
var3 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction127> */
{
var4 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var3); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var4, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction128#action for (self: ReduceAction128, Parser) */
void nit__parser___nit__parser__ReduceAction128___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_ptypenode2 /* var ptypenode2: nullable Object */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var_tdotnode3 /* var tdotnode3: nullable Object */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
val* var_pmethidnode4 /* var pmethidnode4: nullable Object */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
val* var10 /* : AFullPropExternCall */;
val* var_pexterncallnode1 /* var pexterncallnode1: nullable AFullPropExternCall */;
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
var_ptypenode2 = var_nodearraylist1;
/* <var_ptypenode2:nullable Object> isa nullable AType */
cltype = type_nullable__nit__AType.color;
idtype = type_nullable__nit__AType.id;
if(var_ptypenode2 == NULL) {
var3 = 1;
} else {
if(cltype >= (((long)var_ptypenode2&3)?type_info[((long)var_ptypenode2&3)]:var_ptypenode2->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)var_ptypenode2&3)?type_info[((long)var_ptypenode2&3)]:var_ptypenode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4214);
fatal_exit(1);
}
var_tdotnode3 = var_nodearraylist2;
/* <var_tdotnode3:nullable Object> isa nullable TDot */
cltype5 = type_nullable__nit__TDot.color;
idtype6 = type_nullable__nit__TDot.id;
if(var_tdotnode3 == NULL) {
var4 = 1;
} else {
if(cltype5 >= (((long)var_tdotnode3&3)?type_info[((long)var_tdotnode3&3)]:var_tdotnode3->type)->table_size) {
var4 = 0;
} else {
var4 = (((long)var_tdotnode3&3)?type_info[((long)var_tdotnode3&3)]:var_tdotnode3->type)->type_table[cltype5] == idtype6;
}
}
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4216);
fatal_exit(1);
}
var_pmethidnode4 = var_nodearraylist3;
/* <var_pmethidnode4:nullable Object> isa nullable AMethid */
cltype8 = type_nullable__nit__AMethid.color;
idtype9 = type_nullable__nit__AMethid.id;
if(var_pmethidnode4 == NULL) {
var7 = 1;
} else {
if(cltype8 >= (((long)var_pmethidnode4&3)?type_info[((long)var_pmethidnode4&3)]:var_pmethidnode4->type)->table_size) {
var7 = 0;
} else {
var7 = (((long)var_pmethidnode4&3)?type_info[((long)var_pmethidnode4&3)]:var_pmethidnode4->type)->type_table[cltype8] == idtype9;
}
}
if (unlikely(!var7)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4218);
fatal_exit(1);
}
var10 = NEW_nit__AFullPropExternCall(&type_nit__AFullPropExternCall);
{
((void(*)(val* self, val* p0, val* p1, val* p2))(var10->class->vft[COLOR_nit__parser_prod__AFullPropExternCall__init_afullpropexterncall]))(var10, var_ptypenode2, var_tdotnode3, var_pmethidnode4); /* init_afullpropexterncall on <var10:AFullPropExternCall>*/
}
var_pexterncallnode1 = var10;
var_node_list = var_pexterncallnode1;
var11 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction128> */
{
var12 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var11); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var12, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction129#action for (self: ReduceAction129, Parser) */
void nit__parser___nit__parser__ReduceAction129___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_ptypenode2 /* var ptypenode2: nullable Object */;
short int var1 /* : Bool */;
int cltype;
int idtype;
val* var2 /* : AInitPropExternCall */;
val* var_pexterncallnode1 /* var pexterncallnode1: nullable AInitPropExternCall */;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4235);
fatal_exit(1);
}
var2 = NEW_nit__AInitPropExternCall(&type_nit__AInitPropExternCall);
{
((void(*)(val* self, val* p0))(var2->class->vft[COLOR_nit__parser_prod__AInitPropExternCall__init_ainitpropexterncall]))(var2, var_ptypenode2); /* init_ainitpropexterncall on <var2:AInitPropExternCall>*/
}
var_pexterncallnode1 = var2;
var_node_list = var_pexterncallnode1;
var3 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction129> */
{
var4 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var3); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var4, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction130#action for (self: ReduceAction130, Parser) */
void nit__parser___nit__parser__ReduceAction130___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_ptypenode2 /* var ptypenode2: nullable Object */;
short int var9 /* : Bool */;
int cltype;
int idtype;
val* var_tdotnode3 /* var tdotnode3: nullable Object */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var_tkwasnode4 /* var tkwasnode4: nullable Object */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
val* var_ptypenode5 /* var ptypenode5: nullable Object */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
val* var19 /* : ACastAsExternCall */;
val* var_pexterncallnode1 /* var pexterncallnode1: nullable ACastAsExternCall */;
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
var_ptypenode2 = var_nodearraylist1;
/* <var_ptypenode2:nullable Object> isa nullable AType */
cltype = type_nullable__nit__AType.color;
idtype = type_nullable__nit__AType.id;
if(var_ptypenode2 == NULL) {
var9 = 1;
} else {
if(cltype >= (((long)var_ptypenode2&3)?type_info[((long)var_ptypenode2&3)]:var_ptypenode2->type)->table_size) {
var9 = 0;
} else {
var9 = (((long)var_ptypenode2&3)?type_info[((long)var_ptypenode2&3)]:var_ptypenode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var9)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4258);
fatal_exit(1);
}
var_tdotnode3 = var_nodearraylist2;
/* <var_tdotnode3:nullable Object> isa nullable TDot */
cltype11 = type_nullable__nit__TDot.color;
idtype12 = type_nullable__nit__TDot.id;
if(var_tdotnode3 == NULL) {
var10 = 1;
} else {
if(cltype11 >= (((long)var_tdotnode3&3)?type_info[((long)var_tdotnode3&3)]:var_tdotnode3->type)->table_size) {
var10 = 0;
} else {
var10 = (((long)var_tdotnode3&3)?type_info[((long)var_tdotnode3&3)]:var_tdotnode3->type)->type_table[cltype11] == idtype12;
}
}
if (unlikely(!var10)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4260);
fatal_exit(1);
}
var_tkwasnode4 = var_nodearraylist3;
/* <var_tkwasnode4:nullable Object> isa nullable TKwas */
cltype14 = type_nullable__nit__TKwas.color;
idtype15 = type_nullable__nit__TKwas.id;
if(var_tkwasnode4 == NULL) {
var13 = 1;
} else {
if(cltype14 >= (((long)var_tkwasnode4&3)?type_info[((long)var_tkwasnode4&3)]:var_tkwasnode4->type)->table_size) {
var13 = 0;
} else {
var13 = (((long)var_tkwasnode4&3)?type_info[((long)var_tkwasnode4&3)]:var_tkwasnode4->type)->type_table[cltype14] == idtype15;
}
}
if (unlikely(!var13)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4262);
fatal_exit(1);
}
var_ptypenode5 = var_nodearraylist7;
/* <var_ptypenode5:nullable Object> isa nullable AType */
cltype17 = type_nullable__nit__AType.color;
idtype18 = type_nullable__nit__AType.id;
if(var_ptypenode5 == NULL) {
var16 = 1;
} else {
if(cltype17 >= (((long)var_ptypenode5&3)?type_info[((long)var_ptypenode5&3)]:var_ptypenode5->type)->table_size) {
var16 = 0;
} else {
var16 = (((long)var_ptypenode5&3)?type_info[((long)var_ptypenode5&3)]:var_ptypenode5->type)->type_table[cltype17] == idtype18;
}
}
if (unlikely(!var16)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4264);
fatal_exit(1);
}
var19 = NEW_nit__ACastAsExternCall(&type_nit__ACastAsExternCall);
{
((void(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var19->class->vft[COLOR_nit__parser_prod__ACastAsExternCall__init_acastasexterncall]))(var19, var_ptypenode2, var_tdotnode3, var_tkwasnode4, var_ptypenode5); /* init_acastasexterncall on <var19:ACastAsExternCall>*/
}
var_pexterncallnode1 = var19;
var_node_list = var_pexterncallnode1;
var20 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction130> */
{
var21 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var20); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var21, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction131#action for (self: ReduceAction131, Parser) */
void nit__parser___nit__parser__ReduceAction131___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_ptypenode2 /* var ptypenode2: nullable Object */;
short int var5 /* : Bool */;
int cltype;
int idtype;
val* var_tdotnode3 /* var tdotnode3: nullable Object */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
val* var_tkwasnode4 /* var tkwasnode4: nullable Object */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var_ptypenode5 /* var ptypenode5: nullable Object */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
val* var15 /* : ACastAsExternCall */;
val* var_pexterncallnode1 /* var pexterncallnode1: nullable ACastAsExternCall */;
long var16 /* : Int */;
long var17 /* : Int */;
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
var_ptypenode2 = var_nodearraylist1;
/* <var_ptypenode2:nullable Object> isa nullable AType */
cltype = type_nullable__nit__AType.color;
idtype = type_nullable__nit__AType.id;
if(var_ptypenode2 == NULL) {
var5 = 1;
} else {
if(cltype >= (((long)var_ptypenode2&3)?type_info[((long)var_ptypenode2&3)]:var_ptypenode2->type)->table_size) {
var5 = 0;
} else {
var5 = (((long)var_ptypenode2&3)?type_info[((long)var_ptypenode2&3)]:var_ptypenode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var5)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4286);
fatal_exit(1);
}
var_tdotnode3 = var_nodearraylist2;
/* <var_tdotnode3:nullable Object> isa nullable TDot */
cltype7 = type_nullable__nit__TDot.color;
idtype8 = type_nullable__nit__TDot.id;
if(var_tdotnode3 == NULL) {
var6 = 1;
} else {
if(cltype7 >= (((long)var_tdotnode3&3)?type_info[((long)var_tdotnode3&3)]:var_tdotnode3->type)->table_size) {
var6 = 0;
} else {
var6 = (((long)var_tdotnode3&3)?type_info[((long)var_tdotnode3&3)]:var_tdotnode3->type)->type_table[cltype7] == idtype8;
}
}
if (unlikely(!var6)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4288);
fatal_exit(1);
}
var_tkwasnode4 = var_nodearraylist3;
/* <var_tkwasnode4:nullable Object> isa nullable TKwas */
cltype10 = type_nullable__nit__TKwas.color;
idtype11 = type_nullable__nit__TKwas.id;
if(var_tkwasnode4 == NULL) {
var9 = 1;
} else {
if(cltype10 >= (((long)var_tkwasnode4&3)?type_info[((long)var_tkwasnode4&3)]:var_tkwasnode4->type)->table_size) {
var9 = 0;
} else {
var9 = (((long)var_tkwasnode4&3)?type_info[((long)var_tkwasnode4&3)]:var_tkwasnode4->type)->type_table[cltype10] == idtype11;
}
}
if (unlikely(!var9)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4290);
fatal_exit(1);
}
var_ptypenode5 = var_nodearraylist5;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4292);
fatal_exit(1);
}
var15 = NEW_nit__ACastAsExternCall(&type_nit__ACastAsExternCall);
{
((void(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var15->class->vft[COLOR_nit__parser_prod__ACastAsExternCall__init_acastasexterncall]))(var15, var_ptypenode2, var_tdotnode3, var_tkwasnode4, var_ptypenode5); /* init_acastasexterncall on <var15:ACastAsExternCall>*/
}
var_pexterncallnode1 = var15;
var_node_list = var_pexterncallnode1;
var16 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction131> */
{
var17 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var16); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var17, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction132#action for (self: ReduceAction132, Parser) */
void nit__parser___nit__parser__ReduceAction132___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_ptypenode2 /* var ptypenode2: nullable Object */;
short int var9 /* : Bool */;
int cltype;
int idtype;
val* var_tkwasnode3 /* var tkwasnode3: nullable Object */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var_tkwnullablenode4 /* var tkwnullablenode4: nullable Object */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
val* var16 /* : AAsNullableExternCall */;
val* var_pexterncallnode1 /* var pexterncallnode1: nullable AAsNullableExternCall */;
long var17 /* : Int */;
long var18 /* : Int */;
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
var_ptypenode2 = var_nodearraylist1;
/* <var_ptypenode2:nullable Object> isa nullable AType */
cltype = type_nullable__nit__AType.color;
idtype = type_nullable__nit__AType.id;
if(var_ptypenode2 == NULL) {
var9 = 1;
} else {
if(cltype >= (((long)var_ptypenode2&3)?type_info[((long)var_ptypenode2&3)]:var_ptypenode2->type)->table_size) {
var9 = 0;
} else {
var9 = (((long)var_ptypenode2&3)?type_info[((long)var_ptypenode2&3)]:var_ptypenode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var9)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4318);
fatal_exit(1);
}
var_tkwasnode3 = var_nodearraylist3;
/* <var_tkwasnode3:nullable Object> isa nullable TKwas */
cltype11 = type_nullable__nit__TKwas.color;
idtype12 = type_nullable__nit__TKwas.id;
if(var_tkwasnode3 == NULL) {
var10 = 1;
} else {
if(cltype11 >= (((long)var_tkwasnode3&3)?type_info[((long)var_tkwasnode3&3)]:var_tkwasnode3->type)->table_size) {
var10 = 0;
} else {
var10 = (((long)var_tkwasnode3&3)?type_info[((long)var_tkwasnode3&3)]:var_tkwasnode3->type)->type_table[cltype11] == idtype12;
}
}
if (unlikely(!var10)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4320);
fatal_exit(1);
}
var_tkwnullablenode4 = var_nodearraylist7;
/* <var_tkwnullablenode4:nullable Object> isa nullable TKwnullable */
cltype14 = type_nullable__nit__TKwnullable.color;
idtype15 = type_nullable__nit__TKwnullable.id;
if(var_tkwnullablenode4 == NULL) {
var13 = 1;
} else {
if(cltype14 >= (((long)var_tkwnullablenode4&3)?type_info[((long)var_tkwnullablenode4&3)]:var_tkwnullablenode4->type)->table_size) {
var13 = 0;
} else {
var13 = (((long)var_tkwnullablenode4&3)?type_info[((long)var_tkwnullablenode4&3)]:var_tkwnullablenode4->type)->type_table[cltype14] == idtype15;
}
}
if (unlikely(!var13)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4322);
fatal_exit(1);
}
var16 = NEW_nit__AAsNullableExternCall(&type_nit__AAsNullableExternCall);
{
((void(*)(val* self, val* p0, val* p1, val* p2))(var16->class->vft[COLOR_nit__parser_prod__AAsNullableExternCall__init_aasnullableexterncall]))(var16, var_ptypenode2, var_tkwasnode3, var_tkwnullablenode4); /* init_aasnullableexterncall on <var16:AAsNullableExternCall>*/
}
var_pexterncallnode1 = var16;
var_node_list = var_pexterncallnode1;
var17 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction132> */
{
var18 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var17); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var18, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction133#action for (self: ReduceAction133, Parser) */
void nit__parser___nit__parser__ReduceAction133___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_ptypenode2 /* var ptypenode2: nullable Object */;
short int var5 /* : Bool */;
int cltype;
int idtype;
val* var_tkwasnode3 /* var tkwasnode3: nullable Object */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
val* var_tkwnullablenode4 /* var tkwnullablenode4: nullable Object */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var12 /* : AAsNullableExternCall */;
val* var_pexterncallnode1 /* var pexterncallnode1: nullable AAsNullableExternCall */;
long var13 /* : Int */;
long var14 /* : Int */;
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
var_ptypenode2 = var_nodearraylist1;
/* <var_ptypenode2:nullable Object> isa nullable AType */
cltype = type_nullable__nit__AType.color;
idtype = type_nullable__nit__AType.id;
if(var_ptypenode2 == NULL) {
var5 = 1;
} else {
if(cltype >= (((long)var_ptypenode2&3)?type_info[((long)var_ptypenode2&3)]:var_ptypenode2->type)->table_size) {
var5 = 0;
} else {
var5 = (((long)var_ptypenode2&3)?type_info[((long)var_ptypenode2&3)]:var_ptypenode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var5)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4343);
fatal_exit(1);
}
var_tkwasnode3 = var_nodearraylist3;
/* <var_tkwasnode3:nullable Object> isa nullable TKwas */
cltype7 = type_nullable__nit__TKwas.color;
idtype8 = type_nullable__nit__TKwas.id;
if(var_tkwasnode3 == NULL) {
var6 = 1;
} else {
if(cltype7 >= (((long)var_tkwasnode3&3)?type_info[((long)var_tkwasnode3&3)]:var_tkwasnode3->type)->table_size) {
var6 = 0;
} else {
var6 = (((long)var_tkwasnode3&3)?type_info[((long)var_tkwasnode3&3)]:var_tkwasnode3->type)->type_table[cltype7] == idtype8;
}
}
if (unlikely(!var6)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4345);
fatal_exit(1);
}
var_tkwnullablenode4 = var_nodearraylist5;
/* <var_tkwnullablenode4:nullable Object> isa nullable TKwnullable */
cltype10 = type_nullable__nit__TKwnullable.color;
idtype11 = type_nullable__nit__TKwnullable.id;
if(var_tkwnullablenode4 == NULL) {
var9 = 1;
} else {
if(cltype10 >= (((long)var_tkwnullablenode4&3)?type_info[((long)var_tkwnullablenode4&3)]:var_tkwnullablenode4->type)->table_size) {
var9 = 0;
} else {
var9 = (((long)var_tkwnullablenode4&3)?type_info[((long)var_tkwnullablenode4&3)]:var_tkwnullablenode4->type)->type_table[cltype10] == idtype11;
}
}
if (unlikely(!var9)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4347);
fatal_exit(1);
}
var12 = NEW_nit__AAsNullableExternCall(&type_nit__AAsNullableExternCall);
{
((void(*)(val* self, val* p0, val* p1, val* p2))(var12->class->vft[COLOR_nit__parser_prod__AAsNullableExternCall__init_aasnullableexterncall]))(var12, var_ptypenode2, var_tkwasnode3, var_tkwnullablenode4); /* init_aasnullableexterncall on <var12:AAsNullableExternCall>*/
}
var_pexterncallnode1 = var12;
var_node_list = var_pexterncallnode1;
var13 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction133> */
{
var14 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var13); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var14, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction134#action for (self: ReduceAction134, Parser) */
void nit__parser___nit__parser__ReduceAction134___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist11 /* var nodearraylist11: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist10 /* var nodearraylist10: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist9 /* var nodearraylist9: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist8 /* var nodearraylist8: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist7 /* var nodearraylist7: nullable Object */;
val* var5 /* : nullable Object */;
val* var_nodearraylist6 /* var nodearraylist6: nullable Object */;
val* var6 /* : nullable Object */;
val* var_nodearraylist5 /* var nodearraylist5: nullable Object */;
val* var7 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var8 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var9 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var10 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_ptypenode2 /* var ptypenode2: nullable Object */;
short int var11 /* : Bool */;
int cltype;
int idtype;
val* var_tkwasnode3 /* var tkwasnode3: nullable Object */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
val* var_tkwnotnode4 /* var tkwnotnode4: nullable Object */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
val* var_tkwnullablenode5 /* var tkwnullablenode5: nullable Object */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
val* var21 /* : AAsNotNullableExternCall */;
val* var_pexterncallnode1 /* var pexterncallnode1: nullable AAsNotNullableExternCall */;
long var22 /* : Int */;
long var23 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist11 = var;
{
var1 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist10 = var1;
{
var2 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist9 = var2;
{
var3 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist8 = var3;
{
var4 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist7 = var4;
{
var5 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist6 = var5;
{
var6 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist5 = var6;
{
var7 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist4 = var7;
{
var8 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist3 = var8;
{
var9 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist2 = var9;
{
var10 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist1 = var10;
var_ptypenode2 = var_nodearraylist1;
/* <var_ptypenode2:nullable Object> isa nullable AType */
cltype = type_nullable__nit__AType.color;
idtype = type_nullable__nit__AType.id;
if(var_ptypenode2 == NULL) {
var11 = 1;
} else {
if(cltype >= (((long)var_ptypenode2&3)?type_info[((long)var_ptypenode2&3)]:var_ptypenode2->type)->table_size) {
var11 = 0;
} else {
var11 = (((long)var_ptypenode2&3)?type_info[((long)var_ptypenode2&3)]:var_ptypenode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var11)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4374);
fatal_exit(1);
}
var_tkwasnode3 = var_nodearraylist3;
/* <var_tkwasnode3:nullable Object> isa nullable TKwas */
cltype13 = type_nullable__nit__TKwas.color;
idtype14 = type_nullable__nit__TKwas.id;
if(var_tkwasnode3 == NULL) {
var12 = 1;
} else {
if(cltype13 >= (((long)var_tkwasnode3&3)?type_info[((long)var_tkwasnode3&3)]:var_tkwasnode3->type)->table_size) {
var12 = 0;
} else {
var12 = (((long)var_tkwasnode3&3)?type_info[((long)var_tkwasnode3&3)]:var_tkwasnode3->type)->type_table[cltype13] == idtype14;
}
}
if (unlikely(!var12)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4376);
fatal_exit(1);
}
var_tkwnotnode4 = var_nodearraylist7;
/* <var_tkwnotnode4:nullable Object> isa nullable TKwnot */
cltype16 = type_nullable__nit__TKwnot.color;
idtype17 = type_nullable__nit__TKwnot.id;
if(var_tkwnotnode4 == NULL) {
var15 = 1;
} else {
if(cltype16 >= (((long)var_tkwnotnode4&3)?type_info[((long)var_tkwnotnode4&3)]:var_tkwnotnode4->type)->table_size) {
var15 = 0;
} else {
var15 = (((long)var_tkwnotnode4&3)?type_info[((long)var_tkwnotnode4&3)]:var_tkwnotnode4->type)->type_table[cltype16] == idtype17;
}
}
if (unlikely(!var15)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4378);
fatal_exit(1);
}
var_tkwnullablenode5 = var_nodearraylist9;
/* <var_tkwnullablenode5:nullable Object> isa nullable TKwnullable */
cltype19 = type_nullable__nit__TKwnullable.color;
idtype20 = type_nullable__nit__TKwnullable.id;
if(var_tkwnullablenode5 == NULL) {
var18 = 1;
} else {
if(cltype19 >= (((long)var_tkwnullablenode5&3)?type_info[((long)var_tkwnullablenode5&3)]:var_tkwnullablenode5->type)->table_size) {
var18 = 0;
} else {
var18 = (((long)var_tkwnullablenode5&3)?type_info[((long)var_tkwnullablenode5&3)]:var_tkwnullablenode5->type)->type_table[cltype19] == idtype20;
}
}
if (unlikely(!var18)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4380);
fatal_exit(1);
}
var21 = NEW_nit__AAsNotNullableExternCall(&type_nit__AAsNotNullableExternCall);
{
((void(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var21->class->vft[COLOR_nit__parser_prod__AAsNotNullableExternCall__init_aasnotnullableexterncall]))(var21, var_ptypenode2, var_tkwasnode3, var_tkwnotnode4, var_tkwnullablenode5); /* init_aasnotnullableexterncall on <var21:AAsNotNullableExternCall>*/
}
var_pexterncallnode1 = var21;
var_node_list = var_pexterncallnode1;
var22 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction134> */
{
var23 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var22); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var23, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction135#action for (self: ReduceAction135, Parser) */
void nit__parser___nit__parser__ReduceAction135___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_ptypenode2 /* var ptypenode2: nullable Object */;
short int var7 /* : Bool */;
int cltype;
int idtype;
val* var_tkwasnode3 /* var tkwasnode3: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var_tkwnotnode4 /* var tkwnotnode4: nullable Object */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
val* var_tkwnullablenode5 /* var tkwnullablenode5: nullable Object */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
val* var17 /* : AAsNotNullableExternCall */;
val* var_pexterncallnode1 /* var pexterncallnode1: nullable AAsNotNullableExternCall */;
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
var_ptypenode2 = var_nodearraylist1;
/* <var_ptypenode2:nullable Object> isa nullable AType */
cltype = type_nullable__nit__AType.color;
idtype = type_nullable__nit__AType.id;
if(var_ptypenode2 == NULL) {
var7 = 1;
} else {
if(cltype >= (((long)var_ptypenode2&3)?type_info[((long)var_ptypenode2&3)]:var_ptypenode2->type)->table_size) {
var7 = 0;
} else {
var7 = (((long)var_ptypenode2&3)?type_info[((long)var_ptypenode2&3)]:var_ptypenode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var7)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4404);
fatal_exit(1);
}
var_tkwasnode3 = var_nodearraylist3;
/* <var_tkwasnode3:nullable Object> isa nullable TKwas */
cltype9 = type_nullable__nit__TKwas.color;
idtype10 = type_nullable__nit__TKwas.id;
if(var_tkwasnode3 == NULL) {
var8 = 1;
} else {
if(cltype9 >= (((long)var_tkwasnode3&3)?type_info[((long)var_tkwasnode3&3)]:var_tkwasnode3->type)->table_size) {
var8 = 0;
} else {
var8 = (((long)var_tkwasnode3&3)?type_info[((long)var_tkwasnode3&3)]:var_tkwasnode3->type)->type_table[cltype9] == idtype10;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4406);
fatal_exit(1);
}
var_tkwnotnode4 = var_nodearraylist5;
/* <var_tkwnotnode4:nullable Object> isa nullable TKwnot */
cltype12 = type_nullable__nit__TKwnot.color;
idtype13 = type_nullable__nit__TKwnot.id;
if(var_tkwnotnode4 == NULL) {
var11 = 1;
} else {
if(cltype12 >= (((long)var_tkwnotnode4&3)?type_info[((long)var_tkwnotnode4&3)]:var_tkwnotnode4->type)->table_size) {
var11 = 0;
} else {
var11 = (((long)var_tkwnotnode4&3)?type_info[((long)var_tkwnotnode4&3)]:var_tkwnotnode4->type)->type_table[cltype12] == idtype13;
}
}
if (unlikely(!var11)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4408);
fatal_exit(1);
}
var_tkwnullablenode5 = var_nodearraylist7;
/* <var_tkwnullablenode5:nullable Object> isa nullable TKwnullable */
cltype15 = type_nullable__nit__TKwnullable.color;
idtype16 = type_nullable__nit__TKwnullable.id;
if(var_tkwnullablenode5 == NULL) {
var14 = 1;
} else {
if(cltype15 >= (((long)var_tkwnullablenode5&3)?type_info[((long)var_tkwnullablenode5&3)]:var_tkwnullablenode5->type)->table_size) {
var14 = 0;
} else {
var14 = (((long)var_tkwnullablenode5&3)?type_info[((long)var_tkwnullablenode5&3)]:var_tkwnullablenode5->type)->type_table[cltype15] == idtype16;
}
}
if (unlikely(!var14)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4410);
fatal_exit(1);
}
var17 = NEW_nit__AAsNotNullableExternCall(&type_nit__AAsNotNullableExternCall);
{
((void(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var17->class->vft[COLOR_nit__parser_prod__AAsNotNullableExternCall__init_aasnotnullableexterncall]))(var17, var_ptypenode2, var_tkwasnode3, var_tkwnotnode4, var_tkwnullablenode5); /* init_aasnotnullableexterncall on <var17:AAsNotNullableExternCall>*/
}
var_pexterncallnode1 = var17;
var_node_list = var_pexterncallnode1;
var18 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction135> */
{
var19 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var18); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var19, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction137#action for (self: ReduceAction137, Parser) */
void nit__parser___nit__parser__ReduceAction137___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tstringnode1 /* var tstringnode1: nullable Object */;
long var1 /* : Int */;
long var2 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist1 = var;
var_tstringnode1 = var_nodearraylist1;
var_node_list = var_tstringnode1;
var1 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction137> */
{
var2 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var1); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var2, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction138#action for (self: ReduceAction138, Parser) */
void nit__parser___nit__parser__ReduceAction138___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_tkwinnode2 /* var tkwinnode2: nullable Object */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var_tstringnode3 /* var tstringnode3: nullable Object */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
val* var8 /* : AInLanguage */;
val* var_pinlanguagenode1 /* var pinlanguagenode1: nullable AInLanguage */;
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
var_tkwinnode2 = var_nodearraylist1;
/* <var_tkwinnode2:nullable Object> isa nullable TKwin */
cltype = type_nullable__nit__TKwin.color;
idtype = type_nullable__nit__TKwin.id;
if(var_tkwinnode2 == NULL) {
var4 = 1;
} else {
if(cltype >= (((long)var_tkwinnode2&3)?type_info[((long)var_tkwinnode2&3)]:var_tkwinnode2->type)->table_size) {
var4 = 0;
} else {
var4 = (((long)var_tkwinnode2&3)?type_info[((long)var_tkwinnode2&3)]:var_tkwinnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4442);
fatal_exit(1);
}
var_tstringnode3 = var_nodearraylist3;
/* <var_tstringnode3:nullable Object> isa nullable TString */
cltype6 = type_nullable__nit__TString.color;
idtype7 = type_nullable__nit__TString.id;
if(var_tstringnode3 == NULL) {
var5 = 1;
} else {
if(cltype6 >= (((long)var_tstringnode3&3)?type_info[((long)var_tstringnode3&3)]:var_tstringnode3->type)->table_size) {
var5 = 0;
} else {
var5 = (((long)var_tstringnode3&3)?type_info[((long)var_tstringnode3&3)]:var_tstringnode3->type)->type_table[cltype6] == idtype7;
}
}
if (unlikely(!var5)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4444);
fatal_exit(1);
}
var8 = NEW_nit__AInLanguage(&type_nit__AInLanguage);
{
((void(*)(val* self, val* p0, val* p1))(var8->class->vft[COLOR_nit__parser_prod__AInLanguage__init_ainlanguage]))(var8, var_tkwinnode2, var_tstringnode3); /* init_ainlanguage on <var8:AInLanguage>*/
}
var_pinlanguagenode1 = var8;
var_node_list = var_pinlanguagenode1;
var9 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction138> */
{
var10 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var9); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var10, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction139#action for (self: ReduceAction139, Parser) */
void nit__parser___nit__parser__ReduceAction139___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_texterncodesegmentnode3 /* var texterncodesegmentnode3: nullable Object */;
short int var1 /* : Bool */;
int cltype;
int idtype;
val* var2 /* : AExternCodeBlock */;
val* var_pexterncodeblocknode1 /* var pexterncodeblocknode1: nullable AExternCodeBlock */;
long var3 /* : Int */;
long var4 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist1 = var;
var_texterncodesegmentnode3 = var_nodearraylist1;
/* <var_texterncodesegmentnode3:nullable Object> isa nullable TExternCodeSegment */
cltype = type_nullable__nit__TExternCodeSegment.color;
idtype = type_nullable__nit__TExternCodeSegment.id;
if(var_texterncodesegmentnode3 == NULL) {
var1 = 1;
} else {
if(cltype >= (((long)var_texterncodesegmentnode3&3)?type_info[((long)var_texterncodesegmentnode3&3)]:var_texterncodesegmentnode3->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)var_texterncodesegmentnode3&3)?type_info[((long)var_texterncodesegmentnode3&3)]:var_texterncodesegmentnode3->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4460);
fatal_exit(1);
}
var2 = NEW_nit__AExternCodeBlock(&type_nit__AExternCodeBlock);
{
((void(*)(val* self, val* p0, val* p1))(var2->class->vft[COLOR_nit__parser_prod__AExternCodeBlock__init_aexterncodeblock]))(var2, ((val*)NULL), var_texterncodesegmentnode3); /* init_aexterncodeblock on <var2:AExternCodeBlock>*/
}
var_pexterncodeblocknode1 = var2;
var_node_list = var_pexterncodeblocknode1;
var3 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction139> */
{
var4 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var3); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var4, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction140#action for (self: ReduceAction140, Parser) */
void nit__parser___nit__parser__ReduceAction140___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pinlanguagenode2 /* var pinlanguagenode2: nullable Object */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var_texterncodesegmentnode3 /* var texterncodesegmentnode3: nullable Object */;
short int var3 /* : Bool */;
int cltype4;
int idtype5;
val* var6 /* : AExternCodeBlock */;
val* var_pexterncodeblocknode1 /* var pexterncodeblocknode1: nullable AExternCodeBlock */;
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
var_pinlanguagenode2 = var_nodearraylist1;
/* <var_pinlanguagenode2:nullable Object> isa nullable AInLanguage */
cltype = type_nullable__nit__AInLanguage.color;
idtype = type_nullable__nit__AInLanguage.id;
if(var_pinlanguagenode2 == NULL) {
var2 = 1;
} else {
if(cltype >= (((long)var_pinlanguagenode2&3)?type_info[((long)var_pinlanguagenode2&3)]:var_pinlanguagenode2->type)->table_size) {
var2 = 0;
} else {
var2 = (((long)var_pinlanguagenode2&3)?type_info[((long)var_pinlanguagenode2&3)]:var_pinlanguagenode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4477);
fatal_exit(1);
}
var_texterncodesegmentnode3 = var_nodearraylist2;
/* <var_texterncodesegmentnode3:nullable Object> isa nullable TExternCodeSegment */
cltype4 = type_nullable__nit__TExternCodeSegment.color;
idtype5 = type_nullable__nit__TExternCodeSegment.id;
if(var_texterncodesegmentnode3 == NULL) {
var3 = 1;
} else {
if(cltype4 >= (((long)var_texterncodesegmentnode3&3)?type_info[((long)var_texterncodesegmentnode3&3)]:var_texterncodesegmentnode3->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)var_texterncodesegmentnode3&3)?type_info[((long)var_texterncodesegmentnode3&3)]:var_texterncodesegmentnode3->type)->type_table[cltype4] == idtype5;
}
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4479);
fatal_exit(1);
}
var6 = NEW_nit__AExternCodeBlock(&type_nit__AExternCodeBlock);
{
((void(*)(val* self, val* p0, val* p1))(var6->class->vft[COLOR_nit__parser_prod__AExternCodeBlock__init_aexterncodeblock]))(var6, var_pinlanguagenode2, var_texterncodesegmentnode3); /* init_aexterncodeblock on <var6:AExternCodeBlock>*/
}
var_pexterncodeblocknode1 = var6;
var_node_list = var_pexterncodeblocknode1;
var7 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction140> */
{
var8 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var7); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var8, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction141#action for (self: ReduceAction141, Parser) */
void nit__parser___nit__parser__ReduceAction141___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pexterncodeblocknode1 /* var pexterncodeblocknode1: nullable Object */;
long var1 /* : Int */;
long var2 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist1 = var;
var_pexterncodeblocknode1 = var_nodearraylist1;
var_node_list = var_pexterncodeblocknode1;
var1 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction141> */
{
var2 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var1); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var2, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction143#action for (self: ReduceAction143, Parser) */
void nit__parser___nit__parser__ReduceAction143___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pexterncodeblocknode1 /* var pexterncodeblocknode1: nullable Object */;
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
var_pexterncodeblocknode1 = var_nodearraylist2;
var_node_list = var_pexterncodeblocknode1;
var2 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction143> */
{
var3 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var2); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var3, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction144#action for (self: ReduceAction144, Parser) */
void nit__parser___nit__parser__ReduceAction144___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var2 /* : Array[Object] */;
val* var_listnode4 /* var listnode4: Array[Object] */;
val* var_tclassidnode3 /* var tclassidnode3: nullable Object */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var_pannotationsnode5 /* var pannotationsnode5: nullable Object */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
val* var7 /* : AType */;
val* var_ptypenode1 /* var ptypenode1: nullable AType */;
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
var_listnode4 = var2;
var_tclassidnode3 = var_nodearraylist1;
/* <var_tclassidnode3:nullable Object> isa nullable TClassid */
cltype = type_nullable__nit__TClassid.color;
idtype = type_nullable__nit__TClassid.id;
if(var_tclassidnode3 == NULL) {
var3 = 1;
} else {
if(cltype >= (((long)var_tclassidnode3&3)?type_info[((long)var_tclassidnode3&3)]:var_tclassidnode3->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)var_tclassidnode3&3)?type_info[((long)var_tclassidnode3&3)]:var_tclassidnode3->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4520);
fatal_exit(1);
}
var_pannotationsnode5 = var_nodearraylist2;
/* <var_pannotationsnode5:nullable Object> isa nullable AAnnotations */
cltype5 = type_nullable__nit__AAnnotations.color;
idtype6 = type_nullable__nit__AAnnotations.id;
if(var_pannotationsnode5 == NULL) {
var4 = 1;
} else {
if(cltype5 >= (((long)var_pannotationsnode5&3)?type_info[((long)var_pannotationsnode5&3)]:var_pannotationsnode5->type)->table_size) {
var4 = 0;
} else {
var4 = (((long)var_pannotationsnode5&3)?type_info[((long)var_pannotationsnode5&3)]:var_pannotationsnode5->type)->type_table[cltype5] == idtype6;
}
}
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4522);
fatal_exit(1);
}
var7 = NEW_nit__AType(&type_nit__AType);
{
((void(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var7->class->vft[COLOR_nit__parser_prod__AType__init_atype]))(var7, ((val*)NULL), var_tclassidnode3, var_listnode4, var_pannotationsnode5); /* init_atype on <var7:AType>*/
}
var_ptypenode1 = var7;
var_node_list = var_ptypenode1;
var8 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction144> */
{
var9 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var8); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var9, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction145#action for (self: ReduceAction145, Parser) */
void nit__parser___nit__parser__ReduceAction145___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_tkwnullablenode2 /* var tkwnullablenode2: nullable Object */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var_tclassidnode3 /* var tclassidnode3: nullable Object */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
val* var_pannotationsnode5 /* var pannotationsnode5: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var11 /* : AType */;
val* var_ptypenode1 /* var ptypenode1: nullable AType */;
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
var_listnode4 = var3;
var_tkwnullablenode2 = var_nodearraylist1;
/* <var_tkwnullablenode2:nullable Object> isa nullable TKwnullable */
cltype = type_nullable__nit__TKwnullable.color;
idtype = type_nullable__nit__TKwnullable.id;
if(var_tkwnullablenode2 == NULL) {
var4 = 1;
} else {
if(cltype >= (((long)var_tkwnullablenode2&3)?type_info[((long)var_tkwnullablenode2&3)]:var_tkwnullablenode2->type)->table_size) {
var4 = 0;
} else {
var4 = (((long)var_tkwnullablenode2&3)?type_info[((long)var_tkwnullablenode2&3)]:var_tkwnullablenode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4543);
fatal_exit(1);
}
var_tclassidnode3 = var_nodearraylist2;
/* <var_tclassidnode3:nullable Object> isa nullable TClassid */
cltype6 = type_nullable__nit__TClassid.color;
idtype7 = type_nullable__nit__TClassid.id;
if(var_tclassidnode3 == NULL) {
var5 = 1;
} else {
if(cltype6 >= (((long)var_tclassidnode3&3)?type_info[((long)var_tclassidnode3&3)]:var_tclassidnode3->type)->table_size) {
var5 = 0;
} else {
var5 = (((long)var_tclassidnode3&3)?type_info[((long)var_tclassidnode3&3)]:var_tclassidnode3->type)->type_table[cltype6] == idtype7;
}
}
if (unlikely(!var5)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4545);
fatal_exit(1);
}
var_pannotationsnode5 = var_nodearraylist3;
/* <var_pannotationsnode5:nullable Object> isa nullable AAnnotations */
cltype9 = type_nullable__nit__AAnnotations.color;
idtype10 = type_nullable__nit__AAnnotations.id;
if(var_pannotationsnode5 == NULL) {
var8 = 1;
} else {
if(cltype9 >= (((long)var_pannotationsnode5&3)?type_info[((long)var_pannotationsnode5&3)]:var_pannotationsnode5->type)->table_size) {
var8 = 0;
} else {
var8 = (((long)var_pannotationsnode5&3)?type_info[((long)var_pannotationsnode5&3)]:var_pannotationsnode5->type)->type_table[cltype9] == idtype10;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4547);
fatal_exit(1);
}
var11 = NEW_nit__AType(&type_nit__AType);
{
((void(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var11->class->vft[COLOR_nit__parser_prod__AType__init_atype]))(var11, var_tkwnullablenode2, var_tclassidnode3, var_listnode4, var_pannotationsnode5); /* init_atype on <var11:AType>*/
}
var_ptypenode1 = var11;
var_node_list = var_ptypenode1;
var12 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction145> */
{
var13 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var12); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var13, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction146#action for (self: ReduceAction146, Parser) */
void nit__parser___nit__parser__ReduceAction146___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_listnode5 /* var listnode5: Array[Object] */;
val* var_tclassidnode3 /* var tclassidnode3: nullable Object */;
short int var8 /* : Bool */;
int cltype;
int idtype;
val* var_listnode4 /* var listnode4: nullable Object */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var12 /* : Array[Object] */;
val* var_pannotationsnode6 /* var pannotationsnode6: nullable Object */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
val* var16 /* : AType */;
val* var_ptypenode1 /* var ptypenode1: nullable AType */;
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
var7 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
((void(*)(val* self))(var7->class->vft[COLOR_standard__kernel__Object__init]))(var7); /* init on <var7:Array[Object]>*/
}
var_listnode5 = var7;
var_tclassidnode3 = var_nodearraylist1;
/* <var_tclassidnode3:nullable Object> isa nullable TClassid */
cltype = type_nullable__nit__TClassid.color;
idtype = type_nullable__nit__TClassid.id;
if(var_tclassidnode3 == NULL) {
var8 = 1;
} else {
if(cltype >= (((long)var_tclassidnode3&3)?type_info[((long)var_tclassidnode3&3)]:var_tclassidnode3->type)->table_size) {
var8 = 0;
} else {
var8 = (((long)var_tclassidnode3&3)?type_info[((long)var_tclassidnode3&3)]:var_tclassidnode3->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4572);
fatal_exit(1);
}
var_listnode4 = var_nodearraylist4;
/* <var_listnode4:nullable Object> isa Array[Object] */
cltype10 = type_standard__Array__standard__Object.color;
idtype11 = type_standard__Array__standard__Object.id;
if(var_listnode4 == NULL) {
var9 = 0;
} else {
if(cltype10 >= (((long)var_listnode4&3)?type_info[((long)var_listnode4&3)]:var_listnode4->type)->table_size) {
var9 = 0;
} else {
var9 = (((long)var_listnode4&3)?type_info[((long)var_listnode4&3)]:var_listnode4->type)->type_table[cltype10] == idtype11;
}
}
if (unlikely(!var9)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4574);
fatal_exit(1);
}
{
var12 = ((val*(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__parser_work__ReduceAction__concat]))(self, var_listnode5, var_listnode4); /* concat on <self:ReduceAction146>*/
}
var_listnode5 = var12;
var_pannotationsnode6 = var_nodearraylist7;
/* <var_pannotationsnode6:nullable Object> isa nullable AAnnotations */
cltype14 = type_nullable__nit__AAnnotations.color;
idtype15 = type_nullable__nit__AAnnotations.id;
if(var_pannotationsnode6 == NULL) {
var13 = 1;
} else {
if(cltype14 >= (((long)var_pannotationsnode6&3)?type_info[((long)var_pannotationsnode6&3)]:var_pannotationsnode6->type)->table_size) {
var13 = 0;
} else {
var13 = (((long)var_pannotationsnode6&3)?type_info[((long)var_pannotationsnode6&3)]:var_pannotationsnode6->type)->type_table[cltype14] == idtype15;
}
}
if (unlikely(!var13)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4577);
fatal_exit(1);
}
var16 = NEW_nit__AType(&type_nit__AType);
{
((void(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var16->class->vft[COLOR_nit__parser_prod__AType__init_atype]))(var16, ((val*)NULL), var_tclassidnode3, var_listnode5, var_pannotationsnode6); /* init_atype on <var16:AType>*/
}
var_ptypenode1 = var16;
var_node_list = var_ptypenode1;
var17 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction146> */
{
var18 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var17); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var18, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction147#action for (self: ReduceAction147, Parser) */
void nit__parser___nit__parser__ReduceAction147___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var8 /* : Array[Object] */;
val* var_listnode5 /* var listnode5: Array[Object] */;
val* var_tkwnullablenode2 /* var tkwnullablenode2: nullable Object */;
short int var9 /* : Bool */;
int cltype;
int idtype;
val* var_tclassidnode3 /* var tclassidnode3: nullable Object */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var_listnode4 /* var listnode4: nullable Object */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
val* var16 /* : Array[Object] */;
val* var_pannotationsnode6 /* var pannotationsnode6: nullable Object */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
val* var20 /* : AType */;
val* var_ptypenode1 /* var ptypenode1: nullable AType */;
long var21 /* : Int */;
long var22 /* : Int */;
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
var8 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
((void(*)(val* self))(var8->class->vft[COLOR_standard__kernel__Object__init]))(var8); /* init on <var8:Array[Object]>*/
}
var_listnode5 = var8;
var_tkwnullablenode2 = var_nodearraylist1;
/* <var_tkwnullablenode2:nullable Object> isa nullable TKwnullable */
cltype = type_nullable__nit__TKwnullable.color;
idtype = type_nullable__nit__TKwnullable.id;
if(var_tkwnullablenode2 == NULL) {
var9 = 1;
} else {
if(cltype >= (((long)var_tkwnullablenode2&3)?type_info[((long)var_tkwnullablenode2&3)]:var_tkwnullablenode2->type)->table_size) {
var9 = 0;
} else {
var9 = (((long)var_tkwnullablenode2&3)?type_info[((long)var_tkwnullablenode2&3)]:var_tkwnullablenode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var9)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4603);
fatal_exit(1);
}
var_tclassidnode3 = var_nodearraylist2;
/* <var_tclassidnode3:nullable Object> isa nullable TClassid */
cltype11 = type_nullable__nit__TClassid.color;
idtype12 = type_nullable__nit__TClassid.id;
if(var_tclassidnode3 == NULL) {
var10 = 1;
} else {
if(cltype11 >= (((long)var_tclassidnode3&3)?type_info[((long)var_tclassidnode3&3)]:var_tclassidnode3->type)->table_size) {
var10 = 0;
} else {
var10 = (((long)var_tclassidnode3&3)?type_info[((long)var_tclassidnode3&3)]:var_tclassidnode3->type)->type_table[cltype11] == idtype12;
}
}
if (unlikely(!var10)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4605);
fatal_exit(1);
}
var_listnode4 = var_nodearraylist5;
/* <var_listnode4:nullable Object> isa Array[Object] */
cltype14 = type_standard__Array__standard__Object.color;
idtype15 = type_standard__Array__standard__Object.id;
if(var_listnode4 == NULL) {
var13 = 0;
} else {
if(cltype14 >= (((long)var_listnode4&3)?type_info[((long)var_listnode4&3)]:var_listnode4->type)->table_size) {
var13 = 0;
} else {
var13 = (((long)var_listnode4&3)?type_info[((long)var_listnode4&3)]:var_listnode4->type)->type_table[cltype14] == idtype15;
}
}
if (unlikely(!var13)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4607);
fatal_exit(1);
}
{
var16 = ((val*(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__parser_work__ReduceAction__concat]))(self, var_listnode5, var_listnode4); /* concat on <self:ReduceAction147>*/
}
var_listnode5 = var16;
var_pannotationsnode6 = var_nodearraylist8;
/* <var_pannotationsnode6:nullable Object> isa nullable AAnnotations */
cltype18 = type_nullable__nit__AAnnotations.color;
idtype19 = type_nullable__nit__AAnnotations.id;
if(var_pannotationsnode6 == NULL) {
var17 = 1;
} else {
if(cltype18 >= (((long)var_pannotationsnode6&3)?type_info[((long)var_pannotationsnode6&3)]:var_pannotationsnode6->type)->table_size) {
var17 = 0;
} else {
var17 = (((long)var_pannotationsnode6&3)?type_info[((long)var_pannotationsnode6&3)]:var_pannotationsnode6->type)->type_table[cltype18] == idtype19;
}
}
if (unlikely(!var17)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4610);
fatal_exit(1);
}
var20 = NEW_nit__AType(&type_nit__AType);
{
((void(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var20->class->vft[COLOR_nit__parser_prod__AType__init_atype]))(var20, var_tkwnullablenode2, var_tclassidnode3, var_listnode5, var_pannotationsnode6); /* init_atype on <var20:AType>*/
}
var_ptypenode1 = var20;
var_node_list = var_ptypenode1;
var21 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction147> */
{
var22 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var21); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var22, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction148#action for (self: ReduceAction148, Parser) */
void nit__parser___nit__parser__ReduceAction148___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var1 /* : Array[Object] */;
val* var_listnode2 /* var listnode2: Array[Object] */;
val* var_ptypenode1 /* var ptypenode1: nullable Object */;
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
var_ptypenode1 = var_nodearraylist1;
if (var_ptypenode1 == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (0) {
var3 = ((short int(*)(val* self, val* p0))((((long)var_ptypenode1&3)?class_info[((long)var_ptypenode1&3)]:var_ptypenode1->class)->vft[COLOR_standard__kernel__Object___33d_61d]))(var_ptypenode1, ((val*)NULL)); /* != on <var_ptypenode1:nullable Object>*/
var2 = var3;
}
if (var2){
{
((void(*)(val* self, val* p0))(var_listnode2->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_listnode2, var_ptypenode1); /* add on <var_listnode2:Array[Object]>*/
}
} else {
}
var_node_list = var_listnode2;
var4 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction148> */
{
var5 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var4); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var5, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction149#action for (self: ReduceAction149, Parser) */
void nit__parser___nit__parser__ReduceAction149___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var2 /* : Array[Object] */;
val* var_listnode3 /* var listnode3: Array[Object] */;
val* var_ptypenode1 /* var ptypenode1: nullable Object */;
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
var_ptypenode1 = var_nodearraylist1;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4646);
fatal_exit(1);
}
if (var_ptypenode1 == NULL) {
var4 = 0; /* is null */
} else {
var4 = 1; /* arg is null and recv is not */
}
if (0) {
var5 = ((short int(*)(val* self, val* p0))((((long)var_ptypenode1&3)?class_info[((long)var_ptypenode1&3)]:var_ptypenode1->class)->vft[COLOR_standard__kernel__Object___33d_61d]))(var_ptypenode1, ((val*)NULL)); /* != on <var_ptypenode1:nullable Object>*/
var4 = var5;
}
if (var4){
{
((void(*)(val* self, val* p0))(var_listnode3->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_listnode3, var_ptypenode1); /* add on <var_listnode3:Array[Object]>*/
}
} else {
}
{
var6 = ((val*(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__parser_work__ReduceAction__concat]))(self, var_listnode3, var_listnode2); /* concat on <self:ReduceAction149>*/
}
var_listnode3 = var6;
var_node_list = var_listnode3;
var7 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction149> */
{
var8 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var7); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var8, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction150#action for (self: ReduceAction150, Parser) */
void nit__parser___nit__parser__ReduceAction150___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_ptypenode1 /* var ptypenode1: nullable Object */;
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
var_ptypenode1 = var_nodearraylist3;
var_node_list = var_ptypenode1;
var3 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction150> */
{
var4 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var3); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var4, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction154#action for (self: ReduceAction154, Parser) */
void nit__parser___nit__parser__ReduceAction154___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var_pexprnode1 = var_nodearraylist2;
var_node_list = var_pexprnode1;
var2 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction154> */
{
var3 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var2); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var3, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction155#action for (self: ReduceAction155, Parser) */
void nit__parser___nit__parser__ReduceAction155___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var2 /* : Array[Object] */;
val* var_listnode2 /* var listnode2: Array[Object] */;
val* var_tkwendnode3 /* var tkwendnode3: nullable Object */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var4 /* : ABlockExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ABlockExpr */;
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
var_tkwendnode3 = var_nodearraylist2;
/* <var_tkwendnode3:nullable Object> isa nullable TKwend */
cltype = type_nullable__nit__TKwend.color;
idtype = type_nullable__nit__TKwend.id;
if(var_tkwendnode3 == NULL) {
var3 = 1;
} else {
if(cltype >= (((long)var_tkwendnode3&3)?type_info[((long)var_tkwendnode3&3)]:var_tkwendnode3->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)var_tkwendnode3&3)?type_info[((long)var_tkwendnode3&3)]:var_tkwendnode3->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4689);
fatal_exit(1);
}
var4 = NEW_nit__ABlockExpr(&type_nit__ABlockExpr);
{
((void(*)(val* self, val* p0, val* p1))(var4->class->vft[COLOR_nit__parser_prod__ABlockExpr__init_ablockexpr]))(var4, var_listnode2, var_tkwendnode3); /* init_ablockexpr on <var4:ABlockExpr>*/
}
var_pexprnode1 = var4;
var_node_list = var_pexprnode1;
var5 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction155> */
{
var6 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var5); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var6, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction156#action for (self: ReduceAction156, Parser) */
void nit__parser___nit__parser__ReduceAction156___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var1 /* : Array[Object] */;
val* var_listnode2 /* var listnode2: Array[Object] */;
val* var_tkwendnode3 /* var tkwendnode3: nullable Object */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var3 /* : ABlockExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ABlockExpr */;
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
var_tkwendnode3 = var_nodearraylist1;
/* <var_tkwendnode3:nullable Object> isa nullable TKwend */
cltype = type_nullable__nit__TKwend.color;
idtype = type_nullable__nit__TKwend.id;
if(var_tkwendnode3 == NULL) {
var2 = 1;
} else {
if(cltype >= (((long)var_tkwendnode3&3)?type_info[((long)var_tkwendnode3&3)]:var_tkwendnode3->type)->table_size) {
var2 = 0;
} else {
var2 = (((long)var_tkwendnode3&3)?type_info[((long)var_tkwendnode3&3)]:var_tkwendnode3->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4706);
fatal_exit(1);
}
var3 = NEW_nit__ABlockExpr(&type_nit__ABlockExpr);
{
((void(*)(val* self, val* p0, val* p1))(var3->class->vft[COLOR_nit__parser_prod__ABlockExpr__init_ablockexpr]))(var3, var_listnode2, var_tkwendnode3); /* init_ablockexpr on <var3:ABlockExpr>*/
}
var_pexprnode1 = var3;
var_node_list = var_pexprnode1;
var4 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction156> */
{
var5 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var4); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var5, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction157#action for (self: ReduceAction157, Parser) */
void nit__parser___nit__parser__ReduceAction157___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pexprnode1 /* var pexprnode1: nullable Object */;
long var1 /* : Int */;
long var2 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist1 = var;
var_pexprnode1 = var_nodearraylist1;
var_node_list = var_pexprnode1;
var1 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction157> */
{
var2 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var1); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var2, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction158#action for (self: ReduceAction158, Parser) */
void nit__parser___nit__parser__ReduceAction158___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var5 /* : ABlockExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ABlockExpr */;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4734);
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
var5 = NEW_nit__ABlockExpr(&type_nit__ABlockExpr);
{
((void(*)(val* self, val* p0, val* p1))(var5->class->vft[COLOR_nit__parser_prod__ABlockExpr__init_ablockexpr]))(var5, var_listnode3, ((val*)NULL)); /* init_ablockexpr on <var5:ABlockExpr>*/
}
var_pexprnode1 = var5;
var_node_list = var_pexprnode1;
var6 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction158> */
{
var7 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var6); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var7, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction159#action for (self: ReduceAction159, Parser) */
void nit__parser___nit__parser__ReduceAction159___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var10 /* : ABlockExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ABlockExpr */;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4755);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4757);
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
var9 = ((val*(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__parser_work__ReduceAction__concat]))(self, var_listnode4, var_listnode3); /* concat on <self:ReduceAction159>*/
}
var_listnode4 = var9;
var10 = NEW_nit__ABlockExpr(&type_nit__ABlockExpr);
{
((void(*)(val* self, val* p0, val* p1))(var10->class->vft[COLOR_nit__parser_prod__ABlockExpr__init_ablockexpr]))(var10, var_listnode4, ((val*)NULL)); /* init_ablockexpr on <var10:ABlockExpr>*/
}
var_pexprnode1 = var10;
var_node_list = var_pexprnode1;
var11 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction159> */
{
var12 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var11); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var12, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction160#action for (self: ReduceAction160, Parser) */
void nit__parser___nit__parser__ReduceAction160___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var2 /* : Array[Object] */;
val* var_listnode3 /* var listnode3: Array[Object] */;
val* var_pexprnode2 /* var pexprnode2: nullable Object */;
short int var3 /* : Bool */;
int cltype;
int idtype;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var6 /* : ABlockExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ABlockExpr */;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4779);
fatal_exit(1);
}
if (var_pexprnode2 == NULL) {
var4 = 0; /* is null */
} else {
var4 = 1; /* arg is null and recv is not */
}
if (0) {
var5 = ((short int(*)(val* self, val* p0))(var_pexprnode2->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_pexprnode2, ((val*)NULL)); /* != on <var_pexprnode2:nullable Object(nullable AExpr)>*/
var4 = var5;
}
if (var4){
{
((void(*)(val* self, val* p0))(var_listnode3->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_listnode3, var_pexprnode2); /* add on <var_listnode3:Array[Object]>*/
}
} else {
}
var6 = NEW_nit__ABlockExpr(&type_nit__ABlockExpr);
{
((void(*)(val* self, val* p0, val* p1))(var6->class->vft[COLOR_nit__parser_prod__ABlockExpr__init_ablockexpr]))(var6, var_listnode3, ((val*)NULL)); /* init_ablockexpr on <var6:ABlockExpr>*/
}
var_pexprnode1 = var6;
var_node_list = var_pexprnode1;
var7 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction160> */
{
var8 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var7); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var8, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction161#action for (self: ReduceAction161, Parser) */
void nit__parser___nit__parser__ReduceAction161___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_pexprnode2 /* var pexprnode2: nullable Object */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var_listnode3 /* var listnode3: nullable Object */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
val* var10 /* : Array[Object] */;
val* var11 /* : ABlockExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ABlockExpr */;
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
var_listnode4 = var3;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4801);
fatal_exit(1);
}
var_listnode3 = var_nodearraylist2;
/* <var_listnode3:nullable Object> isa Array[Object] */
cltype6 = type_standard__Array__standard__Object.color;
idtype7 = type_standard__Array__standard__Object.id;
if(var_listnode3 == NULL) {
var5 = 0;
} else {
if(cltype6 >= (((long)var_listnode3&3)?type_info[((long)var_listnode3&3)]:var_listnode3->type)->table_size) {
var5 = 0;
} else {
var5 = (((long)var_listnode3&3)?type_info[((long)var_listnode3&3)]:var_listnode3->type)->type_table[cltype6] == idtype7;
}
}
if (unlikely(!var5)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4803);
fatal_exit(1);
}
if (var_pexprnode2 == NULL) {
var8 = 0; /* is null */
} else {
var8 = 1; /* arg is null and recv is not */
}
if (0) {
var9 = ((short int(*)(val* self, val* p0))(var_pexprnode2->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_pexprnode2, ((val*)NULL)); /* != on <var_pexprnode2:nullable Object(nullable AExpr)>*/
var8 = var9;
}
if (var8){
{
((void(*)(val* self, val* p0))(var_listnode4->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_listnode4, var_pexprnode2); /* add on <var_listnode4:Array[Object]>*/
}
} else {
}
{
var10 = ((val*(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__parser_work__ReduceAction__concat]))(self, var_listnode4, var_listnode3); /* concat on <self:ReduceAction161>*/
}
var_listnode4 = var10;
var11 = NEW_nit__ABlockExpr(&type_nit__ABlockExpr);
{
((void(*)(val* self, val* p0, val* p1))(var11->class->vft[COLOR_nit__parser_prod__ABlockExpr__init_ablockexpr]))(var11, var_listnode4, ((val*)NULL)); /* init_ablockexpr on <var11:ABlockExpr>*/
}
var_pexprnode1 = var11;
var_node_list = var_pexprnode1;
var12 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction161> */
{
var13 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var12); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var13, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction162#action for (self: ReduceAction162, Parser) */
void nit__parser___nit__parser__ReduceAction162___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_pexprnode2 /* var pexprnode2: nullable Object */;
short int var4 /* : Bool */;
int cltype;
int idtype;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var_tkwendnode4 /* var tkwendnode4: nullable Object */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
val* var10 /* : ABlockExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ABlockExpr */;
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
var3 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
((void(*)(val* self))(var3->class->vft[COLOR_standard__kernel__Object__init]))(var3); /* init on <var3:Array[Object]>*/
}
var_listnode3 = var3;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4826);
fatal_exit(1);
}
if (var_pexprnode2 == NULL) {
var5 = 0; /* is null */
} else {
var5 = 1; /* arg is null and recv is not */
}
if (0) {
var6 = ((short int(*)(val* self, val* p0))(var_pexprnode2->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_pexprnode2, ((val*)NULL)); /* != on <var_pexprnode2:nullable Object(nullable AExpr)>*/
var5 = var6;
}
if (var5){
{
((void(*)(val* self, val* p0))(var_listnode3->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_listnode3, var_pexprnode2); /* add on <var_listnode3:Array[Object]>*/
}
} else {
}
var_tkwendnode4 = var_nodearraylist3;
/* <var_tkwendnode4:nullable Object> isa nullable TKwend */
cltype8 = type_nullable__nit__TKwend.color;
idtype9 = type_nullable__nit__TKwend.id;
if(var_tkwendnode4 == NULL) {
var7 = 1;
} else {
if(cltype8 >= (((long)var_tkwendnode4&3)?type_info[((long)var_tkwendnode4&3)]:var_tkwendnode4->type)->table_size) {
var7 = 0;
} else {
var7 = (((long)var_tkwendnode4&3)?type_info[((long)var_tkwendnode4&3)]:var_tkwendnode4->type)->type_table[cltype8] == idtype9;
}
}
if (unlikely(!var7)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4831);
fatal_exit(1);
}
var10 = NEW_nit__ABlockExpr(&type_nit__ABlockExpr);
{
((void(*)(val* self, val* p0, val* p1))(var10->class->vft[COLOR_nit__parser_prod__ABlockExpr__init_ablockexpr]))(var10, var_listnode3, var_tkwendnode4); /* init_ablockexpr on <var10:ABlockExpr>*/
}
var_pexprnode1 = var10;
var_node_list = var_pexprnode1;
var11 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction162> */
{
var12 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var11); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var12, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction163#action for (self: ReduceAction163, Parser) */
void nit__parser___nit__parser__ReduceAction163___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_pexprnode2 /* var pexprnode2: nullable Object */;
short int var5 /* : Bool */;
int cltype;
int idtype;
val* var_listnode3 /* var listnode3: nullable Object */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
val* var11 /* : Array[Object] */;
val* var_tkwendnode5 /* var tkwendnode5: nullable Object */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
val* var15 /* : ABlockExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ABlockExpr */;
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
var_listnode4 = var4;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4851);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4853);
fatal_exit(1);
}
if (var_pexprnode2 == NULL) {
var9 = 0; /* is null */
} else {
var9 = 1; /* arg is null and recv is not */
}
if (0) {
var10 = ((short int(*)(val* self, val* p0))(var_pexprnode2->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_pexprnode2, ((val*)NULL)); /* != on <var_pexprnode2:nullable Object(nullable AExpr)>*/
var9 = var10;
}
if (var9){
{
((void(*)(val* self, val* p0))(var_listnode4->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_listnode4, var_pexprnode2); /* add on <var_listnode4:Array[Object]>*/
}
} else {
}
{
var11 = ((val*(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__parser_work__ReduceAction__concat]))(self, var_listnode4, var_listnode3); /* concat on <self:ReduceAction163>*/
}
var_listnode4 = var11;
var_tkwendnode5 = var_nodearraylist4;
/* <var_tkwendnode5:nullable Object> isa nullable TKwend */
cltype13 = type_nullable__nit__TKwend.color;
idtype14 = type_nullable__nit__TKwend.id;
if(var_tkwendnode5 == NULL) {
var12 = 1;
} else {
if(cltype13 >= (((long)var_tkwendnode5&3)?type_info[((long)var_tkwendnode5&3)]:var_tkwendnode5->type)->table_size) {
var12 = 0;
} else {
var12 = (((long)var_tkwendnode5&3)?type_info[((long)var_tkwendnode5&3)]:var_tkwendnode5->type)->type_table[cltype13] == idtype14;
}
}
if (unlikely(!var12)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4859);
fatal_exit(1);
}
var15 = NEW_nit__ABlockExpr(&type_nit__ABlockExpr);
{
((void(*)(val* self, val* p0, val* p1))(var15->class->vft[COLOR_nit__parser_prod__ABlockExpr__init_ablockexpr]))(var15, var_listnode4, var_tkwendnode5); /* init_ablockexpr on <var15:ABlockExpr>*/
}
var_pexprnode1 = var15;
var_node_list = var_pexprnode1;
var16 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction163> */
{
var17 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var16); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var17, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction167#action for (self: ReduceAction167, Parser) */
void nit__parser___nit__parser__ReduceAction167___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tkwreturnnode2 /* var tkwreturnnode2: nullable Object */;
short int var1 /* : Bool */;
int cltype;
int idtype;
val* var2 /* : AReturnExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AReturnExpr */;
long var3 /* : Int */;
long var4 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist1 = var;
var_tkwreturnnode2 = var_nodearraylist1;
/* <var_tkwreturnnode2:nullable Object> isa nullable TKwreturn */
cltype = type_nullable__nit__TKwreturn.color;
idtype = type_nullable__nit__TKwreturn.id;
if(var_tkwreturnnode2 == NULL) {
var1 = 1;
} else {
if(cltype >= (((long)var_tkwreturnnode2&3)?type_info[((long)var_tkwreturnnode2&3)]:var_tkwreturnnode2->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)var_tkwreturnnode2&3)?type_info[((long)var_tkwreturnnode2&3)]:var_tkwreturnnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4875);
fatal_exit(1);
}
var2 = NEW_nit__AReturnExpr(&type_nit__AReturnExpr);
{
((void(*)(val* self, val* p0, val* p1))(var2->class->vft[COLOR_nit__parser_prod__AReturnExpr__init_areturnexpr]))(var2, var_tkwreturnnode2, ((val*)NULL)); /* init_areturnexpr on <var2:AReturnExpr>*/
}
var_pexprnode1 = var2;
var_node_list = var_pexprnode1;
var3 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction167> */
{
var4 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var3); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var4, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction168#action for (self: ReduceAction168, Parser) */
void nit__parser___nit__parser__ReduceAction168___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tkwreturnnode2 /* var tkwreturnnode2: nullable Object */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var_pexprnode3 /* var pexprnode3: nullable Object */;
short int var3 /* : Bool */;
int cltype4;
int idtype5;
val* var6 /* : AReturnExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AReturnExpr */;
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
var_tkwreturnnode2 = var_nodearraylist1;
/* <var_tkwreturnnode2:nullable Object> isa nullable TKwreturn */
cltype = type_nullable__nit__TKwreturn.color;
idtype = type_nullable__nit__TKwreturn.id;
if(var_tkwreturnnode2 == NULL) {
var2 = 1;
} else {
if(cltype >= (((long)var_tkwreturnnode2&3)?type_info[((long)var_tkwreturnnode2&3)]:var_tkwreturnnode2->type)->table_size) {
var2 = 0;
} else {
var2 = (((long)var_tkwreturnnode2&3)?type_info[((long)var_tkwreturnnode2&3)]:var_tkwreturnnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4892);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4894);
fatal_exit(1);
}
var6 = NEW_nit__AReturnExpr(&type_nit__AReturnExpr);
{
((void(*)(val* self, val* p0, val* p1))(var6->class->vft[COLOR_nit__parser_prod__AReturnExpr__init_areturnexpr]))(var6, var_tkwreturnnode2, var_pexprnode3); /* init_areturnexpr on <var6:AReturnExpr>*/
}
var_pexprnode1 = var6;
var_node_list = var_pexprnode1;
var7 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction168> */
{
var8 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var7); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var8, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction169#action for (self: ReduceAction169, Parser) */
void nit__parser___nit__parser__ReduceAction169___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tkwbreaknode2 /* var tkwbreaknode2: nullable Object */;
short int var1 /* : Bool */;
int cltype;
int idtype;
val* var2 /* : ABreakExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ABreakExpr */;
long var3 /* : Int */;
long var4 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist1 = var;
var_tkwbreaknode2 = var_nodearraylist1;
/* <var_tkwbreaknode2:nullable Object> isa nullable TKwbreak */
cltype = type_nullable__nit__TKwbreak.color;
idtype = type_nullable__nit__TKwbreak.id;
if(var_tkwbreaknode2 == NULL) {
var1 = 1;
} else {
if(cltype >= (((long)var_tkwbreaknode2&3)?type_info[((long)var_tkwbreaknode2&3)]:var_tkwbreaknode2->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)var_tkwbreaknode2&3)?type_info[((long)var_tkwbreaknode2&3)]:var_tkwbreaknode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4910);
fatal_exit(1);
}
var2 = NEW_nit__ABreakExpr(&type_nit__ABreakExpr);
{
((void(*)(val* self, val* p0, val* p1))(var2->class->vft[COLOR_nit__parser_prod__ABreakExpr__init_abreakexpr]))(var2, var_tkwbreaknode2, ((val*)NULL)); /* init_abreakexpr on <var2:ABreakExpr>*/
}
var_pexprnode1 = var2;
var_node_list = var_pexprnode1;
var3 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction169> */
{
var4 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var3); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var4, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction170#action for (self: ReduceAction170, Parser) */
void nit__parser___nit__parser__ReduceAction170___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tkwbreaknode2 /* var tkwbreaknode2: nullable Object */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var_plabelnode3 /* var plabelnode3: nullable Object */;
short int var3 /* : Bool */;
int cltype4;
int idtype5;
val* var6 /* : ABreakExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ABreakExpr */;
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
var_tkwbreaknode2 = var_nodearraylist1;
/* <var_tkwbreaknode2:nullable Object> isa nullable TKwbreak */
cltype = type_nullable__nit__TKwbreak.color;
idtype = type_nullable__nit__TKwbreak.id;
if(var_tkwbreaknode2 == NULL) {
var2 = 1;
} else {
if(cltype >= (((long)var_tkwbreaknode2&3)?type_info[((long)var_tkwbreaknode2&3)]:var_tkwbreaknode2->type)->table_size) {
var2 = 0;
} else {
var2 = (((long)var_tkwbreaknode2&3)?type_info[((long)var_tkwbreaknode2&3)]:var_tkwbreaknode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4927);
fatal_exit(1);
}
var_plabelnode3 = var_nodearraylist2;
/* <var_plabelnode3:nullable Object> isa nullable ALabel */
cltype4 = type_nullable__nit__ALabel.color;
idtype5 = type_nullable__nit__ALabel.id;
if(var_plabelnode3 == NULL) {
var3 = 1;
} else {
if(cltype4 >= (((long)var_plabelnode3&3)?type_info[((long)var_plabelnode3&3)]:var_plabelnode3->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)var_plabelnode3&3)?type_info[((long)var_plabelnode3&3)]:var_plabelnode3->type)->type_table[cltype4] == idtype5;
}
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4929);
fatal_exit(1);
}
var6 = NEW_nit__ABreakExpr(&type_nit__ABreakExpr);
{
((void(*)(val* self, val* p0, val* p1))(var6->class->vft[COLOR_nit__parser_prod__ABreakExpr__init_abreakexpr]))(var6, var_tkwbreaknode2, var_plabelnode3); /* init_abreakexpr on <var6:ABreakExpr>*/
}
var_pexprnode1 = var6;
var_node_list = var_pexprnode1;
var7 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction170> */
{
var8 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var7); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var8, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction171#action for (self: ReduceAction171, Parser) */
void nit__parser___nit__parser__ReduceAction171___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tkwabortnode2 /* var tkwabortnode2: nullable Object */;
short int var1 /* : Bool */;
int cltype;
int idtype;
val* var2 /* : AAbortExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AAbortExpr */;
long var3 /* : Int */;
long var4 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist1 = var;
var_tkwabortnode2 = var_nodearraylist1;
/* <var_tkwabortnode2:nullable Object> isa nullable TKwabort */
cltype = type_nullable__nit__TKwabort.color;
idtype = type_nullable__nit__TKwabort.id;
if(var_tkwabortnode2 == NULL) {
var1 = 1;
} else {
if(cltype >= (((long)var_tkwabortnode2&3)?type_info[((long)var_tkwabortnode2&3)]:var_tkwabortnode2->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)var_tkwabortnode2&3)?type_info[((long)var_tkwabortnode2&3)]:var_tkwabortnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4945);
fatal_exit(1);
}
var2 = NEW_nit__AAbortExpr(&type_nit__AAbortExpr);
{
((void(*)(val* self, val* p0))(var2->class->vft[COLOR_nit__parser_prod__AAbortExpr__init_aabortexpr]))(var2, var_tkwabortnode2); /* init_aabortexpr on <var2:AAbortExpr>*/
}
var_pexprnode1 = var2;
var_node_list = var_pexprnode1;
var3 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction171> */
{
var4 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var3); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var4, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction172#action for (self: ReduceAction172, Parser) */
void nit__parser___nit__parser__ReduceAction172___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tkwcontinuenode2 /* var tkwcontinuenode2: nullable Object */;
short int var1 /* : Bool */;
int cltype;
int idtype;
val* var2 /* : AContinueExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AContinueExpr */;
long var3 /* : Int */;
long var4 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist1 = var;
var_tkwcontinuenode2 = var_nodearraylist1;
/* <var_tkwcontinuenode2:nullable Object> isa nullable TKwcontinue */
cltype = type_nullable__nit__TKwcontinue.color;
idtype = type_nullable__nit__TKwcontinue.id;
if(var_tkwcontinuenode2 == NULL) {
var1 = 1;
} else {
if(cltype >= (((long)var_tkwcontinuenode2&3)?type_info[((long)var_tkwcontinuenode2&3)]:var_tkwcontinuenode2->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)var_tkwcontinuenode2&3)?type_info[((long)var_tkwcontinuenode2&3)]:var_tkwcontinuenode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4960);
fatal_exit(1);
}
var2 = NEW_nit__AContinueExpr(&type_nit__AContinueExpr);
{
((void(*)(val* self, val* p0, val* p1))(var2->class->vft[COLOR_nit__parser_prod__AContinueExpr__init_acontinueexpr]))(var2, var_tkwcontinuenode2, ((val*)NULL)); /* init_acontinueexpr on <var2:AContinueExpr>*/
}
var_pexprnode1 = var2;
var_node_list = var_pexprnode1;
var3 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction172> */
{
var4 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var3); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var4, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction173#action for (self: ReduceAction173, Parser) */
void nit__parser___nit__parser__ReduceAction173___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tkwcontinuenode2 /* var tkwcontinuenode2: nullable Object */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var_plabelnode3 /* var plabelnode3: nullable Object */;
short int var3 /* : Bool */;
int cltype4;
int idtype5;
val* var6 /* : AContinueExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AContinueExpr */;
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
var_tkwcontinuenode2 = var_nodearraylist1;
/* <var_tkwcontinuenode2:nullable Object> isa nullable TKwcontinue */
cltype = type_nullable__nit__TKwcontinue.color;
idtype = type_nullable__nit__TKwcontinue.id;
if(var_tkwcontinuenode2 == NULL) {
var2 = 1;
} else {
if(cltype >= (((long)var_tkwcontinuenode2&3)?type_info[((long)var_tkwcontinuenode2&3)]:var_tkwcontinuenode2->type)->table_size) {
var2 = 0;
} else {
var2 = (((long)var_tkwcontinuenode2&3)?type_info[((long)var_tkwcontinuenode2&3)]:var_tkwcontinuenode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4977);
fatal_exit(1);
}
var_plabelnode3 = var_nodearraylist2;
/* <var_plabelnode3:nullable Object> isa nullable ALabel */
cltype4 = type_nullable__nit__ALabel.color;
idtype5 = type_nullable__nit__ALabel.id;
if(var_plabelnode3 == NULL) {
var3 = 1;
} else {
if(cltype4 >= (((long)var_plabelnode3&3)?type_info[((long)var_plabelnode3&3)]:var_plabelnode3->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)var_plabelnode3&3)?type_info[((long)var_plabelnode3&3)]:var_plabelnode3->type)->type_table[cltype4] == idtype5;
}
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4979);
fatal_exit(1);
}
var6 = NEW_nit__AContinueExpr(&type_nit__AContinueExpr);
{
((void(*)(val* self, val* p0, val* p1))(var6->class->vft[COLOR_nit__parser_prod__AContinueExpr__init_acontinueexpr]))(var6, var_tkwcontinuenode2, var_plabelnode3); /* init_acontinueexpr on <var6:AContinueExpr>*/
}
var_pexprnode1 = var6;
var_node_list = var_pexprnode1;
var7 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction173> */
{
var8 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var7); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var8, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction181#action for (self: ReduceAction181, Parser) */
void nit__parser___nit__parser__ReduceAction181___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_pexprsnode4 /* var pexprsnode4: nullable Object */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var12 /* : ACallExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ACallExpr */;
long var13 /* : Int */;
long var14 /* : Int */;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4999);
fatal_exit(1);
}
var_tidnode3 = var_nodearraylist4;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 5001);
fatal_exit(1);
}
var_pexprsnode4 = var_nodearraylist5;
/* <var_pexprsnode4:nullable Object> isa nullable AExprs */
cltype10 = type_nullable__nit__AExprs.color;
idtype11 = type_nullable__nit__AExprs.id;
if(var_pexprsnode4 == NULL) {
var9 = 1;
} else {
if(cltype10 >= (((long)var_pexprsnode4&3)?type_info[((long)var_pexprsnode4&3)]:var_pexprsnode4->type)->table_size) {
var9 = 0;
} else {
var9 = (((long)var_pexprsnode4&3)?type_info[((long)var_pexprsnode4&3)]:var_pexprsnode4->type)->type_table[cltype10] == idtype11;
}
}
if (unlikely(!var9)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 5003);
fatal_exit(1);
}
var12 = NEW_nit__ACallExpr(&type_nit__ACallExpr);
{
((void(*)(val* self, val* p0, val* p1, val* p2))(var12->class->vft[COLOR_nit__parser_prod__ACallExpr__init_acallexpr]))(var12, var_pexprnode2, var_tidnode3, var_pexprsnode4); /* init_acallexpr on <var12:ACallExpr>*/
}
var_pexprnode1 = var12;
var_node_list = var_pexprnode1;
var13 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction181> */
{
var14 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var13); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var14, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction182#action for (self: ReduceAction182, Parser) */
void nit__parser___nit__parser__ReduceAction182___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_pexprsnode4 /* var pexprsnode4: nullable Object */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var13 /* : ACallExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ACallExpr */;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 5025);
fatal_exit(1);
}
var_tidnode3 = var_nodearraylist5;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 5027);
fatal_exit(1);
}
var_pexprsnode4 = var_nodearraylist6;
/* <var_pexprsnode4:nullable Object> isa nullable AExprs */
cltype11 = type_nullable__nit__AExprs.color;
idtype12 = type_nullable__nit__AExprs.id;
if(var_pexprsnode4 == NULL) {
var10 = 1;
} else {
if(cltype11 >= (((long)var_pexprsnode4&3)?type_info[((long)var_pexprsnode4&3)]:var_pexprsnode4->type)->table_size) {
var10 = 0;
} else {
var10 = (((long)var_pexprsnode4&3)?type_info[((long)var_pexprsnode4&3)]:var_pexprsnode4->type)->type_table[cltype11] == idtype12;
}
}
if (unlikely(!var10)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 5029);
fatal_exit(1);
}
var13 = NEW_nit__ACallExpr(&type_nit__ACallExpr);
{
((void(*)(val* self, val* p0, val* p1, val* p2))(var13->class->vft[COLOR_nit__parser_prod__ACallExpr__init_acallexpr]))(var13, var_pexprnode2, var_tidnode3, var_pexprsnode4); /* init_acallexpr on <var13:ACallExpr>*/
}
var_pexprnode1 = var13;
var_node_list = var_pexprnode1;
var14 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction182> */
{
var15 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var14); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var15, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction183#action for (self: ReduceAction183, Parser) */
void nit__parser___nit__parser__ReduceAction183___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_pexprnode2 /* var pexprnode2: nullable Object */;
short int var7 /* : Bool */;
int cltype;
int idtype;
val* var_tidnode3 /* var tidnode3: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var_pexprsnode4 /* var pexprsnode4: nullable Object */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
val* var14 /* : ACallExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ACallExpr */;
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
var_pexprnode2 = var_nodearraylist1;
/* <var_pexprnode2:nullable Object> isa nullable AExpr */
cltype = type_nullable__nit__AExpr.color;
idtype = type_nullable__nit__AExpr.id;
if(var_pexprnode2 == NULL) {
var7 = 1;
} else {
if(cltype >= (((long)var_pexprnode2&3)?type_info[((long)var_pexprnode2&3)]:var_pexprnode2->type)->table_size) {
var7 = 0;
} else {
var7 = (((long)var_pexprnode2&3)?type_info[((long)var_pexprnode2&3)]:var_pexprnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var7)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 5052);
fatal_exit(1);
}
var_tidnode3 = var_nodearraylist6;
/* <var_tidnode3:nullable Object> isa nullable TId */
cltype9 = type_nullable__nit__TId.color;
idtype10 = type_nullable__nit__TId.id;
if(var_tidnode3 == NULL) {
var8 = 1;
} else {
if(cltype9 >= (((long)var_tidnode3&3)?type_info[((long)var_tidnode3&3)]:var_tidnode3->type)->table_size) {
var8 = 0;
} else {
var8 = (((long)var_tidnode3&3)?type_info[((long)var_tidnode3&3)]:var_tidnode3->type)->type_table[cltype9] == idtype10;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 5054);
fatal_exit(1);
}
var_pexprsnode4 = var_nodearraylist7;
/* <var_pexprsnode4:nullable Object> isa nullable AExprs */
cltype12 = type_nullable__nit__AExprs.color;
idtype13 = type_nullable__nit__AExprs.id;
if(var_pexprsnode4 == NULL) {
var11 = 1;
} else {
if(cltype12 >= (((long)var_pexprsnode4&3)?type_info[((long)var_pexprsnode4&3)]:var_pexprsnode4->type)->table_size) {
var11 = 0;
} else {
var11 = (((long)var_pexprsnode4&3)?type_info[((long)var_pexprsnode4&3)]:var_pexprsnode4->type)->type_table[cltype12] == idtype13;
}
}
if (unlikely(!var11)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 5056);
fatal_exit(1);
}
var14 = NEW_nit__ACallExpr(&type_nit__ACallExpr);
{
((void(*)(val* self, val* p0, val* p1, val* p2))(var14->class->vft[COLOR_nit__parser_prod__ACallExpr__init_acallexpr]))(var14, var_pexprnode2, var_tidnode3, var_pexprsnode4); /* init_acallexpr on <var14:ACallExpr>*/
}
var_pexprnode1 = var14;
var_node_list = var_pexprnode1;
var15 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction183> */
{
var16 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var15); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var16, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction185#action for (self: ReduceAction185, Parser) */
void nit__parser___nit__parser__ReduceAction185___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_pexprsnode4 /* var pexprsnode4: nullable Object */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
val* var7 /* : ACallExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ACallExpr */;
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
var2 = NEW_nit__AImplicitSelfExpr(&type_nit__AImplicitSelfExpr);
{
((void(*)(val* self))(var2->class->vft[COLOR_nit__parser_prod__AImplicitSelfExpr__init_aimplicitselfexpr]))(var2); /* init_aimplicitselfexpr on <var2:AImplicitSelfExpr>*/
}
var_pexprnode2 = var2;
var_tidnode3 = var_nodearraylist1;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 5075);
fatal_exit(1);
}
var_pexprsnode4 = var_nodearraylist2;
/* <var_pexprsnode4:nullable Object> isa nullable AExprs */
cltype5 = type_nullable__nit__AExprs.color;
idtype6 = type_nullable__nit__AExprs.id;
if(var_pexprsnode4 == NULL) {
var4 = 1;
} else {
if(cltype5 >= (((long)var_pexprsnode4&3)?type_info[((long)var_pexprsnode4&3)]:var_pexprsnode4->type)->table_size) {
var4 = 0;
} else {
var4 = (((long)var_pexprsnode4&3)?type_info[((long)var_pexprsnode4&3)]:var_pexprsnode4->type)->type_table[cltype5] == idtype6;
}
}
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 5077);
fatal_exit(1);
}
var7 = NEW_nit__ACallExpr(&type_nit__ACallExpr);
{
((void(*)(val* self, val* p0, val* p1, val* p2))(var7->class->vft[COLOR_nit__parser_prod__ACallExpr__init_acallexpr]))(var7, var_pexprnode2, var_tidnode3, var_pexprsnode4); /* init_acallexpr on <var7:ACallExpr>*/
}
var_pexprnode1 = var7;
var_node_list = var_pexprnode1;
var8 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction185> */
{
var9 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var8); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var9, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction186#action for (self: ReduceAction186, Parser) */
void nit__parser___nit__parser__ReduceAction186___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_pexprsnode4 /* var pexprsnode4: nullable Object */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
val* var8 /* : ACallExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ACallExpr */;
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
var3 = NEW_nit__AImplicitSelfExpr(&type_nit__AImplicitSelfExpr);
{
((void(*)(val* self))(var3->class->vft[COLOR_nit__parser_prod__AImplicitSelfExpr__init_aimplicitselfexpr]))(var3); /* init_aimplicitselfexpr on <var3:AImplicitSelfExpr>*/
}
var_pexprnode2 = var3;
var_tidnode3 = var_nodearraylist2;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 5097);
fatal_exit(1);
}
var_pexprsnode4 = var_nodearraylist3;
/* <var_pexprsnode4:nullable Object> isa nullable AExprs */
cltype6 = type_nullable__nit__AExprs.color;
idtype7 = type_nullable__nit__AExprs.id;
if(var_pexprsnode4 == NULL) {
var5 = 1;
} else {
if(cltype6 >= (((long)var_pexprsnode4&3)?type_info[((long)var_pexprsnode4&3)]:var_pexprsnode4->type)->table_size) {
var5 = 0;
} else {
var5 = (((long)var_pexprsnode4&3)?type_info[((long)var_pexprsnode4&3)]:var_pexprsnode4->type)->type_table[cltype6] == idtype7;
}
}
if (unlikely(!var5)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 5099);
fatal_exit(1);
}
var8 = NEW_nit__ACallExpr(&type_nit__ACallExpr);
{
((void(*)(val* self, val* p0, val* p1, val* p2))(var8->class->vft[COLOR_nit__parser_prod__ACallExpr__init_acallexpr]))(var8, var_pexprnode2, var_tidnode3, var_pexprsnode4); /* init_acallexpr on <var8:ACallExpr>*/
}
var_pexprnode1 = var8;
var_node_list = var_pexprnode1;
var9 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction186> */
{
var10 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var9); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var10, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction187#action for (self: ReduceAction187, Parser) */
void nit__parser___nit__parser__ReduceAction187___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var4 /* : AImplicitSelfExpr */;
val* var_pexprnode2 /* var pexprnode2: nullable AImplicitSelfExpr */;
val* var_tidnode3 /* var tidnode3: nullable Object */;
short int var5 /* : Bool */;
int cltype;
int idtype;
val* var_pexprsnode4 /* var pexprsnode4: nullable Object */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
val* var9 /* : ACallExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ACallExpr */;
long var10 /* : Int */;
long var11 /* : Int */;
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
var4 = NEW_nit__AImplicitSelfExpr(&type_nit__AImplicitSelfExpr);
{
((void(*)(val* self))(var4->class->vft[COLOR_nit__parser_prod__AImplicitSelfExpr__init_aimplicitselfexpr]))(var4); /* init_aimplicitselfexpr on <var4:AImplicitSelfExpr>*/
}
var_pexprnode2 = var4;
var_tidnode3 = var_nodearraylist3;
/* <var_tidnode3:nullable Object> isa nullable TId */
cltype = type_nullable__nit__TId.color;
idtype = type_nullable__nit__TId.id;
if(var_tidnode3 == NULL) {
var5 = 1;
} else {
if(cltype >= (((long)var_tidnode3&3)?type_info[((long)var_tidnode3&3)]:var_tidnode3->type)->table_size) {
var5 = 0;
} else {
var5 = (((long)var_tidnode3&3)?type_info[((long)var_tidnode3&3)]:var_tidnode3->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var5)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 5120);
fatal_exit(1);
}
var_pexprsnode4 = var_nodearraylist4;
/* <var_pexprsnode4:nullable Object> isa nullable AExprs */
cltype7 = type_nullable__nit__AExprs.color;
idtype8 = type_nullable__nit__AExprs.id;
if(var_pexprsnode4 == NULL) {
var6 = 1;
} else {
if(cltype7 >= (((long)var_pexprsnode4&3)?type_info[((long)var_pexprsnode4&3)]:var_pexprsnode4->type)->table_size) {
var6 = 0;
} else {
var6 = (((long)var_pexprsnode4&3)?type_info[((long)var_pexprsnode4&3)]:var_pexprsnode4->type)->type_table[cltype7] == idtype8;
}
}
if (unlikely(!var6)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 5122);
fatal_exit(1);
}
var9 = NEW_nit__ACallExpr(&type_nit__ACallExpr);
{
((void(*)(val* self, val* p0, val* p1, val* p2))(var9->class->vft[COLOR_nit__parser_prod__ACallExpr__init_acallexpr]))(var9, var_pexprnode2, var_tidnode3, var_pexprsnode4); /* init_acallexpr on <var9:ACallExpr>*/
}
var_pexprnode1 = var9;
var_node_list = var_pexprnode1;
var10 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction187> */
{
var11 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var10); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var11, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction189#action for (self: ReduceAction189, Parser) */
void nit__parser___nit__parser__ReduceAction189___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pqualifiednode2 /* var pqualifiednode2: nullable Object */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var_tkwsupernode3 /* var tkwsupernode3: nullable Object */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
val* var_pexprsnode4 /* var pexprsnode4: nullable Object */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
val* var10 /* : ASuperExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ASuperExpr */;
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
var_pqualifiednode2 = var_nodearraylist1;
/* <var_pqualifiednode2:nullable Object> isa nullable AQualified */
cltype = type_nullable__nit__AQualified.color;
idtype = type_nullable__nit__AQualified.id;
if(var_pqualifiednode2 == NULL) {
var3 = 1;
} else {
if(cltype >= (((long)var_pqualifiednode2&3)?type_info[((long)var_pqualifiednode2&3)]:var_pqualifiednode2->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)var_pqualifiednode2&3)?type_info[((long)var_pqualifiednode2&3)]:var_pqualifiednode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 5141);
fatal_exit(1);
}
var_tkwsupernode3 = var_nodearraylist2;
/* <var_tkwsupernode3:nullable Object> isa nullable TKwsuper */
cltype5 = type_nullable__nit__TKwsuper.color;
idtype6 = type_nullable__nit__TKwsuper.id;
if(var_tkwsupernode3 == NULL) {
var4 = 1;
} else {
if(cltype5 >= (((long)var_tkwsupernode3&3)?type_info[((long)var_tkwsupernode3&3)]:var_tkwsupernode3->type)->table_size) {
var4 = 0;
} else {
var4 = (((long)var_tkwsupernode3&3)?type_info[((long)var_tkwsupernode3&3)]:var_tkwsupernode3->type)->type_table[cltype5] == idtype6;
}
}
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 5143);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 5145);
fatal_exit(1);
}
var10 = NEW_nit__ASuperExpr(&type_nit__ASuperExpr);
{
((void(*)(val* self, val* p0, val* p1, val* p2))(var10->class->vft[COLOR_nit__parser_prod__ASuperExpr__init_asuperexpr]))(var10, var_pqualifiednode2, var_tkwsupernode3, var_pexprsnode4); /* init_asuperexpr on <var10:ASuperExpr>*/
}
var_pexprnode1 = var10;
var_node_list = var_pexprnode1;
var11 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction189> */
{
var12 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var11); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var12, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction190#action for (self: ReduceAction190, Parser) */
void nit__parser___nit__parser__ReduceAction190___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_tkwinitnode3 /* var tkwinitnode3: nullable Object */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
val* var_pexprsnode4 /* var pexprsnode4: nullable Object */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var12 /* : AInitExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AInitExpr */;
long var13 /* : Int */;
long var14 /* : Int */;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 5166);
fatal_exit(1);
}
var_tkwinitnode3 = var_nodearraylist4;
/* <var_tkwinitnode3:nullable Object> isa nullable TKwinit */
cltype7 = type_nullable__nit__TKwinit.color;
idtype8 = type_nullable__nit__TKwinit.id;
if(var_tkwinitnode3 == NULL) {
var6 = 1;
} else {
if(cltype7 >= (((long)var_tkwinitnode3&3)?type_info[((long)var_tkwinitnode3&3)]:var_tkwinitnode3->type)->table_size) {
var6 = 0;
} else {
var6 = (((long)var_tkwinitnode3&3)?type_info[((long)var_tkwinitnode3&3)]:var_tkwinitnode3->type)->type_table[cltype7] == idtype8;
}
}
if (unlikely(!var6)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 5168);
fatal_exit(1);
}
var_pexprsnode4 = var_nodearraylist5;
/* <var_pexprsnode4:nullable Object> isa nullable AExprs */
cltype10 = type_nullable__nit__AExprs.color;
idtype11 = type_nullable__nit__AExprs.id;
if(var_pexprsnode4 == NULL) {
var9 = 1;
} else {
if(cltype10 >= (((long)var_pexprsnode4&3)?type_info[((long)var_pexprsnode4&3)]:var_pexprsnode4->type)->table_size) {
var9 = 0;
} else {
var9 = (((long)var_pexprsnode4&3)?type_info[((long)var_pexprsnode4&3)]:var_pexprsnode4->type)->type_table[cltype10] == idtype11;
}
}
if (unlikely(!var9)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 5170);
fatal_exit(1);
}
var12 = NEW_nit__AInitExpr(&type_nit__AInitExpr);
{
((void(*)(val* self, val* p0, val* p1, val* p2))(var12->class->vft[COLOR_nit__parser_prod__AInitExpr__init_ainitexpr]))(var12, var_pexprnode2, var_tkwinitnode3, var_pexprsnode4); /* init_ainitexpr on <var12:AInitExpr>*/
}
var_pexprnode1 = var12;
var_node_list = var_pexprnode1;
var13 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction190> */
{
var14 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var13); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var14, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction191#action for (self: ReduceAction191, Parser) */
void nit__parser___nit__parser__ReduceAction191___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var2 /* : AImplicitSelfExpr */;
val* var_pexprnode2 /* var pexprnode2: nullable AImplicitSelfExpr */;
val* var_tkwinitnode3 /* var tkwinitnode3: nullable Object */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var_pexprsnode4 /* var pexprsnode4: nullable Object */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
val* var7 /* : AInitExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AInitExpr */;
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
var2 = NEW_nit__AImplicitSelfExpr(&type_nit__AImplicitSelfExpr);
{
((void(*)(val* self))(var2->class->vft[COLOR_nit__parser_prod__AImplicitSelfExpr__init_aimplicitselfexpr]))(var2); /* init_aimplicitselfexpr on <var2:AImplicitSelfExpr>*/
}
var_pexprnode2 = var2;
var_tkwinitnode3 = var_nodearraylist1;
/* <var_tkwinitnode3:nullable Object> isa nullable TKwinit */
cltype = type_nullable__nit__TKwinit.color;
idtype = type_nullable__nit__TKwinit.id;
if(var_tkwinitnode3 == NULL) {
var3 = 1;
} else {
if(cltype >= (((long)var_tkwinitnode3&3)?type_info[((long)var_tkwinitnode3&3)]:var_tkwinitnode3->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)var_tkwinitnode3&3)?type_info[((long)var_tkwinitnode3&3)]:var_tkwinitnode3->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 5189);
fatal_exit(1);
}
var_pexprsnode4 = var_nodearraylist2;
/* <var_pexprsnode4:nullable Object> isa nullable AExprs */
cltype5 = type_nullable__nit__AExprs.color;
idtype6 = type_nullable__nit__AExprs.id;
if(var_pexprsnode4 == NULL) {
var4 = 1;
} else {
if(cltype5 >= (((long)var_pexprsnode4&3)?type_info[((long)var_pexprsnode4&3)]:var_pexprsnode4->type)->table_size) {
var4 = 0;
} else {
var4 = (((long)var_pexprsnode4&3)?type_info[((long)var_pexprsnode4&3)]:var_pexprsnode4->type)->type_table[cltype5] == idtype6;
}
}
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 5191);
fatal_exit(1);
}
var7 = NEW_nit__AInitExpr(&type_nit__AInitExpr);
{
((void(*)(val* self, val* p0, val* p1, val* p2))(var7->class->vft[COLOR_nit__parser_prod__AInitExpr__init_ainitexpr]))(var7, var_pexprnode2, var_tkwinitnode3, var_pexprsnode4); /* init_ainitexpr on <var7:AInitExpr>*/
}
var_pexprnode1 = var7;
var_node_list = var_pexprnode1;
var8 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction191> */
{
var9 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var8); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var9, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction192#action for (self: ReduceAction192, Parser) */
void nit__parser___nit__parser__ReduceAction192___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_tkwinitnode3 /* var tkwinitnode3: nullable Object */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
val* var_pexprsnode4 /* var pexprsnode4: nullable Object */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var13 /* : AInitExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AInitExpr */;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 5213);
fatal_exit(1);
}
var_tkwinitnode3 = var_nodearraylist5;
/* <var_tkwinitnode3:nullable Object> isa nullable TKwinit */
cltype8 = type_nullable__nit__TKwinit.color;
idtype9 = type_nullable__nit__TKwinit.id;
if(var_tkwinitnode3 == NULL) {
var7 = 1;
} else {
if(cltype8 >= (((long)var_tkwinitnode3&3)?type_info[((long)var_tkwinitnode3&3)]:var_tkwinitnode3->type)->table_size) {
var7 = 0;
} else {
var7 = (((long)var_tkwinitnode3&3)?type_info[((long)var_tkwinitnode3&3)]:var_tkwinitnode3->type)->type_table[cltype8] == idtype9;
}
}
if (unlikely(!var7)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 5215);
fatal_exit(1);
}
var_pexprsnode4 = var_nodearraylist6;
/* <var_pexprsnode4:nullable Object> isa nullable AExprs */
cltype11 = type_nullable__nit__AExprs.color;
idtype12 = type_nullable__nit__AExprs.id;
if(var_pexprsnode4 == NULL) {
var10 = 1;
} else {
if(cltype11 >= (((long)var_pexprsnode4&3)?type_info[((long)var_pexprsnode4&3)]:var_pexprsnode4->type)->table_size) {
var10 = 0;
} else {
var10 = (((long)var_pexprsnode4&3)?type_info[((long)var_pexprsnode4&3)]:var_pexprsnode4->type)->type_table[cltype11] == idtype12;
}
}
if (unlikely(!var10)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 5217);
fatal_exit(1);
}
var13 = NEW_nit__AInitExpr(&type_nit__AInitExpr);
{
((void(*)(val* self, val* p0, val* p1, val* p2))(var13->class->vft[COLOR_nit__parser_prod__AInitExpr__init_ainitexpr]))(var13, var_pexprnode2, var_tkwinitnode3, var_pexprsnode4); /* init_ainitexpr on <var13:AInitExpr>*/
}
var_pexprnode1 = var13;
var_node_list = var_pexprnode1;
var14 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction192> */
{
var15 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var14); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var15, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction193#action for (self: ReduceAction193, Parser) */
void nit__parser___nit__parser__ReduceAction193___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_pexprnode2 /* var pexprnode2: nullable Object */;
short int var7 /* : Bool */;
int cltype;
int idtype;
val* var_tkwinitnode3 /* var tkwinitnode3: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var_pexprsnode4 /* var pexprsnode4: nullable Object */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
val* var14 /* : AInitExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AInitExpr */;
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
var_pexprnode2 = var_nodearraylist1;
/* <var_pexprnode2:nullable Object> isa nullable AExpr */
cltype = type_nullable__nit__AExpr.color;
idtype = type_nullable__nit__AExpr.id;
if(var_pexprnode2 == NULL) {
var7 = 1;
} else {
if(cltype >= (((long)var_pexprnode2&3)?type_info[((long)var_pexprnode2&3)]:var_pexprnode2->type)->table_size) {
var7 = 0;
} else {
var7 = (((long)var_pexprnode2&3)?type_info[((long)var_pexprnode2&3)]:var_pexprnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var7)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 5240);
fatal_exit(1);
}
var_tkwinitnode3 = var_nodearraylist6;
/* <var_tkwinitnode3:nullable Object> isa nullable TKwinit */
cltype9 = type_nullable__nit__TKwinit.color;
idtype10 = type_nullable__nit__TKwinit.id;
if(var_tkwinitnode3 == NULL) {
var8 = 1;
} else {
if(cltype9 >= (((long)var_tkwinitnode3&3)?type_info[((long)var_tkwinitnode3&3)]:var_tkwinitnode3->type)->table_size) {
var8 = 0;
} else {
var8 = (((long)var_tkwinitnode3&3)?type_info[((long)var_tkwinitnode3&3)]:var_tkwinitnode3->type)->type_table[cltype9] == idtype10;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 5242);
fatal_exit(1);
}
var_pexprsnode4 = var_nodearraylist7;
/* <var_pexprsnode4:nullable Object> isa nullable AExprs */
cltype12 = type_nullable__nit__AExprs.color;
idtype13 = type_nullable__nit__AExprs.id;
if(var_pexprsnode4 == NULL) {
var11 = 1;
} else {
if(cltype12 >= (((long)var_pexprsnode4&3)?type_info[((long)var_pexprsnode4&3)]:var_pexprsnode4->type)->table_size) {
var11 = 0;
} else {
var11 = (((long)var_pexprsnode4&3)?type_info[((long)var_pexprsnode4&3)]:var_pexprsnode4->type)->type_table[cltype12] == idtype13;
}
}
if (unlikely(!var11)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 5244);
fatal_exit(1);
}
var14 = NEW_nit__AInitExpr(&type_nit__AInitExpr);
{
((void(*)(val* self, val* p0, val* p1, val* p2))(var14->class->vft[COLOR_nit__parser_prod__AInitExpr__init_ainitexpr]))(var14, var_pexprnode2, var_tkwinitnode3, var_pexprsnode4); /* init_ainitexpr on <var14:AInitExpr>*/
}
var_pexprnode1 = var14;
var_node_list = var_pexprnode1;
var15 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction193> */
{
var16 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var15); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var16, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction195#action for (self: ReduceAction195, Parser) */
void nit__parser___nit__parser__ReduceAction195___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_tkwinitnode3 /* var tkwinitnode3: nullable Object */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var_pexprsnode4 /* var pexprsnode4: nullable Object */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
val* var8 /* : AInitExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AInitExpr */;
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
var3 = NEW_nit__AImplicitSelfExpr(&type_nit__AImplicitSelfExpr);
{
((void(*)(val* self))(var3->class->vft[COLOR_nit__parser_prod__AImplicitSelfExpr__init_aimplicitselfexpr]))(var3); /* init_aimplicitselfexpr on <var3:AImplicitSelfExpr>*/
}
var_pexprnode2 = var3;
var_tkwinitnode3 = var_nodearraylist2;
/* <var_tkwinitnode3:nullable Object> isa nullable TKwinit */
cltype = type_nullable__nit__TKwinit.color;
idtype = type_nullable__nit__TKwinit.id;
if(var_tkwinitnode3 == NULL) {
var4 = 1;
} else {
if(cltype >= (((long)var_tkwinitnode3&3)?type_info[((long)var_tkwinitnode3&3)]:var_tkwinitnode3->type)->table_size) {
var4 = 0;
} else {
var4 = (((long)var_tkwinitnode3&3)?type_info[((long)var_tkwinitnode3&3)]:var_tkwinitnode3->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 5264);
fatal_exit(1);
}
var_pexprsnode4 = var_nodearraylist3;
/* <var_pexprsnode4:nullable Object> isa nullable AExprs */
cltype6 = type_nullable__nit__AExprs.color;
idtype7 = type_nullable__nit__AExprs.id;
if(var_pexprsnode4 == NULL) {
var5 = 1;
} else {
if(cltype6 >= (((long)var_pexprsnode4&3)?type_info[((long)var_pexprsnode4&3)]:var_pexprsnode4->type)->table_size) {
var5 = 0;
} else {
var5 = (((long)var_pexprsnode4&3)?type_info[((long)var_pexprsnode4&3)]:var_pexprsnode4->type)->type_table[cltype6] == idtype7;
}
}
if (unlikely(!var5)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 5266);
fatal_exit(1);
}
var8 = NEW_nit__AInitExpr(&type_nit__AInitExpr);
{
((void(*)(val* self, val* p0, val* p1, val* p2))(var8->class->vft[COLOR_nit__parser_prod__AInitExpr__init_ainitexpr]))(var8, var_pexprnode2, var_tkwinitnode3, var_pexprsnode4); /* init_ainitexpr on <var8:AInitExpr>*/
}
var_pexprnode1 = var8;
var_node_list = var_pexprnode1;
var9 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction195> */
{
var10 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var9); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var10, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction196#action for (self: ReduceAction196, Parser) */
void nit__parser___nit__parser__ReduceAction196___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var4 /* : AImplicitSelfExpr */;
val* var_pexprnode2 /* var pexprnode2: nullable AImplicitSelfExpr */;
val* var_tkwinitnode3 /* var tkwinitnode3: nullable Object */;
short int var5 /* : Bool */;
int cltype;
int idtype;
val* var_pexprsnode4 /* var pexprsnode4: nullable Object */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
val* var9 /* : AInitExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AInitExpr */;
long var10 /* : Int */;
long var11 /* : Int */;
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
var4 = NEW_nit__AImplicitSelfExpr(&type_nit__AImplicitSelfExpr);
{
((void(*)(val* self))(var4->class->vft[COLOR_nit__parser_prod__AImplicitSelfExpr__init_aimplicitselfexpr]))(var4); /* init_aimplicitselfexpr on <var4:AImplicitSelfExpr>*/
}
var_pexprnode2 = var4;
var_tkwinitnode3 = var_nodearraylist3;
/* <var_tkwinitnode3:nullable Object> isa nullable TKwinit */
cltype = type_nullable__nit__TKwinit.color;
idtype = type_nullable__nit__TKwinit.id;
if(var_tkwinitnode3 == NULL) {
var5 = 1;
} else {
if(cltype >= (((long)var_tkwinitnode3&3)?type_info[((long)var_tkwinitnode3&3)]:var_tkwinitnode3->type)->table_size) {
var5 = 0;
} else {
var5 = (((long)var_tkwinitnode3&3)?type_info[((long)var_tkwinitnode3&3)]:var_tkwinitnode3->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var5)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 5287);
fatal_exit(1);
}
var_pexprsnode4 = var_nodearraylist4;
/* <var_pexprsnode4:nullable Object> isa nullable AExprs */
cltype7 = type_nullable__nit__AExprs.color;
idtype8 = type_nullable__nit__AExprs.id;
if(var_pexprsnode4 == NULL) {
var6 = 1;
} else {
if(cltype7 >= (((long)var_pexprsnode4&3)?type_info[((long)var_pexprsnode4&3)]:var_pexprsnode4->type)->table_size) {
var6 = 0;
} else {
var6 = (((long)var_pexprsnode4&3)?type_info[((long)var_pexprsnode4&3)]:var_pexprsnode4->type)->type_table[cltype7] == idtype8;
}
}
if (unlikely(!var6)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 5289);
fatal_exit(1);
}
var9 = NEW_nit__AInitExpr(&type_nit__AInitExpr);
{
((void(*)(val* self, val* p0, val* p1, val* p2))(var9->class->vft[COLOR_nit__parser_prod__AInitExpr__init_ainitexpr]))(var9, var_pexprnode2, var_tkwinitnode3, var_pexprsnode4); /* init_ainitexpr on <var9:AInitExpr>*/
}
var_pexprnode1 = var9;
var_node_list = var_pexprnode1;
var10 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction196> */
{
var11 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var10); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var11, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction198#action for (self: ReduceAction198, Parser) */
void nit__parser___nit__parser__ReduceAction198___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_tkwdebugnode2 /* var tkwdebugnode2: nullable Object */;
short int var5 /* : Bool */;
int cltype;
int idtype;
val* var_tkwtypenode3 /* var tkwtypenode3: nullable Object */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
val* var_pexprnode4 /* var pexprnode4: nullable Object */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var_ptypenode5 /* var ptypenode5: nullable Object */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
val* var15 /* : ADebugTypeExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ADebugTypeExpr */;
long var16 /* : Int */;
long var17 /* : Int */;
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
var_tkwdebugnode2 = var_nodearraylist1;
/* <var_tkwdebugnode2:nullable Object> isa nullable TKwdebug */
cltype = type_nullable__nit__TKwdebug.color;
idtype = type_nullable__nit__TKwdebug.id;
if(var_tkwdebugnode2 == NULL) {
var5 = 1;
} else {
if(cltype >= (((long)var_tkwdebugnode2&3)?type_info[((long)var_tkwdebugnode2&3)]:var_tkwdebugnode2->type)->table_size) {
var5 = 0;
} else {
var5 = (((long)var_tkwdebugnode2&3)?type_info[((long)var_tkwdebugnode2&3)]:var_tkwdebugnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var5)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 5310);
fatal_exit(1);
}
var_tkwtypenode3 = var_nodearraylist2;
/* <var_tkwtypenode3:nullable Object> isa nullable TKwtype */
cltype7 = type_nullable__nit__TKwtype.color;
idtype8 = type_nullable__nit__TKwtype.id;
if(var_tkwtypenode3 == NULL) {
var6 = 1;
} else {
if(cltype7 >= (((long)var_tkwtypenode3&3)?type_info[((long)var_tkwtypenode3&3)]:var_tkwtypenode3->type)->table_size) {
var6 = 0;
} else {
var6 = (((long)var_tkwtypenode3&3)?type_info[((long)var_tkwtypenode3&3)]:var_tkwtypenode3->type)->type_table[cltype7] == idtype8;
}
}
if (unlikely(!var6)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 5312);
fatal_exit(1);
}
var_pexprnode4 = var_nodearraylist5;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 5314);
fatal_exit(1);
}
var_ptypenode5 = var_nodearraylist3;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 5316);
fatal_exit(1);
}
var15 = NEW_nit__ADebugTypeExpr(&type_nit__ADebugTypeExpr);
{
((void(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var15->class->vft[COLOR_nit__parser_prod__ADebugTypeExpr__init_adebugtypeexpr]))(var15, var_tkwdebugnode2, var_tkwtypenode3, var_pexprnode4, var_ptypenode5); /* init_adebugtypeexpr on <var15:ADebugTypeExpr>*/
}
var_pexprnode1 = var15;
var_node_list = var_pexprnode1;
var16 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction198> */
{
var17 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var16); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var17, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction199#action for (self: ReduceAction199, Parser) */
void nit__parser___nit__parser__ReduceAction199___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tkwlabelnode2 /* var tkwlabelnode2: nullable Object */;
short int var1 /* : Bool */;
int cltype;
int idtype;
val* var2 /* : ALabel */;
val* var_plabelnode1 /* var plabelnode1: nullable ALabel */;
long var3 /* : Int */;
long var4 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist1 = var;
var_tkwlabelnode2 = var_nodearraylist1;
/* <var_tkwlabelnode2:nullable Object> isa nullable TKwlabel */
cltype = type_nullable__nit__TKwlabel.color;
idtype = type_nullable__nit__TKwlabel.id;
if(var_tkwlabelnode2 == NULL) {
var1 = 1;
} else {
if(cltype >= (((long)var_tkwlabelnode2&3)?type_info[((long)var_tkwlabelnode2&3)]:var_tkwlabelnode2->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)var_tkwlabelnode2&3)?type_info[((long)var_tkwlabelnode2&3)]:var_tkwlabelnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 5334);
fatal_exit(1);
}
var2 = NEW_nit__ALabel(&type_nit__ALabel);
{
((void(*)(val* self, val* p0, val* p1))(var2->class->vft[COLOR_nit__parser_prod__ALabel__init_alabel]))(var2, var_tkwlabelnode2, ((val*)NULL)); /* init_alabel on <var2:ALabel>*/
}
var_plabelnode1 = var2;
var_node_list = var_plabelnode1;
var3 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction199> */
{
var4 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var3); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var4, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction200#action for (self: ReduceAction200, Parser) */
void nit__parser___nit__parser__ReduceAction200___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tkwlabelnode2 /* var tkwlabelnode2: nullable Object */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var_tidnode3 /* var tidnode3: nullable Object */;
short int var3 /* : Bool */;
int cltype4;
int idtype5;
val* var6 /* : ALabel */;
val* var_plabelnode1 /* var plabelnode1: nullable ALabel */;
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
var_tkwlabelnode2 = var_nodearraylist1;
/* <var_tkwlabelnode2:nullable Object> isa nullable TKwlabel */
cltype = type_nullable__nit__TKwlabel.color;
idtype = type_nullable__nit__TKwlabel.id;
if(var_tkwlabelnode2 == NULL) {
var2 = 1;
} else {
if(cltype >= (((long)var_tkwlabelnode2&3)?type_info[((long)var_tkwlabelnode2&3)]:var_tkwlabelnode2->type)->table_size) {
var2 = 0;
} else {
var2 = (((long)var_tkwlabelnode2&3)?type_info[((long)var_tkwlabelnode2&3)]:var_tkwlabelnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 5351);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 5353);
fatal_exit(1);
}
var6 = NEW_nit__ALabel(&type_nit__ALabel);
{
((void(*)(val* self, val* p0, val* p1))(var6->class->vft[COLOR_nit__parser_prod__ALabel__init_alabel]))(var6, var_tkwlabelnode2, var_tidnode3); /* init_alabel on <var6:ALabel>*/
}
var_plabelnode1 = var6;
var_node_list = var_plabelnode1;
var7 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction200> */
{
var8 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var7); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var8, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction201#action for (self: ReduceAction201, Parser) */
void nit__parser___nit__parser__ReduceAction201___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tkwvarnode2 /* var tkwvarnode2: nullable Object */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var_tidnode3 /* var tidnode3: nullable Object */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
val* var_ptypenode4 /* var ptypenode4: nullable Object */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
val* var10 /* : AVardeclExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AVardeclExpr */;
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
var_tkwvarnode2 = var_nodearraylist1;
/* <var_tkwvarnode2:nullable Object> isa nullable TKwvar */
cltype = type_nullable__nit__TKwvar.color;
idtype = type_nullable__nit__TKwvar.id;
if(var_tkwvarnode2 == NULL) {
var3 = 1;
} else {
if(cltype >= (((long)var_tkwvarnode2&3)?type_info[((long)var_tkwvarnode2&3)]:var_tkwvarnode2->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)var_tkwvarnode2&3)?type_info[((long)var_tkwvarnode2&3)]:var_tkwvarnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 5371);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 5373);
fatal_exit(1);
}
var_ptypenode4 = var_nodearraylist3;
/* <var_ptypenode4:nullable Object> isa nullable AType */
cltype8 = type_nullable__nit__AType.color;
idtype9 = type_nullable__nit__AType.id;
if(var_ptypenode4 == NULL) {
var7 = 1;
} else {
if(cltype8 >= (((long)var_ptypenode4&3)?type_info[((long)var_ptypenode4&3)]:var_ptypenode4->type)->table_size) {
var7 = 0;
} else {
var7 = (((long)var_ptypenode4&3)?type_info[((long)var_ptypenode4&3)]:var_ptypenode4->type)->type_table[cltype8] == idtype9;
}
}
if (unlikely(!var7)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 5375);
fatal_exit(1);
}
var10 = NEW_nit__AVardeclExpr(&type_nit__AVardeclExpr);
{
((void(*)(val* self, val* p0, val* p1, val* p2, val* p3, val* p4, val* p5))(var10->class->vft[COLOR_nit__parser_prod__AVardeclExpr__init_avardeclexpr]))(var10, var_tkwvarnode2, var_tidnode3, var_ptypenode4, ((val*)NULL), ((val*)NULL), ((val*)NULL)); /* init_avardeclexpr on <var10:AVardeclExpr>*/
}
var_pexprnode1 = var10;
var_node_list = var_pexprnode1;
var11 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction201> */
{
var12 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var11); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var12, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction202#action for (self: ReduceAction202, Parser) */
void nit__parser___nit__parser__ReduceAction202___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_tkwvarnode2 /* var tkwvarnode2: nullable Object */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var_tidnode3 /* var tidnode3: nullable Object */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
val* var_ptypenode4 /* var ptypenode4: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var_pannotationsnode7 /* var pannotationsnode7: nullable Object */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
val* var14 /* : AVardeclExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AVardeclExpr */;
long var15 /* : Int */;
long var16 /* : Int */;
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
var_tkwvarnode2 = var_nodearraylist1;
/* <var_tkwvarnode2:nullable Object> isa nullable TKwvar */
cltype = type_nullable__nit__TKwvar.color;
idtype = type_nullable__nit__TKwvar.id;
if(var_tkwvarnode2 == NULL) {
var4 = 1;
} else {
if(cltype >= (((long)var_tkwvarnode2&3)?type_info[((long)var_tkwvarnode2&3)]:var_tkwvarnode2->type)->table_size) {
var4 = 0;
} else {
var4 = (((long)var_tkwvarnode2&3)?type_info[((long)var_tkwvarnode2&3)]:var_tkwvarnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 5398);
fatal_exit(1);
}
var_tidnode3 = var_nodearraylist2;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 5400);
fatal_exit(1);
}
var_ptypenode4 = var_nodearraylist4;
/* <var_ptypenode4:nullable Object> isa nullable AType */
cltype9 = type_nullable__nit__AType.color;
idtype10 = type_nullable__nit__AType.id;
if(var_ptypenode4 == NULL) {
var8 = 1;
} else {
if(cltype9 >= (((long)var_ptypenode4&3)?type_info[((long)var_ptypenode4&3)]:var_ptypenode4->type)->table_size) {
var8 = 0;
} else {
var8 = (((long)var_ptypenode4&3)?type_info[((long)var_ptypenode4&3)]:var_ptypenode4->type)->type_table[cltype9] == idtype10;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 5402);
fatal_exit(1);
}
var_pannotationsnode7 = var_nodearraylist3;
/* <var_pannotationsnode7:nullable Object> isa nullable AAnnotations */
cltype12 = type_nullable__nit__AAnnotations.color;
idtype13 = type_nullable__nit__AAnnotations.id;
if(var_pannotationsnode7 == NULL) {
var11 = 1;
} else {
if(cltype12 >= (((long)var_pannotationsnode7&3)?type_info[((long)var_pannotationsnode7&3)]:var_pannotationsnode7->type)->table_size) {
var11 = 0;
} else {
var11 = (((long)var_pannotationsnode7&3)?type_info[((long)var_pannotationsnode7&3)]:var_pannotationsnode7->type)->type_table[cltype12] == idtype13;
}
}
if (unlikely(!var11)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 5404);
fatal_exit(1);
}
var14 = NEW_nit__AVardeclExpr(&type_nit__AVardeclExpr);
{
((void(*)(val* self, val* p0, val* p1, val* p2, val* p3, val* p4, val* p5))(var14->class->vft[COLOR_nit__parser_prod__AVardeclExpr__init_avardeclexpr]))(var14, var_tkwvarnode2, var_tidnode3, var_ptypenode4, ((val*)NULL), ((val*)NULL), var_pannotationsnode7); /* init_avardeclexpr on <var14:AVardeclExpr>*/
}
var_pexprnode1 = var14;
var_node_list = var_pexprnode1;
var15 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction202> */
{
var16 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var15); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var16, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction203#action for (self: ReduceAction203, Parser) */
void nit__parser___nit__parser__ReduceAction203___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_tkwvarnode2 /* var tkwvarnode2: nullable Object */;
short int var6 /* : Bool */;
int cltype;
int idtype;
val* var_tidnode3 /* var tidnode3: nullable Object */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
val* var_ptypenode4 /* var ptypenode4: nullable Object */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var_tassignnode5 /* var tassignnode5: nullable Object */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
val* var_pexprnode6 /* var pexprnode6: nullable Object */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
val* var19 /* : AVardeclExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AVardeclExpr */;
long var20 /* : Int */;
long var21 /* : Int */;
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
var_tkwvarnode2 = var_nodearraylist1;
/* <var_tkwvarnode2:nullable Object> isa nullable TKwvar */
cltype = type_nullable__nit__TKwvar.color;
idtype = type_nullable__nit__TKwvar.id;
if(var_tkwvarnode2 == NULL) {
var6 = 1;
} else {
if(cltype >= (((long)var_tkwvarnode2&3)?type_info[((long)var_tkwvarnode2&3)]:var_tkwvarnode2->type)->table_size) {
var6 = 0;
} else {
var6 = (((long)var_tkwvarnode2&3)?type_info[((long)var_tkwvarnode2&3)]:var_tkwvarnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var6)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 5429);
fatal_exit(1);
}
var_tidnode3 = var_nodearraylist2;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 5431);
fatal_exit(1);
}
var_ptypenode4 = var_nodearraylist3;
/* <var_ptypenode4:nullable Object> isa nullable AType */
cltype11 = type_nullable__nit__AType.color;
idtype12 = type_nullable__nit__AType.id;
if(var_ptypenode4 == NULL) {
var10 = 1;
} else {
if(cltype11 >= (((long)var_ptypenode4&3)?type_info[((long)var_ptypenode4&3)]:var_ptypenode4->type)->table_size) {
var10 = 0;
} else {
var10 = (((long)var_ptypenode4&3)?type_info[((long)var_ptypenode4&3)]:var_ptypenode4->type)->type_table[cltype11] == idtype12;
}
}
if (unlikely(!var10)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 5433);
fatal_exit(1);
}
var_tassignnode5 = var_nodearraylist4;
/* <var_tassignnode5:nullable Object> isa nullable TAssign */
cltype14 = type_nullable__nit__TAssign.color;
idtype15 = type_nullable__nit__TAssign.id;
if(var_tassignnode5 == NULL) {
var13 = 1;
} else {
if(cltype14 >= (((long)var_tassignnode5&3)?type_info[((long)var_tassignnode5&3)]:var_tassignnode5->type)->table_size) {
var13 = 0;
} else {
var13 = (((long)var_tassignnode5&3)?type_info[((long)var_tassignnode5&3)]:var_tassignnode5->type)->type_table[cltype14] == idtype15;
}
}
if (unlikely(!var13)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 5435);
fatal_exit(1);
}
var_pexprnode6 = var_nodearraylist6;
/* <var_pexprnode6:nullable Object> isa nullable AExpr */
cltype17 = type_nullable__nit__AExpr.color;
idtype18 = type_nullable__nit__AExpr.id;
if(var_pexprnode6 == NULL) {
var16 = 1;
} else {
if(cltype17 >= (((long)var_pexprnode6&3)?type_info[((long)var_pexprnode6&3)]:var_pexprnode6->type)->table_size) {
var16 = 0;
} else {
var16 = (((long)var_pexprnode6&3)?type_info[((long)var_pexprnode6&3)]:var_pexprnode6->type)->type_table[cltype17] == idtype18;
}
}
if (unlikely(!var16)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 5437);
fatal_exit(1);
}
var19 = NEW_nit__AVardeclExpr(&type_nit__AVardeclExpr);
{
((void(*)(val* self, val* p0, val* p1, val* p2, val* p3, val* p4, val* p5))(var19->class->vft[COLOR_nit__parser_prod__AVardeclExpr__init_avardeclexpr]))(var19, var_tkwvarnode2, var_tidnode3, var_ptypenode4, var_tassignnode5, var_pexprnode6, ((val*)NULL)); /* init_avardeclexpr on <var19:AVardeclExpr>*/
}
var_pexprnode1 = var19;
var_node_list = var_pexprnode1;
var20 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction203> */
{
var21 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var20); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var21, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction204#action for (self: ReduceAction204, Parser) */
void nit__parser___nit__parser__ReduceAction204___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_tkwvarnode2 /* var tkwvarnode2: nullable Object */;
short int var7 /* : Bool */;
int cltype;
int idtype;
val* var_tidnode3 /* var tidnode3: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var_ptypenode4 /* var ptypenode4: nullable Object */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
val* var_tassignnode5 /* var tassignnode5: nullable Object */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
val* var_pexprnode6 /* var pexprnode6: nullable Object */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
val* var_pannotationsnode7 /* var pannotationsnode7: nullable Object */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
val* var23 /* : AVardeclExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AVardeclExpr */;
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
var_tkwvarnode2 = var_nodearraylist1;
/* <var_tkwvarnode2:nullable Object> isa nullable TKwvar */
cltype = type_nullable__nit__TKwvar.color;
idtype = type_nullable__nit__TKwvar.id;
if(var_tkwvarnode2 == NULL) {
var7 = 1;
} else {
if(cltype >= (((long)var_tkwvarnode2&3)?type_info[((long)var_tkwvarnode2&3)]:var_tkwvarnode2->type)->table_size) {
var7 = 0;
} else {
var7 = (((long)var_tkwvarnode2&3)?type_info[((long)var_tkwvarnode2&3)]:var_tkwvarnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var7)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 5463);
fatal_exit(1);
}
var_tidnode3 = var_nodearraylist2;
/* <var_tidnode3:nullable Object> isa nullable TId */
cltype9 = type_nullable__nit__TId.color;
idtype10 = type_nullable__nit__TId.id;
if(var_tidnode3 == NULL) {
var8 = 1;
} else {
if(cltype9 >= (((long)var_tidnode3&3)?type_info[((long)var_tidnode3&3)]:var_tidnode3->type)->table_size) {
var8 = 0;
} else {
var8 = (((long)var_tidnode3&3)?type_info[((long)var_tidnode3&3)]:var_tidnode3->type)->type_table[cltype9] == idtype10;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 5465);
fatal_exit(1);
}
var_ptypenode4 = var_nodearraylist4;
/* <var_ptypenode4:nullable Object> isa nullable AType */
cltype12 = type_nullable__nit__AType.color;
idtype13 = type_nullable__nit__AType.id;
if(var_ptypenode4 == NULL) {
var11 = 1;
} else {
if(cltype12 >= (((long)var_ptypenode4&3)?type_info[((long)var_ptypenode4&3)]:var_ptypenode4->type)->table_size) {
var11 = 0;
} else {
var11 = (((long)var_ptypenode4&3)?type_info[((long)var_ptypenode4&3)]:var_ptypenode4->type)->type_table[cltype12] == idtype13;
}
}
if (unlikely(!var11)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 5467);
fatal_exit(1);
}
var_tassignnode5 = var_nodearraylist5;
/* <var_tassignnode5:nullable Object> isa nullable TAssign */
cltype15 = type_nullable__nit__TAssign.color;
idtype16 = type_nullable__nit__TAssign.id;
if(var_tassignnode5 == NULL) {
var14 = 1;
} else {
if(cltype15 >= (((long)var_tassignnode5&3)?type_info[((long)var_tassignnode5&3)]:var_tassignnode5->type)->table_size) {
var14 = 0;
} else {
var14 = (((long)var_tassignnode5&3)?type_info[((long)var_tassignnode5&3)]:var_tassignnode5->type)->type_table[cltype15] == idtype16;
}
}
if (unlikely(!var14)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 5469);
fatal_exit(1);
}
var_pexprnode6 = var_nodearraylist7;
/* <var_pexprnode6:nullable Object> isa nullable AExpr */
cltype18 = type_nullable__nit__AExpr.color;
idtype19 = type_nullable__nit__AExpr.id;
if(var_pexprnode6 == NULL) {
var17 = 1;
} else {
if(cltype18 >= (((long)var_pexprnode6&3)?type_info[((long)var_pexprnode6&3)]:var_pexprnode6->type)->table_size) {
var17 = 0;
} else {
var17 = (((long)var_pexprnode6&3)?type_info[((long)var_pexprnode6&3)]:var_pexprnode6->type)->type_table[cltype18] == idtype19;
}
}
if (unlikely(!var17)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 5471);
fatal_exit(1);
}
var_pannotationsnode7 = var_nodearraylist3;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 5473);
fatal_exit(1);
}
var23 = NEW_nit__AVardeclExpr(&type_nit__AVardeclExpr);
{
((void(*)(val* self, val* p0, val* p1, val* p2, val* p3, val* p4, val* p5))(var23->class->vft[COLOR_nit__parser_prod__AVardeclExpr__init_avardeclexpr]))(var23, var_tkwvarnode2, var_tidnode3, var_ptypenode4, var_tassignnode5, var_pexprnode6, var_pannotationsnode7); /* init_avardeclexpr on <var23:AVardeclExpr>*/
}
var_pexprnode1 = var23;
var_node_list = var_pexprnode1;
var24 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction204> */
{
var25 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var24); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var25, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
