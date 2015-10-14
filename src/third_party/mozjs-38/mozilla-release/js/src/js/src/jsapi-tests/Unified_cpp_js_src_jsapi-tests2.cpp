#define MOZ_UNIFIED_BUILD
#include "testGCMarking.cpp"
#ifdef PL_ARENA_CONST_ALIGN_MASK
#error "testGCMarking.cpp uses PL_ARENA_CONST_ALIGN_MASK, so it cannot be built in unified mode."
#undef PL_ARENA_CONST_ALIGN_MASK
#endif
#ifdef INITGUID
#error "testGCMarking.cpp defines INITGUID, so it cannot be built in unified mode."
#undef INITGUID
#endif
#include "testGCNursery.cpp"
#ifdef PL_ARENA_CONST_ALIGN_MASK
#error "testGCNursery.cpp uses PL_ARENA_CONST_ALIGN_MASK, so it cannot be built in unified mode."
#undef PL_ARENA_CONST_ALIGN_MASK
#endif
#ifdef INITGUID
#error "testGCNursery.cpp defines INITGUID, so it cannot be built in unified mode."
#undef INITGUID
#endif
#include "testGCOutOfMemory.cpp"
#ifdef PL_ARENA_CONST_ALIGN_MASK
#error "testGCOutOfMemory.cpp uses PL_ARENA_CONST_ALIGN_MASK, so it cannot be built in unified mode."
#undef PL_ARENA_CONST_ALIGN_MASK
#endif
#ifdef INITGUID
#error "testGCOutOfMemory.cpp defines INITGUID, so it cannot be built in unified mode."
#undef INITGUID
#endif
#include "testGCStoreBufferRemoval.cpp"
#ifdef PL_ARENA_CONST_ALIGN_MASK
#error "testGCStoreBufferRemoval.cpp uses PL_ARENA_CONST_ALIGN_MASK, so it cannot be built in unified mode."
#undef PL_ARENA_CONST_ALIGN_MASK
#endif
#ifdef INITGUID
#error "testGCStoreBufferRemoval.cpp defines INITGUID, so it cannot be built in unified mode."
#undef INITGUID
#endif
#include "testGetPropertyDescriptor.cpp"
#ifdef PL_ARENA_CONST_ALIGN_MASK
#error "testGetPropertyDescriptor.cpp uses PL_ARENA_CONST_ALIGN_MASK, so it cannot be built in unified mode."
#undef PL_ARENA_CONST_ALIGN_MASK
#endif
#ifdef INITGUID
#error "testGetPropertyDescriptor.cpp defines INITGUID, so it cannot be built in unified mode."
#undef INITGUID
#endif
#include "testHashTable.cpp"
#ifdef PL_ARENA_CONST_ALIGN_MASK
#error "testHashTable.cpp uses PL_ARENA_CONST_ALIGN_MASK, so it cannot be built in unified mode."
#undef PL_ARENA_CONST_ALIGN_MASK
#endif
#ifdef INITGUID
#error "testHashTable.cpp defines INITGUID, so it cannot be built in unified mode."
#undef INITGUID
#endif
#include "testHashTableInit.cpp"
#ifdef PL_ARENA_CONST_ALIGN_MASK
#error "testHashTableInit.cpp uses PL_ARENA_CONST_ALIGN_MASK, so it cannot be built in unified mode."
#undef PL_ARENA_CONST_ALIGN_MASK
#endif
#ifdef INITGUID
#error "testHashTableInit.cpp defines INITGUID, so it cannot be built in unified mode."
#undef INITGUID
#endif
#include "testIndexToString.cpp"
#ifdef PL_ARENA_CONST_ALIGN_MASK
#error "testIndexToString.cpp uses PL_ARENA_CONST_ALIGN_MASK, so it cannot be built in unified mode."
#undef PL_ARENA_CONST_ALIGN_MASK
#endif
#ifdef INITGUID
#error "testIndexToString.cpp defines INITGUID, so it cannot be built in unified mode."
#undef INITGUID
#endif
#include "testIntString.cpp"
#ifdef PL_ARENA_CONST_ALIGN_MASK
#error "testIntString.cpp uses PL_ARENA_CONST_ALIGN_MASK, so it cannot be built in unified mode."
#undef PL_ARENA_CONST_ALIGN_MASK
#endif
#ifdef INITGUID
#error "testIntString.cpp defines INITGUID, so it cannot be built in unified mode."
#undef INITGUID
#endif
#include "testIntTypesABI.cpp"
#ifdef PL_ARENA_CONST_ALIGN_MASK
#error "testIntTypesABI.cpp uses PL_ARENA_CONST_ALIGN_MASK, so it cannot be built in unified mode."
#undef PL_ARENA_CONST_ALIGN_MASK
#endif
#ifdef INITGUID
#error "testIntTypesABI.cpp defines INITGUID, so it cannot be built in unified mode."
#undef INITGUID
#endif
#include "testIntern.cpp"
#ifdef PL_ARENA_CONST_ALIGN_MASK
#error "testIntern.cpp uses PL_ARENA_CONST_ALIGN_MASK, so it cannot be built in unified mode."
#undef PL_ARENA_CONST_ALIGN_MASK
#endif
#ifdef INITGUID
#error "testIntern.cpp defines INITGUID, so it cannot be built in unified mode."
#undef INITGUID
#endif
#include "testIsInsideNursery.cpp"
#ifdef PL_ARENA_CONST_ALIGN_MASK
#error "testIsInsideNursery.cpp uses PL_ARENA_CONST_ALIGN_MASK, so it cannot be built in unified mode."
#undef PL_ARENA_CONST_ALIGN_MASK
#endif
#ifdef INITGUID
#error "testIsInsideNursery.cpp defines INITGUID, so it cannot be built in unified mode."
#undef INITGUID
#endif
#include "testJSEvaluateScript.cpp"
#ifdef PL_ARENA_CONST_ALIGN_MASK
#error "testJSEvaluateScript.cpp uses PL_ARENA_CONST_ALIGN_MASK, so it cannot be built in unified mode."
#undef PL_ARENA_CONST_ALIGN_MASK
#endif
#ifdef INITGUID
#error "testJSEvaluateScript.cpp defines INITGUID, so it cannot be built in unified mode."
#undef INITGUID
#endif
#include "testLookup.cpp"
#ifdef PL_ARENA_CONST_ALIGN_MASK
#error "testLookup.cpp uses PL_ARENA_CONST_ALIGN_MASK, so it cannot be built in unified mode."
#undef PL_ARENA_CONST_ALIGN_MASK
#endif
#ifdef INITGUID
#error "testLookup.cpp defines INITGUID, so it cannot be built in unified mode."
#undef INITGUID
#endif
#include "testLooselyEqual.cpp"
#ifdef PL_ARENA_CONST_ALIGN_MASK
#error "testLooselyEqual.cpp uses PL_ARENA_CONST_ALIGN_MASK, so it cannot be built in unified mode."
#undef PL_ARENA_CONST_ALIGN_MASK
#endif
#ifdef INITGUID
#error "testLooselyEqual.cpp defines INITGUID, so it cannot be built in unified mode."
#undef INITGUID
#endif
#include "testMappedArrayBuffer.cpp"
#ifdef PL_ARENA_CONST_ALIGN_MASK
#error "testMappedArrayBuffer.cpp uses PL_ARENA_CONST_ALIGN_MASK, so it cannot be built in unified mode."
#undef PL_ARENA_CONST_ALIGN_MASK
#endif
#ifdef INITGUID
#error "testMappedArrayBuffer.cpp defines INITGUID, so it cannot be built in unified mode."
#undef INITGUID
#endif