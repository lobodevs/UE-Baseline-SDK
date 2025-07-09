#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Vector.hpp"
#include "FieldNodeInt.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_FieldSystemEngine {
#pragma pack(push, 1)
struct RadialIntMask : public FieldNodeInt {
    private: char pad_b0[0x20]; public:
    float& get_Radius();
    void* get_Position();
    int32_t& get_InteriorValue();
    int32_t& get_ExteriorValue();
    void* get_SetMaskCondition();
    static _Script_CoreUObject::Class* static_class();
    _Script_FieldSystemEngine::RadialIntMask* SetRadialIntMask(float Radius, _Script_CoreUObject::Vector Position, int32_t InteriorValue, int32_t ExteriorValue, void* SetMaskConditionIn);
}; // Size: 0xd0
#pragma pack(pop)
}
