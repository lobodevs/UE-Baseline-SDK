#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "XRDeviceId.hpp"
void* _Script_HeadMountedDisplay::XRDeviceId::get_SystemName() {
    return (void*)((uintptr_t)this + 0x0);
}
int32_t& _Script_HeadMountedDisplay::XRDeviceId::get_DeviceID() {
    return *(int32_t*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_HeadMountedDisplay::XRDeviceId::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/HeadMountedDisplay.XRDeviceId");
    return result;
}
