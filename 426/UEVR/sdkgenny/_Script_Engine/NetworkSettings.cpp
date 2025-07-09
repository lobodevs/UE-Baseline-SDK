#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_DeveloperSettings\DeveloperSettings.hpp"
#include "NetworkSettings.hpp"
bool _Script_Engine::NetworkSettings::get_bVerifyPeer() {
    return (*(uint8_t*)((uintptr_t)this + 0x38 + 0)) & 1 != 0;
}
void* _Script_Engine::NetworkSettings::get_NetworkEmulationProfiles() {
    return (void*)((uintptr_t)this + 0x48);
}
void _Script_Engine::NetworkSettings::set_bEnableMultiplayerWorldOriginRebasing(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x38 + 0);
    *(uint8_t*)((uintptr_t)this + 0x38 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
void _Script_Engine::NetworkSettings::set_bVerifyPeer(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x38 + 0);
    *(uint8_t*)((uintptr_t)this + 0x38 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::NetworkSettings::get_bEnableMultiplayerWorldOriginRebasing() {
    return (*(uint8_t*)((uintptr_t)this + 0x38 + 0)) & 2 != 0;
}
int32_t& _Script_Engine::NetworkSettings::get_MaxRepArraySize() {
    return *(int32_t*)((uintptr_t)this + 0x3c);
}
int32_t& _Script_Engine::NetworkSettings::get_MaxRepArrayMemory() {
    return *(int32_t*)((uintptr_t)this + 0x40);
}
_Script_CoreUObject::Class* _Script_Engine::NetworkSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.NetworkSettings");
    return result;
}
