#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\ActorComponent.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct StaticMesh;
}
namespace _Script_SteamVRInputDevice {
#pragma pack(push, 1)
struct SteamVRTrackingReferences : public _Script_Engine::ActorComponent {
    private: char pad_b0[0x58]; public:
    void* get_OnTrackedDeviceActivated();
    void* get_OnTrackedDeviceDeactivated();
    float& get_ActiveDevicePollFrequency();
    void* get_TrackingReferenceScale();
    void* get_TrackingReferences();
    static _Script_CoreUObject::Class* static_class();
    bool ShowTrackingReferences(_Script_Engine::StaticMesh* TrackingReferenceMesh);
    void HideTrackingReferences();
}; // Size: 0x108
#pragma pack(pop)
}
