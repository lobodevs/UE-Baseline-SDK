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
struct SteamVRFingerCurls {
    private: char pad_0[0x14]; public:
    float& get_Thumb();
    float& get_Index();
    float& get_Middle();
    float& get_Ring();
    float& get_Pinky();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x14
#pragma pack(pop)
}
