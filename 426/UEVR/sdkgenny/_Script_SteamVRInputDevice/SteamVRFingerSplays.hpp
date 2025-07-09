#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SteamVRInputDevice {
#pragma pack(push, 1)
struct SteamVRFingerSplays {
    private: char pad_0[0x10]; public:
    float& get_Thumb_Index();
    float& get_Index_Middle();
    float& get_Middle_Ring();
    float& get_Ring_Pinky();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x10
#pragma pack(pop)
}
