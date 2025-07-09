#include "..\FUObjectArray.hpp"
#include "CameraFocusSettings.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_CinematicCamera::CameraFocusSettings::get_FocusMethod() {
    return (void*)((uintptr_t)this + 0x0);
}
float& _Script_CinematicCamera::CameraFocusSettings::get_ManualFocusDistance() {
    return *(float*)((uintptr_t)this + 0x4);
}
void* _Script_CinematicCamera::CameraFocusSettings::get_TrackingFocusSettings() {
    return (void*)((uintptr_t)this + 0x8);
}
void _Script_CinematicCamera::CameraFocusSettings::set_bDrawDebugFocusPlane(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x40 + 0);
    *(uint8_t*)((uintptr_t)this + 0x40 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_CinematicCamera::CameraFocusSettings::get_bDrawDebugFocusPlane() {
    return (*(uint8_t*)((uintptr_t)this + 0x40 + 0)) & 1 != 0;
}
bool _Script_CinematicCamera::CameraFocusSettings::get_bSmoothFocusChanges() {
    return (*(uint8_t*)((uintptr_t)this + 0x48 + 0)) & 1 != 0;
}
void* _Script_CinematicCamera::CameraFocusSettings::get_DebugFocusPlaneColor() {
    return (void*)((uintptr_t)this + 0x44);
}
void _Script_CinematicCamera::CameraFocusSettings::set_bSmoothFocusChanges(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x48 + 0);
    *(uint8_t*)((uintptr_t)this + 0x48 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_CinematicCamera::CameraFocusSettings::get_FocusSmoothingInterpSpeed() {
    return *(float*)((uintptr_t)this + 0x4c);
}
float& _Script_CinematicCamera::CameraFocusSettings::get_FocusOffset() {
    return *(float*)((uintptr_t)this + 0x50);
}
_Script_CoreUObject::Class* _Script_CinematicCamera::CameraFocusSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/CinematicCamera.CameraFocusSettings");
    return result;
}
