CC = ccache cc
CXX = ccache c++
CFLAGS = -g -O2 -Wno-unused-value -Wno-switch -Wno-attributes
CINCL =
LDFLAGS ?= 
LDLIBS  ?= -lm 

NEED_LIBUNWIND := YesPlease
uname_S := $(shell sh -c 'uname -s 2>/dev/null || echo not')
ifeq ($(uname_S),Darwin)
	NEED_LIBUNWIND :=
endif

clang_check := $(shell sh -c '$(CC) -v 2>&1 | grep -q clang; echo $$?')
ifeq ($(clang_check), 0)
	CFLAGS += -Qunused-arguments
endif
ifdef NEED_LIBUNWIND
	LDLIBS += -lunwind
endif
all: ../bin/nitllvm

nitllvm.classes.1.o: nitllvm.classes.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nitllvm.classes.1.o nitllvm.classes.1.c

nitllvm.classes.2.o: nitllvm.classes.2.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nitllvm.classes.2.o nitllvm.classes.2.c

nitllvm.classes.3.o: nitllvm.classes.3.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nitllvm.classes.3.o nitllvm.classes.3.c

nitllvm.classes.4.o: nitllvm.classes.4.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nitllvm.classes.4.o nitllvm.classes.4.c

nitllvm.classes.5.o: nitllvm.classes.5.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nitllvm.classes.5.o nitllvm.classes.5.c

nitllvm.main.1.o: nitllvm.main.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nitllvm.main.1.o nitllvm.main.1.c

nitllvm.sep.1.o: nitllvm.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nitllvm.sep.1.o nitllvm.sep.1.c

nit__modelbuilder.sep.1.o: nit__modelbuilder.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nit__modelbuilder.sep.1.o nit__modelbuilder.sep.1.c

nit__loader.sep.1.o: nit__loader.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nit__loader.sep.1.o nit__loader.sep.1.c

nit__modelbuilder_base.sep.1.o: nit__modelbuilder_base.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nit__modelbuilder_base.sep.1.o nit__modelbuilder_base.sep.1.c

nit__model.sep.1.o: nit__model.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nit__model.sep.1.o nit__model.sep.1.c

nit__model.sep.2.o: nit__model.sep.2.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nit__model.sep.2.o nit__model.sep.2.c

nit__mmodule.sep.1.o: nit__mmodule.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nit__mmodule.sep.1.o nit__mmodule.sep.1.c

nit__location.sep.1.o: nit__location.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nit__location.sep.1.o nit__location.sep.1.c

standard__posix.sep.1.o: standard__posix.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o standard__posix.sep.1.o standard__posix.sep.1.c

standard__string.sep.1.o: standard__string.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o standard__string.sep.1.o standard__string.sep.1.c

standard__string.sep.2.o: standard__string.sep.2.c
	$(CC) $(CFLAGS) $(CINCL) -c -o standard__string.sep.2.o standard__string.sep.2.c

standard__math.sep.1.o: standard__math.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o standard__math.sep.1.o standard__math.sep.1.c

standard__kernel.sep.1.o: standard__kernel.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o standard__kernel.sep.1.o standard__kernel.sep.1.c

standard__collection.sep.1.o: standard__collection.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o standard__collection.sep.1.o standard__collection.sep.1.c

standard__range.sep.1.o: standard__range.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o standard__range.sep.1.o standard__range.sep.1.c

standard__abstract_collection.sep.1.o: standard__abstract_collection.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o standard__abstract_collection.sep.1.o standard__abstract_collection.sep.1.c

standard__list.sep.1.o: standard__list.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o standard__list.sep.1.o standard__list.sep.1.c

standard__array.sep.1.o: standard__array.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o standard__array.sep.1.o standard__array.sep.1.c

standard__sorter.sep.1.o: standard__sorter.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o standard__sorter.sep.1.o standard__sorter.sep.1.c

standard__hash_collection.sep.1.o: standard__hash_collection.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o standard__hash_collection.sep.1.o standard__hash_collection.sep.1.c

standard__union_find.sep.1.o: standard__union_find.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o standard__union_find.sep.1.o standard__union_find.sep.1.c

standard__environ.sep.1.o: standard__environ.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o standard__environ.sep.1.o standard__environ.sep.1.c

standard__file.sep.1.o: standard__file.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o standard__file.sep.1.o standard__file.sep.1.c

standard__stream.sep.1.o: standard__stream.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o standard__stream.sep.1.o standard__stream.sep.1.c

standard__ropes.sep.1.o: standard__ropes.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o standard__ropes.sep.1.o standard__ropes.sep.1.c

standard__error.sep.1.o: standard__error.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o standard__error.sep.1.o standard__error.sep.1.c

standard__string_search.sep.1.o: standard__string_search.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o standard__string_search.sep.1.o standard__string_search.sep.1.c

standard__time.sep.1.o: standard__time.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o standard__time.sep.1.o standard__time.sep.1.c

standard__gc.sep.1.o: standard__gc.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o standard__gc.sep.1.o standard__gc.sep.1.c

standard__exec.sep.1.o: standard__exec.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o standard__exec.sep.1.o standard__exec.sep.1.c

standard__bitset.sep.1.o: standard__bitset.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o standard__bitset.sep.1.o standard__bitset.sep.1.c

standard__queue.sep.1.o: standard__queue.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o standard__queue.sep.1.o standard__queue.sep.1.c

standard__numeric.sep.1.o: standard__numeric.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o standard__numeric.sep.1.o standard__numeric.sep.1.c

standard__re.sep.1.o: standard__re.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o standard__re.sep.1.o standard__re.sep.1.c

nit__mproject.sep.1.o: nit__mproject.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nit__mproject.sep.1.o nit__mproject.sep.1.c

nit__model_base.sep.1.o: nit__model_base.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nit__model_base.sep.1.o nit__model_base.sep.1.c

more_collections.sep.1.o: more_collections.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o more_collections.sep.1.o more_collections.sep.1.c

poset.sep.1.o: poset.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o poset.sep.1.o poset.sep.1.c

nit__mdoc.sep.1.o: nit__mdoc.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nit__mdoc.sep.1.o nit__mdoc.sep.1.c

ordered_tree.sep.1.o: ordered_tree.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o ordered_tree.sep.1.o ordered_tree.sep.1.c

nit__toolcontext.sep.1.o: nit__toolcontext.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nit__toolcontext.sep.1.o nit__toolcontext.sep.1.c

opts.sep.1.o: opts.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o opts.sep.1.o opts.sep.1.c

nit__version.sep.1.o: nit__version.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nit__version.sep.1.o nit__version.sep.1.c

template.sep.1.o: template.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o template.sep.1.o template.sep.1.c

nit__parser.sep.1.o: nit__parser.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nit__parser.sep.1.o nit__parser.sep.1.c

nit__parser.sep.2.o: nit__parser.sep.2.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nit__parser.sep.2.o nit__parser.sep.2.c

nit__parser.sep.3.o: nit__parser.sep.3.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nit__parser.sep.3.o nit__parser.sep.3.c

nit__parser.sep.4.o: nit__parser.sep.4.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nit__parser.sep.4.o nit__parser.sep.4.c

nit__parser.sep.5.o: nit__parser.sep.5.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nit__parser.sep.5.o nit__parser.sep.5.c

nit__parser.sep.6.o: nit__parser.sep.6.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nit__parser.sep.6.o nit__parser.sep.6.c

nit__parser_prod.sep.1.o: nit__parser_prod.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nit__parser_prod.sep.1.o nit__parser_prod.sep.1.c

nit__parser_prod.sep.2.o: nit__parser_prod.sep.2.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nit__parser_prod.sep.2.o nit__parser_prod.sep.2.c

nit__parser_prod.sep.3.o: nit__parser_prod.sep.3.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nit__parser_prod.sep.3.o nit__parser_prod.sep.3.c

nit__parser_prod.sep.4.o: nit__parser_prod.sep.4.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nit__parser_prod.sep.4.o nit__parser_prod.sep.4.c

nit__lexer.sep.1.o: nit__lexer.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nit__lexer.sep.1.o nit__lexer.sep.1.c

nit__parser_nodes.sep.1.o: nit__parser_nodes.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nit__parser_nodes.sep.1.o nit__parser_nodes.sep.1.c

nit__lexer_work.sep.1.o: nit__lexer_work.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nit__lexer_work.sep.1.o nit__lexer_work.sep.1.c

nit__tables.sep.1.o: nit__tables.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nit__tables.sep.1.o nit__tables.sep.1.c

nit__parser_work.sep.1.o: nit__parser_work.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nit__parser_work.sep.1.o nit__parser_work.sep.1.c

nit__phase.sep.1.o: nit__phase.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nit__phase.sep.1.o nit__phase.sep.1.c

nit__frontend.sep.1.o: nit__frontend.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nit__frontend.sep.1.o nit__frontend.sep.1.c

nit__no_warning.sep.1.o: nit__no_warning.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nit__no_warning.sep.1.o nit__no_warning.sep.1.c

nit__literal.sep.1.o: nit__literal.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nit__literal.sep.1.o nit__literal.sep.1.c

nit__simple_misc_analysis.sep.1.o: nit__simple_misc_analysis.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nit__simple_misc_analysis.sep.1.o nit__simple_misc_analysis.sep.1.c

nit__modelize_property.sep.1.o: nit__modelize_property.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nit__modelize_property.sep.1.o nit__modelize_property.sep.1.c

nit__modelize_property.sep.2.o: nit__modelize_property.sep.2.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nit__modelize_property.sep.2.o nit__modelize_property.sep.2.c

nit__modelize_class.sep.1.o: nit__modelize_class.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nit__modelize_class.sep.1.o nit__modelize_class.sep.1.c

nit__annotation.sep.1.o: nit__annotation.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nit__annotation.sep.1.o nit__annotation.sep.1.c

nit__mmodule_data.sep.1.o: nit__mmodule_data.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nit__mmodule_data.sep.1.o nit__mmodule_data.sep.1.c

nit__auto_super_init.sep.1.o: nit__auto_super_init.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nit__auto_super_init.sep.1.o nit__auto_super_init.sep.1.c

nit__typing.sep.1.o: nit__typing.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nit__typing.sep.1.o nit__typing.sep.1.c

nit__typing.sep.2.o: nit__typing.sep.2.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nit__typing.sep.2.o nit__typing.sep.2.c

nit__local_var_init.sep.1.o: nit__local_var_init.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nit__local_var_init.sep.1.o nit__local_var_init.sep.1.c

nit__flow.sep.1.o: nit__flow.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nit__flow.sep.1.o nit__flow.sep.1.c

nit__scope.sep.1.o: nit__scope.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nit__scope.sep.1.o nit__scope.sep.1.c

nit__div_by_zero.sep.1.o: nit__div_by_zero.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nit__div_by_zero.sep.1.o nit__div_by_zero.sep.1.c

nit__serialization_phase.sep.1.o: nit__serialization_phase.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nit__serialization_phase.sep.1.o nit__serialization_phase.sep.1.c

nit__parser_util.sep.1.o: nit__parser_util.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nit__parser_util.sep.1.o nit__parser_util.sep.1.c

nit__deriving.sep.1.o: nit__deriving.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nit__deriving.sep.1.o nit__deriving.sep.1.c

nit__check_annotation.sep.1.o: nit__check_annotation.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nit__check_annotation.sep.1.o nit__check_annotation.sep.1.c

nit__glsl_validation.sep.1.o: nit__glsl_validation.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nit__glsl_validation.sep.1.o nit__glsl_validation.sep.1.c

nit__parallelization_phase.sep.1.o: nit__parallelization_phase.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nit__parallelization_phase.sep.1.o nit__parallelization_phase.sep.1.c

nit__astbuilder.sep.1.o: nit__astbuilder.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nit__astbuilder.sep.1.o nit__astbuilder.sep.1.c

nit__model_utils.sep.1.o: nit__model_utils.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nit__model_utils.sep.1.o nit__model_utils.sep.1.c

nit__virtual_machine.sep.1.o: nit__virtual_machine.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nit__virtual_machine.sep.1.o nit__virtual_machine.sep.1.c

nit__naive_interpreter.sep.1.o: nit__naive_interpreter.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nit__naive_interpreter.sep.1.o nit__naive_interpreter.sep.1.c

nit__naive_interpreter.sep.2.o: nit__naive_interpreter.sep.2.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nit__naive_interpreter.sep.2.o nit__naive_interpreter.sep.2.c

nit__naive_interpreter.sep.3.o: nit__naive_interpreter.sep.3.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nit__naive_interpreter.sep.3.o nit__naive_interpreter.sep.3.c

nit__mixin.sep.1.o: nit__mixin.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nit__mixin.sep.1.o nit__mixin.sep.1.c

nit__primitive_types.sep.1.o: nit__primitive_types.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nit__primitive_types.sep.1.o nit__primitive_types.sep.1.c

perfect_hashing.sep.1.o: perfect_hashing.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o perfect_hashing.sep.1.o perfect_hashing.sep.1.c

nit__vm_optimizations.sep.1.o: nit__vm_optimizations.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nit__vm_optimizations.sep.1.o nit__vm_optimizations.sep.1.c

nit__variables_numbering.sep.1.o: nit__variables_numbering.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nit__variables_numbering.sep.1.o nit__variables_numbering.sep.1.c

nitllvm.types.1.o: nitllvm.types.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nitllvm.types.1.o nitllvm.types.1.c

nitllvm.types.2.o: nitllvm.types.2.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nitllvm.types.2.o nitllvm.types.2.c

nitllvm.types.3.o: nitllvm.types.3.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nitllvm.types.3.o nitllvm.types.3.c

nitllvm.types.4.o: nitllvm.types.4.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nitllvm.types.4.o nitllvm.types.4.c

nitllvm.types.5.o: nitllvm.types.5.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nitllvm.types.5.o nitllvm.types.5.c

nitllvm.types.6.o: nitllvm.types.6.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nitllvm.types.6.o nitllvm.types.6.c

nitllvm.types.7.o: nitllvm.types.7.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nitllvm.types.7.o nitllvm.types.7.c

nitllvm.types.8.o: nitllvm.types.8.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nitllvm.types.8.o nitllvm.types.8.c

nitllvm.types.9.o: nitllvm.types.9.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nitllvm.types.9.o nitllvm.types.9.c

nitllvm.types.10.o: nitllvm.types.10.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nitllvm.types.10.o nitllvm.types.10.c

nitllvm.types.11.o: nitllvm.types.11.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nitllvm.types.11.o nitllvm.types.11.c

# does pkg-config exists?
ifneq ($(shell which pkg-config >/dev/null; echo $$?), 0)
$(error "Command `pkg-config` not found. Please install it")
endif
# Check for library bdw-gc
ifneq ($(shell pkg-config --exists 'bdw-gc'; echo $$?), 0)
$(error "pkg-config: package bdw-gc is not found.")
endif
string_nit.extern.o: string_nit.c
	$(CC) $(CFLAGS)   -c -o string_nit.extern.o string_nit.c

file_nit.extern.o: file_nit.c
	$(CC) $(CFLAGS)   -c -o file_nit.extern.o file_nit.c

time_nit.extern.o: time_nit.c
	$(CC) $(CFLAGS)   -c -o time_nit.extern.o time_nit.c

exec_nit.extern.o: exec_nit.c
	$(CC) $(CFLAGS)   -c -o exec_nit.extern.o exec_nit.c

tables_nit.extern.o: tables_nit.c
	$(CC) $(CFLAGS)   -c -o tables_nit.extern.o tables_nit.c

c_functions_hash.extern.o: c_functions_hash.c
	$(CC) $(CFLAGS)   -c -o c_functions_hash.extern.o c_functions_hash.c

gc_chooser.extern.o: gc_chooser.c
	$(CC) $(CFLAGS) -DWITH_LIBGC `pkg-config --cflags bdw-gc` -c -o gc_chooser.extern.o gc_chooser.c

standard__posix._ffi.extern.o: standard__posix._ffi.c
	$(CC) $(CFLAGS)   -c -o standard__posix._ffi.extern.o standard__posix._ffi.c

standard__posix._nitni.extern.o: standard__posix._nitni.c
	$(CC) $(CFLAGS)   -c -o standard__posix._nitni.extern.o standard__posix._nitni.c

standard__math._ffi.extern.o: standard__math._ffi.c
	$(CC) $(CFLAGS)   -c -o standard__math._ffi.extern.o standard__math._ffi.c

standard__math._nitni.extern.o: standard__math._nitni.c
	$(CC) $(CFLAGS)   -c -o standard__math._nitni.extern.o standard__math._nitni.c

standard__file._ffi.extern.o: standard__file._ffi.c
	$(CC) $(CFLAGS)   -c -o standard__file._ffi.extern.o standard__file._ffi.c

standard__file._nitni.extern.o: standard__file._nitni.c
	$(CC) $(CFLAGS)   -c -o standard__file._nitni.extern.o standard__file._nitni.c

standard__time._ffi.extern.o: standard__time._ffi.c
	$(CC) $(CFLAGS)   -c -o standard__time._ffi.extern.o standard__time._ffi.c

standard__time._nitni.extern.o: standard__time._nitni.c
	$(CC) $(CFLAGS)   -c -o standard__time._nitni.extern.o standard__time._nitni.c

standard__bitset._ffi.extern.o: standard__bitset._ffi.c
	$(CC) $(CFLAGS)   -c -o standard__bitset._ffi.extern.o standard__bitset._ffi.c

standard__bitset._nitni.extern.o: standard__bitset._nitni.c
	$(CC) $(CFLAGS)   -c -o standard__bitset._nitni.extern.o standard__bitset._nitni.c

standard__re._ffi.extern.o: standard__re._ffi.c
	$(CC) $(CFLAGS)   -c -o standard__re._ffi.extern.o standard__re._ffi.c

standard__re._nitni.extern.o: standard__re._nitni.c
	$(CC) $(CFLAGS)   -c -o standard__re._nitni.extern.o standard__re._nitni.c

nit__virtual_machine._ffi.extern.o: nit__virtual_machine._ffi.c
	$(CC) $(CFLAGS)   -c -o nit__virtual_machine._ffi.extern.o nit__virtual_machine._ffi.c

nit__virtual_machine._nitni.extern.o: nit__virtual_machine._nitni.c
	$(CC) $(CFLAGS)   -c -o nit__virtual_machine._nitni.extern.o nit__virtual_machine._nitni.c

../bin/nitllvm: nitllvm.classes.1.o nitllvm.classes.2.o nitllvm.classes.3.o nitllvm.classes.4.o nitllvm.classes.5.o nitllvm.main.1.o nitllvm.sep.1.o nit__modelbuilder.sep.1.o nit__loader.sep.1.o nit__modelbuilder_base.sep.1.o nit__model.sep.1.o nit__model.sep.2.o nit__mmodule.sep.1.o nit__location.sep.1.o standard__posix.sep.1.o standard__string.sep.1.o standard__string.sep.2.o standard__math.sep.1.o standard__kernel.sep.1.o standard__collection.sep.1.o standard__range.sep.1.o standard__abstract_collection.sep.1.o standard__list.sep.1.o standard__array.sep.1.o standard__sorter.sep.1.o standard__hash_collection.sep.1.o standard__union_find.sep.1.o standard__environ.sep.1.o standard__file.sep.1.o standard__stream.sep.1.o standard__ropes.sep.1.o standard__error.sep.1.o standard__string_search.sep.1.o standard__time.sep.1.o standard__gc.sep.1.o standard__exec.sep.1.o standard__bitset.sep.1.o standard__queue.sep.1.o standard__numeric.sep.1.o standard__re.sep.1.o nit__mproject.sep.1.o nit__model_base.sep.1.o more_collections.sep.1.o poset.sep.1.o nit__mdoc.sep.1.o ordered_tree.sep.1.o nit__toolcontext.sep.1.o opts.sep.1.o nit__version.sep.1.o template.sep.1.o nit__parser.sep.1.o nit__parser.sep.2.o nit__parser.sep.3.o nit__parser.sep.4.o nit__parser.sep.5.o nit__parser.sep.6.o nit__parser_prod.sep.1.o nit__parser_prod.sep.2.o nit__parser_prod.sep.3.o nit__parser_prod.sep.4.o nit__lexer.sep.1.o nit__parser_nodes.sep.1.o nit__lexer_work.sep.1.o nit__tables.sep.1.o nit__parser_work.sep.1.o nit__phase.sep.1.o nit__frontend.sep.1.o nit__no_warning.sep.1.o nit__literal.sep.1.o nit__simple_misc_analysis.sep.1.o nit__modelize_property.sep.1.o nit__modelize_property.sep.2.o nit__modelize_class.sep.1.o nit__annotation.sep.1.o nit__mmodule_data.sep.1.o nit__auto_super_init.sep.1.o nit__typing.sep.1.o nit__typing.sep.2.o nit__local_var_init.sep.1.o nit__flow.sep.1.o nit__scope.sep.1.o nit__div_by_zero.sep.1.o nit__serialization_phase.sep.1.o nit__parser_util.sep.1.o nit__deriving.sep.1.o nit__check_annotation.sep.1.o nit__glsl_validation.sep.1.o nit__parallelization_phase.sep.1.o nit__astbuilder.sep.1.o nit__model_utils.sep.1.o nit__virtual_machine.sep.1.o nit__naive_interpreter.sep.1.o nit__naive_interpreter.sep.2.o nit__naive_interpreter.sep.3.o nit__mixin.sep.1.o nit__primitive_types.sep.1.o perfect_hashing.sep.1.o nit__vm_optimizations.sep.1.o nit__variables_numbering.sep.1.o nitllvm.types.1.o nitllvm.types.2.o nitllvm.types.3.o nitllvm.types.4.o nitllvm.types.5.o nitllvm.types.6.o nitllvm.types.7.o nitllvm.types.8.o nitllvm.types.9.o nitllvm.types.10.o nitllvm.types.11.o string_nit.extern.o file_nit.extern.o time_nit.extern.o exec_nit.extern.o tables_nit.extern.o c_functions_hash.extern.o gc_chooser.extern.o standard__posix._ffi.extern.o standard__posix._nitni.extern.o standard__math._ffi.extern.o standard__math._nitni.extern.o standard__file._ffi.extern.o standard__file._nitni.extern.o standard__time._ffi.extern.o standard__time._nitni.extern.o standard__bitset._ffi.extern.o standard__bitset._nitni.extern.o standard__re._ffi.extern.o standard__re._nitni.extern.o nit__virtual_machine._ffi.extern.o nit__virtual_machine._nitni.extern.o
	$(CC) $(LDFLAGS) -o '../bin/nitllvm' nitllvm.classes.1.o nitllvm.classes.2.o nitllvm.classes.3.o nitllvm.classes.4.o nitllvm.classes.5.o nitllvm.main.1.o nitllvm.sep.1.o nit__modelbuilder.sep.1.o nit__loader.sep.1.o nit__modelbuilder_base.sep.1.o nit__model.sep.1.o nit__model.sep.2.o nit__mmodule.sep.1.o nit__location.sep.1.o standard__posix.sep.1.o standard__string.sep.1.o standard__string.sep.2.o standard__math.sep.1.o standard__kernel.sep.1.o standard__collection.sep.1.o standard__range.sep.1.o standard__abstract_collection.sep.1.o standard__list.sep.1.o standard__array.sep.1.o standard__sorter.sep.1.o standard__hash_collection.sep.1.o standard__union_find.sep.1.o standard__environ.sep.1.o standard__file.sep.1.o standard__stream.sep.1.o standard__ropes.sep.1.o standard__error.sep.1.o standard__string_search.sep.1.o standard__time.sep.1.o standard__gc.sep.1.o standard__exec.sep.1.o standard__bitset.sep.1.o standard__queue.sep.1.o standard__numeric.sep.1.o standard__re.sep.1.o nit__mproject.sep.1.o nit__model_base.sep.1.o more_collections.sep.1.o poset.sep.1.o nit__mdoc.sep.1.o ordered_tree.sep.1.o nit__toolcontext.sep.1.o opts.sep.1.o nit__version.sep.1.o template.sep.1.o nit__parser.sep.1.o nit__parser.sep.2.o nit__parser.sep.3.o nit__parser.sep.4.o nit__parser.sep.5.o nit__parser.sep.6.o nit__parser_prod.sep.1.o nit__parser_prod.sep.2.o nit__parser_prod.sep.3.o nit__parser_prod.sep.4.o nit__lexer.sep.1.o nit__parser_nodes.sep.1.o nit__lexer_work.sep.1.o nit__tables.sep.1.o nit__parser_work.sep.1.o nit__phase.sep.1.o nit__frontend.sep.1.o nit__no_warning.sep.1.o nit__literal.sep.1.o nit__simple_misc_analysis.sep.1.o nit__modelize_property.sep.1.o nit__modelize_property.sep.2.o nit__modelize_class.sep.1.o nit__annotation.sep.1.o nit__mmodule_data.sep.1.o nit__auto_super_init.sep.1.o nit__typing.sep.1.o nit__typing.sep.2.o nit__local_var_init.sep.1.o nit__flow.sep.1.o nit__scope.sep.1.o nit__div_by_zero.sep.1.o nit__serialization_phase.sep.1.o nit__parser_util.sep.1.o nit__deriving.sep.1.o nit__check_annotation.sep.1.o nit__glsl_validation.sep.1.o nit__parallelization_phase.sep.1.o nit__astbuilder.sep.1.o nit__model_utils.sep.1.o nit__virtual_machine.sep.1.o nit__naive_interpreter.sep.1.o nit__naive_interpreter.sep.2.o nit__naive_interpreter.sep.3.o nit__mixin.sep.1.o nit__primitive_types.sep.1.o perfect_hashing.sep.1.o nit__vm_optimizations.sep.1.o nit__variables_numbering.sep.1.o nitllvm.types.1.o nitllvm.types.2.o nitllvm.types.3.o nitllvm.types.4.o nitllvm.types.5.o nitllvm.types.6.o nitllvm.types.7.o nitllvm.types.8.o nitllvm.types.9.o nitllvm.types.10.o nitllvm.types.11.o string_nit.extern.o file_nit.extern.o time_nit.extern.o exec_nit.extern.o tables_nit.extern.o c_functions_hash.extern.o gc_chooser.extern.o standard__posix._ffi.extern.o standard__posix._nitni.extern.o standard__math._ffi.extern.o standard__math._nitni.extern.o standard__file._ffi.extern.o standard__file._nitni.extern.o standard__time._ffi.extern.o standard__time._nitni.extern.o standard__bitset._ffi.extern.o standard__bitset._nitni.extern.o standard__re._ffi.extern.o standard__re._nitni.extern.o nit__virtual_machine._ffi.extern.o nit__virtual_machine._nitni.extern.o $(LDLIBS) `pkg-config --libs bdw-gc`

clean:
	rm nitllvm.classes.1.o nitllvm.classes.2.o nitllvm.classes.3.o nitllvm.classes.4.o nitllvm.classes.5.o nitllvm.main.1.o nitllvm.sep.1.o nit__modelbuilder.sep.1.o nit__loader.sep.1.o nit__modelbuilder_base.sep.1.o nit__model.sep.1.o nit__model.sep.2.o nit__mmodule.sep.1.o nit__location.sep.1.o standard__posix.sep.1.o standard__string.sep.1.o standard__string.sep.2.o standard__math.sep.1.o standard__kernel.sep.1.o standard__collection.sep.1.o standard__range.sep.1.o standard__abstract_collection.sep.1.o standard__list.sep.1.o standard__array.sep.1.o standard__sorter.sep.1.o standard__hash_collection.sep.1.o standard__union_find.sep.1.o standard__environ.sep.1.o standard__file.sep.1.o standard__stream.sep.1.o standard__ropes.sep.1.o standard__error.sep.1.o standard__string_search.sep.1.o standard__time.sep.1.o standard__gc.sep.1.o standard__exec.sep.1.o standard__bitset.sep.1.o standard__queue.sep.1.o standard__numeric.sep.1.o standard__re.sep.1.o nit__mproject.sep.1.o nit__model_base.sep.1.o more_collections.sep.1.o poset.sep.1.o nit__mdoc.sep.1.o ordered_tree.sep.1.o nit__toolcontext.sep.1.o opts.sep.1.o nit__version.sep.1.o template.sep.1.o nit__parser.sep.1.o nit__parser.sep.2.o nit__parser.sep.3.o nit__parser.sep.4.o nit__parser.sep.5.o nit__parser.sep.6.o nit__parser_prod.sep.1.o nit__parser_prod.sep.2.o nit__parser_prod.sep.3.o nit__parser_prod.sep.4.o nit__lexer.sep.1.o nit__parser_nodes.sep.1.o nit__lexer_work.sep.1.o nit__tables.sep.1.o nit__parser_work.sep.1.o nit__phase.sep.1.o nit__frontend.sep.1.o nit__no_warning.sep.1.o nit__literal.sep.1.o nit__simple_misc_analysis.sep.1.o nit__modelize_property.sep.1.o nit__modelize_property.sep.2.o nit__modelize_class.sep.1.o nit__annotation.sep.1.o nit__mmodule_data.sep.1.o nit__auto_super_init.sep.1.o nit__typing.sep.1.o nit__typing.sep.2.o nit__local_var_init.sep.1.o nit__flow.sep.1.o nit__scope.sep.1.o nit__div_by_zero.sep.1.o nit__serialization_phase.sep.1.o nit__parser_util.sep.1.o nit__deriving.sep.1.o nit__check_annotation.sep.1.o nit__glsl_validation.sep.1.o nit__parallelization_phase.sep.1.o nit__astbuilder.sep.1.o nit__model_utils.sep.1.o nit__virtual_machine.sep.1.o nit__naive_interpreter.sep.1.o nit__naive_interpreter.sep.2.o nit__naive_interpreter.sep.3.o nit__mixin.sep.1.o nit__primitive_types.sep.1.o perfect_hashing.sep.1.o nit__vm_optimizations.sep.1.o nit__variables_numbering.sep.1.o nitllvm.types.1.o nitllvm.types.2.o nitllvm.types.3.o nitllvm.types.4.o nitllvm.types.5.o nitllvm.types.6.o nitllvm.types.7.o nitllvm.types.8.o nitllvm.types.9.o nitllvm.types.10.o nitllvm.types.11.o string_nit.extern.o file_nit.extern.o time_nit.extern.o exec_nit.extern.o tables_nit.extern.o c_functions_hash.extern.o gc_chooser.extern.o standard__posix._ffi.extern.o standard__posix._nitni.extern.o standard__math._ffi.extern.o standard__math._nitni.extern.o standard__file._ffi.extern.o standard__file._nitni.extern.o standard__time._ffi.extern.o standard__time._nitni.extern.o standard__bitset._ffi.extern.o standard__bitset._nitni.extern.o standard__re._ffi.extern.o standard__re._nitni.extern.o nit__virtual_machine._ffi.extern.o nit__virtual_machine._nitni.extern.o 2>/dev/null
