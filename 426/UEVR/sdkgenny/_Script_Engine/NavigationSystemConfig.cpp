#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "NavigationSystemConfig.hpp"
void* _Script_Engine::NavigationSystemConfig::get_NavigationSystemClass() {
    return (void*)((uintptr_t)this + 0x28);
}
void _Script_Engine::NavigationSystemConfig::set_bIsOverriden(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4c + 0);
    *(uint8_t*)((uintptr_t)this + 0x4c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::NavigationSystemConfig::get_SupportedAgentsMask() {
    return (void*)((uintptr_t)this + 0x40);
}
void* _Script_Engine::NavigationSystemConfig::get_DefaultAgentName() {
    return (void*)((uintptr_t)this + 0x44);
}
bool _Script_Engine::NavigationSystemConfig::get_bIsOverriden() {
    return (*(uint8_t*)((uintptr_t)this + 0x4c + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Script_Engine::NavigationSystemConfig::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.NavigationSystemConfig");
    return result;
}
