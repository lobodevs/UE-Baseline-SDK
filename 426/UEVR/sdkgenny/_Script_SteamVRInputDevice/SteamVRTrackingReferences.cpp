#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\ActorComponent.hpp"
#include "..\_Script_Engine\StaticMesh.hpp"
#include "SteamVRTrackingReferences.hpp"
void* _Script_SteamVRInputDevice::SteamVRTrackingReferences::get_OnTrackedDeviceActivated() {
    return (void*)((uintptr_t)this + 0xb0);
}
bool _Script_SteamVRInputDevice::SteamVRTrackingReferences::ShowTrackingReferences(_Script_Engine::StaticMesh* TrackingReferenceMesh) {
    return;
}
void* _Script_SteamVRInputDevice::SteamVRTrackingReferences::get_OnTrackedDeviceDeactivated() {
    return (void*)((uintptr_t)this + 0xc0);
}
float& _Script_SteamVRInputDevice::SteamVRTrackingReferences::get_ActiveDevicePollFrequency() {
    return *(float*)((uintptr_t)this + 0xd0);
}
void* _Script_SteamVRInputDevice::SteamVRTrackingReferences::get_TrackingReferenceScale() {
    return (void*)((uintptr_t)this + 0xd4);
}
void* _Script_SteamVRInputDevice::SteamVRTrackingReferences::get_TrackingReferences() {
    return (void*)((uintptr_t)this + 0xe0);
}
_Script_CoreUObject::Class* _Script_SteamVRInputDevice::SteamVRTrackingReferences::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamVRInputDevice.SteamVRTrackingReferences");
    return result;
}
void _Script_SteamVRInputDevice::SteamVRTrackingReferences::HideTrackingReferences() {
    return;
}
