#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "UE4RetargettingRefs.hpp"
bool _Script_SteamVRInputDevice::UE4RetargettingRefs::get_bIsInitialized() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 1 != 0;
}
void _Script_SteamVRInputDevice::UE4RetargettingRefs::set_bIsRightHanded(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_SteamVRInputDevice::UE4RetargettingRefs::set_bIsInitialized(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_SteamVRInputDevice::UE4RetargettingRefs::get_bIsRightHanded() {
    return (*(uint8_t*)((uintptr_t)this + 0x1 + 0)) & 1 != 0;
}
void* _Script_SteamVRInputDevice::UE4RetargettingRefs::get_WristForwardLS_UE4() {
    return (void*)((uintptr_t)this + 0x1c);
}
void* _Script_SteamVRInputDevice::UE4RetargettingRefs::get_WristSideDirectionLS_UE4() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_SteamVRInputDevice::UE4RetargettingRefs::get_KnuckleAverageMS_UE4() {
    return (void*)((uintptr_t)this + 0x4);
}
_Script_CoreUObject::Class* _Script_SteamVRInputDevice::UE4RetargettingRefs::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SteamVRInputDevice.UE4RetargettingRefs");
    return result;
}
