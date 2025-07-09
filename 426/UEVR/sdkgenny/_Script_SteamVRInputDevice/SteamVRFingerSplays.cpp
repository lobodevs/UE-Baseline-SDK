#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SteamVRFingerSplays.hpp"
float& _Script_SteamVRInputDevice::SteamVRFingerSplays::get_Thumb_Index() {
    return *(float*)((uintptr_t)this + 0x0);
}
float& _Script_SteamVRInputDevice::SteamVRFingerSplays::get_Index_Middle() {
    return *(float*)((uintptr_t)this + 0x4);
}
float& _Script_SteamVRInputDevice::SteamVRFingerSplays::get_Middle_Ring() {
    return *(float*)((uintptr_t)this + 0x8);
}
float& _Script_SteamVRInputDevice::SteamVRFingerSplays::get_Ring_Pinky() {
    return *(float*)((uintptr_t)this + 0xc);
}
_Script_CoreUObject::Class* _Script_SteamVRInputDevice::SteamVRFingerSplays::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SteamVRInputDevice.SteamVRFingerSplays");
    return result;
}
