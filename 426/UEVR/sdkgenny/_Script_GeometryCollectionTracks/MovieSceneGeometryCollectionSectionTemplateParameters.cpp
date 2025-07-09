#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieSceneGeometryCollectionParams.hpp"
#include "MovieSceneGeometryCollectionSectionTemplateParameters.hpp"
void* _Script_GeometryCollectionTracks::MovieSceneGeometryCollectionSectionTemplateParameters::get_SectionStartTime() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_GeometryCollectionTracks::MovieSceneGeometryCollectionSectionTemplateParameters::get_SectionEndTime() {
    return (void*)((uintptr_t)this + 0x34);
}
_Script_CoreUObject::Class* _Script_GeometryCollectionTracks::MovieSceneGeometryCollectionSectionTemplateParameters::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/GeometryCollectionTracks.MovieSceneGeometryCollectionSectionTemplateParameters");
    return result;
}
