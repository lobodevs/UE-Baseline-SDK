#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_MovieScene\MovieSceneObjectBindingID.hpp"
#include "..\_Script_MovieScene\MovieSceneSection.hpp"
#include "MovieSceneCameraCutSection.hpp"
void* _Script_MovieSceneTracks::MovieSceneCameraCutSection::get_InitialCameraCutTransform() {
    return (void*)((uintptr_t)this + 0x120);
}
void _Script_MovieSceneTracks::MovieSceneCameraCutSection::set_bLockPreviousCamera(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xf0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xf0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_MovieSceneTracks::MovieSceneCameraCutSection::get_bLockPreviousCamera() {
    return (*(uint8_t*)((uintptr_t)this + 0xf0 + 0)) & 1 != 0;
}
void* _Script_MovieSceneTracks::MovieSceneCameraCutSection::get_CameraGuid() {
    return (void*)((uintptr_t)this + 0xf4);
}
void* _Script_MovieSceneTracks::MovieSceneCameraCutSection::get_CameraBindingID() {
    return (void*)((uintptr_t)this + 0x104);
}
void _Script_MovieSceneTracks::MovieSceneCameraCutSection::set_bHasInitialCameraCutTransform(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x150 + 0);
    *(uint8_t*)((uintptr_t)this + 0x150 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_MovieSceneTracks::MovieSceneCameraCutSection::get_bHasInitialCameraCutTransform() {
    return (*(uint8_t*)((uintptr_t)this + 0x150 + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Script_MovieSceneTracks::MovieSceneCameraCutSection::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MovieSceneTracks.MovieSceneCameraCutSection");
    return result;
}
void _Script_MovieSceneTracks::MovieSceneCameraCutSection::SetCameraBindingID(_Script_MovieScene::MovieSceneObjectBindingID& InCameraBindingID) {
    return;
}
_Script_MovieScene::MovieSceneObjectBindingID _Script_MovieSceneTracks::MovieSceneCameraCutSection::GetCameraBindingID() {
    return;
}
