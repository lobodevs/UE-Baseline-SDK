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
struct EnvelopeFollowerListener;
}
namespace _Script_Synthesis {
struct SourceEffectEnvelopeFollowerSettings;
}
namespace _Script_Synthesis {
#pragma pack(push, 1)
struct SourceEffectEnvelopeFollowerPreset : public _Script_Engine::SoundEffectSourcePreset {
    private: char pad_68[0x40]; public:
    void* get_Settings();
    static _Script_CoreUObject::Class* static_class();
    void UnregisterEnvelopeFollowerListener(_Script_Synthesis::EnvelopeFollowerListener* EnvelopeFollowerListener);
    void SetSettings(_Script_Synthesis::SourceEffectEnvelopeFollowerSettings& InSettings);
    void RegisterEnvelopeFollowerListener(_Script_Synthesis::EnvelopeFollowerListener* EnvelopeFollowerListener);
}; // Size: 0xa8
#pragma pack(pop)
}
