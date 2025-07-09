#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_Engine {
struct SoundWave;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct SoundWaveEnvelopeDataPerSound {
    private: char pad_0[0x10]; public:
    float& get_Envelope();
    float& get_PlaybackTime();
    _Script_Engine::SoundWave*& get_SoundWave();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x10
#pragma pack(pop)
}
