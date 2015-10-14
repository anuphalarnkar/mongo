# THIS FILE WAS AUTOMATICALLY GENERATED. DO NOT EDIT.


# We build files in 'unified' mode by including several files
# together into a single source file.  This cuts down on
# compilation times and debug information size.
UNIFIED_CPPSRCS := Unified_cpp_js_src_shell0.cpp
CPPSRCS += $(UNIFIED_CPPSRCS)
DEFINES += -DEXPORT_JS_API -DIMPL_MFBT
LOCAL_INCLUDES += -I..
LOCAL_INCLUDES += -I$(srcdir)/..
FAIL_ON_WARNINGS := 1
PROGRAM = js
STATIC_LIBS += $(DEPTH)/js/src/editline/libeditline.a
STATIC_LIBS += $(DEPTH)/js/src/libjs_static.a
OS_LIBS += -lz
OS_LIBS += -lm
OS_LIBS += -ldl
