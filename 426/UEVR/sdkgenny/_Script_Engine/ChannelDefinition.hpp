#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct ChannelDefinition {
    private: char pad_0[0x28]; public:
    void* get_ChannelName();
    void* get_ClassName();
    void* get_ChannelClass();
    int32_t& get_StaticChannelIndex();
    bool get_bTickOnCreate();
    void set_bTickOnCreate(bool value);
    bool get_bServerOpen();
    void set_bServerOpen(bool value);
    bool get_bClientOpen();
    void set_bClientOpen(bool value);
    bool get_bInitialServer();
    void set_bInitialServer(bool value);
    bool get_bInitialClient();
    void set_bInitialClient(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
