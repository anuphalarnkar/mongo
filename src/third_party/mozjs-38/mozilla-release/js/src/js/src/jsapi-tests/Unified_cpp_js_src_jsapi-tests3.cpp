#define MOZ_UNIFIED_BUILD
#include "testMutedErrors.cpp"
#ifdef PL_ARENA_CONST_ALIGN_MASK
#error "testMutedErrors.cpp uses PL_ARENA_CONST_ALIGN_MASK, so it cannot be built in unified mode."
#undef PL_ARENA_CONST_ALIGN_MASK
#endif
#ifdef INITGUID
#error "testMutedErrors.cpp defines INITGUID, so it cannot be built in unified mode."
#undef INITGUID
#endif
#include "testNewObject.cpp"
#ifdef PL_ARENA_CONST_ALIGN_MASK
#error "testNewObject.cpp uses PL_ARENA_CONST_ALIGN_MASK, so it cannot be built in unified mode."
#undef PL_ARENA_CONST_ALIGN_MASK
#endif
#ifdef INITGUID
#error "testNewObject.cpp defines INITGUID, so it cannot be built in unified mode."
#undef INITGUID
#endif
#include "testNullRoot.cpp"
#ifdef PL_ARENA_CONST_ALIGN_MASK
#error "testNullRoot.cpp uses PL_ARENA_CONST_ALIGN_MASK, so it cannot be built in unified mode."
#undef PL_ARENA_CONST_ALIGN_MASK
#endif
#ifdef INITGUID
#error "testNullRoot.cpp defines INITGUID, so it cannot be built in unified mode."
#undef INITGUID
#endif
#include "testOOM.cpp"
#ifdef PL_ARENA_CONST_ALIGN_MASK
#error "testOOM.cpp uses PL_ARENA_CONST_ALIGN_MASK, so it cannot be built in unified mode."
#undef PL_ARENA_CONST_ALIGN_MASK
#endif
#ifdef INITGUID
#error "testOOM.cpp defines INITGUID, so it cannot be built in unified mode."
#undef INITGUID
#endif
#include "testObjectEmulatingUndefined.cpp"
#ifdef PL_ARENA_CONST_ALIGN_MASK
#error "testObjectEmulatingUndefined.cpp uses PL_ARENA_CONST_ALIGN_MASK, so it cannot be built in unified mode."
#undef PL_ARENA_CONST_ALIGN_MASK
#endif
#ifdef INITGUID
#error "testObjectEmulatingUndefined.cpp defines INITGUID, so it cannot be built in unified mode."
#undef INITGUID
#endif
#include "testOps.cpp"
#ifdef PL_ARENA_CONST_ALIGN_MASK
#error "testOps.cpp uses PL_ARENA_CONST_ALIGN_MASK, so it cannot be built in unified mode."
#undef PL_ARENA_CONST_ALIGN_MASK
#endif
#ifdef INITGUID
#error "testOps.cpp defines INITGUID, so it cannot be built in unified mode."
#undef INITGUID
#endif
#include "testParseJSON.cpp"
#ifdef PL_ARENA_CONST_ALIGN_MASK
#error "testParseJSON.cpp uses PL_ARENA_CONST_ALIGN_MASK, so it cannot be built in unified mode."
#undef PL_ARENA_CONST_ALIGN_MASK
#endif
#ifdef INITGUID
#error "testParseJSON.cpp defines INITGUID, so it cannot be built in unified mode."
#undef INITGUID
#endif
#include "testPersistentRooted.cpp"
#ifdef PL_ARENA_CONST_ALIGN_MASK
#error "testPersistentRooted.cpp uses PL_ARENA_CONST_ALIGN_MASK, so it cannot be built in unified mode."
#undef PL_ARENA_CONST_ALIGN_MASK
#endif
#ifdef INITGUID
#error "testPersistentRooted.cpp defines INITGUID, so it cannot be built in unified mode."
#undef INITGUID
#endif
#include "testPreserveJitCode.cpp"
#ifdef PL_ARENA_CONST_ALIGN_MASK
#error "testPreserveJitCode.cpp uses PL_ARENA_CONST_ALIGN_MASK, so it cannot be built in unified mode."
#undef PL_ARENA_CONST_ALIGN_MASK
#endif
#ifdef INITGUID
#error "testPreserveJitCode.cpp defines INITGUID, so it cannot be built in unified mode."
#undef INITGUID
#endif
#include "testProfileStrings.cpp"
#ifdef PL_ARENA_CONST_ALIGN_MASK
#error "testProfileStrings.cpp uses PL_ARENA_CONST_ALIGN_MASK, so it cannot be built in unified mode."
#undef PL_ARENA_CONST_ALIGN_MASK
#endif
#ifdef INITGUID
#error "testProfileStrings.cpp defines INITGUID, so it cannot be built in unified mode."
#undef INITGUID
#endif
#include "testPropCache.cpp"
#ifdef PL_ARENA_CONST_ALIGN_MASK
#error "testPropCache.cpp uses PL_ARENA_CONST_ALIGN_MASK, so it cannot be built in unified mode."
#undef PL_ARENA_CONST_ALIGN_MASK
#endif
#ifdef INITGUID
#error "testPropCache.cpp defines INITGUID, so it cannot be built in unified mode."
#undef INITGUID
#endif
#include "testRegExp.cpp"
#ifdef PL_ARENA_CONST_ALIGN_MASK
#error "testRegExp.cpp uses PL_ARENA_CONST_ALIGN_MASK, so it cannot be built in unified mode."
#undef PL_ARENA_CONST_ALIGN_MASK
#endif
#ifdef INITGUID
#error "testRegExp.cpp defines INITGUID, so it cannot be built in unified mode."
#undef INITGUID
#endif
#include "testResolveRecursion.cpp"
#ifdef PL_ARENA_CONST_ALIGN_MASK
#error "testResolveRecursion.cpp uses PL_ARENA_CONST_ALIGN_MASK, so it cannot be built in unified mode."
#undef PL_ARENA_CONST_ALIGN_MASK
#endif
#ifdef INITGUID
#error "testResolveRecursion.cpp defines INITGUID, so it cannot be built in unified mode."
#undef INITGUID
#endif
#include "testSameValue.cpp"
#ifdef PL_ARENA_CONST_ALIGN_MASK
#error "testSameValue.cpp uses PL_ARENA_CONST_ALIGN_MASK, so it cannot be built in unified mode."
#undef PL_ARENA_CONST_ALIGN_MASK
#endif
#ifdef INITGUID
#error "testSameValue.cpp defines INITGUID, so it cannot be built in unified mode."
#undef INITGUID
#endif
#include "testSavedStacks.cpp"
#ifdef PL_ARENA_CONST_ALIGN_MASK
#error "testSavedStacks.cpp uses PL_ARENA_CONST_ALIGN_MASK, so it cannot be built in unified mode."
#undef PL_ARENA_CONST_ALIGN_MASK
#endif
#ifdef INITGUID
#error "testSavedStacks.cpp defines INITGUID, so it cannot be built in unified mode."
#undef INITGUID
#endif
#include "testScriptInfo.cpp"
#ifdef PL_ARENA_CONST_ALIGN_MASK
#error "testScriptInfo.cpp uses PL_ARENA_CONST_ALIGN_MASK, so it cannot be built in unified mode."
#undef PL_ARENA_CONST_ALIGN_MASK
#endif
#ifdef INITGUID
#error "testScriptInfo.cpp defines INITGUID, so it cannot be built in unified mode."
#undef INITGUID
#endif