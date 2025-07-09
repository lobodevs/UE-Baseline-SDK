#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Vector.hpp"
#include "FieldNodeVector.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_FieldSystemEngine {
#pragma pack(push, 1)
struct UniformVector : public FieldNodeVector {
    private: char pad_b0[0x10]; public:
    float& get_Magnitude();
    void* get_Direction();
    static _Script_CoreUObject::Class* static_class();
    _Script_FieldSystemEngine::UniformVector* SetUniformVector(float Magnitude, _Script_CoreUObject::Vector Direction);
}; // Size: 0xc0
#pragma pack(pop)
}
