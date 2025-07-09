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
struct SteamVRInputBindingInfo {
    private: char pad_0[0x20]; public:
    void* get_DevicePathName();
    void* get_InputPathName();
    void* get_ModeName();
    void* get_SlotName();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x20
#pragma pack(pop)
}
