#define MOZ_UNIFIED_BUILD
#include "selfTest.cpp"
#ifdef PL_ARENA_CONST_ALIGN_MASK
#error "selfTest.cpp uses PL_ARENA_CONST_ALIGN_MASK, so it cannot be built in unified mode."
#undef PL_ARENA_CONST_ALIGN_MASK
#endif
#ifdef INITGUID
#error "selfTest.cpp defines INITGUID, so it cannot be built in unified mode."
#undef INITGUID
#endif
#include "testAddPropertyPropcache.cpp"
#ifdef PL_ARENA_CONST_ALIGN_MASK
#error "testAddPropertyPropcache.cpp uses PL_ARENA_CONST_ALIGN_MASK, so it cannot be built in unified mode."
#undef PL_ARENA_CONST_ALIGN_MASK
#endif
#ifdef INITGUID
#error "testAddPropertyPropcache.cpp defines INITGUID, so it cannot be built in unified mode."
#undef INITGUID
#endif
#include "testArgumentsObject.cpp"
#ifdef PL_ARENA_CONST_ALIGN_MASK
#error "testArgumentsObject.cpp uses PL_ARENA_CONST_ALIGN_MASK, so it cannot be built in unified mode."
#undef PL_ARENA_CONST_ALIGN_MASK
#endif
#ifdef INITGUID
#error "testArgumentsObject.cpp defines INITGUID, so it cannot be built in unified mode."
#undef INITGUID
#endif
#include "testArrayBuffer.cpp"
#ifdef PL_ARENA_CONST_ALIGN_MASK
#error "testArrayBuffer.cpp uses PL_ARENA_CONST_ALIGN_MASK, so it cannot be built in unified mode."
#undef PL_ARENA_CONST_ALIGN_MASK
#endif
#ifdef INITGUID
#error "testArrayBuffer.cpp defines INITGUID, so it cannot be built in unified mode."
#undef INITGUID
#endif
#include "testArrayBufferView.cpp"
#ifdef PL_ARENA_CONST_ALIGN_MASK
#error "testArrayBufferView.cpp uses PL_ARENA_CONST_ALIGN_MASK, so it cannot be built in unified mode."
#undef PL_ARENA_CONST_ALIGN_MASK
#endif
#ifdef INITGUID
#error "testArrayBufferView.cpp defines INITGUID, so it cannot be built in unified mode."
#undef INITGUID
#endif
#include "testBindCallable.cpp"
#ifdef PL_ARENA_CONST_ALIGN_MASK
#error "testBindCallable.cpp uses PL_ARENA_CONST_ALIGN_MASK, so it cannot be built in unified mode."
#undef PL_ARENA_CONST_ALIGN_MASK
#endif
#ifdef INITGUID
#error "testBindCallable.cpp defines INITGUID, so it cannot be built in unified mode."
#undef INITGUID
#endif
#include "testBug604087.cpp"
#ifdef PL_ARENA_CONST_ALIGN_MASK
#error "testBug604087.cpp uses PL_ARENA_CONST_ALIGN_MASK, so it cannot be built in unified mode."
#undef PL_ARENA_CONST_ALIGN_MASK
#endif
#ifdef INITGUID
#error "testBug604087.cpp defines INITGUID, so it cannot be built in unified mode."
#undef INITGUID
#endif
#include "testCallNonGenericMethodOnProxy.cpp"
#ifdef PL_ARENA_CONST_ALIGN_MASK
#error "testCallNonGenericMethodOnProxy.cpp uses PL_ARENA_CONST_ALIGN_MASK, so it cannot be built in unified mode."
#undef PL_ARENA_CONST_ALIGN_MASK
#endif
#ifdef INITGUID
#error "testCallNonGenericMethodOnProxy.cpp defines INITGUID, so it cannot be built in unified mode."
#undef INITGUID
#endif
#include "testChromeBuffer.cpp"
#ifdef PL_ARENA_CONST_ALIGN_MASK
#error "testChromeBuffer.cpp uses PL_ARENA_CONST_ALIGN_MASK, so it cannot be built in unified mode."
#undef PL_ARENA_CONST_ALIGN_MASK
#endif
#ifdef INITGUID
#error "testChromeBuffer.cpp defines INITGUID, so it cannot be built in unified mode."
#undef INITGUID
#endif
#include "testClassGetter.cpp"
#ifdef PL_ARENA_CONST_ALIGN_MASK
#error "testClassGetter.cpp uses PL_ARENA_CONST_ALIGN_MASK, so it cannot be built in unified mode."
#undef PL_ARENA_CONST_ALIGN_MASK
#endif
#ifdef INITGUID
#error "testClassGetter.cpp defines INITGUID, so it cannot be built in unified mode."
#undef INITGUID
#endif
#include "testCloneScript.cpp"
#ifdef PL_ARENA_CONST_ALIGN_MASK
#error "testCloneScript.cpp uses PL_ARENA_CONST_ALIGN_MASK, so it cannot be built in unified mode."
#undef PL_ARENA_CONST_ALIGN_MASK
#endif
#ifdef INITGUID
#error "testCloneScript.cpp defines INITGUID, so it cannot be built in unified mode."
#undef INITGUID
#endif
#include "testContexts.cpp"
#ifdef PL_ARENA_CONST_ALIGN_MASK
#error "testContexts.cpp uses PL_ARENA_CONST_ALIGN_MASK, so it cannot be built in unified mode."
#undef PL_ARENA_CONST_ALIGN_MASK
#endif
#ifdef INITGUID
#error "testContexts.cpp defines INITGUID, so it cannot be built in unified mode."
#undef INITGUID
#endif
#include "testDebugger.cpp"
#ifdef PL_ARENA_CONST_ALIGN_MASK
#error "testDebugger.cpp uses PL_ARENA_CONST_ALIGN_MASK, so it cannot be built in unified mode."
#undef PL_ARENA_CONST_ALIGN_MASK
#endif
#ifdef INITGUID
#error "testDebugger.cpp defines INITGUID, so it cannot be built in unified mode."
#undef INITGUID
#endif
#include "testDeepFreeze.cpp"
#ifdef PL_ARENA_CONST_ALIGN_MASK
#error "testDeepFreeze.cpp uses PL_ARENA_CONST_ALIGN_MASK, so it cannot be built in unified mode."
#undef PL_ARENA_CONST_ALIGN_MASK
#endif
#ifdef INITGUID
#error "testDeepFreeze.cpp defines INITGUID, so it cannot be built in unified mode."
#undef INITGUID
#endif
#include "testDefineGetterSetterNonEnumerable.cpp"
#ifdef PL_ARENA_CONST_ALIGN_MASK
#error "testDefineGetterSetterNonEnumerable.cpp uses PL_ARENA_CONST_ALIGN_MASK, so it cannot be built in unified mode."
#undef PL_ARENA_CONST_ALIGN_MASK
#endif
#ifdef INITGUID
#error "testDefineGetterSetterNonEnumerable.cpp defines INITGUID, so it cannot be built in unified mode."
#undef INITGUID
#endif
#include "testDefineProperty.cpp"
#ifdef PL_ARENA_CONST_ALIGN_MASK
#error "testDefineProperty.cpp uses PL_ARENA_CONST_ALIGN_MASK, so it cannot be built in unified mode."
#undef PL_ARENA_CONST_ALIGN_MASK
#endif
#ifdef INITGUID
#error "testDefineProperty.cpp defines INITGUID, so it cannot be built in unified mode."
#undef INITGUID
#endif