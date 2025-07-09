#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "GeometryCollection.hpp"
int32_t& _Script_GeometryCollectionEngine::GeometryCollection::get_MaxLevelSetResolution() {
    return *(int32_t*)((uintptr_t)this + 0x58);
}
void* _Script_GeometryCollectionEngine::GeometryCollection::get_GeometrySource() {
    return (void*)((uintptr_t)this + 0x30);
}
int32_t& _Script_GeometryCollectionEngine::GeometryCollection::get_MinClusterLevelSetResolution() {
    return *(int32_t*)((uintptr_t)this + 0x5c);
}
void* _Script_GeometryCollectionEngine::GeometryCollection::get_Materials() {
    return (void*)((uintptr_t)this + 0x40);
}
void* _Script_GeometryCollectionEngine::GeometryCollection::get_CollisionType() {
    return (void*)((uintptr_t)this + 0x50);
}
void* _Script_GeometryCollectionEngine::GeometryCollection::get_ImplicitType() {
    return (void*)((uintptr_t)this + 0x51);
}
int32_t& _Script_GeometryCollectionEngine::GeometryCollection::get_MinLevelSetResolution() {
    return *(int32_t*)((uintptr_t)this + 0x54);
}
int32_t& _Script_GeometryCollectionEngine::GeometryCollection::get_MaxClusterLevelSetResolution() {
    return *(int32_t*)((uintptr_t)this + 0x60);
}
void* _Script_GeometryCollectionEngine::GeometryCollection::get_SizeSpecificData() {
    return (void*)((uintptr_t)this + 0x80);
}
float& _Script_GeometryCollectionEngine::GeometryCollection::get_CollisionObjectReductionPercentage() {
    return *(float*)((uintptr_t)this + 0x64);
}
bool _Script_GeometryCollectionEngine::GeometryCollection::get_bMassAsDensity() {
    return (*(uint8_t*)((uintptr_t)this + 0x68 + 0)) & 1 != 0;
}
void _Script_GeometryCollectionEngine::GeometryCollection::set_bMassAsDensity(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x68 + 0);
    *(uint8_t*)((uintptr_t)this + 0x68 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_GeometryCollectionEngine::GeometryCollection::get_Mass() {
    return *(float*)((uintptr_t)this + 0x6c);
}
float& _Script_GeometryCollectionEngine::GeometryCollection::get_MinimumMassClamp() {
    return *(float*)((uintptr_t)this + 0x70);
}
float& _Script_GeometryCollectionEngine::GeometryCollection::get_CollisionParticlesFraction() {
    return *(float*)((uintptr_t)this + 0x74);
}
int32_t& _Script_GeometryCollectionEngine::GeometryCollection::get_MaximumCollisionParticles() {
    return *(int32_t*)((uintptr_t)this + 0x78);
}
bool _Script_GeometryCollectionEngine::GeometryCollection::get_EnableRemovePiecesOnFracture() {
    return (*(uint8_t*)((uintptr_t)this + 0x90 + 0)) & 1 != 0;
}
void _Script_GeometryCollectionEngine::GeometryCollection::set_EnableRemovePiecesOnFracture(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x90 + 0);
    *(uint8_t*)((uintptr_t)this + 0x90 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_GeometryCollectionEngine::GeometryCollection::get_RemoveOnFractureMaterials() {
    return (void*)((uintptr_t)this + 0x98);
}
void* _Script_GeometryCollectionEngine::GeometryCollection::get_PersistentGuid() {
    return (void*)((uintptr_t)this + 0xa8);
}
void* _Script_GeometryCollectionEngine::GeometryCollection::get_StateGuid() {
    return (void*)((uintptr_t)this + 0xb8);
}
int32_t& _Script_GeometryCollectionEngine::GeometryCollection::get_BoneSelectedMaterialIndex() {
    return *(int32_t*)((uintptr_t)this + 0xc8);
}
_Script_CoreUObject::Class* _Script_GeometryCollectionEngine::GeometryCollection::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/GeometryCollectionEngine.GeometryCollection");
    return result;
}
