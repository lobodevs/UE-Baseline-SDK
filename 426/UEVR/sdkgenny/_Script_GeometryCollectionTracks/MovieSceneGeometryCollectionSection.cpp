#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieSceneGeometryCollectionSection.hpp"
#include "..\_Script_MovieScene\MovieSceneSection.hpp"
void* _Script_GeometryCollectionTracks::MovieSceneGeometryCollectionSection::get_Params() {
    return (void*)((uintptr_t)this + 0xe8);
}
_Script_CoreUObject::Class* _Script_GeometryCollectionTracks::MovieSceneGeometryCollectionSection::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/GeometryCollectionTracks.MovieSceneGeometryCollectionSection");
    return result;
}
