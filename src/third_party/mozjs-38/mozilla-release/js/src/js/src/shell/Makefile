# THIS FILE WAS AUTOMATICALLY GENERATED. DO NOT MODIFY BY HAND.
DEPTH := ../../..
topsrcdir := /root/anup/mongo/src/third_party/mozjs-38/mozilla-release
srcdir := /root/anup/mongo/src/third_party/mozjs-38/mozilla-release/js/src/shell
VPATH := /root/anup/mongo/src/third_party/mozjs-38/mozilla-release/js/src/shell
relativesrcdir := js/src/shell
include $(DEPTH)/config/autoconf.mk
# -*- Mode: makefile -*-
#
# This Source Code Form is subject to the terms of the Mozilla Public
# License, v. 2.0. If a copy of the MPL was not distributed with this
# file, You can obtain one at http://mozilla.org/MPL/2.0/.

ifeq ($(OS_ARCH),Darwin)
ifeq ($(TARGET_CPU),x86_64)
DARWIN_EXE_LDFLAGS += -pagezero_size 10000 -image_base 100000000
endif
endif

ifdef QEMU_EXE
MOZ_POST_PROGRAM_COMMAND = $(topsrcdir)/build/qemu-wrap --qemu $(QEMU_EXE) --libdir $(CROSS_LIB)
endif

# Place a GDB Python auto-load file next to the shell executable, both in
# the build directory and in the dist/bin directory.
PP_TARGETS += SHELL_AUTOLOAD
SHELL_AUTOLOAD := js-gdb.py.in
SHELL_AUTOLOAD_FLAGS := -Dtopsrcdir=$(abspath $(srcdir)/..)

INSTALL_TARGETS += SHELL_INSTALL_AUTOLOAD
SHELL_INSTALL_AUTOLOAD_FILES := $(CURDIR)/js-gdb.py
SHELL_INSTALL_AUTOLOAD_DEST := $(DIST)/bin

INSTALL_TARGETS += SHELL_INSTALL_AUTOLOAD_SCRIPT
SHELL_INSTALL_AUTOLOAD_SCRIPT_FILES := js-gdb.gdb
SHELL_INSTALL_AUTOLOAD_SCRIPT_DEST := $(CURDIR)

include $(topsrcdir)/config/rules.mk

# People expect the js shell to wind up in the top-level JS dir.
libs::
	$(INSTALL) $(IFLAGS2) $(PROGRAM) ..

GARBAGE += ../$(PROGRAM)

install:: $(PROGRAM)
	$(SYSINSTALL) $^ $(DESTDIR)$(bindir)

include $(topsrcdir)/config/recurse.mk
