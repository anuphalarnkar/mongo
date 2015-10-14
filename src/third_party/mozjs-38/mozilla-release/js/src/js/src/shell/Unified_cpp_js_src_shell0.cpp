#define MOZ_UNIFIED_BUILD
#include "OSObject.cpp"
#ifdef PL_ARENA_CONST_ALIGN_MASK
#error "OSObject.cpp uses PL_ARENA_CONST_ALIGN_MASK, so it cannot be built in unified mode."
#undef PL_ARENA_CONST_ALIGN_MASK
#endif
#ifdef INITGUID
#error "OSObject.cpp defines INITGUID, so it cannot be built in unified mode."
#undef INITGUID
#endif
#include "js.cpp"
#ifdef PL_ARENA_CONST_ALIGN_MASK
#error "js.cpp uses PL_ARENA_CONST_ALIGN_MASK, so it cannot be built in unified mode."
#undef PL_ARENA_CONST_ALIGN_MASK
#endif
#ifdef INITGUID
#error "js.cpp defines INITGUID, so it cannot be built in unified mode."
#undef INITGUID
#endif
#include "jsheaptools.cpp"
#ifdef PL_ARENA_CONST_ALIGN_MASK
#error "jsheaptools.cpp uses PL_ARENA_CONST_ALIGN_MASK, so it cannot be built in unified mode."
#undef PL_ARENA_CONST_ALIGN_MASK
#endif
#ifdef INITGUID
#error "jsheaptools.cpp defines INITGUID, so it cannot be built in unified mode."
#undef INITGUID
#endif
#include "jsoptparse.cpp"
#ifdef PL_ARENA_CONST_ALIGN_MASK
#error "jsoptparse.cpp uses PL_ARENA_CONST_ALIGN_MASK, so it cannot be built in unified mode."
#undef PL_ARENA_CONST_ALIGN_MASK
#endif
#ifdef INITGUID
#error "jsoptparse.cpp defines INITGUID, so it cannot be built in unified mode."
#undef INITGUID
#endif