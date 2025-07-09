#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SteamVRInputOriginInfo.hpp"
void* _Script_SteamVRInputDevice::SteamVRInputOriginInfo::get_RenderModelComponentName() {
    return (void*)((uintptr_t)this + 0x8);
}
int32_t& _Script_SteamVRInputDevice::SteamVRInputOriginInfo::get_TrackedDeviceIndex() {
    return *(int32_t*)((uintptr_t)this + 0x0);
}
void* _Script_SteamVRInputDevice::SteamVRInputOriginInfo::get_TrackedDeviceModel() {
    return (void*)((uintptr_t)this + 0x18);
}
_Script_CoreUObject::Class* _Script_SteamVRInputDevice::SteamVRInputOriginInfo::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SteamVRInputDevice.SteamVRInputOriginInfo");
    return result;
}
