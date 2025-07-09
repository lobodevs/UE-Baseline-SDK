#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "DemoNetDriver.hpp"
#include "NetDriver.hpp"
void* _Script_Engine::DemoNetDriver::get_RollbackNetStartupActors() {
    return (void*)((uintptr_t)this + 0x840);
}
void _Script_Engine::DemoNetDriver::set_bIsLocalReplay(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xa20 + 0);
    *(uint8_t*)((uintptr_t)this + 0xa20 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_Engine::DemoNetDriver::get_CheckpointSaveMaxMSPerFrame() {
    return *(float*)((uintptr_t)this + 0x9ec);
}
void* _Script_Engine::DemoNetDriver::get_MulticastRecordOptions() {
    return (void*)((uintptr_t)this + 0xa10);
}
void* _Script_Engine::DemoNetDriver::get_SpectatorControllers() {
    return (void*)((uintptr_t)this + 0xa28);
}
bool _Script_Engine::DemoNetDriver::get_bIsLocalReplay() {
    return (*(uint8_t*)((uintptr_t)this + 0xa20 + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Script_Engine::DemoNetDriver::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.DemoNetDriver");
    return result;
}
