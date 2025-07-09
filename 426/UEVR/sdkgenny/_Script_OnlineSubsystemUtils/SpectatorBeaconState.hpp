#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_OnlineSubsystemUtils {
#pragma pack(push, 1)
struct SpectatorBeaconState : public _Script_CoreUObject::Object {
    private: char pad_28[0x38]; public:
    void* get_SessionName();
    int32_t& get_NumConsumedReservations();
    int32_t& get_MaxReservations();
    bool get_bRestrictCrossConsole();
    void set_bRestrictCrossConsole(bool value);
    void* get_Reservations();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x60
#pragma pack(pop)
}
