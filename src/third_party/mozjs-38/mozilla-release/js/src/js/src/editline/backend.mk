# THIS FILE WAS AUTOMATICALLY GENERATED. DO NOT EDIT.


# We build files in 'unified' mode by including several files
# together into a single source file.  This cuts down on
# compilation times and debug information size.
UNIFIED_CSRCS := Unified_c_js_src_editline0.c
CSRCS += $(UNIFIED_CSRCS)
DEFINES += -DANSI_ARROWS -DHAVE_TCGETATTR -DHIDE -DUSE_DIRENT -DSYS_UNIX -DHAVE_STDLIB -DUNIQUE_HISTORY
FAIL_ON_WARNINGS := 1
LIBRARY_NAME := editline
FORCE_STATIC_LIB := 1
REAL_LIBRARY := libeditline.a
