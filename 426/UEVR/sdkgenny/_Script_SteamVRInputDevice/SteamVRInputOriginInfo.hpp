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
struct SteamVRInputOriginInfo {
    private: char pad_0[0x28]; public:
    int32_t& get_TrackedDeviceIndex();
    void* get_RenderModelComponentName();
    void* get_TrackedDeviceModel();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
