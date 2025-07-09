#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\NavigationSystemConfig.hpp"
#include "NavigationSystemModuleConfig.hpp"
void _Script_NavigationSystem::NavigationSystemModuleConfig::set_bCreateOnClient(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x50 + 0);
    *(uint8_t*)((uintptr_t)this + 0x50 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_NavigationSystem::NavigationSystemModuleConfig::get_bCreateOnClient() {
    return (*(uint8_t*)((uintptr_t)this + 0x50 + 0)) & 2 != 0;
}
bool _Script_NavigationSystem::NavigationSystemModuleConfig::get_bStrictlyStatic() {
    return (*(uint8_t*)((uintptr_t)this + 0x50 + 0)) & 1 != 0;
}
bool _Script_NavigationSystem::NavigationSystemModuleConfig::get_bSpawnNavDataInNavBoundsLevel() {
    return (*(uint8_t*)((uintptr_t)this + 0x50 + 0)) & 8 != 0;
}
void _Script_NavigationSystem::NavigationSystemModuleConfig::set_bStrictlyStatic(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x50 + 0);
    *(uint8_t*)((uintptr_t)this + 0x50 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_NavigationSystem::NavigationSystemModuleConfig::get_bAutoSpawnMissingNavData() {
    return (*(uint8_t*)((uintptr_t)this + 0x50 + 0)) & 4 != 0;
}
void _Script_NavigationSystem::NavigationSystemModuleConfig::set_bAutoSpawnMissingNavData(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x50 + 0);
    *(uint8_t*)((uintptr_t)this + 0x50 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
void _Script_NavigationSystem::NavigationSystemModuleConfig::set_bSpawnNavDataInNavBoundsLevel(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x50 + 0);
    *(uint8_t*)((uintptr_t)this + 0x50 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
_Script_CoreUObject::Class* _Script_NavigationSystem::NavigationSystemModuleConfig::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/NavigationSystem.NavigationSystemModuleConfig");
    return result;
}
