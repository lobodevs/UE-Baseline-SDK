#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_MovieScene\MovieSceneNameableTrack.hpp"
#include "MovieSceneEventTrack.hpp"
void _Script_MovieSceneTracks::MovieSceneEventTrack::set_bFireEventsWhenForwards(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x80 + 0);
    *(uint8_t*)((uintptr_t)this + 0x80 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_MovieSceneTracks::MovieSceneEventTrack::get_bFireEventsWhenForwards() {
    return (*(uint8_t*)((uintptr_t)this + 0x80 + 0)) & 1 != 0;
}
void* _Script_MovieSceneTracks::MovieSceneEventTrack::get_EventPosition() {
    return (void*)((uintptr_t)this + 0x84);
}
void _Script_MovieSceneTracks::MovieSceneEventTrack::set_bFireEventsWhenBackwards(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x80 + 0);
    *(uint8_t*)((uintptr_t)this + 0x80 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_MovieSceneTracks::MovieSceneEventTrack::get_bFireEventsWhenBackwards() {
    return (*(uint8_t*)((uintptr_t)this + 0x80 + 0)) & 2 != 0;
}
void* _Script_MovieSceneTracks::MovieSceneEventTrack::get_Sections() {
    return (void*)((uintptr_t)this + 0x88);
}
_Script_CoreUObject::Class* _Script_MovieSceneTracks::MovieSceneEventTrack::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MovieSceneTracks.MovieSceneEventTrack");
    return result;
}
