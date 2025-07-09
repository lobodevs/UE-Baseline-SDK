#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "OnlineBeaconClient.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_OnlineSubsystemUtils {
struct SpectatorReservation;
}
namespace _Script_Engine {
struct UniqueNetIdRepl;
}
namespace _Script_OnlineSubsystemUtils {
#pragma pack(push, 1)
struct SpectatorBeaconClient : public OnlineBeaconClient {
    private: char pad_2b0[0xe8]; public:
    void* get_DestSessionId();
    void* get_PendingReservation();
    void* get_RequestType();
    bool get_bPendingReservationSent();
    void set_bPendingReservationSent(bool value);
    bool get_bCancelReservation();
    void set_bCancelReservation(bool value);
    static _Script_CoreUObject::Class* static_class();
    void ServerReservationRequest(void* SessionId, _Script_OnlineSubsystemUtils::SpectatorReservation& Reservation);
    void ServerCancelReservationRequest(_Script_Engine::UniqueNetIdRepl& Spectator);
    void ClientSendReservationUpdates(int32_t NumRemainingReservations);
    void ClientSendReservationFull();
    void ClientReservationResponse(void* ReservationResponse);
    void ClientCancelReservationResponse(void* ReservationResponse);
}; // Size: 0x398
#pragma pack(pop)
}
