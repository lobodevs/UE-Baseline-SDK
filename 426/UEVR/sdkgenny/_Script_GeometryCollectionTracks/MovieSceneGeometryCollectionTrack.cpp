#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieSceneGeometryCollectionTrack.hpp"
#include "..\_Script_MovieScene\MovieSceneNameableTrack.hpp"
void* _Script_GeometryCollectionTracks::MovieSceneGeometryCollectionTrack::get_AnimationSections() {
    return (void*)((uintptr_t)this + 0x80);
}
_Script_CoreUObject::Class* _Script_GeometryCollectionTracks::MovieSceneGeometryCollectionTrack::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/GeometryCollectionTracks.MovieSceneGeometryCollectionTrack");
    return result;
}
