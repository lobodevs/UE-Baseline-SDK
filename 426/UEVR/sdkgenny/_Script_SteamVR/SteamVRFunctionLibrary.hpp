#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
struct Vector;
}
namespace _Script_CoreUObject {
struct Rotator;
}
namespace _Script_SteamVR {
#pragma pack(push, 1)
struct SteamVRFunctionLibrary : public _Script_Engine::BlueprintFunctionLibrary {
    static _Script_CoreUObject::Class* static_class();
    void GetValidTrackedDeviceIds(void* DeviceType, void*& OutTrackedDeviceIds);
    bool GetTrackedDevicePositionAndOrientation(int32_t DeviceID, _Script_CoreUObject::Vector& OutPosition, _Script_CoreUObject::Rotator& OutOrientation);
    bool GetHandPositionAndOrientation(int32_t ControllerIndex, void* hand, _Script_CoreUObject::Vector& OutPosition, _Script_CoreUObject::Rotator& OutOrientation);
}; // Size: 0x28
#pragma pack(pop)
}
