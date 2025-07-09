#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_MovieScene\MovieSceneEvalTemplate.hpp"
#include "MovieSceneCameraShakeSourceShakeSectionTemplate.hpp"
void* _Script_MovieSceneTracks::MovieSceneCameraShakeSourceShakeSectionTemplate::get_SourceData() {
    return (void*)((uintptr_t)this + 0x20);
}
_Script_CoreUObject::Class* _Script_MovieSceneTracks::MovieSceneCameraShakeSourceShakeSectionTemplate::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MovieSceneTracks.MovieSceneCameraShakeSourceShakeSectionTemplate");
    return result;
}
void* _Script_MovieSceneTracks::MovieSceneCameraShakeSourceShakeSectionTemplate::get_SectionEndTime() {
    return (void*)((uintptr_t)this + 0x44);
}
void* _Script_MovieSceneTracks::MovieSceneCameraShakeSourceShakeSectionTemplate::get_SectionStartTime() {
    return (void*)((uintptr_t)this + 0x40);
}
