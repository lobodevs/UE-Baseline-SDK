#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_MovieScene\MovieSceneChannel.hpp"
#include "MovieSceneCameraShakeSourceTriggerChannel.hpp"
void* _Script_MovieSceneTracks::MovieSceneCameraShakeSourceTriggerChannel::get_KeyTimes() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_MovieSceneTracks::MovieSceneCameraShakeSourceTriggerChannel::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MovieSceneTracks.MovieSceneCameraShakeSourceTriggerChannel");
    return result;
}
void* _Script_MovieSceneTracks::MovieSceneCameraShakeSourceTriggerChannel::get_KeyValues() {
    return (void*)((uintptr_t)this + 0x18);
}
