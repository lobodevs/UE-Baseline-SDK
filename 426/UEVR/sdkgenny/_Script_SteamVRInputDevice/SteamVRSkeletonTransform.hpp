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
struct SteamVRSkeletonTransform {
    private: char pad_0[0x5d0]; public:
    void* get_Root();
    void* get_wrist();
    void* get_Thumb_0();
    void* get_Thumb_1();
    void* get_Thumb_2();
    void* get_Thumb_3();
    void* get_Index_0();
    void* get_Index_1();
    void* get_Index_2();
    void* get_Index_3();
    void* get_Index_4();
    void* get_Middle_0();
    void* get_Middle_1();
    void* get_Middle_2();
    void* get_Middle_3();
    void* get_Middle_4();
    void* get_Ring_0();
    void* get_Ring_1();
    void* get_Ring_2();
    void* get_Ring_3();
    void* get_Ring_4();
    void* get_Pinky_0();
    void* get_Pinky_1();
    void* get_Pinky_2();
    void* get_Pinky_3();
    void* get_Pinky_4();
    void* get_Aux_Thumb();
    void* get_Aux_Index();
    void* get_Aux_Middle();
    void* get_Aux_Ring();
    void* get_Aux_Pinky();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x5d0
#pragma pack(pop)
}
