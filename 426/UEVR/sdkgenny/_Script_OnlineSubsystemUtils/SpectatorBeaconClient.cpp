#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\UniqueNetIdRepl.hpp"
#include "OnlineBeaconClient.hpp"
#include "SpectatorBeaconClient.hpp"
#include "SpectatorReservation.hpp"
_Script_CoreUObject::Class* _Script_OnlineSubsystemUtils::SpectatorBeaconClient::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/OnlineSubsystemUtils.SpectatorBeaconClient");
    return result;
}
void* _Script_OnlineSubsystemUtils::SpectatorBeaconClient::get_DestSessionId() {
    return (void*)((uintptr_t)this + 0x2e0);
}
void* _Script_OnlineSubsystemUtils::SpectatorBeaconClient::get_PendingReservation() {
    return (void*)((uintptr_t)this + 0x2f0);
}
void* _Script_OnlineSubsystemUtils::SpectatorBeaconClient::get_RequestType() {
    return (void*)((uintptr_t)this + 0x368);
}
bool _Script_OnlineSubsystemUtils::SpectatorBeaconClient::get_bPendingReservationSent() {
    return (*(uint8_t*)((uintptr_t)this + 0x369 + 0)) & 1 != 0;
}
void _Script_OnlineSubsystemUtils::SpectatorBeaconClient::set_bPendingReservationSent(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x369 + 0);
    *(uint8_t*)((uintptr_t)this + 0x369 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_OnlineSubsystemUtils::SpectatorBeaconClient::get_bCancelReservation() {
    return (*(uint8_t*)((uintptr_t)this + 0x36a + 0)) & 1 != 0;
}
void _Script_OnlineSubsystemUtils::SpectatorBeaconClient::set_bCancelReservation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x36a + 0);
    *(uint8_t*)((uintptr_t)this + 0x36a + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_OnlineSubsystemUtils::SpectatorBeaconClient::ServerReservationRequest(void* SessionId, _Script_OnlineSubsystemUtils::SpectatorReservation& Reservation) {
    return;
}
void _Script_OnlineSubsystemUtils::SpectatorBeaconClient::ClientSendReservationUpdates(int32_t NumRemainingReservations) {
    return;
}
void _Script_OnlineSubsystemUtils::SpectatorBeaconClient::ServerCancelReservationRequest(_Script_Engine::UniqueNetIdRepl& Spectator) {
    return;
}
void _Script_OnlineSubsystemUtils::SpectatorBeaconClient::ClientSendReservationFull() {
    return;
}
void _Script_OnlineSubsystemUtils::SpectatorBeaconClient::ClientCancelReservationResponse(void* ReservationResponse) {
    return;
}
void _Script_OnlineSubsystemUtils::SpectatorBeaconClient::ClientReservationResponse(void* ReservationResponse) {
    return;
}
