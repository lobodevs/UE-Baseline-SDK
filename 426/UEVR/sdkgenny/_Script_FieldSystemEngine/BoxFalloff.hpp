#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Transform.hpp"
#include "FieldNodeFloat.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_FieldSystemEngine {
#pragma pack(push, 1)
struct BoxFalloff : public FieldNodeFloat {
    private: char pad_b0[0x50]; public:
    float& get_Magnitude();
    float& get_MinRange();
    float& get_MaxRange();
    float& get_Default();
    void* get_Transform();
    void* get_Falloff();
    static _Script_CoreUObject::Class* static_class();
    _Script_FieldSystemEngine::BoxFalloff* SetBoxFalloff(float Magnitude, float MinRange, float MaxRange, float Default, _Script_CoreUObject::Transform Transform, void* Falloff);
}; // Size: 0x100
#pragma pack(pop)
}
