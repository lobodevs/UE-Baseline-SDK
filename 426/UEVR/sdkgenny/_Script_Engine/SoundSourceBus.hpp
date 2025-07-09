#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "SoundWave.hpp"
namespace _Script_Engine {
struct AudioBus;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct SoundSourceBus : public SoundWave {
    private: char pad_370[0x18]; public:
    void* get_SourceBusChannels();
    float& get_SourceBusDuration();
    _Script_Engine::AudioBus*& get_AudioBus();
    bool get_bAutoDeactivateWhenSilent();
    void set_bAutoDeactivateWhenSilent(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x388
#pragma pack(pop)
}
