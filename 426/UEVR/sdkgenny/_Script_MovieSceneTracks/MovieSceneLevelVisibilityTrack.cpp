#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_MovieScene\MovieSceneNameableTrack.hpp"
#include "MovieSceneLevelVisibilityTrack.hpp"
void* _Script_MovieSceneTracks::MovieSceneLevelVisibilityTrack::get_Sections() {
    return (void*)((uintptr_t)this + 0x78);
}
_Script_CoreUObject::Class* _Script_MovieSceneTracks::MovieSceneLevelVisibilityTrack::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MovieSceneTracks.MovieSceneLevelVisibilityTrack");
    return result;
}
