#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "SoundSubmixWithParentBase.hpp"
namespace _Script_AudioExtensions {
struct SoundfieldEncodingSettingsBase;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct SoundfieldSubmix : public SoundSubmixWithParentBase {
    private: char pad_40[0x28]; public:
    void* get_SoundfieldEncodingFormat();
    _Script_AudioExtensions::SoundfieldEncodingSettingsBase*& get_EncodingSettings();
    void* get_SoundfieldEffectChain();
    void* get_EncodingSettingsClass();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x68
#pragma pack(pop)
}
