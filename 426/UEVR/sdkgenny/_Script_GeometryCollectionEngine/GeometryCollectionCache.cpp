#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "GeometryCollection.hpp"
#include "GeometryCollectionCache.hpp"
void* _Script_GeometryCollectionEngine::GeometryCollectionCache::get_RecordedData() {
    return (void*)((uintptr_t)this + 0x28);
}
_Script_GeometryCollectionEngine::GeometryCollection*& _Script_GeometryCollectionEngine::GeometryCollectionCache::get_SupportedCollection() {
    return *(_Script_GeometryCollectionEngine::GeometryCollection**)((uintptr_t)this + 0x38);
}
void* _Script_GeometryCollectionEngine::GeometryCollectionCache::get_CompatibleCollectionState() {
    return (void*)((uintptr_t)this + 0x40);
}
_Script_CoreUObject::Class* _Script_GeometryCollectionEngine::GeometryCollectionCache::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/GeometryCollectionEngine.GeometryCollectionCache");
    return result;
}
