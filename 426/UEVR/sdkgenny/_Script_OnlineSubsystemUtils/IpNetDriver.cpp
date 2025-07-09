#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\NetDriver.hpp"
#include "IpNetDriver.hpp"
bool _Script_OnlineSubsystemUtils::IpNetDriver::get_LogPortUnreach() {
    return (*(uint8_t*)((uintptr_t)this + 0x748 + 0)) & 1 != 0;
}
void* _Script_OnlineSubsystemUtils::IpNetDriver::get_ServerDesiredSocketSendBufferBytes() {
    return (void*)((uintptr_t)this + 0x760);
}
void _Script_OnlineSubsystemUtils::IpNetDriver::set_LogPortUnreach(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x748 + 0);
    *(uint8_t*)((uintptr_t)this + 0x748 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_OnlineSubsystemUtils::IpNetDriver::get_ClientDesiredSocketReceiveBufferBytes() {
    return (void*)((uintptr_t)this + 0x764);
}
bool _Script_OnlineSubsystemUtils::IpNetDriver::get_AllowPlayerPortUnreach() {
    return (*(uint8_t*)((uintptr_t)this + 0x748 + 0)) & 2 != 0;
}
void _Script_OnlineSubsystemUtils::IpNetDriver::set_AllowPlayerPortUnreach(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x748 + 0);
    *(uint8_t*)((uintptr_t)this + 0x748 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
void* _Script_OnlineSubsystemUtils::IpNetDriver::get_MaxPortCountToTry() {
    return (void*)((uintptr_t)this + 0x74c);
}
void* _Script_OnlineSubsystemUtils::IpNetDriver::get_ServerDesiredSocketReceiveBufferBytes() {
    return (void*)((uintptr_t)this + 0x75c);
}
void* _Script_OnlineSubsystemUtils::IpNetDriver::get_ClientDesiredSocketSendBufferBytes() {
    return (void*)((uintptr_t)this + 0x768);
}
double& _Script_OnlineSubsystemUtils::IpNetDriver::get_MaxSecondsInReceive() {
    return *(double*)((uintptr_t)this + 0x770);
}
int32_t& _Script_OnlineSubsystemUtils::IpNetDriver::get_NbPacketsBetweenReceiveTimeTest() {
    return *(int32_t*)((uintptr_t)this + 0x778);
}
float& _Script_OnlineSubsystemUtils::IpNetDriver::get_ResolutionConnectionTimeout() {
    return *(float*)((uintptr_t)this + 0x77c);
}
_Script_CoreUObject::Class* _Script_OnlineSubsystemUtils::IpNetDriver::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/OnlineSubsystemUtils.IpNetDriver");
    return result;
}
