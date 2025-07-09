#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieSceneEventTriggerData.hpp"
void* _Script_MovieSceneTracks::MovieSceneEventTriggerData::get_Ptrs() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_MovieSceneTracks::MovieSceneEventTriggerData::get_ObjectBindingId() {
    return (void*)((uintptr_t)this + 0x28);
}
_Script_CoreUObject::Class* _Script_MovieSceneTracks::MovieSceneEventTriggerData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MovieSceneTracks.MovieSceneEventTriggerData");
    return result;
}
