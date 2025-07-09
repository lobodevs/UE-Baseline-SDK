#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "SoundNode.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct SoundNodeRandom : public SoundNode {
    private: char pad_48[0x30]; public:
    void* get_Weights();
    void* get_HasBeenUsed();
    int32_t& get_NumRandomUsed();
    int32_t& get_PreselectAtLevelLoad();
    bool get_bShouldExcludeFromBranchCulling();
    void set_bShouldExcludeFromBranchCulling(bool value);
    bool get_bSoundCueExcludedFromBranchCulling();
    void set_bSoundCueExcludedFromBranchCulling(bool value);
    bool get_bRandomizeWithoutReplacement();
    void set_bRandomizeWithoutReplacement(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x78
#pragma pack(pop)
}
