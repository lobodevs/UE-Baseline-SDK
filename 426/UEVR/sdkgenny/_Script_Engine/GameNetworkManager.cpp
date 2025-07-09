#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "GameNetworkManager.hpp"
#include "Info.hpp"
int32_t& _Script_Engine::GameNetworkManager::get_BadPingThreshold() {
    return *(int32_t*)((uintptr_t)this + 0x228);
}
float& _Script_Engine::GameNetworkManager::get_BadPacketLossThreshold() {
    return *(float*)((uintptr_t)this + 0x220);
}
int32_t& _Script_Engine::GameNetworkManager::get_SeverePingThreshold() {
    return *(int32_t*)((uintptr_t)this + 0x22c);
}
float& _Script_Engine::GameNetworkManager::get_SeverePacketLossThreshold() {
    return *(float*)((uintptr_t)this + 0x224);
}
int32_t& _Script_Engine::GameNetworkManager::get_TotalNetBandwidth() {
    return *(int32_t*)((uintptr_t)this + 0x238);
}
int32_t& _Script_Engine::GameNetworkManager::get_AdjustedNetSpeed() {
    return *(int32_t*)((uintptr_t)this + 0x230);
}
float& _Script_Engine::GameNetworkManager::get_LastNetSpeedUpdateTime() {
    return *(float*)((uintptr_t)this + 0x234);
}
int32_t& _Script_Engine::GameNetworkManager::get_MinDynamicBandwidth() {
    return *(int32_t*)((uintptr_t)this + 0x23c);
}
float& _Script_Engine::GameNetworkManager::get_MovementTimeDiscrepancyDriftAllowance() {
    return *(float*)((uintptr_t)this + 0x2bc);
}
int32_t& _Script_Engine::GameNetworkManager::get_MaxDynamicBandwidth() {
    return *(int32_t*)((uintptr_t)this + 0x240);
}
bool _Script_Engine::GameNetworkManager::get_bMovementTimeDiscrepancyForceCorrectionsDuringResolution() {
    return (*(uint8_t*)((uintptr_t)this + 0x2c0 + 0)) & 1 != 0;
}
bool _Script_Engine::GameNetworkManager::get_bIsStandbyCheckingEnabled() {
    return (*(uint8_t*)((uintptr_t)this + 0x244 + 0)) & 1 != 0;
}
void _Script_Engine::GameNetworkManager::set_bIsStandbyCheckingEnabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x244 + 0);
    *(uint8_t*)((uintptr_t)this + 0x244 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Engine::GameNetworkManager::set_bUseDistanceBasedRelevancy(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2c1 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2c1 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::GameNetworkManager::get_bHasStandbyCheatTriggered() {
    return (*(uint8_t*)((uintptr_t)this + 0x244 + 0)) & 2 != 0;
}
void _Script_Engine::GameNetworkManager::set_bHasStandbyCheatTriggered(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x244 + 0);
    *(uint8_t*)((uintptr_t)this + 0x244 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
float& _Script_Engine::GameNetworkManager::get_StandbyRxCheatTime() {
    return *(float*)((uintptr_t)this + 0x248);
}
float& _Script_Engine::GameNetworkManager::get_StandbyTxCheatTime() {
    return *(float*)((uintptr_t)this + 0x24c);
}
float& _Script_Engine::GameNetworkManager::get_PercentMissingForRxStandby() {
    return *(float*)((uintptr_t)this + 0x250);
}
float& _Script_Engine::GameNetworkManager::get_PercentMissingForTxStandby() {
    return *(float*)((uintptr_t)this + 0x254);
}
float& _Script_Engine::GameNetworkManager::get_PercentForBadPing() {
    return *(float*)((uintptr_t)this + 0x258);
}
float& _Script_Engine::GameNetworkManager::get_JoinInProgressStandbyWaitTime() {
    return *(float*)((uintptr_t)this + 0x25c);
}
_Script_CoreUObject::Class* _Script_Engine::GameNetworkManager::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.GameNetworkManager");
    return result;
}
float& _Script_Engine::GameNetworkManager::get_MoveRepSize() {
    return *(float*)((uintptr_t)this + 0x260);
}
float& _Script_Engine::GameNetworkManager::get_MAXPOSITIONERRORSQUARED() {
    return *(float*)((uintptr_t)this + 0x264);
}
float& _Script_Engine::GameNetworkManager::get_MAXNEARZEROVELOCITYSQUARED() {
    return *(float*)((uintptr_t)this + 0x268);
}
float& _Script_Engine::GameNetworkManager::get_CLIENTADJUSTUPDATECOST() {
    return *(float*)((uintptr_t)this + 0x26c);
}
float& _Script_Engine::GameNetworkManager::get_MAXCLIENTUPDATEINTERVAL() {
    return *(float*)((uintptr_t)this + 0x270);
}
float& _Script_Engine::GameNetworkManager::get_MaxClientForcedUpdateDuration() {
    return *(float*)((uintptr_t)this + 0x274);
}
float& _Script_Engine::GameNetworkManager::get_ServerForcedUpdateHitchThreshold() {
    return *(float*)((uintptr_t)this + 0x278);
}
float& _Script_Engine::GameNetworkManager::get_ServerForcedUpdateHitchCooldown() {
    return *(float*)((uintptr_t)this + 0x27c);
}
float& _Script_Engine::GameNetworkManager::get_MaxMoveDeltaTime() {
    return *(float*)((uintptr_t)this + 0x280);
}
float& _Script_Engine::GameNetworkManager::get_MaxClientSmoothingDeltaTime() {
    return *(float*)((uintptr_t)this + 0x284);
}
float& _Script_Engine::GameNetworkManager::get_ClientNetSendMoveDeltaTime() {
    return *(float*)((uintptr_t)this + 0x288);
}
bool _Script_Engine::GameNetworkManager::get_bMovementTimeDiscrepancyResolution() {
    return (*(uint8_t*)((uintptr_t)this + 0x2ad + 0)) & 1 != 0;
}
float& _Script_Engine::GameNetworkManager::get_ClientNetSendMoveDeltaTimeThrottled() {
    return *(float*)((uintptr_t)this + 0x28c);
}
float& _Script_Engine::GameNetworkManager::get_ClientNetSendMoveDeltaTimeStationary() {
    return *(float*)((uintptr_t)this + 0x290);
}
float& _Script_Engine::GameNetworkManager::get_ClientErrorUpdateRateLimit() {
    return *(float*)((uintptr_t)this + 0x2a0);
}
int32_t& _Script_Engine::GameNetworkManager::get_ClientNetSendMoveThrottleAtNetSpeed() {
    return *(int32_t*)((uintptr_t)this + 0x294);
}
int32_t& _Script_Engine::GameNetworkManager::get_ClientNetSendMoveThrottleOverPlayerCount() {
    return *(int32_t*)((uintptr_t)this + 0x298);
}
bool _Script_Engine::GameNetworkManager::get_ClientAuthorativePosition() {
    return (*(uint8_t*)((uintptr_t)this + 0x29c + 0)) & 1 != 0;
}
float& _Script_Engine::GameNetworkManager::get_ClientNetCamUpdateDeltaTime() {
    return *(float*)((uintptr_t)this + 0x2a4);
}
void _Script_Engine::GameNetworkManager::set_ClientAuthorativePosition(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x29c + 0);
    *(uint8_t*)((uintptr_t)this + 0x29c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_Engine::GameNetworkManager::get_ClientNetCamUpdatePositionLimit() {
    return *(float*)((uintptr_t)this + 0x2a8);
}
float& _Script_Engine::GameNetworkManager::get_MovementTimeDiscrepancyMaxTimeMargin() {
    return *(float*)((uintptr_t)this + 0x2b0);
}
bool _Script_Engine::GameNetworkManager::get_bMovementTimeDiscrepancyDetection() {
    return (*(uint8_t*)((uintptr_t)this + 0x2ac + 0)) & 1 != 0;
}
void _Script_Engine::GameNetworkManager::set_bMovementTimeDiscrepancyDetection(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2ac + 0);
    *(uint8_t*)((uintptr_t)this + 0x2ac + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Engine::GameNetworkManager::set_bMovementTimeDiscrepancyResolution(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2ad + 0);
    *(uint8_t*)((uintptr_t)this + 0x2ad + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_Engine::GameNetworkManager::get_MovementTimeDiscrepancyMinTimeMargin() {
    return *(float*)((uintptr_t)this + 0x2b4);
}
void _Script_Engine::GameNetworkManager::set_bMovementTimeDiscrepancyForceCorrectionsDuringResolution(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2c0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2c0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_Engine::GameNetworkManager::get_MovementTimeDiscrepancyResolutionRate() {
    return *(float*)((uintptr_t)this + 0x2b8);
}
bool _Script_Engine::GameNetworkManager::get_bUseDistanceBasedRelevancy() {
    return (*(uint8_t*)((uintptr_t)this + 0x2c1 + 0)) & 1 != 0;
}
