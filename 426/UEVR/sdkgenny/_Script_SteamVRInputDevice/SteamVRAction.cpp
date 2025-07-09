#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SteamVRAction.hpp"
void* _Script_SteamVRInputDevice::SteamVRAction::get_Name() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_SteamVRInputDevice::SteamVRAction::get_Path() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_SteamVRInputDevice::SteamVRAction::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SteamVRInputDevice.SteamVRAction");
    return result;
}
