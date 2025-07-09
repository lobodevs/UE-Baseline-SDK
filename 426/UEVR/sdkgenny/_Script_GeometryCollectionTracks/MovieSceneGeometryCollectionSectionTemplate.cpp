#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieSceneGeometryCollectionSectionTemplate.hpp"
#include "..\_Script_MovieScene\MovieSceneEvalTemplate.hpp"
void* _Script_GeometryCollectionTracks::MovieSceneGeometryCollectionSectionTemplate::get_Params() {
    return (void*)((uintptr_t)this + 0x20);
}
_Script_CoreUObject::Class* _Script_GeometryCollectionTracks::MovieSceneGeometryCollectionSectionTemplate::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/GeometryCollectionTracks.MovieSceneGeometryCollectionSectionTemplate");
    return result;
}
