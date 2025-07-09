#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_ClothingSystemRuntimeCommon {
#pragma pack(push, 1)
struct ClothConstraintSetup_Legacy {
    private: char pad_0[0x10]; public:
    float& get_Stiffness();
    float& get_StiffnessMultiplier();
    float& get_StretchLimit();
    float& get_CompressionLimit();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x10
#pragma pack(pop)
}
