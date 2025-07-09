#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_MovieScene\MovieSceneEvalTemplate.hpp"
#include "MovieSceneEventSectionTemplate.hpp"
void* _Script_MovieSceneTracks::MovieSceneEventSectionTemplate::get_EventData() {
    return (void*)((uintptr_t)this + 0x20);
}
void _Script_MovieSceneTracks::MovieSceneEventSectionTemplate::set_bFireEventsWhenForwards(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xa8 + 0);
    *(uint8_t*)((uintptr_t)this + 0xa8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_MovieSceneTracks::MovieSceneEventSectionTemplate::get_bFireEventsWhenForwards() {
    return (*(uint8_t*)((uintptr_t)this + 0xa8 + 0)) & 1 != 0;
}
bool _Script_MovieSceneTracks::MovieSceneEventSectionTemplate::get_bFireEventsWhenBackwards() {
    return (*(uint8_t*)((uintptr_t)this + 0xa8 + 0)) & 2 != 0;
}
void _Script_MovieSceneTracks::MovieSceneEventSectionTemplate::set_bFireEventsWhenBackwards(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xa8 + 0);
    *(uint8_t*)((uintptr_t)this + 0xa8 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
_Script_CoreUObject::Class* _Script_MovieSceneTracks::MovieSceneEventSectionTemplate::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MovieSceneTracks.MovieSceneEventSectionTemplate");
    return result;
}
