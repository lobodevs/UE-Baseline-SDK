#include "..\FUObjectArray.hpp"
#include "CineCameraComponent.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\CameraComponent.hpp"
void* _Script_CinematicCamera::CineCameraComponent::get_FocusSettings() {
    return (void*)((uintptr_t)this + 0x7f0);
}
void* _Script_CinematicCamera::CineCameraComponent::get_FilmbackSettings() {
    return (void*)((uintptr_t)this + 0x7c0);
}
void* _Script_CinematicCamera::CineCameraComponent::get_Filmback() {
    return (void*)((uintptr_t)this + 0x7cc);
}
void* _Script_CinematicCamera::CineCameraComponent::get_LensSettings() {
    return (void*)((uintptr_t)this + 0x7d8);
}
float& _Script_CinematicCamera::CineCameraComponent::get_CurrentFocalLength() {
    return *(float*)((uintptr_t)this + 0x848);
}
void* _Script_CinematicCamera::CineCameraComponent::get_FilmbackPresets() {
    return (void*)((uintptr_t)this + 0x860);
}
float& _Script_CinematicCamera::CineCameraComponent::get_CurrentAperture() {
    return *(float*)((uintptr_t)this + 0x84c);
}
void* _Script_CinematicCamera::CineCameraComponent::GetLensPresetsCopy() {
    return;
}
float& _Script_CinematicCamera::CineCameraComponent::get_CurrentFocusDistance() {
    return *(float*)((uintptr_t)this + 0x850);
}
void* _Script_CinematicCamera::CineCameraComponent::get_LensPresets() {
    return (void*)((uintptr_t)this + 0x870);
}
void* _Script_CinematicCamera::CineCameraComponent::get_DefaultFilmbackPresetName() {
    return (void*)((uintptr_t)this + 0x880);
}
void* _Script_CinematicCamera::CineCameraComponent::get_DefaultLensPresetName() {
    return (void*)((uintptr_t)this + 0x8a0);
}
void* _Script_CinematicCamera::CineCameraComponent::get_DefaultFilmbackPreset() {
    return (void*)((uintptr_t)this + 0x890);
}
float& _Script_CinematicCamera::CineCameraComponent::get_DefaultLensFocalLength() {
    return *(float*)((uintptr_t)this + 0x8b0);
}
void _Script_CinematicCamera::CineCameraComponent::SetLensPresetByName(void* InPresetName) {
    return;
}
float& _Script_CinematicCamera::CineCameraComponent::get_DefaultLensFStop() {
    return *(float*)((uintptr_t)this + 0x8b4);
}
_Script_CoreUObject::Class* _Script_CinematicCamera::CineCameraComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/CinematicCamera.CineCameraComponent");
    return result;
}
void _Script_CinematicCamera::CineCameraComponent::SetFilmbackPresetByName(void* InPresetName) {
    return;
}
void _Script_CinematicCamera::CineCameraComponent::SetCurrentFocalLength(float InFocalLength) {
    return;
}
float _Script_CinematicCamera::CineCameraComponent::GetVerticalFieldOfView() {
    return;
}
void* _Script_CinematicCamera::CineCameraComponent::GetLensPresetName() {
    return;
}
float _Script_CinematicCamera::CineCameraComponent::GetHorizontalFieldOfView() {
    return;
}
void* _Script_CinematicCamera::CineCameraComponent::GetFilmbackPresetsCopy() {
    return;
}
void* _Script_CinematicCamera::CineCameraComponent::GetFilmbackPresetName() {
    return;
}
void* _Script_CinematicCamera::CineCameraComponent::GetDefaultFilmbackPresetName() {
    return;
}
