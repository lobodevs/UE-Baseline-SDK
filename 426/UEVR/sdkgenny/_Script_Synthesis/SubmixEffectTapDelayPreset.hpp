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
struct TapDelayInfo;
}
namespace _Script_Synthesis {
struct SubmixEffectTapDelaySettings;
}
namespace _Script_Synthesis {
#pragma pack(push, 1)
struct SubmixEffectTapDelayPreset : public _Script_Engine::SoundEffectSubmixPreset {
    private: char pad_68[0x70]; public:
    void* get_Settings();
    static _Script_CoreUObject::Class* static_class();
    void SetTap(int32_t TapId, _Script_Synthesis::TapDelayInfo& TapInfo);
    void SetSettings(_Script_Synthesis::SubmixEffectTapDelaySettings& InSettings);
    void SetInterpolationTime(float Time);
    void RemoveTap(int32_t TapId);
    void GetTapIds(void*& TapIds);
    void GetTap(int32_t TapId, _Script_Synthesis::TapDelayInfo& TapInfo);
    float GetMaxDelayInMilliseconds();
    void AddTap(int32_t& TapId);
}; // Size: 0xd8
#pragma pack(pop)
}
