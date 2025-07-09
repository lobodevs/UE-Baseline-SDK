#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "XRGestureConfig.hpp"
bool _Script_HeadMountedDisplay::XRGestureConfig::get_bTap() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 1 != 0;
}
void _Script_HeadMountedDisplay::XRGestureConfig::set_bNavigationAxisX(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_HeadMountedDisplay::XRGestureConfig::set_bTap(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_HeadMountedDisplay::XRGestureConfig::get_bHold() {
    return (*(uint8_t*)((uintptr_t)this + 0x1 + 0)) & 1 != 0;
}
bool _Script_HeadMountedDisplay::XRGestureConfig::get_bNavigationAxisY() {
    return (*(uint8_t*)((uintptr_t)this + 0x4 + 0)) & 1 != 0;
}
void _Script_HeadMountedDisplay::XRGestureConfig::set_bHold(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_HeadMountedDisplay::XRGestureConfig::get_AxisGesture() {
    return (void*)((uintptr_t)this + 0x2);
}
bool _Script_HeadMountedDisplay::XRGestureConfig::get_bNavigationAxisX() {
    return (*(uint8_t*)((uintptr_t)this + 0x3 + 0)) & 1 != 0;
}
void _Script_HeadMountedDisplay::XRGestureConfig::set_bNavigationAxisY(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4 + 0);
    *(uint8_t*)((uintptr_t)this + 0x4 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_HeadMountedDisplay::XRGestureConfig::get_bNavigationAxisZ() {
    return (*(uint8_t*)((uintptr_t)this + 0x5 + 0)) & 1 != 0;
}
void _Script_HeadMountedDisplay::XRGestureConfig::set_bNavigationAxisZ(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x5 + 0);
    *(uint8_t*)((uintptr_t)this + 0x5 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_HeadMountedDisplay::XRGestureConfig::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/HeadMountedDisplay.XRGestureConfig");
    return result;
}
