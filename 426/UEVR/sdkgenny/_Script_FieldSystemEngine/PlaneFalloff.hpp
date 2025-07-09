#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Vector.hpp"
#include "FieldNodeFloat.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_FieldSystemEngine {
#pragma pack(push, 1)
struct PlaneFalloff : public FieldNodeFloat {
    private: char pad_b0[0x30]; public:
    float& get_Magnitude();
    float& get_MinRange();
    float& get_MaxRange();
    float& get_Default();
    float& get_Distance();
    void* get_Position();
    void* get_Normal();
    void* get_Falloff();
    static _Script_CoreUObject::Class* static_class();
    _Script_FieldSystemEngine::PlaneFalloff* SetPlaneFalloff(float Magnitude, float MinRange, float MaxRange, float Default, float Distance, _Script_CoreUObject::Vector Position, _Script_CoreUObject::Vector Normal, void* Falloff);
}; // Size: 0xe0
#pragma pack(pop)
}
