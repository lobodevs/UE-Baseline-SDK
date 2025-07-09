#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "AssetManager.hpp"
bool _Script_Engine::AssetManager::get_bIsGlobalAsyncScanEnvironment() {
    return (*(uint8_t*)((uintptr_t)this + 0x2d0 + 0)) & 1 != 0;
}
void* _Script_Engine::AssetManager::get_ObjectReferenceList() {
    return (void*)((uintptr_t)this + 0x2c0);
}
void _Script_Engine::AssetManager::set_bIsGlobalAsyncScanEnvironment(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2d0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2d0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::AssetManager::get_bShouldGuessTypeAndName() {
    return (*(uint8_t*)((uintptr_t)this + 0x2d1 + 0)) & 1 != 0;
}
void _Script_Engine::AssetManager::set_bShouldGuessTypeAndName(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2d1 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2d1 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::AssetManager::get_bShouldUseSynchronousLoad() {
    return (*(uint8_t*)((uintptr_t)this + 0x2d2 + 0)) & 1 != 0;
}
void _Script_Engine::AssetManager::set_bShouldUseSynchronousLoad(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2d2 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2d2 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::AssetManager::get_bIsManagementDatabaseCurrent() {
    return (*(uint8_t*)((uintptr_t)this + 0x2d8 + 0)) & 1 != 0;
}
bool _Script_Engine::AssetManager::get_bIsLoadingFromPakFiles() {
    return (*(uint8_t*)((uintptr_t)this + 0x2d3 + 0)) & 1 != 0;
}
void _Script_Engine::AssetManager::set_bIsLoadingFromPakFiles(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2d3 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2d3 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::AssetManager::get_bShouldAcquireMissingChunksOnLoad() {
    return (*(uint8_t*)((uintptr_t)this + 0x2d4 + 0)) & 1 != 0;
}
void _Script_Engine::AssetManager::set_bShouldAcquireMissingChunksOnLoad(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2d4 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2d4 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::AssetManager::get_bOnlyCookProductionAssets() {
    return (*(uint8_t*)((uintptr_t)this + 0x2d5 + 0)) & 1 != 0;
}
void _Script_Engine::AssetManager::set_bOnlyCookProductionAssets(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2d5 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2d5 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::AssetManager::get_bIsBulkScanning() {
    return (*(uint8_t*)((uintptr_t)this + 0x2d6 + 0)) & 1 != 0;
}
void _Script_Engine::AssetManager::set_bIsBulkScanning(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2d6 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2d6 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::AssetManager::get_bIsPrimaryAssetDirectoryCurrent() {
    return (*(uint8_t*)((uintptr_t)this + 0x2d7 + 0)) & 1 != 0;
}
void _Script_Engine::AssetManager::set_bIsPrimaryAssetDirectoryCurrent(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2d7 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2d7 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Engine::AssetManager::set_bIsManagementDatabaseCurrent(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2d8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2d8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::AssetManager::get_bUpdateManagementDatabaseAfterScan() {
    return (*(uint8_t*)((uintptr_t)this + 0x2d9 + 0)) & 1 != 0;
}
void _Script_Engine::AssetManager::set_bUpdateManagementDatabaseAfterScan(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2d9 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2d9 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::AssetManager::get_bIncludeOnlyOnDiskAssets() {
    return (*(uint8_t*)((uintptr_t)this + 0x2da + 0)) & 1 != 0;
}
void _Script_Engine::AssetManager::set_bIncludeOnlyOnDiskAssets(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2da + 0);
    *(uint8_t*)((uintptr_t)this + 0x2da + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::AssetManager::get_bHasCompletedInitialScan() {
    return (*(uint8_t*)((uintptr_t)this + 0x2db + 0)) & 1 != 0;
}
void _Script_Engine::AssetManager::set_bHasCompletedInitialScan(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2db + 0);
    *(uint8_t*)((uintptr_t)this + 0x2db + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
int32_t& _Script_Engine::AssetManager::get_NumberOfSpawnedNotifications() {
    return *(int32_t*)((uintptr_t)this + 0x2dc);
}
_Script_CoreUObject::Class* _Script_Engine::AssetManager::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.AssetManager");
    return result;
}
