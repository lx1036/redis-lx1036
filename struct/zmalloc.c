#include <stdlib.h>
#include "zmalloc.h"

#define PREFIX_SIZE (sizeof(size_t))

void *zmalloc(size_t size) {
    void *ptr = malloc(size + PREFIX_SIZE);

    if (!ptr) zmalloc_oom_handler(size);
#ifdef HAVE_MALLOC_SIZE
    return ptr
#else
    return (char*) ptr + PREFIX_SIZE;
#endif
}
