#define MOZ_UNIFIED_BUILD
#include "gdb-tests.cpp"
#ifdef PL_ARENA_CONST_ALIGN_MASK
#error "gdb-tests.cpp uses PL_ARENA_CONST_ALIGN_MASK, so it cannot be built in unified mode."
#undef PL_ARENA_CONST_ALIGN_MASK
#endif
#ifdef INITGUID
#error "gdb-tests.cpp defines INITGUID, so it cannot be built in unified mode."
#undef INITGUID
#endif
#include "tests/test-JSObject.cpp"
#ifdef PL_ARENA_CONST_ALIGN_MASK
#error "tests/test-JSObject.cpp uses PL_ARENA_CONST_ALIGN_MASK, so it cannot be built in unified mode."
#undef PL_ARENA_CONST_ALIGN_MASK
#endif
#ifdef INITGUID
#error "tests/test-JSObject.cpp defines INITGUID, so it cannot be built in unified mode."
#undef INITGUID
#endif
#include "tests/test-JSString.cpp"
#ifdef PL_ARENA_CONST_ALIGN_MASK
#error "tests/test-JSString.cpp uses PL_ARENA_CONST_ALIGN_MASK, so it cannot be built in unified mode."
#undef PL_ARENA_CONST_ALIGN_MASK
#endif
#ifdef INITGUID
#error "tests/test-JSString.cpp defines INITGUID, so it cannot be built in unified mode."
#undef INITGUID
#endif
#include "tests/test-JSSymbol.cpp"
#ifdef PL_ARENA_CONST_ALIGN_MASK
#error "tests/test-JSSymbol.cpp uses PL_ARENA_CONST_ALIGN_MASK, so it cannot be built in unified mode."
#undef PL_ARENA_CONST_ALIGN_MASK
#endif
#ifdef INITGUID
#error "tests/test-JSSymbol.cpp defines INITGUID, so it cannot be built in unified mode."
#undef INITGUID
#endif
#include "tests/test-Root.cpp"
#ifdef PL_ARENA_CONST_ALIGN_MASK
#error "tests/test-Root.cpp uses PL_ARENA_CONST_ALIGN_MASK, so it cannot be built in unified mode."
#undef PL_ARENA_CONST_ALIGN_MASK
#endif
#ifdef INITGUID
#error "tests/test-Root.cpp defines INITGUID, so it cannot be built in unified mode."
#undef INITGUID
#endif
#include "tests/test-jsid.cpp"
#ifdef PL_ARENA_CONST_ALIGN_MASK
#error "tests/test-jsid.cpp uses PL_ARENA_CONST_ALIGN_MASK, so it cannot be built in unified mode."
#undef PL_ARENA_CONST_ALIGN_MASK
#endif
#ifdef INITGUID
#error "tests/test-jsid.cpp defines INITGUID, so it cannot be built in unified mode."
#undef INITGUID
#endif
#include "tests/test-jsval.cpp"
#ifdef PL_ARENA_CONST_ALIGN_MASK
#error "tests/test-jsval.cpp uses PL_ARENA_CONST_ALIGN_MASK, so it cannot be built in unified mode."
#undef PL_ARENA_CONST_ALIGN_MASK
#endif
#ifdef INITGUID
#error "tests/test-jsval.cpp defines INITGUID, so it cannot be built in unified mode."
#undef INITGUID
#endif
#include "tests/test-prettyprinters.cpp"
#ifdef PL_ARENA_CONST_ALIGN_MASK
#error "tests/test-prettyprinters.cpp uses PL_ARENA_CONST_ALIGN_MASK, so it cannot be built in unified mode."
#undef PL_ARENA_CONST_ALIGN_MASK
#endif
#ifdef INITGUID
#error "tests/test-prettyprinters.cpp defines INITGUID, so it cannot be built in unified mode."
#undef INITGUID
#endif
#include "tests/typedef-printers.cpp"
#ifdef PL_ARENA_CONST_ALIGN_MASK
#error "tests/typedef-printers.cpp uses PL_ARENA_CONST_ALIGN_MASK, so it cannot be built in unified mode."
#undef PL_ARENA_CONST_ALIGN_MASK
#endif
#ifdef INITGUID
#error "tests/typedef-printers.cpp defines INITGUID, so it cannot be built in unified mode."
#undef INITGUID
#endif