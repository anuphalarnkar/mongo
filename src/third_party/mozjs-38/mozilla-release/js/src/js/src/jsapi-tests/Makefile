# THIS FILE WAS AUTOMATICALLY GENERATED. DO NOT MODIFY BY HAND.
DEPTH := ../../..
topsrcdir := /root/anup/mongo/src/third_party/mozjs-38/mozilla-release
srcdir := /root/anup/mongo/src/third_party/mozjs-38/mozilla-release/js/src/jsapi-tests
VPATH := /root/anup/mongo/src/third_party/mozjs-38/mozilla-release/js/src/jsapi-tests
relativesrcdir := js/src/jsapi-tests
include $(DEPTH)/config/autoconf.mk
# -*- Mode: makefile -*-
#
# This Source Code Form is subject to the terms of the Mozilla Public
# License, v. 2.0. If a copy of the MPL was not distributed with this
# file, You can obtain one at http://mozilla.org/MPL/2.0/.

ifdef QEMU_EXE
MOZ_POST_PROGRAM_COMMAND = $(topsrcdir)/build/qemu-wrap --qemu $(QEMU_EXE) --libdir $(CROSS_LIB)
endif

# Place a GDB Python auto-load file next to the jsapi-tests executable in
# the build directory.
PP_TARGETS += JSAPI_TESTS_AUTOLOAD
JSAPI_TESTS_AUTOLOAD := jsapi-tests-gdb.py.in
JSAPI_TESTS_AUTOLOAD_FLAGS := -Dtopsrcdir=$(abspath $(srcdir)/..)

include $(topsrcdir)/config/recurse.mk
