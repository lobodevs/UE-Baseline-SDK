#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_MovieScene\MovieSceneSection.hpp"
#include "MovieSceneCameraShakeSection.hpp"
_Script_CoreUObject::Class* _Script_MovieSceneTracks::MovieSceneCameraShakeSection::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MovieSceneTracks.MovieSceneCameraShakeSection");
    return result;
}
void* _Script_MovieSceneTracks::MovieSceneCameraShakeSection::get_ShakeData() {
    return (void*)((uintptr_t)this + 0xe8);
}
void* _Script_MovieSceneTracks::MovieSceneCameraShakeSection::get_PlaySpace() {
    return (void*)((uintptr_t)this + 0x114);
}
float& _Script_MovieSceneTracks::MovieSceneCameraShakeSection::get_PlayScale() {
    return *(float*)((uintptr_t)this + 0x110);
}
void* _Script_MovieSceneTracks::MovieSceneCameraShakeSection::get_ShakeClass() {
    return (void*)((uintptr_t)this + 0x108);
}
void* _Script_MovieSceneTracks::MovieSceneCameraShakeSection::get_UserDefinedPlaySpace() {
    return (void*)((uintptr_t)this + 0x118);
}
