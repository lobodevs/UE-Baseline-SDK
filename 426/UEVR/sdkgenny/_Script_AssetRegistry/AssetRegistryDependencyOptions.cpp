#include "..\FUObjectArray.hpp"
#include "AssetRegistryDependencyOptions.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
bool _Script_AssetRegistry::AssetRegistryDependencyOptions::get_bIncludeSoftPackageReferences() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 1 != 0;
}
void _Script_AssetRegistry::AssetRegistryDependencyOptions::set_bIncludeSoftPackageReferences(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_AssetRegistry::AssetRegistryDependencyOptions::set_bIncludeSoftManagementReferences(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_AssetRegistry::AssetRegistryDependencyOptions::get_bIncludeHardPackageReferences() {
    return (*(uint8_t*)((uintptr_t)this + 0x1 + 0)) & 1 != 0;
}
void _Script_AssetRegistry::AssetRegistryDependencyOptions::set_bIncludeHardPackageReferences(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_AssetRegistry::AssetRegistryDependencyOptions::get_bIncludeSearchableNames() {
    return (*(uint8_t*)((uintptr_t)this + 0x2 + 0)) & 1 != 0;
}
void _Script_AssetRegistry::AssetRegistryDependencyOptions::set_bIncludeSearchableNames(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_AssetRegistry::AssetRegistryDependencyOptions::get_bIncludeSoftManagementReferences() {
    return (*(uint8_t*)((uintptr_t)this + 0x3 + 0)) & 1 != 0;
}
bool _Script_AssetRegistry::AssetRegistryDependencyOptions::get_bIncludeHardManagementReferences() {
    return (*(uint8_t*)((uintptr_t)this + 0x4 + 0)) & 1 != 0;
}
void _Script_AssetRegistry::AssetRegistryDependencyOptions::set_bIncludeHardManagementReferences(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4 + 0);
    *(uint8_t*)((uintptr_t)this + 0x4 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_AssetRegistry::AssetRegistryDependencyOptions::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AssetRegistry.AssetRegistryDependencyOptions");
    return result;
}
