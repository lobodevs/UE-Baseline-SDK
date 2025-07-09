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
struct XRMotionControllerData {
    private: char pad_0[0xa0]; public:
    bool get_bValid();
    void set_bValid(bool value);
    void* get_DeviceName();
    void* get_ApplicationInstanceID();
    void* get_DeviceVisualType();
    void* get_HandIndex();
    void* get_TrackingStatus();
    void* get_GripPosition();
    void* get_GripRotation();
    void* get_AimPosition();
    void* get_AimRotation();
    void* get_HandKeyPositions();
    void* get_HandKeyRotations();
    void* get_HandKeyRadii();
    bool get_bIsGrasped();
    void set_bIsGrasped(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xa0
#pragma pack(pop)
}
