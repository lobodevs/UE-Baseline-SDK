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
struct UE4RetargettingRefs {
    private: char pad_0[0x28]; public:
    bool get_bIsInitialized();
    void set_bIsInitialized(bool value);
    bool get_bIsRightHanded();
    void set_bIsRightHanded(bool value);
    void* get_KnuckleAverageMS_UE4();
    void* get_WristSideDirectionLS_UE4();
    void* get_WristForwardLS_UE4();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
