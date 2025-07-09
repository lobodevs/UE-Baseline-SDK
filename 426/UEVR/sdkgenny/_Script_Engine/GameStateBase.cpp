#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "Controller.hpp"
#include "GameModeBase.hpp"
#include "GameStateBase.hpp"
#include "Info.hpp"
_Script_Engine::GameModeBase*& _Script_Engine::GameStateBase::get_AuthorityGameMode() {
    return *(_Script_Engine::GameModeBase**)((uintptr_t)this + 0x228);
}
void* _Script_Engine::GameStateBase::get_GameModeClass() {
    return (void*)((uintptr_t)this + 0x220);
}
float& _Script_Engine::GameStateBase::get_ReplicatedWorldTimeSeconds() {
    return *(float*)((uintptr_t)this + 0x24c);
}
void* _Script_Engine::GameStateBase::get_PlayerArray() {
    return (void*)((uintptr_t)this + 0x238);
}
void* _Script_Engine::GameStateBase::get_SpectatorClass() {
    return (void*)((uintptr_t)this + 0x230);
}
bool _Script_Engine::GameStateBase::get_bReplicatedHasBegunPlay() {
    return (*(uint8_t*)((uintptr_t)this + 0x248 + 0)) & 1 != 0;
}
void _Script_Engine::GameStateBase::set_bReplicatedHasBegunPlay(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x248 + 0);
    *(uint8_t*)((uintptr_t)this + 0x248 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_Engine::GameStateBase::get_ServerWorldTimeSecondsDelta() {
    return *(float*)((uintptr_t)this + 0x250);
}
float& _Script_Engine::GameStateBase::get_ServerWorldTimeSecondsUpdateFrequency() {
    return *(float*)((uintptr_t)this + 0x254);
}
_Script_CoreUObject::Class* _Script_Engine::GameStateBase::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.GameStateBase");
    return result;
}
void _Script_Engine::GameStateBase::OnRep_SpectatorClass() {
    return;
}
void _Script_Engine::GameStateBase::OnRep_ReplicatedWorldTimeSeconds() {
    return;
}
void _Script_Engine::GameStateBase::OnRep_ReplicatedHasBegunPlay() {
    return;
}
void _Script_Engine::GameStateBase::OnRep_GameModeClass() {
    return;
}
bool _Script_Engine::GameStateBase::HasMatchStarted() {
    return;
}
bool _Script_Engine::GameStateBase::HasMatchEnded() {
    return;
}
bool _Script_Engine::GameStateBase::HasBegunPlay() {
    return;
}
float _Script_Engine::GameStateBase::GetServerWorldTimeSeconds() {
    return;
}
float _Script_Engine::GameStateBase::GetPlayerStartTime(_Script_Engine::Controller* Controller) {
    return;
}
float _Script_Engine::GameStateBase::GetPlayerRespawnDelay(_Script_Engine::Controller* Controller) {
    return;
}
