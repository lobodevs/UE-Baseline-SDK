#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "GeometryCollectionSizeSpecificData.hpp"
int32_t& _Script_GeometryCollectionEngine::GeometryCollectionSizeSpecificData::get_MinLevelSetResolution() {
    return *(int32_t*)((uintptr_t)this + 0x8);
}
float& _Script_GeometryCollectionEngine::GeometryCollectionSizeSpecificData::get_MaxSize() {
    return *(float*)((uintptr_t)this + 0x0);
}
void* _Script_GeometryCollectionEngine::GeometryCollectionSizeSpecificData::get_CollisionType() {
    return (void*)((uintptr_t)this + 0x4);
}
void* _Script_GeometryCollectionEngine::GeometryCollectionSizeSpecificData::get_ImplicitType() {
    return (void*)((uintptr_t)this + 0x5);
}
int32_t& _Script_GeometryCollectionEngine::GeometryCollectionSizeSpecificData::get_MaxLevelSetResolution() {
    return *(int32_t*)((uintptr_t)this + 0xc);
}
int32_t& _Script_GeometryCollectionEngine::GeometryCollectionSizeSpecificData::get_MinClusterLevelSetResolution() {
    return *(int32_t*)((uintptr_t)this + 0x10);
}
int32_t& _Script_GeometryCollectionEngine::GeometryCollectionSizeSpecificData::get_MaxClusterLevelSetResolution() {
    return *(int32_t*)((uintptr_t)this + 0x14);
}
int32_t& _Script_GeometryCollectionEngine::GeometryCollectionSizeSpecificData::get_CollisionObjectReductionPercentage() {
    return *(int32_t*)((uintptr_t)this + 0x18);
}
int32_t& _Script_GeometryCollectionEngine::GeometryCollectionSizeSpecificData::get_MaximumCollisionParticles() {
    return *(int32_t*)((uintptr_t)this + 0x20);
}
float& _Script_GeometryCollectionEngine::GeometryCollectionSizeSpecificData::get_CollisionParticlesFraction() {
    return *(float*)((uintptr_t)this + 0x1c);
}
_Script_CoreUObject::Class* _Script_GeometryCollectionEngine::GeometryCollectionSizeSpecificData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/GeometryCollectionEngine.GeometryCollectionSizeSpecificData");
    return result;
}
