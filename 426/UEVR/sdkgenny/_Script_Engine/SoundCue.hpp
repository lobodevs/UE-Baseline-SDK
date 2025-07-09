#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "SoundBase.hpp"
namespace _Script_Engine {
struct SoundNode;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct SoundCue : public SoundBase {
    private: char pad_1b8[0x3d8]; public:
    bool get_bPrimeOnLoad();
    void set_bPrimeOnLoad(bool value);
    _Script_Engine::SoundNode*& get_FirstNode();
    float& get_VolumeMultiplier();
    float& get_PitchMultiplier();
    void* get_AttenuationOverrides();
    float& get_SubtitlePriority();
    bool get_bOverrideAttenuation();
    void set_bOverrideAttenuation(bool value);
    bool get_bExcludeFromRandomNodeBranchCulling();
    void set_bExcludeFromRandomNodeBranchCulling(bool value);
    int32_t& get_CookedQualityIndex();
    bool get_bHasPlayWhenSilent();
    void set_bHasPlayWhenSilent(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x590
#pragma pack(pop)
}
