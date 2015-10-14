export_dirs :=  config config/external/nspr js/src js/src/shell js/src/jsapi-tests js/src/tests js/src/gdb
libs_dirs :=  config config/external/nspr js/src js/src/shell js/src/jsapi-tests js/src/tests js/src/gdb
misc_dirs := 
tools_dirs := 
compile_targets := config/external/nspr/target config/external/zlib/target config/host js/src/editline/target js/src/gdb/target js/src/host js/src/jsapi-tests/target js/src/shell/target js/src/target mfbt/target mfbt/tests/target
$(call include_deps,root-deps.mk)
