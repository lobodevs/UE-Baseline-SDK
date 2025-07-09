#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "XRHMDData.hpp"
_Script_CoreUObject::Class* _Script_HeadMountedDisplay::XRHMDData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/HeadMountedDisplay.XRHMDData");
    return result;
}
bool _Script_HeadMountedDisplay::XRHMDData::get_bValid() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 1 != 0;
}
void* _Script_HeadMountedDisplay::XRHMDData::get_TrackingStatus() {
    return (void*)((uintptr_t)this + 0x1c);
}
void _Script_HeadMountedDisplay::XRHMDData::set_bValid(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_HeadMountedDisplay::XRHMDData::get_Rotation() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_HeadMountedDisplay::XRHMDData::get_DeviceName() {
    return (void*)((uintptr_t)this + 0x4);
}
void* _Script_HeadMountedDisplay::XRHMDData::get_ApplicationInstanceID() {
    return (void*)((uintptr_t)this + 0xc);
}
void* _Script_HeadMountedDisplay::XRHMDData::get_Position() {
    return (void*)((uintptr_t)this + 0x20);
}
