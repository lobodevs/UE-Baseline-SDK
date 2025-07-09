#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_CoreUObject\Package.hpp"
#include "NetConnection.hpp"
#include "NetDriver.hpp"
#include "ReplicationDriver.hpp"
#include "World.hpp"
int32_t& _Script_Engine::NetDriver::get_NetServerMaxTickRate() {
    return *(int32_t*)((uintptr_t)this + 0x58);
}
void* _Script_Engine::NetDriver::get_NetConnectionClassName() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_Engine::NetDriver::get_ReplicationDriverClassName() {
    return (void*)((uintptr_t)this + 0x40);
}
int32_t& _Script_Engine::NetDriver::get_MaxDownloadSize() {
    return *(int32_t*)((uintptr_t)this + 0x50);
}
bool _Script_Engine::NetDriver::get_bClampListenServerTickRate() {
    return (*(uint8_t*)((uintptr_t)this + 0x54 + 0)) & 1 != 0;
}
void _Script_Engine::NetDriver::set_bClampListenServerTickRate(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x54 + 0);
    *(uint8_t*)((uintptr_t)this + 0x54 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
int32_t& _Script_Engine::NetDriver::get_MaxNetTickRate() {
    return *(int32_t*)((uintptr_t)this + 0x5c);
}
int32_t& _Script_Engine::NetDriver::get_MaxInternetClientRate() {
    return *(int32_t*)((uintptr_t)this + 0x60);
}
int32_t& _Script_Engine::NetDriver::get_MaxClientRate() {
    return *(int32_t*)((uintptr_t)this + 0x64);
}
float& _Script_Engine::NetDriver::get_ServerTravelPause() {
    return *(float*)((uintptr_t)this + 0x68);
}
_Script_Engine::ReplicationDriver*& _Script_Engine::NetDriver::get_ReplicationDriver() {
    return *(_Script_Engine::ReplicationDriver**)((uintptr_t)this + 0x6e8);
}
float& _Script_Engine::NetDriver::get_SpawnPrioritySeconds() {
    return *(float*)((uintptr_t)this + 0x6c);
}
void* _Script_Engine::NetDriver::get_ActorChannelPool() {
    return (void*)((uintptr_t)this + 0x1f8);
}
float& _Script_Engine::NetDriver::get_RelevantTimeout() {
    return *(float*)((uintptr_t)this + 0x70);
}
_Script_CoreUObject::Package*& _Script_Engine::NetDriver::get_WorldPackage() {
    return *(_Script_CoreUObject::Package**)((uintptr_t)this + 0x148);
}
float& _Script_Engine::NetDriver::get_KeepAliveTime() {
    return *(float*)((uintptr_t)this + 0x74);
}
float& _Script_Engine::NetDriver::get_Time() {
    return *(float*)((uintptr_t)this + 0x210);
}
float& _Script_Engine::NetDriver::get_InitialConnectTimeout() {
    return *(float*)((uintptr_t)this + 0x78);
}
float& _Script_Engine::NetDriver::get_ConnectionTimeout() {
    return *(float*)((uintptr_t)this + 0x7c);
}
_Script_Engine::NetConnection*& _Script_Engine::NetDriver::get_ServerConnection() {
    return *(_Script_Engine::NetConnection**)((uintptr_t)this + 0x88);
}
float& _Script_Engine::NetDriver::get_TimeoutMultiplierForUnoptimizedBuilds() {
    return *(float*)((uintptr_t)this + 0x80);
}
_Script_CoreUObject::Class* _Script_Engine::NetDriver::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.NetDriver");
    return result;
}
bool _Script_Engine::NetDriver::get_bNoTimeouts() {
    return (*(uint8_t*)((uintptr_t)this + 0x84 + 0)) & 1 != 0;
}
void _Script_Engine::NetDriver::set_bNoTimeouts(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x84 + 0);
    *(uint8_t*)((uintptr_t)this + 0x84 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::NetDriver::get_bNeverApplyNetworkEmulationSettings() {
    return (*(uint8_t*)((uintptr_t)this + 0x85 + 0)) & 1 != 0;
}
void _Script_Engine::NetDriver::set_bNeverApplyNetworkEmulationSettings(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x85 + 0);
    *(uint8_t*)((uintptr_t)this + 0x85 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::NetDriver::get_ClientConnections() {
    return (void*)((uintptr_t)this + 0x90);
}
int32_t& _Script_Engine::NetDriver::get_RecentlyDisconnectedTrackingTime() {
    return *(int32_t*)((uintptr_t)this + 0x100);
}
_Script_Engine::World*& _Script_Engine::NetDriver::get_World() {
    return *(_Script_Engine::World**)((uintptr_t)this + 0x140);
}
void* _Script_Engine::NetDriver::get_NetConnectionClass() {
    return (void*)((uintptr_t)this + 0x170);
}
void* _Script_Engine::NetDriver::get_ReplicationDriverClass() {
    return (void*)((uintptr_t)this + 0x178);
}
void* _Script_Engine::NetDriver::get_NetDriverName() {
    return (void*)((uintptr_t)this + 0x190);
}
void* _Script_Engine::NetDriver::get_ChannelDefinitions() {
    return (void*)((uintptr_t)this + 0x198);
}
void* _Script_Engine::NetDriver::get_ChannelDefinitionMap() {
    return (void*)((uintptr_t)this + 0x1a8);
}
