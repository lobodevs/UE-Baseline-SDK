#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "FieldNodeInt.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_FieldSystemEngine {
#pragma pack(push, 1)
struct UniformInteger : public FieldNodeInt {
    private: char pad_b0[0x8]; public:
    int32_t& get_Magnitude();
    static _Script_CoreUObject::Class* static_class();
    _Script_FieldSystemEngine::UniformInteger* SetUniformInteger(int32_t Magnitude);
}; // Size: 0xb8
#pragma pack(pop)
}
