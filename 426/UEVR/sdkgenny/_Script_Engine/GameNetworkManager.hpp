#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "Info.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct GameNetworkManager : public Info {
    private: char pad_220[0xb0]; public:
    float& get_BadPacketLossThreshold();
    float& get_SeverePacketLossThreshold();
    int32_t& get_BadPingThreshold();
    int32_t& get_SeverePingThreshold();
    int32_t& get_AdjustedNetSpeed();
    float& get_LastNetSpeedUpdateTime();
    int32_t& get_TotalNetBandwidth();
    int32_t& get_MinDynamicBandwidth();
    int32_t& get_MaxDynamicBandwidth();
    bool get_bIsStandbyCheckingEnabled();
    void set_bIsStandbyCheckingEnabled(bool value);
    bool get_bHasStandbyCheatTriggered();
    void set_bHasStandbyCheatTriggered(bool value);
    float& get_StandbyRxCheatTime();
    float& get_StandbyTxCheatTime();
    float& get_PercentMissingForRxStandby();
    float& get_PercentMissingForTxStandby();
    float& get_PercentForBadPing();
    float& get_JoinInProgressStandbyWaitTime();
    float& get_MoveRepSize();
    float& get_MAXPOSITIONERRORSQUARED();
    float& get_MAXNEARZEROVELOCITYSQUARED();
    float& get_CLIENTADJUSTUPDATECOST();
    float& get_MAXCLIENTUPDATEINTERVAL();
    float& get_MaxClientForcedUpdateDuration();
    float& get_ServerForcedUpdateHitchThreshold();
    float& get_ServerForcedUpdateHitchCooldown();
    float& get_MaxMoveDeltaTime();
    float& get_MaxClientSmoothingDeltaTime();
    float& get_ClientNetSendMoveDeltaTime();
    float& get_ClientNetSendMoveDeltaTimeThrottled();
    float& get_ClientNetSendMoveDeltaTimeStationary();
    int32_t& get_ClientNetSendMoveThrottleAtNetSpeed();
    int32_t& get_ClientNetSendMoveThrottleOverPlayerCount();
    bool get_ClientAuthorativePosition();
    void set_ClientAuthorativePosition(bool value);
    float& get_ClientErrorUpdateRateLimit();
    float& get_ClientNetCamUpdateDeltaTime();
    float& get_ClientNetCamUpdatePositionLimit();
    bool get_bMovementTimeDiscrepancyDetection();
    void set_bMovementTimeDiscrepancyDetection(bool value);
    bool get_bMovementTimeDiscrepancyResolution();
    void set_bMovementTimeDiscrepancyResolution(bool value);
    float& get_MovementTimeDiscrepancyMaxTimeMargin();
    float& get_MovementTimeDiscrepancyMinTimeMargin();
    float& get_MovementTimeDiscrepancyResolutionRate();
    float& get_MovementTimeDiscrepancyDriftAllowance();
    bool get_bMovementTimeDiscrepancyForceCorrectionsDuringResolution();
    void set_bMovementTimeDiscrepancyForceCorrectionsDuringResolution(bool value);
    bool get_bUseDistanceBasedRelevancy();
    void set_bUseDistanceBasedRelevancy(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x2d0
#pragma pack(pop)
}
