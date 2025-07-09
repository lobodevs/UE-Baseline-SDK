#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "Channel.hpp"
namespace _Script_Engine {
struct Actor;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct ActorChannel : public Channel {
    private: char pad_70[0x228]; public:
    _Script_Engine::Actor*& get_Actor();
    void* get_CreateSubObjects();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x298
#pragma pack(pop)
}
