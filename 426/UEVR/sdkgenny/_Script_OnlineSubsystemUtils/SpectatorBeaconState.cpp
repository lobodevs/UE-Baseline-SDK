#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "SpectatorBeaconState.hpp"
void* _Script_OnlineSubsystemUtils::SpectatorBeaconState::get_Reservations() {
    return (void*)((uintptr_t)this + 0x40);
}
void* _Script_OnlineSubsystemUtils::SpectatorBeaconState::get_SessionName() {
    return (void*)((uintptr_t)this + 0x28);
}
int32_t& _Script_OnlineSubsystemUtils::SpectatorBeaconState::get_NumConsumedReservations() {
    return *(int32_t*)((uintptr_t)this + 0x30);
}
int32_t& _Script_OnlineSubsystemUtils::SpectatorBeaconState::get_MaxReservations() {
    return *(int32_t*)((uintptr_t)this + 0x34);
}
bool _Script_OnlineSubsystemUtils::SpectatorBeaconState::get_bRestrictCrossConsole() {
    return (*(uint8_t*)((uintptr_t)this + 0x38 + 0)) & 1 != 0;
}
void _Script_OnlineSubsystemUtils::SpectatorBeaconState::set_bRestrictCrossConsole(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x38 + 0);
    *(uint8_t*)((uintptr_t)this + 0x38 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_OnlineSubsystemUtils::SpectatorBeaconState::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/OnlineSubsystemUtils.SpectatorBeaconState");
    return result;
}
