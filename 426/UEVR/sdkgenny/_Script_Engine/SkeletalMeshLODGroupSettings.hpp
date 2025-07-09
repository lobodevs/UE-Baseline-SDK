#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_Engine {
struct AnimSequence;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct SkeletalMeshLODGroupSettings {
    private: char pad_0[0x80]; public:
    void* get_ScreenSize();
    float& get_LODHysteresis();
    void* get_BoneFilterActionOption();
    void* get_BoneList();
    void* get_BonesToPrioritize();
    float& get_WeightOfPrioritization();
    _Script_Engine::AnimSequence*& get_BakePose();
    void* get_ReductionSettings();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x80
#pragma pack(pop)
}
