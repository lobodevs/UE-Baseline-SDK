#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct SoundConcurrencySettings {
    private: char pad_0[0x28]; public:
    int32_t& get_MaxCount();
    bool get_bLimitToOwner();
    void set_bLimitToOwner(bool value);
    void* get_ResolutionRule();
    float& get_RetriggerTime();
    float& get_VolumeScale();
    void* get_VolumeScaleMode();
    float& get_VolumeScaleAttackTime();
    bool get_bVolumeScaleCanRelease();
    void set_bVolumeScaleCanRelease(bool value);
    float& get_VolumeScaleReleaseTime();
    float& get_VoiceStealReleaseTime();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
