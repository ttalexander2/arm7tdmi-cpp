//
// Created by talexander on 9/3/2024.
//

#pragma once

#include <cstdint>
#include <string>
#include <vector>

typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef uint32_t u64;

typedef int8_t i8;
typedef int16_t i16;
typedef int32_t i32;
typedef int64_t i64;

namespace arm7tdmi {
    enum class error : u8 {
        ALLOCATION_ERROR,
    };

    const char * error_to_string(error instr);

}

inline auto format_as(const arm7tdmi::error f) { return arm7tdmi::error_to_string(f); }
