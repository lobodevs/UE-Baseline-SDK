#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_Engine {
struct NetConnection;
}
namespace _Script_Engine {
struct World;
}
namespace _Script_CoreUObject {
struct Package;
}
namespace _Script_Engine {
struct ReplicationDriver;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct NetDriver : public _Script_CoreUObject::Object {
    private: char pad_28[0x720]; public:
    void* get_NetConnectionClassName();
    void* get_ReplicationDriverClassName();
    int32_t& get_MaxDownloadSize();
    bool get_bClampListenServerTickRate();
    void set_bClampListenServerTickRate(bool value);
    int32_t& get_NetServerMaxTickRate();
    int32_t& get_MaxNetTickRate();
    int32_t& get_MaxInternetClientRate();
    int32_t& get_MaxClientRate();
    float& get_ServerTravelPause();
    float& get_SpawnPrioritySeconds();
    float& get_RelevantTimeout();
    float& get_KeepAliveTime();
    float& get_InitialConnectTimeout();
    float& get_ConnectionTimeout();
    float& get_TimeoutMultiplierForUnoptimizedBuilds();
    bool get_bNoTimeouts();
    void set_bNoTimeouts(bool value);
    bool get_bNeverApplyNetworkEmulationSettings();
    void set_bNeverApplyNetworkEmulationSettings(bool value);
    _Script_Engine::NetConnection*& get_ServerConnection();
    void* get_ClientConnections();
    int32_t& get_RecentlyDisconnectedTrackingTime();
    _Script_Engine::World*& get_World();
    _Script_CoreUObject::Package*& get_WorldPackage();
    void* get_NetConnectionClass();
    void* get_ReplicationDriverClass();
    void* get_NetDriverName();
    void* get_ChannelDefinitions();
    void* get_ChannelDefinitionMap();
    void* get_ActorChannelPool();
    float& get_Time();
    _Script_Engine::ReplicationDriver*& get_ReplicationDriver();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x748
#pragma pack(pop)
}
