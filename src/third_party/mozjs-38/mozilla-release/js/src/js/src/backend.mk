# THIS FILE WAS AUTOMATICALLY GENERATED. DO NOT EDIT.

DIRS := editline shell
TEST_DIRS := jsapi-tests tests gdb
CPPSRCS += builtin/RegExp.cpp
CPPSRCS += frontend/Parser.cpp
CPPSRCS += jit/ExecutableAllocatorPosix.cpp
CPPSRCS += jsarray.cpp
CPPSRCS += jsatom.cpp
CPPSRCS += jsmath.cpp
CPPSRCS += jsutil.cpp
CPPSRCS += perf/pm_linux.cpp

# We build files in 'unified' mode by including several files
# together into a single source file.  This cuts down on
# compilation times and debug information size.
UNIFIED_CPPSRCS := Unified_cpp_js_src0.cpp Unified_cpp_js_src1.cpp Unified_cpp_js_src10.cpp Unified_cpp_js_src11.cpp Unified_cpp_js_src2.cpp Unified_cpp_js_src3.cpp Unified_cpp_js_src4.cpp Unified_cpp_js_src5.cpp Unified_cpp_js_src6.cpp Unified_cpp_js_src7.cpp Unified_cpp_js_src8.cpp Unified_cpp_js_src9.cpp
CPPSRCS += $(UNIFIED_CPPSRCS)
HOST_CPPSRCS += jskwgen.cpp
pm_linux.cpp_FLAGS += 
DEFINES += -DIMPL_MFBT -DEXPORT_JS_API
FAIL_ON_WARNINGS := 1
MSVC_ENABLE_PGO := 1
LIBRARY_NAME := js
FORCE_SHARED_LIB := 1
IMPORT_LIBRARY := libmozjs-38.so
SHARED_LIBRARY := libmozjs-38.so
DSO_SONAME := libmozjs-38.so
SDK_LIBRARY := libmozjs-38.so
STATIC_LIBS += $(DEPTH)/mfbt/libmfbt.a
STATIC_LIBS += $(DEPTH)/config/external/nspr/libnspr.a
STATIC_LIBS += $(DEPTH)/config/external/zlib/libzlib.a
OS_LIBS += -lz
OS_LIBS += -lm
OS_LIBS += -ldl
FORCE_STATIC_LIB := 1
REAL_LIBRARY := libjs_static.a
HOST_SIMPLE_PROGRAMS += host_jskwgen
