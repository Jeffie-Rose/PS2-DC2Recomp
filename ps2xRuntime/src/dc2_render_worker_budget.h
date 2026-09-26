#pragma once
#include <algorithm>
#include <charconv>
#include <cstring>

namespace dc2 {
// Additional raster workers; the dispatching thread also participates.
// No setting preserves the existing single-instance pool size.
inline unsigned renderWorkerCount(unsigned logicalCpus, const char *limit) {
    const unsigned available = std::min(logicalCpus > 1 ? logicalCpus - 1 : 0u, 15u);
    if (!limit || !*limit) return available;
    unsigned requested = 0;
    const char *end = limit + std::strlen(limit);
    const auto parsed = std::from_chars(limit, end, requested);
    if (parsed.ec != std::errc{} || parsed.ptr != end || requested > 15u) return available;
    return std::min(available, requested);
}
}
