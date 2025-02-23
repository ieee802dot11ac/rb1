#ifndef UTL_MEMMGR_H
#define UTL_MEMMGR_H

#include <types.h>

void* _MemAlloc(uint siz, const char* track);
void* _MemOrPoolAlloc(uint siz, const char* track);

void _MemFree(void*);
void _MemOrPoolFree(uint siz, void*);

#endif
