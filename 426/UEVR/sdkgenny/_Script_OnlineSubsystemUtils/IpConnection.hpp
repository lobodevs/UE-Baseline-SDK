#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\NetConnection.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_OnlineSubsystemUtils {
#pragma pack(push, 1)
struct IpConnection : public _Script_Engine::NetConnection {
    private: char pad_1af0[0xa0]; public:
    float& get_SocketErrorDisconnectDelay();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x1b90
#pragma pack(pop)
}
