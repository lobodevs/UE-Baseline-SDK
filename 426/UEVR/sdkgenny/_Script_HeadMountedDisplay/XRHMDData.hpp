#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_HeadMountedDisplay {
#pragma pack(push, 1)
struct XRHMDData {
    private: char pad_0[0x40]; public:
    bool get_bValid();
    void set_bValid(bool value);
    void* get_DeviceName();
    void* get_ApplicationInstanceID();
    void* get_TrackingStatus();
    void* get_Position();
    void* get_Rotation();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x40
#pragma pack(pop)
}
