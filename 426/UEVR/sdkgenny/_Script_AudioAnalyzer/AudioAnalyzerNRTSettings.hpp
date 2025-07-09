#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "AudioAnalyzerAsset.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AudioAnalyzer {
#pragma pack(push, 1)
struct AudioAnalyzerNRTSettings : public AudioAnalyzerAsset {
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
