#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SteamVRActionSet.hpp"
_Script_CoreUObject::Class* _Script_SteamVRInputDevice::SteamVRActionSet::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SteamVRInputDevice.SteamVRActionSet");
    return result;
}
void* _Script_SteamVRInputDevice::SteamVRActionSet::get_Path() {
    return (void*)((uintptr_t)this + 0x0);
}
