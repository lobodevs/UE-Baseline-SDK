#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_MovieScene\MovieSceneSection.hpp"
#include "MovieSceneCameraShakeSourceShakeSection.hpp"
void* _Script_MovieSceneTracks::MovieSceneCameraShakeSourceShakeSection::get_ShakeData() {
    return (void*)((uintptr_t)this + 0xe8);
}
_Script_CoreUObject::Class* _Script_MovieSceneTracks::MovieSceneCameraShakeSourceShakeSection::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MovieSceneTracks.MovieSceneCameraShakeSourceShakeSection");
    return result;
}
