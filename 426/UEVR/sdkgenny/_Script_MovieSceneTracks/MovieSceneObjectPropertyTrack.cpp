#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieSceneObjectPropertyTrack.hpp"
#include "MovieScenePropertyTrack.hpp"
void* _Script_MovieSceneTracks::MovieSceneObjectPropertyTrack::get_PropertyClass() {
    return (void*)((uintptr_t)this + 0xb0);
}
_Script_CoreUObject::Class* _Script_MovieSceneTracks::MovieSceneObjectPropertyTrack::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MovieSceneTracks.MovieSceneObjectPropertyTrack");
    return result;
}
