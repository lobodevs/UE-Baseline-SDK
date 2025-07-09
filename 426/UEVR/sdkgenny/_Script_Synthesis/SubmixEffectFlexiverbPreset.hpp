#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\SoundEffectSubmixPreset.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Synthesis {
struct SubmixEffectFlexiverbSettings;
}
namespace _Script_Synthesis {
#pragma pack(push, 1)
struct SubmixEffectFlexiverbPreset : public _Script_Engine::SoundEffectSubmixPreset {
    private: char pad_68[0x48]; public:
    void* get_Settings();
    static _Script_CoreUObject::Class* static_class();
    void SetSettings(_Script_Synthesis::SubmixEffectFlexiverbSettings& InSettings);
}; // Size: 0xb0
#pragma pack(pop)
}
