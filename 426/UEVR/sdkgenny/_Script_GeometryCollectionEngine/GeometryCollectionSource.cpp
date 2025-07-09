#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "GeometryCollectionSource.hpp"
void* _Script_GeometryCollectionEngine::GeometryCollectionSource::get_LocalTransform() {
    return (void*)((uintptr_t)this + 0x20);
}
void* _Script_GeometryCollectionEngine::GeometryCollectionSource::get_SourceGeometryObject() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_GeometryCollectionEngine::GeometryCollectionSource::get_SourceMaterial() {
    return (void*)((uintptr_t)this + 0x50);
}
_Script_CoreUObject::Class* _Script_GeometryCollectionEngine::GeometryCollectionSource::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/GeometryCollectionEngine.GeometryCollectionSource");
    return result;
}
