#include "standard__exec.sep.0.h"
/* method exec#Process#id for (self: Process): Int */
long standard___standard__Process___id(val* self) {
long var /* : Int */;
val* var1 /* : NativeProcess */;
long var2 /* : Int */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__exec__Process__data]))(self); /* data on <self:Process>*/
}
{
var2 = ((long(*)(val* self))(var1->class->vft[COLOR_standard__exec__NativeProcess__id]))(var1); /* id on <var1:NativeProcess>*/
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method exec#Process#is_finished for (self: Process): Bool */
short int standard___standard__Process___is_finished(val* self) {
short int var /* : Bool */;
val* var1 /* : NativeProcess */;
short int var2 /* : Bool */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__exec__Process__data]))(self); /* data on <self:Process>*/
}
{
var2 = ((short int(*)(val* self))(var1->class->vft[COLOR_standard__exec__NativeProcess__is_finished]))(var1); /* is_finished on <var1:NativeProcess>*/
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method exec#Process#wait for (self: Process) */
void standard___standard__Process___wait(val* self) {
val* var /* : NativeProcess */;
short int var1 /* : Bool */;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_standard__exec__Process__data]))(self); /* data on <self:Process>*/
}
{
((void(*)(val* self))(var->class->vft[COLOR_standard__exec__NativeProcess__wait]))(var); /* wait on <var:NativeProcess>*/
}
{
var1 = ((short int(*)(val* self))(self->class->vft[COLOR_standard__exec__Process__is_finished]))(self); /* is_finished on <self:Process>*/
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__exec, 32);
fatal_exit(1);
}
RET_LABEL:;
}
/* method exec#Process#status for (self: Process): Int */
long standard___standard__Process___status(val* self) {
long var /* : Int */;
short int var1 /* : Bool */;
val* var2 /* : NativeProcess */;
long var3 /* : Int */;
{
var1 = ((short int(*)(val* self))(self->class->vft[COLOR_standard__exec__Process__is_finished]))(self); /* is_finished on <self:Process>*/
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__exec, 38);
fatal_exit(1);
}
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__exec__Process__data]))(self); /* data on <self:Process>*/
}
{
var3 = ((long(*)(val* self))(var2->class->vft[COLOR_standard__exec__NativeProcess__status]))(var2); /* status on <var2:NativeProcess>*/
}
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method exec#Process#command for (self: Process): String */
val* standard___standard__Process___command(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_standard__exec__Process___command].val; /* _command on <self:Process> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _command");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__exec, 42);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method exec#Process#command= for (self: Process, String) */
void standard___standard__Process___command_61d(val* self, val* p0) {
self->attrs[COLOR_standard__exec__Process___command].val = p0; /* _command on <self:Process> */
RET_LABEL:;
}
/* method exec#Process#arguments for (self: Process): nullable Array[String] */
val* standard___standard__Process___arguments(val* self) {
val* var /* : nullable Array[String] */;
val* var1 /* : nullable Array[String] */;
var1 = self->attrs[COLOR_standard__exec__Process___arguments].val; /* _arguments on <self:Process> */
var = var1;
RET_LABEL:;
return var;
}
/* method exec#Process#arguments= for (self: Process, nullable Array[String]) */
void standard___standard__Process___arguments_61d(val* self, val* p0) {
self->attrs[COLOR_standard__exec__Process___arguments].val = p0; /* _arguments on <self:Process> */
RET_LABEL:;
}
/* method exec#Process#init for (self: Process, String, Array[String]) */
void standard___standard__Process___init(val* self, val* p0, val* p1) {
val* var_command /* var command: String */;
val* var_arguments /* var arguments: Array[String] */;
var_command = p0;
var_arguments = p1;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_standard__exec__Process__command_61d]))(self, var_command); /* command= on <self:Process>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_standard__exec__Process__arguments_61d]))(self, var_arguments); /* arguments= on <self:Process>*/
}
{
((void(*)(val* self))(self->class->vft[COLOR_standard__exec__Process__execute]))(self); /* execute on <self:Process>*/
}
RET_LABEL:;
}
/* method exec#Process#from_a for (self: Process, String, nullable Array[String]) */
void standard___standard__Process___from_a(val* self, val* p0, val* p1) {
val* var_command /* var command: String */;
val* var_arguments /* var arguments: nullable Array[String] */;
var_command = p0;
var_arguments = p1;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_standard__exec__Process__command_61d]))(self, var_command); /* command= on <self:Process>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_standard__exec__Process__arguments_61d]))(self, var_arguments); /* arguments= on <self:Process>*/
}
{
((void(*)(val* self))(self->class->vft[COLOR_standard__exec__Process__execute]))(self); /* execute on <self:Process>*/
}
RET_LABEL:;
}
/* method exec#Process#pipeflags for (self: Process): Int */
long standard___standard__Process___pipeflags(val* self) {
long var /* : Int */;
var = 0l;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method exec#Process#execute for (self: Process) */
void standard___standard__Process___execute(val* self) {
val* var /* : FlatBuffer */;
val* var_args /* var args: FlatBuffer */;
long var_l /* var l: Int */;
val* var1 /* : String */;
val* var2 /* : nullable Array[String] */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var5 /* : nullable Array[String] */;
val* var_ /* var : nullable Array[String] */;
val* var6 /* : Iterator[nullable Object] */;
val* var_7 /* var : ArrayIterator[String] */;
short int var8 /* : Bool */;
val* var9 /* : nullable Object */;
val* var_a /* var a: String */;
val* var10 /* : nullable Array[String] */;
long var11 /* : Int */;
long var12 /* : Int */;
short int var14 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var15 /* : Int */;
val* var16 /* : String */;
char* var17 /* : NativeString */;
val* var18 /* : String */;
char* var19 /* : NativeString */;
long var20 /* : Int */;
val* var21 /* : NativeProcess */;
var = NEW_standard__FlatBuffer(&type_standard__FlatBuffer);
{
((void(*)(val* self))(var->class->vft[COLOR_standard__kernel__Object__init]))(var); /* init on <var:FlatBuffer>*/
}
var_args = var;
var_l = 1l;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__exec__Process__command]))(self); /* command on <self:Process>*/
}
{
((void(*)(val* self, val* p0))(var_args->class->vft[COLOR_standard__string__Buffer__append]))(var_args, var1); /* append on <var_args:FlatBuffer>*/
}
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__exec__Process__arguments]))(self); /* arguments on <self:Process>*/
}
if (var2 == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (0) {
var4 = ((short int(*)(val* self, val* p0))(var2->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var2, ((val*)NULL)); /* != on <var2:nullable Array[String]>*/
var3 = var4;
}
if (var3){
{
var5 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__exec__Process__arguments]))(self); /* arguments on <self:Process>*/
}
var_ = var5;
if (var_ == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__exec, 76);
fatal_exit(1);
} else {
var6 = ((val*(*)(val* self))(var_->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:nullable Array[String]>*/
}
var_7 = var6;
for(;;) {
{
var8 = ((short int(*)(val* self))(var_7->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_7); /* is_ok on <var_7:ArrayIterator[String]>*/
}
if (var8){
{
var9 = ((val*(*)(val* self))(var_7->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_7); /* item on <var_7:ArrayIterator[String]>*/
}
var_a = var9;
{
((void(*)(val* self, char p0))(var_args->class->vft[COLOR_standard__string__Buffer__add]))(var_args, '\000'); /* add on <var_args:FlatBuffer>*/
}
{
((void(*)(val* self, val* p0))(var_args->class->vft[COLOR_standard__string__Buffer__append]))(var_args, var_a); /* append on <var_args:FlatBuffer>*/
}
{
((void(*)(val* self))(var_7->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_7); /* next on <var_7:ArrayIterator[String]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))(var_7->class->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_7); /* finish on <var_7:ArrayIterator[String]>*/
}
{
var10 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__exec__Process__arguments]))(self); /* arguments on <self:Process>*/
}
if (var10 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__exec, 81);
fatal_exit(1);
} else {
var11 = ((long(*)(val* self))(var10->class->vft[COLOR_standard__abstract_collection__Collection__length]))(var10); /* length on <var10:nullable Array[String]>*/
}
{
{ /* Inline kernel#Int#+ (var_l,var11) on <var_l:Int> */
/* Covariant cast for argument 0 (i) <var11:Int> isa OTHER */
/* <var11:Int> isa OTHER */
var14 = 1; /* easy <var11:Int> isa OTHER*/
if (unlikely(!var14)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var15 = var_l + var11;
var12 = var15;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
var_l = var12;
} else {
}
{
var16 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__exec__Process__command]))(self); /* command on <self:Process>*/
}
{
var17 = ((char*(*)(val* self))(var16->class->vft[COLOR_standard__string__Text__to_cstring]))(var16); /* to_cstring on <var16:String>*/
}
{
var18 = ((val*(*)(val* self))(var_args->class->vft[COLOR_standard__string__Object__to_s]))(var_args); /* to_s on <var_args:FlatBuffer>*/
}
{
var19 = ((char*(*)(val* self))(var18->class->vft[COLOR_standard__string__Text__to_cstring]))(var18); /* to_cstring on <var18:String>*/
}
{
var20 = ((long(*)(val* self))(self->class->vft[COLOR_standard__exec__Process__pipeflags]))(self); /* pipeflags on <self:Process>*/
}
{
var21 = ((val*(*)(val* self, char* p0, char* p1, long p2, long p3))(self->class->vft[COLOR_standard__exec__Process__basic_exec_execute]))(self, var17, var19, var_l, var20); /* basic_exec_execute on <self:Process>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_standard__exec__Process__data_61d]))(self, var21); /* data= on <self:Process>*/
}
RET_LABEL:;
}
/* method exec#Process#data for (self: Process): NativeProcess */
val* standard___standard__Process___data(val* self) {
val* var /* : NativeProcess */;
val* var1 /* : NativeProcess */;
var1 = self->attrs[COLOR_standard__exec__Process___data].val; /* _data on <self:Process> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _data");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__exec, 86);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method exec#Process#data= for (self: Process, NativeProcess) */
void standard___standard__Process___data_61d(val* self, val* p0) {
self->attrs[COLOR_standard__exec__Process___data].val = p0; /* _data on <self:Process> */
RET_LABEL:;
}
/* method exec#Process#basic_exec_execute for (self: Process, NativeString, NativeString, Int, Int): NativeProcess */
val* standard___standard__Process___basic_exec_execute(val* self, char* p0, char* p1, long p2, long p3) {
val* var /* : NativeProcess */;
void* var1 /* : NativeProcess for extern */;
val* var2 /* : NativeProcess */;
var1 = exec_Process_Process_basic_exec_execute_4(self, p0, p1, p2, p3);
var2 = BOX_standard__Pointer(var1); /* boxing NativeProcess */
var2->type = &type_standard__exec__NativeProcess;
var2->class = &class_standard__exec__NativeProcess;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method exec#ProcessReader#stream_in for (self: ProcessReader): FileReader */
val* standard___standard__ProcessReader___stream_in(val* self) {
val* var /* : FileReader */;
val* var1 /* : FileReader */;
var1 = self->attrs[COLOR_standard__exec__ProcessReader___stream_in].val; /* _stream_in on <self:ProcessReader> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _stream_in");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__exec, 95);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method exec#ProcessReader#stream_in= for (self: ProcessReader, FileReader) */
void standard___standard__ProcessReader___stream_in_61d(val* self, val* p0) {
self->attrs[COLOR_standard__exec__ProcessReader___stream_in].val = p0; /* _stream_in on <self:ProcessReader> */
RET_LABEL:;
}
/* method exec#ProcessReader#close for (self: ProcessReader) */
void standard___standard__ProcessReader___standard__stream__Stream__close(val* self) {
val* var /* : FileReader */;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_standard__exec__ProcessReader__stream_in]))(self); /* stream_in on <self:ProcessReader>*/
}
{
((void(*)(val* self))(var->class->vft[COLOR_standard__stream__Stream__close]))(var); /* close on <var:FileReader>*/
}
RET_LABEL:;
}
/* method exec#ProcessReader#read_char for (self: ProcessReader): Int */
long standard___standard__ProcessReader___standard__stream__Reader__read_char(val* self) {
long var /* : Int */;
val* var1 /* : FileReader */;
long var2 /* : Int */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__exec__ProcessReader__stream_in]))(self); /* stream_in on <self:ProcessReader>*/
}
{
var2 = ((long(*)(val* self))(var1->class->vft[COLOR_standard__stream__Reader__read_char]))(var1); /* read_char on <var1:FileReader>*/
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method exec#ProcessReader#eof for (self: ProcessReader): Bool */
short int standard___standard__ProcessReader___standard__stream__Reader__eof(val* self) {
short int var /* : Bool */;
val* var1 /* : FileReader */;
short int var2 /* : Bool */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__exec__ProcessReader__stream_in]))(self); /* stream_in on <self:ProcessReader>*/
}
{
var2 = ((short int(*)(val* self))(var1->class->vft[COLOR_standard__stream__Reader__eof]))(var1); /* eof on <var1:FileReader>*/
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method exec#ProcessReader#pipeflags for (self: ProcessReader): Int */
long standard___standard__ProcessReader___Process__pipeflags(val* self) {
long var /* : Int */;
var = 2l;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method exec#ProcessReader#execute for (self: ProcessReader) */
void standard___standard__ProcessReader___Process__execute(val* self) {
val* var /* : FileReader */;
val* var1 /* : NativeProcess */;
long var2 /* : Int */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard___standard__ProcessReader___Process__execute]))(self); /* execute on <self:ProcessReader>*/
}
var = NEW_standard__FileReader(&type_standard__FileReader);
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__exec__Process__data]))(self); /* data on <self:ProcessReader>*/
}
{
var2 = ((long(*)(val* self))(var1->class->vft[COLOR_standard__exec__NativeProcess__out_fd]))(var1); /* out_fd on <var1:NativeProcess>*/
}
{
((void(*)(val* self, long p0))(var->class->vft[COLOR_standard__file__FileReader__from_fd]))(var, var2); /* from_fd on <var:FileReader>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_standard__exec__ProcessReader__stream_in_61d]))(self, var); /* stream_in= on <self:ProcessReader>*/
}
RET_LABEL:;
}
/* method exec#ProcessWriter#stream_out for (self: ProcessWriter): Writer */
val* standard___standard__ProcessWriter___stream_out(val* self) {
val* var /* : Writer */;
val* var1 /* : Writer */;
var1 = self->attrs[COLOR_standard__exec__ProcessWriter___stream_out].val; /* _stream_out on <self:ProcessWriter> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _stream_out");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__exec, 118);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method exec#ProcessWriter#stream_out= for (self: ProcessWriter, Writer) */
void standard___standard__ProcessWriter___stream_out_61d(val* self, val* p0) {
self->attrs[COLOR_standard__exec__ProcessWriter___stream_out].val = p0; /* _stream_out on <self:ProcessWriter> */
RET_LABEL:;
}
/* method exec#ProcessWriter#close for (self: ProcessWriter) */
void standard___standard__ProcessWriter___standard__stream__Stream__close(val* self) {
val* var /* : Writer */;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_standard__exec__ProcessWriter__stream_out]))(self); /* stream_out on <self:ProcessWriter>*/
}
{
((void(*)(val* self))(var->class->vft[COLOR_standard__stream__Stream__close]))(var); /* close on <var:Writer>*/
}
RET_LABEL:;
}
/* method exec#ProcessWriter#is_writable for (self: ProcessWriter): Bool */
short int standard___standard__ProcessWriter___standard__stream__Writer__is_writable(val* self) {
short int var /* : Bool */;
val* var1 /* : Writer */;
short int var2 /* : Bool */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__exec__ProcessWriter__stream_out]))(self); /* stream_out on <self:ProcessWriter>*/
}
{
var2 = ((short int(*)(val* self))(var1->class->vft[COLOR_standard__stream__Writer__is_writable]))(var1); /* is_writable on <var1:Writer>*/
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method exec#ProcessWriter#write for (self: ProcessWriter, Text) */
void standard___standard__ProcessWriter___standard__stream__Writer__write(val* self, val* p0) {
val* var_s /* var s: Text */;
val* var /* : Writer */;
var_s = p0;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_standard__exec__ProcessWriter__stream_out]))(self); /* stream_out on <self:ProcessWriter>*/
}
{
((void(*)(val* self, val* p0))(var->class->vft[COLOR_standard__stream__Writer__write]))(var, var_s); /* write on <var:Writer>*/
}
RET_LABEL:;
}
/* method exec#ProcessWriter#pipeflags for (self: ProcessWriter): Int */
long standard___standard__ProcessWriter___Process__pipeflags(val* self) {
long var /* : Int */;
var = 1l;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method exec#ProcessWriter#execute for (self: ProcessWriter) */
void standard___standard__ProcessWriter___Process__execute(val* self) {
val* var /* : FileWriter */;
val* var1 /* : NativeProcess */;
long var2 /* : Int */;
val* var_out /* var out: FileWriter */;
val* var3 /* : Sys */;
val* var5 /* : Sys */;
long var6 /* : Int */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard___standard__ProcessWriter___Process__execute]))(self); /* execute on <self:ProcessWriter>*/
}
var = NEW_standard__FileWriter(&type_standard__FileWriter);
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__exec__Process__data]))(self); /* data on <self:ProcessWriter>*/
}
{
var2 = ((long(*)(val* self))(var1->class->vft[COLOR_standard__exec__NativeProcess__in_fd]))(var1); /* in_fd on <var1:NativeProcess>*/
}
{
((void(*)(val* self, long p0))(var->class->vft[COLOR_standard__file__FileWriter__from_fd]))(var, var2); /* from_fd on <var:FileWriter>*/
}
var_out = var;
{
{ /* Inline kernel#Object#sys (self) on <self:ProcessWriter> */
var5 = glob_sys;
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
{
var6 = ((long(*)(val* self))(var3->class->vft[COLOR_standard__file__Sys__buffer_mode_none]))(var3); /* buffer_mode_none on <var3:Sys>*/
}
{
((void(*)(val* self, long p0, long p1))(var_out->class->vft[COLOR_standard__file__FileStream__set_buffering_mode]))(var_out, 0l, var6); /* set_buffering_mode on <var_out:FileWriter>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_standard__exec__ProcessWriter__stream_out_61d]))(self, var_out); /* stream_out= on <self:ProcessWriter>*/
}
RET_LABEL:;
}
/* method exec#ProcessDuplex#close for (self: ProcessDuplex) */
void standard___standard__ProcessDuplex___standard__stream__Stream__close(val* self) {
val* var /* : FileReader */;
val* var1 /* : Writer */;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_standard__exec__ProcessReader__stream_in]))(self); /* stream_in on <self:ProcessDuplex>*/
}
{
((void(*)(val* self))(var->class->vft[COLOR_standard__stream__Stream__close]))(var); /* close on <var:FileReader>*/
}
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__exec__ProcessWriter__stream_out]))(self); /* stream_out on <self:ProcessDuplex>*/
}
{
((void(*)(val* self))(var1->class->vft[COLOR_standard__stream__Stream__close]))(var1); /* close on <var1:Writer>*/
}
RET_LABEL:;
}
/* method exec#ProcessDuplex#pipeflags for (self: ProcessDuplex): Int */
long standard___standard__ProcessDuplex___Process__pipeflags(val* self) {
long var /* : Int */;
var = 3l;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method exec#ProcessDuplex#execute for (self: ProcessDuplex) */
void standard___standard__ProcessDuplex___Process__execute(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_standard___standard__ProcessDuplex___Process__execute]))(self); /* execute on <self:ProcessDuplex>*/
}
RET_LABEL:;
}
/* method exec#Sys#system for (self: Sys, String): Int */
long standard__exec___Sys___system(val* self, val* p0) {
long var /* : Int */;
val* var_command /* var command: String */;
char* var1 /* : NativeString */;
long var2 /* : Int */;
var_command = p0;
{
var1 = ((char*(*)(val* self))(var_command->class->vft[COLOR_standard__string__Text__to_cstring]))(var_command); /* to_cstring on <var_command:String>*/
}
var2 = standard__exec___NativeString___system(var1);
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method exec#NativeString#system for (self: NativeString): Int */
long standard__exec___NativeString___system(char* self) {
long var /* : Int */;
long var1 /* : Int for extern */;
var1 = string_NativeString_NativeString_system_0(self);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method exec#NativeProcess#id for (self: NativeProcess): Int */
long standard__exec___standard__exec__NativeProcess___id(val* self) {
long var /* : Int */;
long var1 /* : Int for extern */;
void* var2 /* : NativeProcess for extern */;
var2 = ((struct instance_standard__Pointer*)self)->value; /* unboxing NativeProcess */
var1 = exec_NativeProcess_NativeProcess_id_0(var2);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method exec#NativeProcess#is_finished for (self: NativeProcess): Bool */
short int standard__exec___standard__exec__NativeProcess___is_finished(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool for extern */;
void* var2 /* : NativeProcess for extern */;
var2 = ((struct instance_standard__Pointer*)self)->value; /* unboxing NativeProcess */
var1 = exec_NativeProcess_NativeProcess_is_finished_0(var2);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method exec#NativeProcess#status for (self: NativeProcess): Int */
long standard__exec___standard__exec__NativeProcess___status(val* self) {
long var /* : Int */;
long var1 /* : Int for extern */;
void* var2 /* : NativeProcess for extern */;
var2 = ((struct instance_standard__Pointer*)self)->value; /* unboxing NativeProcess */
var1 = exec_NativeProcess_NativeProcess_status_0(var2);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method exec#NativeProcess#wait for (self: NativeProcess) */
void standard__exec___standard__exec__NativeProcess___wait(val* self) {
void* var /* : NativeProcess for extern */;
var = ((struct instance_standard__Pointer*)self)->value; /* unboxing NativeProcess */
exec_NativeProcess_NativeProcess_wait_0(var);
RET_LABEL:;
}
/* method exec#NativeProcess#in_fd for (self: NativeProcess): Int */
long standard__exec___standard__exec__NativeProcess___in_fd(val* self) {
long var /* : Int */;
long var1 /* : Int for extern */;
void* var2 /* : NativeProcess for extern */;
var2 = ((struct instance_standard__Pointer*)self)->value; /* unboxing NativeProcess */
var1 = exec_NativeProcess_NativeProcess_in_fd_0(var2);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method exec#NativeProcess#out_fd for (self: NativeProcess): Int */
long standard__exec___standard__exec__NativeProcess___out_fd(val* self) {
long var /* : Int */;
long var1 /* : Int for extern */;
void* var2 /* : NativeProcess for extern */;
var2 = ((struct instance_standard__Pointer*)self)->value; /* unboxing NativeProcess */
var1 = exec_NativeProcess_NativeProcess_out_fd_0(var2);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method exec#NativeProcess#err_fd for (self: NativeProcess): Int */
long standard__exec___standard__exec__NativeProcess___err_fd(val* self) {
long var /* : Int */;
long var1 /* : Int for extern */;
void* var2 /* : NativeProcess for extern */;
var2 = ((struct instance_standard__Pointer*)self)->value; /* unboxing NativeProcess */
var1 = exec_NativeProcess_NativeProcess_err_fd_0(var2);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
