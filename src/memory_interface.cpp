//
// Created by talexander on 9/23/2024.
//
#include <arm7tdmi/memory_interface.h>

namespace arm7tdmi {

    u32 * allocator::allocate(const u32 n) noexcept  {
        if (n > std::numeric_limits<std::size_t>::max() / sizeof(u32))
            return nullptr;

        return new u32[n];
    }

    void allocator::deallocate(const u32 *p) noexcept {
        delete p;
    }
}
