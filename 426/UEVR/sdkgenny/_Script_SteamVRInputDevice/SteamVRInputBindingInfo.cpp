#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SteamVRInputBindingInfo.hpp"
void* _Script_SteamVRInputDevice::SteamVRInputBindingInfo::get_DevicePathName() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_SteamVRInputDevice::SteamVRInputBindingInfo::get_SlotName() {
    return (void*)((uintptr_t)this + 0x18);
}
void* _Script_SteamVRInputDevice::SteamVRInputBindingInfo::get_InputPathName() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_SteamVRInputDevice::SteamVRInputBindingInfo::get_ModeName() {
    return (void*)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Script_SteamVRInputDevice::SteamVRInputBindingInfo::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SteamVRInputDevice.SteamVRInputBindingInfo");
    return result;
}
