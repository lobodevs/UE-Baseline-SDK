#include "..\FUObjectArray.hpp"
#include "CameraRig_Crane.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
bool _Script_CinematicCamera::CameraRig_Crane::get_bLockMountYaw() {
    return (*(uint8_t*)((uintptr_t)this + 0x22d + 0)) & 1 != 0;
}
float& _Script_CinematicCamera::CameraRig_Crane::get_CraneYaw() {
    return *(float*)((uintptr_t)this + 0x224);
}
float& _Script_CinematicCamera::CameraRig_Crane::get_CranePitch() {
    return *(float*)((uintptr_t)this + 0x220);
}
bool _Script_CinematicCamera::CameraRig_Crane::get_bLockMountPitch() {
    return (*(uint8_t*)((uintptr_t)this + 0x22c + 0)) & 1 != 0;
}
float& _Script_CinematicCamera::CameraRig_Crane::get_CraneArmLength() {
    return *(float*)((uintptr_t)this + 0x228);
}
void _Script_CinematicCamera::CameraRig_Crane::set_bLockMountPitch(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x22c + 0);
    *(uint8_t*)((uintptr_t)this + 0x22c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_CinematicCamera::CameraRig_Crane::set_bLockMountYaw(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x22d + 0);
    *(uint8_t*)((uintptr_t)this + 0x22d + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_Engine::SceneComponent*& _Script_CinematicCamera::CameraRig_Crane::get_TransformComponent() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x230);
}
_Script_Engine::SceneComponent*& _Script_CinematicCamera::CameraRig_Crane::get_CraneYawControl() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x238);
}
_Script_Engine::SceneComponent*& _Script_CinematicCamera::CameraRig_Crane::get_CranePitchControl() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x240);
}
_Script_Engine::SceneComponent*& _Script_CinematicCamera::CameraRig_Crane::get_CraneCameraMount() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x248);
}
_Script_CoreUObject::Class* _Script_CinematicCamera::CameraRig_Crane::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/CinematicCamera.CameraRig_Crane");
    return result;
}
