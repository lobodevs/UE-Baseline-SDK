#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "GeomComponentCacheParameters.hpp"
#include "GeometryCollectionCache.hpp"
void* _Script_GeometryCollectionEngine::GeomComponentCacheParameters::get_CacheMode() {
    return (void*)((uintptr_t)this + 0x0);
}
void _Script_GeometryCollectionEngine::GeomComponentCacheParameters::set_DoGenerateCollisionData(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x15 + 0);
    *(uint8_t*)((uintptr_t)this + 0x15 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
int32_t& _Script_GeometryCollectionEngine::GeomComponentCacheParameters::get_BreakingDataSizeMax() {
    return *(int32_t*)((uintptr_t)this + 0x2c);
}
_Script_GeometryCollectionEngine::GeometryCollectionCache*& _Script_GeometryCollectionEngine::GeomComponentCacheParameters::get_TargetCache() {
    return *(_Script_GeometryCollectionEngine::GeometryCollectionCache**)((uintptr_t)this + 0x8);
}
float& _Script_GeometryCollectionEngine::GeomComponentCacheParameters::get_ReverseCacheBeginTime() {
    return *(float*)((uintptr_t)this + 0x10);
}
bool _Script_GeometryCollectionEngine::GeomComponentCacheParameters::get_SaveCollisionData() {
    return (*(uint8_t*)((uintptr_t)this + 0x14 + 0)) & 1 != 0;
}
int32_t& _Script_GeometryCollectionEngine::GeomComponentCacheParameters::get_CollisionDataSizeMax() {
    return *(int32_t*)((uintptr_t)this + 0x18);
}
bool _Script_GeometryCollectionEngine::GeomComponentCacheParameters::get_DoGenerateCollisionData() {
    return (*(uint8_t*)((uintptr_t)this + 0x15 + 0)) & 1 != 0;
}
void _Script_GeometryCollectionEngine::GeomComponentCacheParameters::set_SaveCollisionData(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x14 + 0);
    *(uint8_t*)((uintptr_t)this + 0x14 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_GeometryCollectionEngine::GeomComponentCacheParameters::get_DoCollisionDataSpatialHash() {
    return (*(uint8_t*)((uintptr_t)this + 0x1c + 0)) & 1 != 0;
}
void _Script_GeometryCollectionEngine::GeomComponentCacheParameters::set_DoCollisionDataSpatialHash(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1c + 0);
    *(uint8_t*)((uintptr_t)this + 0x1c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_GeometryCollectionEngine::GeomComponentCacheParameters::get_CollisionDataSpatialHashRadius() {
    return *(float*)((uintptr_t)this + 0x20);
}
int32_t& _Script_GeometryCollectionEngine::GeomComponentCacheParameters::get_MaxCollisionPerCell() {
    return *(int32_t*)((uintptr_t)this + 0x24);
}
void _Script_GeometryCollectionEngine::GeomComponentCacheParameters::set_SaveBreakingData(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x28 + 0);
    *(uint8_t*)((uintptr_t)this + 0x28 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_GeometryCollectionEngine::GeomComponentCacheParameters::get_SaveBreakingData() {
    return (*(uint8_t*)((uintptr_t)this + 0x28 + 0)) & 1 != 0;
}
bool _Script_GeometryCollectionEngine::GeomComponentCacheParameters::get_DoGenerateBreakingData() {
    return (*(uint8_t*)((uintptr_t)this + 0x29 + 0)) & 1 != 0;
}
void _Script_GeometryCollectionEngine::GeomComponentCacheParameters::set_DoGenerateBreakingData(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x29 + 0);
    *(uint8_t*)((uintptr_t)this + 0x29 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_GeometryCollectionEngine::GeomComponentCacheParameters::get_DoBreakingDataSpatialHash() {
    return (*(uint8_t*)((uintptr_t)this + 0x30 + 0)) & 1 != 0;
}
void _Script_GeometryCollectionEngine::GeomComponentCacheParameters::set_DoBreakingDataSpatialHash(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x30 + 0);
    *(uint8_t*)((uintptr_t)this + 0x30 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_GeometryCollectionEngine::GeomComponentCacheParameters::get_BreakingDataSpatialHashRadius() {
    return *(float*)((uintptr_t)this + 0x34);
}
int32_t& _Script_GeometryCollectionEngine::GeomComponentCacheParameters::get_MaxBreakingPerCell() {
    return *(int32_t*)((uintptr_t)this + 0x38);
}
bool _Script_GeometryCollectionEngine::GeomComponentCacheParameters::get_SaveTrailingData() {
    return (*(uint8_t*)((uintptr_t)this + 0x3c + 0)) & 1 != 0;
}
void _Script_GeometryCollectionEngine::GeomComponentCacheParameters::set_SaveTrailingData(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3c + 0);
    *(uint8_t*)((uintptr_t)this + 0x3c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_GeometryCollectionEngine::GeomComponentCacheParameters::get_DoGenerateTrailingData() {
    return (*(uint8_t*)((uintptr_t)this + 0x3d + 0)) & 1 != 0;
}
void _Script_GeometryCollectionEngine::GeomComponentCacheParameters::set_DoGenerateTrailingData(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3d + 0);
    *(uint8_t*)((uintptr_t)this + 0x3d + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
int32_t& _Script_GeometryCollectionEngine::GeomComponentCacheParameters::get_TrailingDataSizeMax() {
    return *(int32_t*)((uintptr_t)this + 0x40);
}
float& _Script_GeometryCollectionEngine::GeomComponentCacheParameters::get_TrailingMinSpeedThreshold() {
    return *(float*)((uintptr_t)this + 0x44);
}
float& _Script_GeometryCollectionEngine::GeomComponentCacheParameters::get_TrailingMinVolumeThreshold() {
    return *(float*)((uintptr_t)this + 0x48);
}
_Script_CoreUObject::Class* _Script_GeometryCollectionEngine::GeomComponentCacheParameters::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/GeometryCollectionEngine.GeomComponentCacheParameters");
    return result;
}
