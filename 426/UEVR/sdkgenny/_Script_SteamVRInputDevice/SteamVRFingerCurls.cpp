#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SteamVRFingerCurls.hpp"
float& _Script_SteamVRInputDevice::SteamVRFingerCurls::get_Pinky() {
    return *(float*)((uintptr_t)this + 0x10);
}
float& _Script_SteamVRInputDevice::SteamVRFingerCurls::get_Thumb() {
    return *(float*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_SteamVRInputDevice::SteamVRFingerCurls::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SteamVRInputDevice.SteamVRFingerCurls");
    return result;
}
float& _Script_SteamVRInputDevice::SteamVRFingerCurls::get_Index() {
    return *(float*)((uintptr_t)this + 0x4);
}
float& _Script_SteamVRInputDevice::SteamVRFingerCurls::get_Ring() {
    return *(float*)((uintptr_t)this + 0xc);
}
float& _Script_SteamVRInputDevice::SteamVRFingerCurls::get_Middle() {
    return *(float*)((uintptr_t)this + 0x8);
}
