js/src/shell/export: js/src/export
js/src/export:
js/src/jsapi-tests/export: js/src/export
config/external/nspr/export:
js/src/gdb/export: js/src/export
js/src/tests/export: js/src/export
config/export:
recurse_export: config/export config/external/nspr/export js/src/export js/src/shell/export js/src/jsapi-tests/export js/src/tests/export js/src/gdb/export
js/src/shell/libs: js/src/libs
js/src/libs: config/external/nspr/libs
js/src/jsapi-tests/libs: js/src/shell/libs
config/external/nspr/libs: config/libs
js/src/gdb/libs: js/src/tests/libs
js/src/tests/libs: js/src/jsapi-tests/libs
config/libs:
recurse_libs: js/src/gdb/libs
recurse_misc:
recurse_tools:
recurse_compile: js/src/jsapi-tests/target mfbt/tests/target js/src/gdb/target config/host js/src/shell/target js/src/host
js/src/gdb/target: js/src/target
js/src/jsapi-tests/target: js/src/target
js/src/shell/target: js/src/editline/target js/src/target
js/src/target: config/external/nspr/target mfbt/target config/external/zlib/target
mfbt/tests/target: mfbt/target
