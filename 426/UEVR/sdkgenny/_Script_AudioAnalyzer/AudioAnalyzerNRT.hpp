#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "AudioAnalyzerAsset.hpp"
namespace _Script_Engine {
struct SoundWave;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AudioAnalyzer {
#pragma pack(push, 1)
struct AudioAnalyzerNRT : public AudioAnalyzerAsset {
    private: char pad_28[0x50]; public:
    _Script_Engine::SoundWave*& get_Sound();
    float& get_DurationInSeconds();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x78
#pragma pack(pop)
}
