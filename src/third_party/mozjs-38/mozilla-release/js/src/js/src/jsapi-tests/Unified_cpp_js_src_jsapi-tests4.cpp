#define MOZ_UNIFIED_BUILD
#include "testScriptObject.cpp"
#ifdef PL_ARENA_CONST_ALIGN_MASK
#error "testScriptObject.cpp uses PL_ARENA_CONST_ALIGN_MASK, so it cannot be built in unified mode."
#undef PL_ARENA_CONST_ALIGN_MASK
#endif
#ifdef INITGUID
#error "testScriptObject.cpp defines INITGUID, so it cannot be built in unified mode."
#undef INITGUID
#endif
#include "testSetProperty.cpp"
#ifdef PL_ARENA_CONST_ALIGN_MASK
#error "testSetProperty.cpp uses PL_ARENA_CONST_ALIGN_MASK, so it cannot be built in unified mode."
#undef PL_ARENA_CONST_ALIGN_MASK
#endif
#ifdef INITGUID
#error "testSetProperty.cpp defines INITGUID, so it cannot be built in unified mode."
#undef INITGUID
#endif
#include "testSetPropertyIgnoringNamedGetter.cpp"
#ifdef PL_ARENA_CONST_ALIGN_MASK
#error "testSetPropertyIgnoringNamedGetter.cpp uses PL_ARENA_CONST_ALIGN_MASK, so it cannot be built in unified mode."
#undef PL_ARENA_CONST_ALIGN_MASK
#endif
#ifdef INITGUID
#error "testSetPropertyIgnoringNamedGetter.cpp defines INITGUID, so it cannot be built in unified mode."
#undef INITGUID
#endif
#include "testSourcePolicy.cpp"
#ifdef PL_ARENA_CONST_ALIGN_MASK
#error "testSourcePolicy.cpp uses PL_ARENA_CONST_ALIGN_MASK, so it cannot be built in unified mode."
#undef PL_ARENA_CONST_ALIGN_MASK
#endif
#ifdef INITGUID
#error "testSourcePolicy.cpp defines INITGUID, so it cannot be built in unified mode."
#undef INITGUID
#endif
#include "testStringBuffer.cpp"
#ifdef PL_ARENA_CONST_ALIGN_MASK
#error "testStringBuffer.cpp uses PL_ARENA_CONST_ALIGN_MASK, so it cannot be built in unified mode."
#undef PL_ARENA_CONST_ALIGN_MASK
#endif
#ifdef INITGUID
#error "testStringBuffer.cpp defines INITGUID, so it cannot be built in unified mode."
#undef INITGUID
#endif
#include "testStructuredClone.cpp"
#ifdef PL_ARENA_CONST_ALIGN_MASK
#error "testStructuredClone.cpp uses PL_ARENA_CONST_ALIGN_MASK, so it cannot be built in unified mode."
#undef PL_ARENA_CONST_ALIGN_MASK
#endif
#ifdef INITGUID
#error "testStructuredClone.cpp defines INITGUID, so it cannot be built in unified mode."
#undef INITGUID
#endif
#include "testSymbol.cpp"
#ifdef PL_ARENA_CONST_ALIGN_MASK
#error "testSymbol.cpp uses PL_ARENA_CONST_ALIGN_MASK, so it cannot be built in unified mode."
#undef PL_ARENA_CONST_ALIGN_MASK
#endif
#ifdef INITGUID
#error "testSymbol.cpp defines INITGUID, so it cannot be built in unified mode."
#undef INITGUID
#endif
#include "testToIntWidth.cpp"
#ifdef PL_ARENA_CONST_ALIGN_MASK
#error "testToIntWidth.cpp uses PL_ARENA_CONST_ALIGN_MASK, so it cannot be built in unified mode."
#undef PL_ARENA_CONST_ALIGN_MASK
#endif
#ifdef INITGUID
#error "testToIntWidth.cpp defines INITGUID, so it cannot be built in unified mode."
#undef INITGUID
#endif
#include "testTypedArrays.cpp"
#ifdef PL_ARENA_CONST_ALIGN_MASK
#error "testTypedArrays.cpp uses PL_ARENA_CONST_ALIGN_MASK, so it cannot be built in unified mode."
#undef PL_ARENA_CONST_ALIGN_MASK
#endif
#ifdef INITGUID
#error "testTypedArrays.cpp defines INITGUID, so it cannot be built in unified mode."
#undef INITGUID
#endif
#include "testUTF8.cpp"
#ifdef PL_ARENA_CONST_ALIGN_MASK
#error "testUTF8.cpp uses PL_ARENA_CONST_ALIGN_MASK, so it cannot be built in unified mode."
#undef PL_ARENA_CONST_ALIGN_MASK
#endif
#ifdef INITGUID
#error "testUTF8.cpp defines INITGUID, so it cannot be built in unified mode."
#undef INITGUID
#endif
#include "testUbiNode.cpp"
#ifdef PL_ARENA_CONST_ALIGN_MASK
#error "testUbiNode.cpp uses PL_ARENA_CONST_ALIGN_MASK, so it cannot be built in unified mode."
#undef PL_ARENA_CONST_ALIGN_MASK
#endif
#ifdef INITGUID
#error "testUbiNode.cpp defines INITGUID, so it cannot be built in unified mode."
#undef INITGUID
#endif
#include "testUncaughtError.cpp"
#ifdef PL_ARENA_CONST_ALIGN_MASK
#error "testUncaughtError.cpp uses PL_ARENA_CONST_ALIGN_MASK, so it cannot be built in unified mode."
#undef PL_ARENA_CONST_ALIGN_MASK
#endif
#ifdef INITGUID
#error "testUncaughtError.cpp defines INITGUID, so it cannot be built in unified mode."
#undef INITGUID
#endif
#include "testWeakMap.cpp"
#ifdef PL_ARENA_CONST_ALIGN_MASK
#error "testWeakMap.cpp uses PL_ARENA_CONST_ALIGN_MASK, so it cannot be built in unified mode."
#undef PL_ARENA_CONST_ALIGN_MASK
#endif
#ifdef INITGUID
#error "testWeakMap.cpp defines INITGUID, so it cannot be built in unified mode."
#undef INITGUID
#endif
#include "testXDR.cpp"
#ifdef PL_ARENA_CONST_ALIGN_MASK
#error "testXDR.cpp uses PL_ARENA_CONST_ALIGN_MASK, so it cannot be built in unified mode."
#undef PL_ARENA_CONST_ALIGN_MASK
#endif
#ifdef INITGUID
#error "testXDR.cpp defines INITGUID, so it cannot be built in unified mode."
#undef INITGUID
#endif
#include "tests.cpp"
#ifdef PL_ARENA_CONST_ALIGN_MASK
#error "tests.cpp uses PL_ARENA_CONST_ALIGN_MASK, so it cannot be built in unified mode."
#undef PL_ARENA_CONST_ALIGN_MASK
#endif
#ifdef INITGUID
#error "tests.cpp defines INITGUID, so it cannot be built in unified mode."
#undef INITGUID
#endif