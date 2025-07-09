#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_MovieScene\MovieSceneNameableTrack.hpp"
#include "..\_Script_MovieScene\MovieSceneSection.hpp"
#include "MovieScenePropertyTrack.hpp"
void* _Script_MovieSceneTracks::MovieScenePropertyTrack::get_PropertyBinding() {
    return (void*)((uintptr_t)this + 0x80);
}
_Script_MovieScene::MovieSceneSection*& _Script_MovieSceneTracks::MovieScenePropertyTrack::get_SectionToKey() {
    return *(_Script_MovieScene::MovieSceneSection**)((uintptr_t)this + 0x78);
}
void* _Script_MovieSceneTracks::MovieScenePropertyTrack::get_Sections() {
    return (void*)((uintptr_t)this + 0x98);
}
_Script_CoreUObject::Class* _Script_MovieSceneTracks::MovieScenePropertyTrack::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MovieSceneTracks.MovieScenePropertyTrack");
    return result;
}
