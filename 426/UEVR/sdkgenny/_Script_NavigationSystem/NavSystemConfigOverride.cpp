#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\NavigationSystemConfig.hpp"
#include "NavSystemConfigOverride.hpp"
_Script_Engine::NavigationSystemConfig*& _Script_NavigationSystem::NavSystemConfigOverride::get_NavigationSystemConfig() {
    return *(_Script_Engine::NavigationSystemConfig**)((uintptr_t)this + 0x220);
}
void _Script_NavigationSystem::NavSystemConfigOverride::set_bLoadOnClient(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x229 + 0);
    *(uint8_t*)((uintptr_t)this + 0x229 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_NavigationSystem::NavSystemConfigOverride::get_OverridePolicy() {
    return (void*)((uintptr_t)this + 0x228);
}
_Script_CoreUObject::Class* _Script_NavigationSystem::NavSystemConfigOverride::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/NavigationSystem.NavSystemConfigOverride");
    return result;
}
bool _Script_NavigationSystem::NavSystemConfigOverride::get_bLoadOnClient() {
    return (*(uint8_t*)((uintptr_t)this + 0x229 + 0)) & 1 != 0;
}
