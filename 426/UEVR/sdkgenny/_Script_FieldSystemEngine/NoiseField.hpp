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
struct NoiseField : public FieldNodeFloat {
    private: char pad_b0[0x40]; public:
    float& get_MinRange();
    float& get_MaxRange();
    void* get_Transform();
    static _Script_CoreUObject::Class* static_class();
    _Script_FieldSystemEngine::NoiseField* SetNoiseField(float MinRange, float MaxRange, _Script_CoreUObject::Transform Transform);
}; // Size: 0xf0
#pragma pack(pop)
}
