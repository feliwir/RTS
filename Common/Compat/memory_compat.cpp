#ifndef _WIN32
#include "memory_compat.h"

#include <dxvk/windows_base.h>


void GlobalMemoryStatus(MEMORYSTATUS *lpBuffer)
{
    // This is a stub implementation for compatibility.
    lpBuffer->dwLength = sizeof(MEMORYSTATUS);
    lpBuffer->dwTotalPhys = 0; // Total physical memory
}
#endif