#include "nit__lexer_work.sep.0.h"
/* method lexer_work#Token#cached_text for (self: Token): nullable String */
val* nit__lexer_work___Token___cached_text(val* self) {
val* var /* : nullable String */;
val* var1 /* : nullable String */;
var1 = self->attrs[COLOR_nit__lexer_work__Token___cached_text].val; /* _cached_text on <self:Token> */
var = var1;
RET_LABEL:;
return var;
}
/* method lexer_work#Token#cached_text= for (self: Token, nullable String) */
void nit__lexer_work___Token___cached_text_61d(val* self, val* p0) {
self->attrs[COLOR_nit__lexer_work__Token___cached_text].val = p0; /* _cached_text on <self:Token> */
RET_LABEL:;
}
/* method lexer_work#Token#text for (self: Token): String */
val* nit__lexer_work___Token___text(val* self) {
val* var /* : String */;
val* var1 /* : nullable String */;
val* var_res /* var res: nullable String */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var4 /* : Location */;
val* var5 /* : String */;
var1 = self->attrs[COLOR_nit__lexer_work__Token___cached_text].val; /* _cached_text on <self:Token> */
var_res = var1;
if (var_res == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (0) {
var3 = ((short int(*)(val* self, val* p0))(var_res->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_res, ((val*)NULL)); /* != on <var_res:nullable String>*/
var2 = var3;
}
if (var2){
var = var_res;
goto RET_LABEL;
} else {
}
{
var4 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ANode__location]))(self); /* location on <self:Token>*/
}
{
var5 = ((val*(*)(val* self))(var4->class->vft[COLOR_nit__location__Location__text]))(var4); /* text on <var4:Location>*/
}
var_res = var5;
self->attrs[COLOR_nit__lexer_work__Token___cached_text].val = var_res; /* _cached_text on <self:Token> */
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer_work#Token#text= for (self: Token, String) */
void nit__lexer_work___Token___text_61d(val* self, val* p0) {
val* var_text /* var text: String */;
var_text = p0;
self->attrs[COLOR_nit__lexer_work__Token___cached_text].val = var_text; /* _cached_text on <self:Token> */
RET_LABEL:;
}
/* method lexer_work#Token#parser_index for (self: Token): Int */
long nit__lexer_work___Token___parser_index(val* self) {
long var /* : Int */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "parser_index", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__lexer_work, 38);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method lexer_work#EOF#init_tk for (self: EOF, Location) */
void nit__lexer_work___EOF___init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
static val* varonce;
val* var /* : String */;
char* var1 /* : NativeString */;
val* var2 /* : FlatString */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:EOF>*/
}
var_loc = p0;
if (likely(varonce!=NULL)) {
var = varonce;
} else {
var1 = "";
var2 = standard___standard__NativeString___to_s_with_length(var1, 0l);
var = var2;
varonce = var;
}
self->attrs[COLOR_nit__lexer_work__Token___cached_text].val = var; /* _cached_text on <self:EOF> */
self->attrs[COLOR_nit__parser_nodes__ANode___location].val = var_loc; /* _location on <self:EOF> */
RET_LABEL:;
}
/* method lexer_work#AError#message for (self: AError): String */
val* nit__lexer_work___AError___message(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_nit__lexer_work__AError___message].val; /* _message on <self:AError> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _message");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__lexer_work, 50);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method lexer_work#AError#message= for (self: AError, String) */
void nit__lexer_work___AError___message_61d(val* self, val* p0) {
self->attrs[COLOR_nit__lexer_work__AError___message].val = p0; /* _message on <self:AError> */
RET_LABEL:;
}
/* method lexer_work#AError#init_error for (self: AError, String, Location) */
void nit__lexer_work___AError___init_error(val* self, val* p0, val* p1) {
val* var_message /* var message: String */;
val* var_loc /* var loc: Location */;
var_message = p0;
var_loc = p1;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__lexer_work__EOF__init_tk]))(self, var_loc); /* init_tk on <self:AError>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__lexer_work__AError__message_61d]))(self, var_message); /* message= on <self:AError>*/
}
RET_LABEL:;
}
/* method lexer_work#ALexerError#string for (self: ALexerError): String */
val* nit__lexer_work___ALexerError___string(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_nit__lexer_work__ALexerError___string].val; /* _string on <self:ALexerError> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _string");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__lexer_work, 60);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method lexer_work#ALexerError#string= for (self: ALexerError, String) */
void nit__lexer_work___ALexerError___string_61d(val* self, val* p0) {
self->attrs[COLOR_nit__lexer_work__ALexerError___string].val = p0; /* _string on <self:ALexerError> */
RET_LABEL:;
}
/* method lexer_work#ALexerError#init_lexer_error for (self: ALexerError, String, Location, String) */
void nit__lexer_work___ALexerError___init_lexer_error(val* self, val* p0, val* p1, val* p2) {
val* var_message /* var message: String */;
val* var_loc /* var loc: Location */;
val* var_string /* var string: String */;
var_message = p0;
var_loc = p1;
var_string = p2;
{
((void(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__lexer_work__AError__init_error]))(self, var_message, var_loc); /* init_error on <self:ALexerError>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__lexer_work__ALexerError__string_61d]))(self, var_string); /* string= on <self:ALexerError>*/
}
RET_LABEL:;
}
/* method lexer_work#AParserError#token for (self: AParserError): Token */
val* nit__lexer_work___AParserError___token(val* self) {
val* var /* : Token */;
val* var1 /* : Token */;
var1 = self->attrs[COLOR_nit__lexer_work__AParserError___token].val; /* _token on <self:AParserError> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _token");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__lexer_work, 70);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method lexer_work#AParserError#token= for (self: AParserError, Token) */
void nit__lexer_work___AParserError___token_61d(val* self, val* p0) {
self->attrs[COLOR_nit__lexer_work__AParserError___token].val = p0; /* _token on <self:AParserError> */
RET_LABEL:;
}
/* method lexer_work#AParserError#init_parser_error for (self: AParserError, String, Location, Token) */
void nit__lexer_work___AParserError___init_parser_error(val* self, val* p0, val* p1, val* p2) {
val* var_message /* var message: String */;
val* var_loc /* var loc: Location */;
val* var_token /* var token: Token */;
var_message = p0;
var_loc = p1;
var_token = p2;
{
((void(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__lexer_work__AError__init_error]))(self, var_message, var_loc); /* init_error on <self:AParserError>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__lexer_work__AParserError__token_61d]))(self, var_token); /* token= on <self:AParserError>*/
}
RET_LABEL:;
}
/* method lexer_work#Lexer#token for (self: Lexer): nullable Token */
val* nit___nit__Lexer___token(val* self) {
val* var /* : nullable Token */;
val* var1 /* : nullable Token */;
var1 = self->attrs[COLOR_nit__lexer_work__Lexer___token].val; /* _token on <self:Lexer> */
var = var1;
RET_LABEL:;
return var;
}
/* method lexer_work#Lexer#token= for (self: Lexer, nullable Token) */
void nit___nit__Lexer___token_61d(val* self, val* p0) {
self->attrs[COLOR_nit__lexer_work__Lexer___token].val = p0; /* _token on <self:Lexer> */
RET_LABEL:;
}
/* method lexer_work#Lexer#state for (self: Lexer): Int */
long nit___nit__Lexer___state(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_nit__lexer_work__Lexer___state].l; /* _state on <self:Lexer> */
var = var1;
RET_LABEL:;
return var;
}
/* method lexer_work#Lexer#state= for (self: Lexer, Int) */
void nit___nit__Lexer___state_61d(val* self, long p0) {
self->attrs[COLOR_nit__lexer_work__Lexer___state].l = p0; /* _state on <self:Lexer> */
RET_LABEL:;
}
/* method lexer_work#Lexer#file for (self: Lexer): SourceFile */
val* nit___nit__Lexer___file(val* self) {
val* var /* : SourceFile */;
val* var1 /* : SourceFile */;
var1 = self->attrs[COLOR_nit__lexer_work__Lexer___file].val; /* _file on <self:Lexer> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _file");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__lexer_work, 90);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method lexer_work#Lexer#file= for (self: Lexer, SourceFile) */
void nit___nit__Lexer___file_61d(val* self, val* p0) {
self->attrs[COLOR_nit__lexer_work__Lexer___file].val = p0; /* _file on <self:Lexer> */
RET_LABEL:;
}
/* method lexer_work#Lexer#stream_pos for (self: Lexer): Int */
long nit___nit__Lexer___stream_pos(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_nit__lexer_work__Lexer___stream_pos].l; /* _stream_pos on <self:Lexer> */
var = var1;
RET_LABEL:;
return var;
}
/* method lexer_work#Lexer#stream_pos= for (self: Lexer, Int) */
void nit___nit__Lexer___stream_pos_61d(val* self, long p0) {
self->attrs[COLOR_nit__lexer_work__Lexer___stream_pos].l = p0; /* _stream_pos on <self:Lexer> */
RET_LABEL:;
}
/* method lexer_work#Lexer#line for (self: Lexer): Int */
long nit___nit__Lexer___line(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_nit__lexer_work__Lexer___line].l; /* _line on <self:Lexer> */
var = var1;
RET_LABEL:;
return var;
}
/* method lexer_work#Lexer#line= for (self: Lexer, Int) */
void nit___nit__Lexer___line_61d(val* self, long p0) {
self->attrs[COLOR_nit__lexer_work__Lexer___line].l = p0; /* _line on <self:Lexer> */
RET_LABEL:;
}
/* method lexer_work#Lexer#pos for (self: Lexer): Int */
long nit___nit__Lexer___pos(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_nit__lexer_work__Lexer___pos].l; /* _pos on <self:Lexer> */
var = var1;
RET_LABEL:;
return var;
}
/* method lexer_work#Lexer#pos= for (self: Lexer, Int) */
void nit___nit__Lexer___pos_61d(val* self, long p0) {
self->attrs[COLOR_nit__lexer_work__Lexer___pos].l = p0; /* _pos on <self:Lexer> */
RET_LABEL:;
}
/* method lexer_work#Lexer#cr for (self: Lexer): Bool */
short int nit___nit__Lexer___cr(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nit__lexer_work__Lexer___cr].s; /* _cr on <self:Lexer> */
var = var1;
RET_LABEL:;
return var;
}
/* method lexer_work#Lexer#cr= for (self: Lexer, Bool) */
void nit___nit__Lexer___cr_61d(val* self, short int p0) {
self->attrs[COLOR_nit__lexer_work__Lexer___cr].s = p0; /* _cr on <self:Lexer> */
RET_LABEL:;
}
/* method lexer_work#Lexer#state_initial for (self: Lexer): Int */
long nit___nit__Lexer___state_initial(val* self) {
long var /* : Int */;
var = 0l;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer_work#Lexer#last_token for (self: Lexer): nullable Token */
val* nit___nit__Lexer___last_token(val* self) {
val* var /* : nullable Token */;
val* var1 /* : nullable Token */;
var1 = self->attrs[COLOR_nit__lexer_work__Lexer___last_token].val; /* _last_token on <self:Lexer> */
var = var1;
RET_LABEL:;
return var;
}
/* method lexer_work#Lexer#last_token= for (self: Lexer, nullable Token) */
void nit___nit__Lexer___last_token_61d(val* self, val* p0) {
self->attrs[COLOR_nit__lexer_work__Lexer___last_token].val = p0; /* _last_token on <self:Lexer> */
RET_LABEL:;
}
/* method lexer_work#Lexer#peek for (self: Lexer): Token */
val* nit___nit__Lexer___peek(val* self) {
val* var /* : Token */;
val* var1 /* : nullable Token */;
val* var_t /* var t: nullable Token */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var4 /* : nullable Token */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var7 /* : nullable Token */;
short int var8 /* : Bool */;
val* var9 /* : nullable Token */;
val* var_l /* var l: nullable Token */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
val* var12 /* : SourceFile */;
var1 = self->attrs[COLOR_nit__lexer_work__Lexer___token].val; /* _token on <self:Lexer> */
var_t = var1;
if (var_t == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (0) {
var3 = ((short int(*)(val* self, val* p0))(var_t->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_t, ((val*)NULL)); /* != on <var_t:nullable Token>*/
var2 = var3;
}
if (var2){
var = var_t;
goto RET_LABEL;
} else {
}
{
var4 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__lexer_work__Lexer__get_token]))(self); /* get_token on <self:Lexer>*/
}
var_t = var4;
for(;;) {
if (var_t == NULL) {
var5 = 1; /* is null */
} else {
var5 = 0; /* arg is null but recv is not */
}
if (0) {
var6 = ((short int(*)(val* self, val* p0))(var_t->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_t, ((val*)NULL)); /* == on <var_t:nullable Token>*/
var5 = var6;
}
if (var5){
{
var7 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__lexer_work__Lexer__get_token]))(self); /* get_token on <self:Lexer>*/
}
var_t = var7;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
var8 = var_t->attrs[COLOR_nit__parser_nodes__ANode___location].val != NULL; /* _location on <var_t:nullable Token(Token)> */
if (var8){
{
var9 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__lexer_work__Lexer__last_token]))(self); /* last_token on <self:Lexer>*/
}
var_l = var9;
if (var_l == NULL) {
var10 = 0; /* is null */
} else {
var10 = 1; /* arg is null and recv is not */
}
if (0) {
var11 = ((short int(*)(val* self, val* p0))(var_l->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_l, ((val*)NULL)); /* != on <var_l:nullable Token>*/
var10 = var11;
}
if (var10){
{
((void(*)(val* self, val* p0))(var_l->class->vft[COLOR_nit__parser_nodes__Token__next_token_61d]))(var_l, var_t); /* next_token= on <var_l:nullable Token(Token)>*/
}
{
((void(*)(val* self, val* p0))(var_t->class->vft[COLOR_nit__parser_nodes__Token__prev_token_61d]))(var_t, var_l); /* prev_token= on <var_t:nullable Token(Token)>*/
}
} else {
{
var12 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__lexer_work__Lexer__file]))(self); /* file on <self:Lexer>*/
}
{
((void(*)(val* self, val* p0))(var12->class->vft[COLOR_nit__parser_nodes__SourceFile__first_token_61d]))(var12, var_t); /* first_token= on <var12:SourceFile>*/
}
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__lexer_work__Lexer__last_token_61d]))(self, var_t); /* last_token= on <self:Lexer>*/
}
} else {
}
self->attrs[COLOR_nit__lexer_work__Lexer___token].val = var_t; /* _token on <self:Lexer> */
var = var_t;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer_work#Lexer#next for (self: Lexer): Token */
val* nit___nit__Lexer___next(val* self) {
val* var /* : Token */;
val* var1 /* : Token */;
val* var_result /* var result: Token */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__lexer_work__Lexer__peek]))(self); /* peek on <self:Lexer>*/
}
var_result = var1;
self->attrs[COLOR_nit__lexer_work__Lexer___token].val = ((val*)NULL); /* _token on <self:Lexer> */
var = var_result;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer_work#Lexer#get_token for (self: Lexer): nullable Token */
val* nit___nit__Lexer___get_token(val* self) {
val* var /* : nullable Token */;
long var_dfa_state /* var dfa_state: Int */;
long var1 /* : Int */;
long var_sp /* var sp: Int */;
long var_start_stream_pos /* var start_stream_pos: Int */;
long var2 /* : Int */;
long var_start_pos /* var start_pos: Int */;
long var3 /* : Int */;
long var_start_line /* var start_line: Int */;
val* var4 /* : SourceFile */;
val* var_file /* var file: SourceFile */;
val* var5 /* : String */;
val* var_string /* var string: String */;
long var6 /* : Int */;
long var_string_len /* var string_len: Int */;
long var7 /* : Int */;
long var9 /* : Int */;
long var_accept_state /* var accept_state: Int */;
long var10 /* : Int */;
long var12 /* : Int */;
long var_accept_token /* var accept_token: Int */;
long var13 /* : Int */;
long var15 /* : Int */;
long var_accept_length /* var accept_length: Int */;
long var16 /* : Int */;
long var18 /* : Int */;
long var_accept_pos /* var accept_pos: Int */;
long var19 /* : Int */;
long var21 /* : Int */;
long var_accept_line /* var accept_line: Int */;
short int var22 /* : Bool */;
short int var24 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var25 /* : Bool */;
long var26 /* : Int */;
long var28 /* : Int */;
char var29 /* : Char */;
long var30 /* : Int */;
long var32 /* : Int */;
long var_c /* var c: Int */;
long var33 /* : Int */;
short int var35 /* : Bool */;
int cltype36;
int idtype37;
const char* var_class_name38;
long var39 /* : Int */;
short int var40 /* : Bool */;
short int var_cr /* var cr: Bool */;
long var41 /* : Int */;
long var_line /* var line: Int */;
long var42 /* : Int */;
long var_pos /* var pos: Int */;
short int var43 /* : Bool */;
short int var45 /* : Bool */;
val* var46 /* : Array[Int] */;
val* var47 /* : nullable Object */;
long var48 /* : Int */;
short int var50 /* : Bool */;
int cltype51;
int idtype52;
const char* var_class_name53;
long var54 /* : Int */;
val* var55 /* : Array[Int] */;
val* var56 /* : nullable Object */;
short int var57 /* : Bool */;
short int var59 /* : Bool */;
long var60 /* : Int */;
short int var62 /* : Bool */;
int cltype63;
int idtype64;
const char* var_class_name65;
long var66 /* : Int */;
val* var67 /* : Array[Int] */;
val* var68 /* : nullable Object */;
long var69 /* : Int */;
short int var71 /* : Bool */;
int cltype72;
int idtype73;
const char* var_class_name74;
long var75 /* : Int */;
long var_old_state /* var old_state: Int */;
long var76 /* : Int */;
long var78 /* : Int */;
short int var79 /* : Bool */;
short int var81 /* : Bool */;
int cltype82;
int idtype83;
const char* var_class_name84;
short int var85 /* : Bool */;
long var86 /* : Int */;
long var88 /* : Int */;
long var89 /* : Int */;
short int var91 /* : Bool */;
int cltype92;
int idtype93;
const char* var_class_name94;
long var95 /* : Int */;
long var96 /* : Int */;
long var98 /* : Int */;
long var_low /* var low: Int */;
long var99 /* : Int */;
long var100 /* : Int */;
short int var102 /* : Bool */;
int cltype103;
int idtype104;
const char* var_class_name105;
long var106 /* : Int */;
long var_high /* var high: Int */;
short int var107 /* : Bool */;
short int var109 /* : Bool */;
int cltype110;
int idtype111;
const char* var_class_name112;
short int var113 /* : Bool */;
short int var114 /* : Bool */;
short int var116 /* : Bool */;
int cltype117;
int idtype118;
const char* var_class_name119;
short int var120 /* : Bool */;
long var121 /* : Int */;
short int var123 /* : Bool */;
int cltype124;
int idtype125;
const char* var_class_name126;
long var127 /* : Int */;
long var128 /* : Int */;
short int var130 /* : Bool */;
int cltype131;
int idtype132;
const char* var_class_name133;
long var134 /* : Int */;
long var_middle /* var middle: Int */;
long var135 /* : Int */;
short int var137 /* : Bool */;
int cltype138;
int idtype139;
const char* var_class_name140;
long var141 /* : Int */;
long var142 /* : Int */;
short int var144 /* : Bool */;
int cltype145;
int idtype146;
const char* var_class_name147;
long var148 /* : Int */;
long var_offset /* var offset: Int */;
long var149 /* : Int */;
short int var150 /* : Bool */;
short int var152 /* : Bool */;
int cltype153;
int idtype154;
const char* var_class_name155;
short int var156 /* : Bool */;
long var157 /* : Int */;
short int var159 /* : Bool */;
int cltype160;
int idtype161;
const char* var_class_name162;
long var163 /* : Int */;
long var164 /* : Int */;
short int var166 /* : Bool */;
int cltype167;
int idtype168;
const char* var_class_name169;
long var170 /* : Int */;
long var171 /* : Int */;
short int var172 /* : Bool */;
short int var174 /* : Bool */;
int cltype175;
int idtype176;
const char* var_class_name177;
short int var178 /* : Bool */;
long var179 /* : Int */;
short int var181 /* : Bool */;
int cltype182;
int idtype183;
const char* var_class_name184;
long var185 /* : Int */;
long var186 /* : Int */;
short int var188 /* : Bool */;
int cltype189;
int idtype190;
const char* var_class_name191;
long var192 /* : Int */;
long var193 /* : Int */;
long var194 /* : Int */;
long var196 /* : Int */;
short int var197 /* : Bool */;
short int var199 /* : Bool */;
int cltype200;
int idtype201;
const char* var_class_name202;
short int var203 /* : Bool */;
short int var205 /* : Bool */;
short int var207 /* : Bool */;
int cltype208;
int idtype209;
const char* var_class_name210;
short int var211 /* : Bool */;
long var212 /* : Int */;
long var_tok /* var tok: Int */;
long var213 /* : Int */;
long var215 /* : Int */;
short int var216 /* : Bool */;
short int var218 /* : Bool */;
short int var219 /* : Bool */;
long var220 /* : Int */;
short int var222 /* : Bool */;
int cltype223;
int idtype224;
const char* var_class_name225;
long var226 /* : Int */;
long var227 /* : Int */;
long var228 /* : Int */;
long var229 /* : Int */;
long var231 /* : Int */;
short int var232 /* : Bool */;
short int var234 /* : Bool */;
short int var235 /* : Bool */;
long var236 /* : Int */;
short int var238 /* : Bool */;
int cltype239;
int idtype240;
const char* var_class_name241;
long var242 /* : Int */;
short int var243 /* : Bool */;
short int var245 /* : Bool */;
val* var246 /* : Location */;
long var247 /* : Int */;
short int var249 /* : Bool */;
int cltype250;
int idtype251;
const char* var_class_name252;
long var253 /* : Int */;
long var254 /* : Int */;
short int var256 /* : Bool */;
int cltype257;
int idtype258;
const char* var_class_name259;
long var260 /* : Int */;
long var261 /* : Int */;
short int var263 /* : Bool */;
int cltype264;
int idtype265;
const char* var_class_name266;
long var267 /* : Int */;
val* var_location /* var location: Location */;
val* var268 /* : Token */;
val* var269 /* : Location */;
long var270 /* : Int */;
short int var272 /* : Bool */;
int cltype273;
int idtype274;
const char* var_class_name275;
long var276 /* : Int */;
long var277 /* : Int */;
short int var279 /* : Bool */;
int cltype280;
int idtype281;
const char* var_class_name282;
long var283 /* : Int */;
long var284 /* : Int */;
short int var286 /* : Bool */;
int cltype287;
int idtype288;
const char* var_class_name289;
long var290 /* : Int */;
long var291 /* : Int */;
short int var293 /* : Bool */;
int cltype294;
int idtype295;
const char* var_class_name296;
long var297 /* : Int */;
val* var_location298 /* var location: Location */;
short int var299 /* : Bool */;
short int var301 /* : Bool */;
int cltype302;
int idtype303;
const char* var_class_name304;
short int var305 /* : Bool */;
long var306 /* : Int */;
short int var308 /* : Bool */;
int cltype309;
int idtype310;
const char* var_class_name311;
long var312 /* : Int */;
val* var313 /* : Text */;
val* var_text /* var text: String */;
val* var314 /* : ALexerError */;
val* var315 /* : NativeArray[String] */;
static val* varonce;
static val* varonce316;
val* var317 /* : String */;
char* var318 /* : NativeString */;
val* var319 /* : FlatString */;
static val* varonce320;
val* var321 /* : String */;
char* var322 /* : NativeString */;
val* var323 /* : FlatString */;
val* var324 /* : String */;
val* var_token /* var token: ALexerError */;
val* var325 /* : EOF */;
val* var_token326 /* var token: EOF */;
var_dfa_state = 0l;
var1 = self->attrs[COLOR_nit__lexer_work__Lexer___stream_pos].l; /* _stream_pos on <self:Lexer> */
var_sp = var1;
var_start_stream_pos = var_sp;
var2 = self->attrs[COLOR_nit__lexer_work__Lexer___pos].l; /* _pos on <self:Lexer> */
var_start_pos = var2;
var3 = self->attrs[COLOR_nit__lexer_work__Lexer___line].l; /* _line on <self:Lexer> */
var_start_line = var3;
{
var4 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__lexer_work__Lexer__file]))(self); /* file on <self:Lexer>*/
}
var_file = var4;
{
var5 = ((val*(*)(val* self))(var_file->class->vft[COLOR_nit__location__SourceFile__string]))(var_file); /* string on <var_file:SourceFile>*/
}
var_string = var5;
{
var6 = ((long(*)(val* self))(var_string->class->vft[COLOR_standard__string__Text__length]))(var_string); /* length on <var_string:String>*/
}
var_string_len = var6;
{
{ /* Inline kernel#Int#unary - (1l) on <1l:Int> */
var9 = -1l;
var7 = var9;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
var_accept_state = var7;
{
{ /* Inline kernel#Int#unary - (1l) on <1l:Int> */
var12 = -1l;
var10 = var12;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
var_accept_token = var10;
{
{ /* Inline kernel#Int#unary - (1l) on <1l:Int> */
var15 = -1l;
var13 = var15;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
}
var_accept_length = var13;
{
{ /* Inline kernel#Int#unary - (1l) on <1l:Int> */
var18 = -1l;
var16 = var18;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
}
var_accept_pos = var16;
{
{ /* Inline kernel#Int#unary - (1l) on <1l:Int> */
var21 = -1l;
var19 = var21;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
}
var_accept_line = var19;
for(;;) {
{
{ /* Inline kernel#Int#>= (var_sp,var_string_len) on <var_sp:Int> */
/* Covariant cast for argument 0 (i) <var_string_len:Int> isa OTHER */
/* <var_string_len:Int> isa OTHER */
var24 = 1; /* easy <var_string_len:Int> isa OTHER*/
if (unlikely(!var24)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 424);
fatal_exit(1);
}
var25 = var_sp >= var_string_len;
var22 = var25;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
}
if (var22){
{
{ /* Inline kernel#Int#unary - (1l) on <1l:Int> */
var28 = -1l;
var26 = var28;
goto RET_LABEL27;
RET_LABEL27:(void)0;
}
}
var_dfa_state = var26;
} else {
{
var29 = ((char(*)(val* self, long p0))(var_string->class->vft[COLOR_standard__string__Text___91d_93d]))(var_string, var_sp); /* [] on <var_string:String>*/
}
{
{ /* Inline kernel#Char#ascii (var29) on <var29:Char> */
var32 = (unsigned char)var29;
var30 = var32;
goto RET_LABEL31;
RET_LABEL31:(void)0;
}
}
var_c = var30;
{
{ /* Inline kernel#Int#+ (var_sp,1l) on <var_sp:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var35 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var35)) {
var_class_name38 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name38);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var39 = var_sp + 1l;
var33 = var39;
goto RET_LABEL34;
RET_LABEL34:(void)0;
}
}
var_sp = var33;
var40 = self->attrs[COLOR_nit__lexer_work__Lexer___cr].s; /* _cr on <self:Lexer> */
var_cr = var40;
var41 = self->attrs[COLOR_nit__lexer_work__Lexer___line].l; /* _line on <self:Lexer> */
var_line = var41;
var42 = self->attrs[COLOR_nit__lexer_work__Lexer___pos].l; /* _pos on <self:Lexer> */
var_pos = var42;
{
{ /* Inline kernel#Int#== (var_c,10l) on <var_c:Int> */
var45 = var_c == 10l;
var43 = var45;
goto RET_LABEL44;
RET_LABEL44:(void)0;
}
}
if (var43){
if (var_cr){
var_cr = 0;
{
var46 = ((val*(*)(val* self))(var_file->class->vft[COLOR_nit__location__SourceFile__line_starts]))(var_file); /* line_starts on <var_file:SourceFile>*/
}
{
var47 = (val*)(var_sp<<2|1);
((void(*)(val* self, long p0, val* p1))(var46->class->vft[COLOR_standard__abstract_collection__Sequence___91d_93d_61d]))(var46, var_line, var47); /* []= on <var46:Array[Int]>*/
}
} else {
{
{ /* Inline kernel#Int#+ (var_line,1l) on <var_line:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var50 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var50)) {
var_class_name53 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name53);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var54 = var_line + 1l;
var48 = var54;
goto RET_LABEL49;
RET_LABEL49:(void)0;
}
}
var_line = var48;
var_pos = 0l;
{
var55 = ((val*(*)(val* self))(var_file->class->vft[COLOR_nit__location__SourceFile__line_starts]))(var_file); /* line_starts on <var_file:SourceFile>*/
}
{
var56 = (val*)(var_sp<<2|1);
((void(*)(val* self, long p0, val* p1))(var55->class->vft[COLOR_standard__abstract_collection__Sequence___91d_93d_61d]))(var55, var_line, var56); /* []= on <var55:Array[Int]>*/
}
}
} else {
{
{ /* Inline kernel#Int#== (var_c,13l) on <var_c:Int> */
var59 = var_c == 13l;
var57 = var59;
goto RET_LABEL58;
RET_LABEL58:(void)0;
}
}
if (var57){
{
{ /* Inline kernel#Int#+ (var_line,1l) on <var_line:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var62 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var62)) {
var_class_name65 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name65);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var66 = var_line + 1l;
var60 = var66;
goto RET_LABEL61;
RET_LABEL61:(void)0;
}
}
var_line = var60;
var_pos = 0l;
var_cr = 1;
{
var67 = ((val*(*)(val* self))(var_file->class->vft[COLOR_nit__location__SourceFile__line_starts]))(var_file); /* line_starts on <var_file:SourceFile>*/
}
{
var68 = (val*)(var_sp<<2|1);
((void(*)(val* self, long p0, val* p1))(var67->class->vft[COLOR_standard__abstract_collection__Sequence___91d_93d_61d]))(var67, var_line, var68); /* []= on <var67:Array[Int]>*/
}
} else {
{
{ /* Inline kernel#Int#+ (var_pos,1l) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var71 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var71)) {
var_class_name74 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name74);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var75 = var_pos + 1l;
var69 = var75;
goto RET_LABEL70;
RET_LABEL70:(void)0;
}
}
var_pos = var69;
var_cr = 0;
}
}
for(;;) {
var_old_state = var_dfa_state;
{
{ /* Inline kernel#Int#unary - (1l) on <1l:Int> */
var78 = -1l;
var76 = var78;
goto RET_LABEL77;
RET_LABEL77:(void)0;
}
}
{
{ /* Inline kernel#Int#< (var_dfa_state,var76) on <var_dfa_state:Int> */
/* Covariant cast for argument 0 (i) <var76:Int> isa OTHER */
/* <var76:Int> isa OTHER */
var81 = 1; /* easy <var76:Int> isa OTHER*/
if (unlikely(!var81)) {
var_class_name84 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name84);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 423);
fatal_exit(1);
}
var85 = var_dfa_state < var76;
var79 = var85;
goto RET_LABEL80;
RET_LABEL80:(void)0;
}
}
if (var79){
{
{ /* Inline kernel#Int#unary - (2l) on <2l:Int> */
var88 = -2l;
var86 = var88;
goto RET_LABEL87;
RET_LABEL87:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var86,var_dfa_state) on <var86:Int> */
/* Covariant cast for argument 0 (i) <var_dfa_state:Int> isa OTHER */
/* <var_dfa_state:Int> isa OTHER */
var91 = 1; /* easy <var_dfa_state:Int> isa OTHER*/
if (unlikely(!var91)) {
var_class_name94 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name94);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 429);
fatal_exit(1);
}
var95 = var86 - var_dfa_state;
var89 = var95;
goto RET_LABEL90;
RET_LABEL90:(void)0;
}
}
var_old_state = var89;
} else {
}
{
{ /* Inline kernel#Int#unary - (1l) on <1l:Int> */
var98 = -1l;
var96 = var98;
goto RET_LABEL97;
RET_LABEL97:(void)0;
}
}
var_dfa_state = var96;
var_low = 0l;
{
var99 = ((long(*)(val* self, long p0, long p1))(self->class->vft[COLOR_nit__tables__TablesCapable__lexer_goto]))(self, var_old_state, 0l); /* lexer_goto on <self:Lexer>*/
}
{
{ /* Inline kernel#Int#- (var99,1l) on <var99:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var102 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var102)) {
var_class_name105 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name105);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 429);
fatal_exit(1);
}
var106 = var99 - 1l;
var100 = var106;
goto RET_LABEL101;
RET_LABEL101:(void)0;
}
}
var_high = var100;
{
{ /* Inline kernel#Int#>= (var_high,0l) on <var_high:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var109 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var109)) {
var_class_name112 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name112);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 424);
fatal_exit(1);
}
var113 = var_high >= 0l;
var107 = var113;
goto RET_LABEL108;
RET_LABEL108:(void)0;
}
}
if (var107){
for(;;) {
{
{ /* Inline kernel#Int#<= (var_low,var_high) on <var_low:Int> */
/* Covariant cast for argument 0 (i) <var_high:Int> isa OTHER */
/* <var_high:Int> isa OTHER */
var116 = 1; /* easy <var_high:Int> isa OTHER*/
if (unlikely(!var116)) {
var_class_name119 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name119);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 422);
fatal_exit(1);
}
var120 = var_low <= var_high;
var114 = var120;
goto RET_LABEL115;
RET_LABEL115:(void)0;
}
}
if (var114){
{
{ /* Inline kernel#Int#+ (var_low,var_high) on <var_low:Int> */
/* Covariant cast for argument 0 (i) <var_high:Int> isa OTHER */
/* <var_high:Int> isa OTHER */
var123 = 1; /* easy <var_high:Int> isa OTHER*/
if (unlikely(!var123)) {
var_class_name126 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name126);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var127 = var_low + var_high;
var121 = var127;
goto RET_LABEL122;
RET_LABEL122:(void)0;
}
}
{
{ /* Inline kernel#Int#/ (var121,2l) on <var121:Int> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var130 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var130)) {
var_class_name133 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name133);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 431);
fatal_exit(1);
}
var134 = var121 / 2l;
var128 = var134;
goto RET_LABEL129;
RET_LABEL129:(void)0;
}
}
var_middle = var128;
{
{ /* Inline kernel#Int#* (var_middle,3l) on <var_middle:Int> */
/* Covariant cast for argument 0 (i) <3l:Int> isa OTHER */
/* <3l:Int> isa OTHER */
var137 = 1; /* easy <3l:Int> isa OTHER*/
if (unlikely(!var137)) {
var_class_name140 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name140);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 430);
fatal_exit(1);
}
var141 = var_middle * 3l;
var135 = var141;
goto RET_LABEL136;
RET_LABEL136:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var135,1l) on <var135:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var144 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var144)) {
var_class_name147 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name147);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var148 = var135 + 1l;
var142 = var148;
goto RET_LABEL143;
RET_LABEL143:(void)0;
}
}
var_offset = var142;
{
var149 = ((long(*)(val* self, long p0, long p1))(self->class->vft[COLOR_nit__tables__TablesCapable__lexer_goto]))(self, var_old_state, var_offset); /* lexer_goto on <self:Lexer>*/
}
{
{ /* Inline kernel#Int#< (var_c,var149) on <var_c:Int> */
/* Covariant cast for argument 0 (i) <var149:Int> isa OTHER */
/* <var149:Int> isa OTHER */
var152 = 1; /* easy <var149:Int> isa OTHER*/
if (unlikely(!var152)) {
var_class_name155 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name155);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 423);
fatal_exit(1);
}
var156 = var_c < var149;
var150 = var156;
goto RET_LABEL151;
RET_LABEL151:(void)0;
}
}
if (var150){
{
{ /* Inline kernel#Int#- (var_middle,1l) on <var_middle:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var159 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var159)) {
var_class_name162 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name162);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 429);
fatal_exit(1);
}
var163 = var_middle - 1l;
var157 = var163;
goto RET_LABEL158;
RET_LABEL158:(void)0;
}
}
var_high = var157;
} else {
{
{ /* Inline kernel#Int#+ (var_offset,1l) on <var_offset:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var166 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var166)) {
var_class_name169 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name169);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var170 = var_offset + 1l;
var164 = var170;
goto RET_LABEL165;
RET_LABEL165:(void)0;
}
}
{
var171 = ((long(*)(val* self, long p0, long p1))(self->class->vft[COLOR_nit__tables__TablesCapable__lexer_goto]))(self, var_old_state, var164); /* lexer_goto on <self:Lexer>*/
}
{
{ /* Inline kernel#Int#> (var_c,var171) on <var_c:Int> */
/* Covariant cast for argument 0 (i) <var171:Int> isa OTHER */
/* <var171:Int> isa OTHER */
var174 = 1; /* easy <var171:Int> isa OTHER*/
if (unlikely(!var174)) {
var_class_name177 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name177);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 425);
fatal_exit(1);
}
var178 = var_c > var171;
var172 = var178;
goto RET_LABEL173;
RET_LABEL173:(void)0;
}
}
if (var172){
{
{ /* Inline kernel#Int#+ (var_middle,1l) on <var_middle:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var181 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var181)) {
var_class_name184 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name184);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var185 = var_middle + 1l;
var179 = var185;
goto RET_LABEL180;
RET_LABEL180:(void)0;
}
}
var_low = var179;
} else {
{
{ /* Inline kernel#Int#+ (var_offset,2l) on <var_offset:Int> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var188 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var188)) {
var_class_name191 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name191);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var192 = var_offset + 2l;
var186 = var192;
goto RET_LABEL187;
RET_LABEL187:(void)0;
}
}
{
var193 = ((long(*)(val* self, long p0, long p1))(self->class->vft[COLOR_nit__tables__TablesCapable__lexer_goto]))(self, var_old_state, var186); /* lexer_goto on <self:Lexer>*/
}
var_dfa_state = var193;
goto BREAK_label;
}
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
} else {
}
{
{ /* Inline kernel#Int#unary - (2l) on <2l:Int> */
var196 = -2l;
var194 = var196;
goto RET_LABEL195;
RET_LABEL195:(void)0;
}
}
{
{ /* Inline kernel#Int#> (var_dfa_state,var194) on <var_dfa_state:Int> */
/* Covariant cast for argument 0 (i) <var194:Int> isa OTHER */
/* <var194:Int> isa OTHER */
var199 = 1; /* easy <var194:Int> isa OTHER*/
if (unlikely(!var199)) {
var_class_name202 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name202);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 425);
fatal_exit(1);
}
var203 = var_dfa_state > var194;
var197 = var203;
goto RET_LABEL198;
RET_LABEL198:(void)0;
}
}
if (var197){
goto BREAK_label204;
} else {
}
}
BREAK_label204: (void)0;
self->attrs[COLOR_nit__lexer_work__Lexer___cr].s = var_cr; /* _cr on <self:Lexer> */
self->attrs[COLOR_nit__lexer_work__Lexer___line].l = var_line; /* _line on <self:Lexer> */
self->attrs[COLOR_nit__lexer_work__Lexer___pos].l = var_pos; /* _pos on <self:Lexer> */
}
{
{ /* Inline kernel#Int#>= (var_dfa_state,0l) on <var_dfa_state:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var207 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var207)) {
var_class_name210 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name210);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 424);
fatal_exit(1);
}
var211 = var_dfa_state >= 0l;
var205 = var211;
goto RET_LABEL206;
RET_LABEL206:(void)0;
}
}
if (var205){
{
var212 = ((long(*)(val* self, long p0))(self->class->vft[COLOR_nit__tables__TablesCapable__lexer_accept]))(self, var_dfa_state); /* lexer_accept on <self:Lexer>*/
}
var_tok = var212;
{
{ /* Inline kernel#Int#unary - (1l) on <1l:Int> */
var215 = -1l;
var213 = var215;
goto RET_LABEL214;
RET_LABEL214:(void)0;
}
}
{
{ /* Inline kernel#Int#!= (var_tok,var213) on <var_tok:Int> */
var218 = var_tok == var213;
var219 = !var218;
var216 = var219;
goto RET_LABEL217;
RET_LABEL217:(void)0;
}
}
if (var216){
var_accept_state = var_dfa_state;
var_accept_token = var_tok;
{
{ /* Inline kernel#Int#- (var_sp,var_start_stream_pos) on <var_sp:Int> */
/* Covariant cast for argument 0 (i) <var_start_stream_pos:Int> isa OTHER */
/* <var_start_stream_pos:Int> isa OTHER */
var222 = 1; /* easy <var_start_stream_pos:Int> isa OTHER*/
if (unlikely(!var222)) {
var_class_name225 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name225);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 429);
fatal_exit(1);
}
var226 = var_sp - var_start_stream_pos;
var220 = var226;
goto RET_LABEL221;
RET_LABEL221:(void)0;
}
}
var_accept_length = var220;
var227 = self->attrs[COLOR_nit__lexer_work__Lexer___pos].l; /* _pos on <self:Lexer> */
var_accept_pos = var227;
var228 = self->attrs[COLOR_nit__lexer_work__Lexer___line].l; /* _line on <self:Lexer> */
var_accept_line = var228;
} else {
}
} else {
{
{ /* Inline kernel#Int#unary - (1l) on <1l:Int> */
var231 = -1l;
var229 = var231;
goto RET_LABEL230;
RET_LABEL230:(void)0;
}
}
{
{ /* Inline kernel#Int#!= (var_accept_state,var229) on <var_accept_state:Int> */
var234 = var_accept_state == var229;
var235 = !var234;
var232 = var235;
goto RET_LABEL233;
RET_LABEL233:(void)0;
}
}
if (var232){
self->attrs[COLOR_nit__lexer_work__Lexer___pos].l = var_accept_pos; /* _pos on <self:Lexer> */
self->attrs[COLOR_nit__lexer_work__Lexer___line].l = var_accept_line; /* _line on <self:Lexer> */
{
{ /* Inline kernel#Int#+ (var_start_stream_pos,var_accept_length) on <var_start_stream_pos:Int> */
/* Covariant cast for argument 0 (i) <var_accept_length:Int> isa OTHER */
/* <var_accept_length:Int> isa OTHER */
var238 = 1; /* easy <var_accept_length:Int> isa OTHER*/
if (unlikely(!var238)) {
var_class_name241 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name241);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var242 = var_start_stream_pos + var_accept_length;
var236 = var242;
goto RET_LABEL237;
RET_LABEL237:(void)0;
}
}
self->attrs[COLOR_nit__lexer_work__Lexer___stream_pos].l = var236; /* _stream_pos on <self:Lexer> */
{
{ /* Inline kernel#Int#== (var_accept_token,0l) on <var_accept_token:Int> */
var245 = var_accept_token == 0l;
var243 = var245;
goto RET_LABEL244;
RET_LABEL244:(void)0;
}
}
if (var243){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
var246 = NEW_nit__Location(&type_nit__Location);
{
{ /* Inline kernel#Int#+ (var_start_line,1l) on <var_start_line:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var249 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var249)) {
var_class_name252 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name252);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var253 = var_start_line + 1l;
var247 = var253;
goto RET_LABEL248;
RET_LABEL248:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_accept_line,1l) on <var_accept_line:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var256 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var256)) {
var_class_name259 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name259);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var260 = var_accept_line + 1l;
var254 = var260;
goto RET_LABEL255;
RET_LABEL255:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_start_pos,1l) on <var_start_pos:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var263 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var263)) {
var_class_name266 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name266);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var267 = var_start_pos + 1l;
var261 = var267;
goto RET_LABEL262;
RET_LABEL262:(void)0;
}
}
{
((void(*)(val* self, val* p0))(var246->class->vft[COLOR_nit__location__Location__file_61d]))(var246, var_file); /* file= on <var246:Location>*/
}
{
((void(*)(val* self, long p0))(var246->class->vft[COLOR_nit__location__Location__line_start_61d]))(var246, var247); /* line_start= on <var246:Location>*/
}
{
((void(*)(val* self, long p0))(var246->class->vft[COLOR_nit__location__Location__line_end_61d]))(var246, var254); /* line_end= on <var246:Location>*/
}
{
((void(*)(val* self, long p0))(var246->class->vft[COLOR_nit__location__Location__column_start_61d]))(var246, var261); /* column_start= on <var246:Location>*/
}
{
((void(*)(val* self, long p0))(var246->class->vft[COLOR_nit__location__Location__column_end_61d]))(var246, var_accept_pos); /* column_end= on <var246:Location>*/
}
{
((void(*)(val* self))(var246->class->vft[COLOR_standard__kernel__Object__init]))(var246); /* init on <var246:Location>*/
}
var_location = var246;
{
var268 = ((val*(*)(val* self, long p0, val* p1))(self->class->vft[COLOR_nit__lexer_work__Lexer__make_token]))(self, var_accept_token, var_location); /* make_token on <self:Lexer>*/
}
var = var268;
goto RET_LABEL;
} else {
self->attrs[COLOR_nit__lexer_work__Lexer___stream_pos].l = var_sp; /* _stream_pos on <self:Lexer> */
var269 = NEW_nit__Location(&type_nit__Location);
{
{ /* Inline kernel#Int#+ (var_start_line,1l) on <var_start_line:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var272 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var272)) {
var_class_name275 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name275);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var276 = var_start_line + 1l;
var270 = var276;
goto RET_LABEL271;
RET_LABEL271:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_start_line,1l) on <var_start_line:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var279 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var279)) {
var_class_name282 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name282);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var283 = var_start_line + 1l;
var277 = var283;
goto RET_LABEL278;
RET_LABEL278:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_start_pos,1l) on <var_start_pos:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var286 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var286)) {
var_class_name289 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name289);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var290 = var_start_pos + 1l;
var284 = var290;
goto RET_LABEL285;
RET_LABEL285:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_start_pos,1l) on <var_start_pos:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var293 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var293)) {
var_class_name296 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name296);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var297 = var_start_pos + 1l;
var291 = var297;
goto RET_LABEL292;
RET_LABEL292:(void)0;
}
}
{
((void(*)(val* self, val* p0))(var269->class->vft[COLOR_nit__location__Location__file_61d]))(var269, var_file); /* file= on <var269:Location>*/
}
{
((void(*)(val* self, long p0))(var269->class->vft[COLOR_nit__location__Location__line_start_61d]))(var269, var270); /* line_start= on <var269:Location>*/
}
{
((void(*)(val* self, long p0))(var269->class->vft[COLOR_nit__location__Location__line_end_61d]))(var269, var277); /* line_end= on <var269:Location>*/
}
{
((void(*)(val* self, long p0))(var269->class->vft[COLOR_nit__location__Location__column_start_61d]))(var269, var284); /* column_start= on <var269:Location>*/
}
{
((void(*)(val* self, long p0))(var269->class->vft[COLOR_nit__location__Location__column_end_61d]))(var269, var291); /* column_end= on <var269:Location>*/
}
{
((void(*)(val* self))(var269->class->vft[COLOR_standard__kernel__Object__init]))(var269); /* init on <var269:Location>*/
}
var_location298 = var269;
{
{ /* Inline kernel#Int#> (var_sp,var_start_stream_pos) on <var_sp:Int> */
/* Covariant cast for argument 0 (i) <var_start_stream_pos:Int> isa OTHER */
/* <var_start_stream_pos:Int> isa OTHER */
var301 = 1; /* easy <var_start_stream_pos:Int> isa OTHER*/
if (unlikely(!var301)) {
var_class_name304 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name304);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 425);
fatal_exit(1);
}
var305 = var_sp > var_start_stream_pos;
var299 = var305;
goto RET_LABEL300;
RET_LABEL300:(void)0;
}
}
if (var299){
{
{ /* Inline kernel#Int#- (var_sp,var_start_stream_pos) on <var_sp:Int> */
/* Covariant cast for argument 0 (i) <var_start_stream_pos:Int> isa OTHER */
/* <var_start_stream_pos:Int> isa OTHER */
var308 = 1; /* easy <var_start_stream_pos:Int> isa OTHER*/
if (unlikely(!var308)) {
var_class_name311 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name311);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 429);
fatal_exit(1);
}
var312 = var_sp - var_start_stream_pos;
var306 = var312;
goto RET_LABEL307;
RET_LABEL307:(void)0;
}
}
{
var313 = ((val*(*)(val* self, long p0, long p1))(var_string->class->vft[COLOR_standard__string__Text__substring]))(var_string, var_start_stream_pos, var306); /* substring on <var_string:String>*/
}
var_text = var313;
var314 = NEW_nit__ALexerError(&type_nit__ALexerError);
if (unlikely(varonce==NULL)) {
var315 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce316!=NULL)) {
var317 = varonce316;
} else {
var318 = "Syntax Error: unknown token `";
var319 = standard___standard__NativeString___to_s_with_length(var318, 29l);
var317 = var319;
varonce316 = var317;
}
((struct instance_standard__NativeArray*)var315)->values[0]=var317;
if (likely(varonce320!=NULL)) {
var321 = varonce320;
} else {
var322 = "`.";
var323 = standard___standard__NativeString___to_s_with_length(var322, 2l);
var321 = var323;
varonce320 = var321;
}
((struct instance_standard__NativeArray*)var315)->values[2]=var321;
} else {
var315 = varonce;
varonce = NULL;
}
((struct instance_standard__NativeArray*)var315)->values[1]=var_text;
{
var324 = ((val*(*)(val* self))(var315->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var315); /* native_to_s on <var315:NativeArray[String]>*/
}
varonce = var315;
{
((void(*)(val* self, val* p0, val* p1, val* p2))(var314->class->vft[COLOR_nit__lexer_work__ALexerError__init_lexer_error]))(var314, var324, var_location298, var_text); /* init_lexer_error on <var314:ALexerError>*/
}
var_token = var314;
{
((void(*)(val* self, val* p0))(var_file->class->vft[COLOR_nit__parser_nodes__SourceFile__last_token_61d]))(var_file, var_token); /* last_token= on <var_file:SourceFile>*/
}
var = var_token;
goto RET_LABEL;
} else {
var325 = NEW_nit__EOF(&type_nit__EOF);
{
((void(*)(val* self, val* p0))(var325->class->vft[COLOR_nit__lexer_work__EOF__init_tk]))(var325, var_location298); /* init_tk on <var325:EOF>*/
}
var_token326 = var325;
{
((void(*)(val* self, val* p0))(var_file->class->vft[COLOR_nit__parser_nodes__SourceFile__last_token_61d]))(var_file, var_token326); /* last_token= on <var_file:SourceFile>*/
}
var = var_token326;
goto RET_LABEL;
}
}
}
}
RET_LABEL:;
return var;
}
/* method lexer_work#Lexer#make_token for (self: Lexer, Int, Location): Token */
val* nit___nit__Lexer___make_token(val* self, long p0, val* p1) {
val* var /* : Token */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "make_token", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__lexer_work, 264);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method lexer_work#Lexer#init for (self: Lexer) */
void nit___nit__Lexer___standard__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_nit___nit__Lexer___standard__kernel__Object__init]))(self); /* init on <self:Lexer>*/
}
RET_LABEL:;
}
