#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "AnimNotifyState.hpp"
namespace _Script_Engine {
struct ParticleSystem;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct AnimNotifyState_TimedParticleEffect : public AnimNotifyState {
    private: char pad_30[0x30]; public:
    _Script_Engine::ParticleSystem*& get_PSTemplate();
    void* get_SocketName();
    void* get_LocationOffset();
    void* get_RotationOffset();
    bool get_bDestroyAtEnd();
    void set_bDestroyAtEnd(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x60
#pragma pack(pop)
}
