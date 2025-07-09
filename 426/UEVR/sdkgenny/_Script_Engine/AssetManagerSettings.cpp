#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_DeveloperSettings\DeveloperSettings.hpp"
#include "AssetManagerSettings.hpp"
void _Script_Engine::AssetManagerSettings::set_bShouldManagerDetermineTypeAndName(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x79 + 0);
    *(uint8_t*)((uintptr_t)this + 0x79 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::AssetManagerSettings::get_PrimaryAssetTypesToScan() {
    return (void*)((uintptr_t)this + 0x38);
}
void _Script_Engine::AssetManagerSettings::set_bOnlyCookProductionAssets(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x78 + 0);
    *(uint8_t*)((uintptr_t)this + 0x78 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::AssetManagerSettings::get_bOnlyCookProductionAssets() {
    return (*(uint8_t*)((uintptr_t)this + 0x78 + 0)) & 1 != 0;
}
void* _Script_Engine::AssetManagerSettings::get_CustomPrimaryAssetRules() {
    return (void*)((uintptr_t)this + 0x68);
}
void* _Script_Engine::AssetManagerSettings::get_DirectoriesToExclude() {
    return (void*)((uintptr_t)this + 0x48);
}
void* _Script_Engine::AssetManagerSettings::get_PrimaryAssetRules() {
    return (void*)((uintptr_t)this + 0x58);
}
bool _Script_Engine::AssetManagerSettings::get_bShouldManagerDetermineTypeAndName() {
    return (*(uint8_t*)((uintptr_t)this + 0x79 + 0)) & 1 != 0;
}
bool _Script_Engine::AssetManagerSettings::get_bShouldGuessTypeAndNameInEditor() {
    return (*(uint8_t*)((uintptr_t)this + 0x7a + 0)) & 1 != 0;
}
void _Script_Engine::AssetManagerSettings::set_bShouldGuessTypeAndNameInEditor(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x7a + 0);
    *(uint8_t*)((uintptr_t)this + 0x7a + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::AssetManagerSettings::get_bShouldAcquireMissingChunksOnLoad() {
    return (*(uint8_t*)((uintptr_t)this + 0x7b + 0)) & 1 != 0;
}
void _Script_Engine::AssetManagerSettings::set_bShouldAcquireMissingChunksOnLoad(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x7b + 0);
    *(uint8_t*)((uintptr_t)this + 0x7b + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::AssetManagerSettings::get_PrimaryAssetIdRedirects() {
    return (void*)((uintptr_t)this + 0x80);
}
void* _Script_Engine::AssetManagerSettings::get_PrimaryAssetTypeRedirects() {
    return (void*)((uintptr_t)this + 0x90);
}
void* _Script_Engine::AssetManagerSettings::get_AssetPathRedirects() {
    return (void*)((uintptr_t)this + 0xa0);
}
void* _Script_Engine::AssetManagerSettings::get_MetaDataTagsForAssetRegistry() {
    return (void*)((uintptr_t)this + 0xb0);
}
_Script_CoreUObject::Class* _Script_Engine::AssetManagerSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.AssetManagerSettings");
    return result;
}
