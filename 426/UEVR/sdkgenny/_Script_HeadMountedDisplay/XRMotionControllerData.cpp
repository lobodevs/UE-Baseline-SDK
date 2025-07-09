#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "XRMotionControllerData.hpp"
void* _Script_HeadMountedDisplay::XRMotionControllerData::get_DeviceName() {
    return (void*)((uintptr_t)this + 0x4);
}
bool _Script_HeadMountedDisplay::XRMotionControllerData::get_bValid() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 1 != 0;
}
void* _Script_HeadMountedDisplay::XRMotionControllerData::get_TrackingStatus() {
    return (void*)((uintptr_t)this + 0x1e);
}
void* _Script_HeadMountedDisplay::XRMotionControllerData::get_DeviceVisualType() {
    return (void*)((uintptr_t)this + 0x1c);
}
void _Script_HeadMountedDisplay::XRMotionControllerData::set_bValid(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_HeadMountedDisplay::XRMotionControllerData::get_HandIndex() {
    return (void*)((uintptr_t)this + 0x1d);
}
void* _Script_HeadMountedDisplay::XRMotionControllerData::get_ApplicationInstanceID() {
    return (void*)((uintptr_t)this + 0xc);
}
void* _Script_HeadMountedDisplay::XRMotionControllerData::get_GripPosition() {
    return (void*)((uintptr_t)this + 0x20);
}
void* _Script_HeadMountedDisplay::XRMotionControllerData::get_GripRotation() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_HeadMountedDisplay::XRMotionControllerData::get_AimPosition() {
    return (void*)((uintptr_t)this + 0x40);
}
void* _Script_HeadMountedDisplay::XRMotionControllerData::get_AimRotation() {
    return (void*)((uintptr_t)this + 0x50);
}
void* _Script_HeadMountedDisplay::XRMotionControllerData::get_HandKeyPositions() {
    return (void*)((uintptr_t)this + 0x60);
}
void* _Script_HeadMountedDisplay::XRMotionControllerData::get_HandKeyRotations() {
    return (void*)((uintptr_t)this + 0x70);
}
void* _Script_HeadMountedDisplay::XRMotionControllerData::get_HandKeyRadii() {
    return (void*)((uintptr_t)this + 0x80);
}
bool _Script_HeadMountedDisplay::XRMotionControllerData::get_bIsGrasped() {
    return (*(uint8_t*)((uintptr_t)this + 0x90 + 0)) & 1 != 0;
}
void _Script_HeadMountedDisplay::XRMotionControllerData::set_bIsGrasped(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x90 + 0);
    *(uint8_t*)((uintptr_t)this + 0x90 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_HeadMountedDisplay::XRMotionControllerData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/HeadMountedDisplay.XRMotionControllerData");
    return result;
}
