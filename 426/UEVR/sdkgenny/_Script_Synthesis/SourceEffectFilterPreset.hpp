#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\SoundEffectSourcePreset.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Synthesis {
struct SourceEffectFilterSettings;
}
namespace _Script_Synthesis {
#pragma pack(push, 1)
struct SourceEffectFilterPreset : public _Script_Engine::SoundEffectSourcePreset {
    private: char pad_68[0x68]; public:
    void* get_Settings();
    static _Script_CoreUObject::Class* static_class();
    void SetSettings(_Script_Synthesis::SourceEffectFilterSettings& InSettings);
}; // Size: 0xd0
#pragma pack(pop)
}
