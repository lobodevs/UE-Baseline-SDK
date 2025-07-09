#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "FieldNodeVector.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_FieldSystemEngine {
#pragma pack(push, 1)
struct RandomVector : public FieldNodeVector {
    private: char pad_b0[0x8]; public:
    float& get_Magnitude();
    static _Script_CoreUObject::Class* static_class();
    _Script_FieldSystemEngine::RandomVector* SetRandomVector(float Magnitude);
}; // Size: 0xb8
#pragma pack(pop)
}
