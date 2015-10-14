#define MOZ_UNIFIED_BUILD
#include "editline.c"
#ifdef PL_ARENA_CONST_ALIGN_MASK
#error "editline.c uses PL_ARENA_CONST_ALIGN_MASK, so it cannot be built in unified mode."
#undef PL_ARENA_CONST_ALIGN_MASK
#endif
#ifdef INITGUID
#error "editline.c defines INITGUID, so it cannot be built in unified mode."
#undef INITGUID
#endif
#include "sysunix.c"
#ifdef PL_ARENA_CONST_ALIGN_MASK
#error "sysunix.c uses PL_ARENA_CONST_ALIGN_MASK, so it cannot be built in unified mode."
#undef PL_ARENA_CONST_ALIGN_MASK
#endif
#ifdef INITGUID
#error "sysunix.c defines INITGUID, so it cannot be built in unified mode."
#undef INITGUID
#endif