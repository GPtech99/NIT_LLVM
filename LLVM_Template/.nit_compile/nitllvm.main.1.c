#include "nitllvm.main.0.h"
struct nitni_global_ref_list_t *nitni_global_ref_list;
void initialize_nitni_global_refs() {
	nitni_global_ref_list = (struct nitni_global_ref_list_t*)nit_alloc(sizeof(struct nitni_global_ref_list_t));
	nitni_global_ref_list->head = NULL;
	nitni_global_ref_list->tail = NULL;
}

void nitni_global_ref_add( struct nitni_ref *ref ) {
	if ( nitni_global_ref_list->head == NULL ) {
		nitni_global_ref_list->head = ref;
		ref->prev = NULL;
	} else {
		nitni_global_ref_list->tail->next = ref;
		ref->prev = nitni_global_ref_list->tail;
	}
	nitni_global_ref_list->tail = ref;

	ref->next = NULL;
}

void nitni_global_ref_remove( struct nitni_ref *ref ) {
	if ( ref->prev == NULL ) {
		nitni_global_ref_list->head = ref->next;
	} else {
		ref->prev->next = ref->next;
	}

	if ( ref->next == NULL ) {
		nitni_global_ref_list->tail = ref->prev;
	} else {
		ref->next->prev = ref->prev;
	}
}

extern void nitni_global_ref_incr( struct nitni_ref *ref ) {
	if ( ref->count == 0 ) /* not registered */
	{
		/* add to list */
		nitni_global_ref_add( ref );
	}

	ref->count ++;
}

extern void nitni_global_ref_decr( struct nitni_ref *ref ) {
	if ( ref->count == 1 ) /* was last reference */
	{
		/* remove from list */
		nitni_global_ref_remove( ref );
	}

	ref->count --;
}

#include <signal.h>
#define UNW_LOCAL_ONLY
#include <libunwind.h>
#include "c_functions_hash.h"
int glob_argc;
char **glob_argv;
val *glob_sys;
static void show_backtrace(void) {
char* opt = getenv("NIT_NO_STACK");
unw_cursor_t cursor;
if(opt==NULL){
unw_context_t uc;
unw_word_t ip;
char* procname = malloc(sizeof(char) * 100);
unw_getcontext(&uc);
unw_init_local(&cursor, &uc);
PRINT_ERROR("-------------------------------------------------\n");
PRINT_ERROR("--   Stack Trace   ------------------------------\n");
PRINT_ERROR("-------------------------------------------------\n");
while (unw_step(&cursor) > 0) {
	unw_get_proc_name(&cursor, procname, 100, &ip);
	const char* recv = get_nit_name(procname, strlen(procname));
	if (recv != NULL){
		PRINT_ERROR("` %s\n", recv);
	}else{
		PRINT_ERROR("` %s\n", procname);
	}
}
PRINT_ERROR("-------------------------------------------------\n");
free(procname);
}
}
void sig_handler(int signo){
PRINT_ERROR("Caught signal : %s\n", strsignal(signo));
show_backtrace();
signal(signo, SIG_DFL);
kill(getpid(), signo);
}
void fatal_exit(int status) {
show_backtrace();
exit(status);
}
int main(int argc, char** argv) {
val* var /* : Sys */;
signal(SIGABRT, sig_handler);
signal(SIGFPE, sig_handler);
signal(SIGILL, sig_handler);
signal(SIGINT, sig_handler);
signal(SIGTERM, sig_handler);
signal(SIGSEGV, sig_handler);
signal(SIGPIPE, sig_handler);
glob_argc = argc; glob_argv = argv;
initialize_gc_option();
initialize_nitni_global_refs();
var = NEW_standard__Sys(&type_standard__Sys);
glob_sys = var;
{
((void(*)(val* self))(var->class->vft[COLOR_standard__kernel__Object__init]))(var); /* init on <var:Sys>*/
}
{
((void(*)(val* self))(var->class->vft[COLOR_standard__kernel__Sys__run]))(var); /* run on <var:Sys>*/
}
return 0;
}
const char FILE_nitllvm[] = "./nitllvm.nit";
const char FILE_nit__modelbuilder[] = "/home/ouajdi/Desktop/nit/src/modelbuilder.nit";
const char FILE_nit__loader[] = "/home/ouajdi/Desktop/nit/src/loader.nit";
const char FILE_nit__modelbuilder_base[] = "/home/ouajdi/Desktop/nit/src/modelbuilder_base.nit";
const char FILE_nit__model[] = "/home/ouajdi/Desktop/nit/src/model/model.nit";
const char FILE_nit__mmodule[] = "/home/ouajdi/Desktop/nit/src/model/mmodule.nit";
const char FILE_nit__location[] = "/home/ouajdi/Desktop/nit/src/location.nit";
const char FILE_standard[] = "/home/ouajdi/Desktop/nit/lib/standard/standard.nit";
const char FILE_standard__posix[] = "/home/ouajdi/Desktop/nit/lib/standard/posix.nit";
const char FILE_standard__string[] = "/home/ouajdi/Desktop/nit/lib/standard/string.nit";
const char FILE_standard__math[] = "/home/ouajdi/Desktop/nit/lib/standard/math.nit";
const char FILE_standard__kernel[] = "/home/ouajdi/Desktop/nit/lib/standard/kernel.nit";
const char FILE_standard__collection[] = "/home/ouajdi/Desktop/nit/lib/standard/collection/collection.nit";
const char FILE_standard__range[] = "/home/ouajdi/Desktop/nit/lib/standard/collection/range.nit";
const char FILE_standard__abstract_collection[] = "/home/ouajdi/Desktop/nit/lib/standard/collection/abstract_collection.nit";
const char FILE_standard__list[] = "/home/ouajdi/Desktop/nit/lib/standard/collection/list.nit";
const char FILE_standard__array[] = "/home/ouajdi/Desktop/nit/lib/standard/collection/array.nit";
const char FILE_standard__sorter[] = "/home/ouajdi/Desktop/nit/lib/standard/collection/sorter.nit";
const char FILE_standard__hash_collection[] = "/home/ouajdi/Desktop/nit/lib/standard/collection/hash_collection.nit";
const char FILE_standard__union_find[] = "/home/ouajdi/Desktop/nit/lib/standard/collection/union_find.nit";
const char FILE_standard__environ[] = "/home/ouajdi/Desktop/nit/lib/standard/environ.nit";
const char FILE_standard__file[] = "/home/ouajdi/Desktop/nit/lib/standard/file.nit";
const char FILE_standard__stream[] = "/home/ouajdi/Desktop/nit/lib/standard/stream.nit";
const char FILE_standard__ropes[] = "/home/ouajdi/Desktop/nit/lib/standard/ropes.nit";
const char FILE_standard__error[] = "/home/ouajdi/Desktop/nit/lib/standard/error.nit";
const char FILE_standard__string_search[] = "/home/ouajdi/Desktop/nit/lib/standard/string_search.nit";
const char FILE_standard__time[] = "/home/ouajdi/Desktop/nit/lib/standard/time.nit";
const char FILE_standard__gc[] = "/home/ouajdi/Desktop/nit/lib/standard/gc.nit";
const char FILE_standard__exec[] = "/home/ouajdi/Desktop/nit/lib/standard/exec.nit";
const char FILE_standard__bitset[] = "/home/ouajdi/Desktop/nit/lib/standard/bitset.nit";
const char FILE_standard__queue[] = "/home/ouajdi/Desktop/nit/lib/standard/queue.nit";
const char FILE_standard__numeric[] = "/home/ouajdi/Desktop/nit/lib/standard/numeric.nit";
const char FILE_standard__re[] = "/home/ouajdi/Desktop/nit/lib/standard/re.nit";
const char FILE_nit__mproject[] = "/home/ouajdi/Desktop/nit/src/model/mproject.nit";
const char FILE_nit__model_base[] = "/home/ouajdi/Desktop/nit/src/model/model_base.nit";
const char FILE_more_collections[] = "/home/ouajdi/Desktop/nit/lib/more_collections.nit";
const char FILE_poset[] = "/home/ouajdi/Desktop/nit/lib/poset.nit";
const char FILE_nit__mdoc[] = "/home/ouajdi/Desktop/nit/src/model/mdoc.nit";
const char FILE_ordered_tree[] = "/home/ouajdi/Desktop/nit/lib/ordered_tree.nit";
const char FILE_nit__toolcontext[] = "/home/ouajdi/Desktop/nit/src/toolcontext.nit";
const char FILE_opts[] = "/home/ouajdi/Desktop/nit/lib/opts.nit";
const char FILE_nit__version[] = "/home/ouajdi/Desktop/nit/src/version.nit";
const char FILE_template[] = "/home/ouajdi/Desktop/nit/lib/template/template.nit";
const char FILE_nit__parser[] = "/home/ouajdi/Desktop/nit/src/parser/parser.nit";
const char FILE_nit__parser_prod[] = "/home/ouajdi/Desktop/nit/src/parser/parser_prod.nit";
const char FILE_nit__lexer[] = "/home/ouajdi/Desktop/nit/src/parser/lexer.nit";
const char FILE_nit__parser_nodes[] = "/home/ouajdi/Desktop/nit/src/parser/parser_nodes.nit";
const char FILE_nit__lexer_work[] = "/home/ouajdi/Desktop/nit/src/parser/lexer_work.nit";
const char FILE_nit__tables[] = "/home/ouajdi/Desktop/nit/src/parser/tables.nit";
const char FILE_nit__parser_work[] = "/home/ouajdi/Desktop/nit/src/parser/parser_work.nit";
const char FILE_nit__phase[] = "/home/ouajdi/Desktop/nit/src/phase.nit";
const char FILE_nit__frontend[] = "/home/ouajdi/Desktop/nit/src/frontend/frontend.nit";
const char FILE_nit__no_warning[] = "/home/ouajdi/Desktop/nit/src/frontend/no_warning.nit";
const char FILE_nit__literal[] = "/home/ouajdi/Desktop/nit/src/literal.nit";
const char FILE_nit__simple_misc_analysis[] = "/home/ouajdi/Desktop/nit/src/frontend/simple_misc_analysis.nit";
const char FILE_nit__modelize[] = "/home/ouajdi/Desktop/nit/src/modelize/modelize.nit";
const char FILE_nit__modelize_property[] = "/home/ouajdi/Desktop/nit/src/modelize/modelize_property.nit";
const char FILE_nit__modelize_class[] = "/home/ouajdi/Desktop/nit/src/modelize/modelize_class.nit";
const char FILE_nit__annotation[] = "/home/ouajdi/Desktop/nit/src/annotation.nit";
const char FILE_nit__mmodule_data[] = "/home/ouajdi/Desktop/nit/src/model/mmodule_data.nit";
const char FILE_nit__semantize[] = "/home/ouajdi/Desktop/nit/src/semantize/semantize.nit";
const char FILE_nit__auto_super_init[] = "/home/ouajdi/Desktop/nit/src/semantize/auto_super_init.nit";
const char FILE_nit__typing[] = "/home/ouajdi/Desktop/nit/src/semantize/typing.nit";
const char FILE_nit__local_var_init[] = "/home/ouajdi/Desktop/nit/src/semantize/local_var_init.nit";
const char FILE_nit__flow[] = "/home/ouajdi/Desktop/nit/src/semantize/flow.nit";
const char FILE_nit__scope[] = "/home/ouajdi/Desktop/nit/src/semantize/scope.nit";
const char FILE_nit__div_by_zero[] = "/home/ouajdi/Desktop/nit/src/frontend/div_by_zero.nit";
const char FILE_nit__serialization_phase[] = "/home/ouajdi/Desktop/nit/src/frontend/serialization_phase.nit";
const char FILE_nit__parser_util[] = "/home/ouajdi/Desktop/nit/src/parser_util.nit";
const char FILE_nit__deriving[] = "/home/ouajdi/Desktop/nit/src/frontend/deriving.nit";
const char FILE_nit__check_annotation[] = "/home/ouajdi/Desktop/nit/src/frontend/check_annotation.nit";
const char FILE_nit__glsl_validation[] = "/home/ouajdi/Desktop/nit/src/frontend/glsl_validation.nit";
const char FILE_nit__parallelization_phase[] = "/home/ouajdi/Desktop/nit/src/frontend/parallelization_phase.nit";
const char FILE_nit__astbuilder[] = "/home/ouajdi/Desktop/nit/src/astbuilder.nit";
const char FILE_nit__model_utils[] = "/home/ouajdi/Desktop/nit/src/model_utils.nit";
const char FILE_nit__vm[] = "/home/ouajdi/Desktop/nit/src/vm/vm.nit";
const char FILE_nit__virtual_machine[] = "/home/ouajdi/Desktop/nit/src/vm/virtual_machine.nit";
const char FILE_nit__naive_interpreter[] = "/home/ouajdi/Desktop/nit/src/interpreter/naive_interpreter.nit";
const char FILE_nit__mixin[] = "/home/ouajdi/Desktop/nit/src/mixin.nit";
const char FILE_nit__primitive_types[] = "/home/ouajdi/Desktop/nit/src/interpreter/primitive_types.nit";
const char FILE_perfect_hashing[] = "/home/ouajdi/Desktop/nit/lib/perfect_hashing.nit";
const char FILE_nit__vm_optimizations[] = "/home/ouajdi/Desktop/nit/src/vm/vm_optimizations.nit";
const char FILE_nit__variables_numbering[] = "/home/ouajdi/Desktop/nit/src/vm/variables_numbering.nit";
void gc_finalize (void *obj, void *client_data) {
val* var /* : Finalizable */;
var = obj;
{
((void(*)(val* self))(var->class->vft[COLOR_standard__gc__Finalizable__finalize]))(var); /* finalize on <var:Finalizable>*/
}
}
