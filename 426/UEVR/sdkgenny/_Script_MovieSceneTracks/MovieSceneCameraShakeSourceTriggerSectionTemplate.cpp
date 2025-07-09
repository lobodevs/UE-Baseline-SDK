#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_MovieScene\MovieSceneEvalTemplate.hpp"
#include "MovieSceneCameraShakeSourceTriggerSectionTemplate.hpp"
void* _Script_MovieSceneTracks::MovieSceneCameraShakeSourceTriggerSectionTemplate::get_TriggerTimes() {
    return (void*)((uintptr_t)this + 0x20);
}
void* _Script_MovieSceneTracks::MovieSceneCameraShakeSourceTriggerSectionTemplate::get_TriggerValues() {
    return (void*)((uintptr_t)this + 0x30);
}
_Script_CoreUObject::Class* _Script_MovieSceneTracks::MovieSceneCameraShakeSourceTriggerSectionTemplate::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MovieSceneTracks.MovieSceneCameraShakeSourceTriggerSectionTemplate");
    return result;
}
