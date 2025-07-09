#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\NetDriver.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_OnlineSubsystemUtils {
#pragma pack(push, 1)
struct IpNetDriver : public _Script_Engine::NetDriver {
    private: char pad_748[0x70]; public:
    bool get_LogPortUnreach();
    void set_LogPortUnreach(bool value);
    bool get_AllowPlayerPortUnreach();
    void set_AllowPlayerPortUnreach(bool value);
    void* get_MaxPortCountToTry();
    void* get_ServerDesiredSocketReceiveBufferBytes();
    void* get_ServerDesiredSocketSendBufferBytes();
    void* get_ClientDesiredSocketReceiveBufferBytes();
    void* get_ClientDesiredSocketSendBufferBytes();
    double& get_MaxSecondsInReceive();
    int32_t& get_NbPacketsBetweenReceiveTimeTest();
    float& get_ResolutionConnectionTimeout();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x7b8
#pragma pack(pop)
}
