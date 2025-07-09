#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_Engine {
struct SoundSourceBus;
}
namespace _Script_Engine {
struct AudioBus;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct SoundSourceBusSendInfo {
    private: char pad_0[0xb8]; public:
    void* get_SourceBusSendLevelControlMethod();
    _Script_Engine::SoundSourceBus*& get_SoundSourceBus();
    _Script_Engine::AudioBus*& get_AudioBus();
    float& get_SendLevel();
    float& get_MinSendLevel();
    float& get_MaxSendLevel();
    float& get_MinSendDistance();
    float& get_MaxSendDistance();
    void* get_CustomSendLevelCurve();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xb8
#pragma pack(pop)
}
