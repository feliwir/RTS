#pragma once
#include <alloca.h>
#include <cstdint>

struct MEMORYSTATUSEX
{
    uint32_t dwLength;
    uint32_t dwMemoryLoad;
    uint64_t ullTotalPhys;
    uint64_t ullAvailPhys;
    uint64_t ullTotalPageFile;
    uint64_t ullAvailPageFile;
    uint64_t ullTotalVirtual;
    uint64_t ullAvailVirtual;
    uint64_t ullAvailExtendedVirtual;
};

inline void GlobalMemoryStatusEx(MEMORYSTATUSEX *lpBuffer)
{
    // This is a stub implementation for compatibility.
    lpBuffer->dwLength = sizeof(MEMORYSTATUSEX);
    lpBuffer->dwMemoryLoad = 0; // Assume no memory load
    lpBuffer->ullTotalPhys = 0; // Total physical memory
    lpBuffer->ullAvailPhys = 0; // Available physical memory
    lpBuffer->ullTotalPageFile = 0; // Total page file size
    lpBuffer->ullAvailPageFile = 0; // Available page file size
    lpBuffer->ullTotalVirtual = 0; // Total virtual memory
    lpBuffer->ullAvailVirtual = 0; // Available virtual memory
}

#define _alloca alloca