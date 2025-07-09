#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "OnlineBeaconHostObject.hpp"
#include "SpectatorBeaconHost.hpp"
#include "SpectatorBeaconState.hpp"
float& _Script_OnlineSubsystemUtils::SpectatorBeaconHost::get_TravelSessionTimeoutSecs() {
    return *(float*)((uintptr_t)this + 0x2b8);
}
_Script_OnlineSubsystemUtils::SpectatorBeaconState*& _Script_OnlineSubsystemUtils::SpectatorBeaconHost::get_State() {
    return *(_Script_OnlineSubsystemUtils::SpectatorBeaconState**)((uintptr_t)this + 0x248);
}
bool _Script_OnlineSubsystemUtils::SpectatorBeaconHost::get_bLogoutOnSessionTimeout() {
    return (*(uint8_t*)((uintptr_t)this + 0x2b0 + 0)) & 1 != 0;
}
void _Script_OnlineSubsystemUtils::SpectatorBeaconHost::set_bLogoutOnSessionTimeout(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2b0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2b0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_OnlineSubsystemUtils::SpectatorBeaconHost::get_SessionTimeoutSecs() {
    return *(float*)((uintptr_t)this + 0x2b4);
}
_Script_CoreUObject::Class* _Script_OnlineSubsystemUtils::SpectatorBeaconHost::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/OnlineSubsystemUtils.SpectatorBeaconHost");
    return result;
}
