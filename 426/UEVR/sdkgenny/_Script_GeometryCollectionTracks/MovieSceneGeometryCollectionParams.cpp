#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieSceneGeometryCollectionParams.hpp"
void* _Script_GeometryCollectionTracks::MovieSceneGeometryCollectionParams::get_GeometryCollectionCache() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_GeometryCollectionTracks::MovieSceneGeometryCollectionParams::get_StartFrameOffset() {
    return (void*)((uintptr_t)this + 0x20);
}
void* _Script_GeometryCollectionTracks::MovieSceneGeometryCollectionParams::get_EndFrameOffset() {
    return (void*)((uintptr_t)this + 0x24);
}
float& _Script_GeometryCollectionTracks::MovieSceneGeometryCollectionParams::get_PlayRate() {
    return *(float*)((uintptr_t)this + 0x28);
}
_Script_CoreUObject::Class* _Script_GeometryCollectionTracks::MovieSceneGeometryCollectionParams::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/GeometryCollectionTracks.MovieSceneGeometryCollectionParams");
    return result;
}
