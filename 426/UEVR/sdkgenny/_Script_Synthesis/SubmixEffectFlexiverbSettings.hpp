#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Synthesis {
#pragma pack(push, 1)
struct SubmixEffectFlexiverbSettings {
    private: char pad_0[0x10]; public:
    float& get_PreDelay();
    float& get_DecayTime();
    float& get_RoomDampening();
    int32_t& get_Complexity();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x10
#pragma pack(pop)
}
