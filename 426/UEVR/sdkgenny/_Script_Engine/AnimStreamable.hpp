#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "AnimSequenceBase.hpp"
namespace _Script_Engine {
struct AnimBoneCompressionSettings;
}
namespace _Script_Engine {
struct AnimCurveCompressionSettings;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct AnimStreamable : public AnimSequenceBase {
    private: char pad_a8[0x38]; public:
    int32_t& get_NumFrames();
    void* get_Interpolation();
    void* get_RetargetSource();
    _Script_Engine::AnimBoneCompressionSettings*& get_BoneCompressionSettings();
    _Script_Engine::AnimCurveCompressionSettings*& get_CurveCompressionSettings();
    bool get_bEnableRootMotion();
    void set_bEnableRootMotion(bool value);
    void* get_RootMotionRootLock();
    bool get_bForceRootLock();
    void set_bForceRootLock(bool value);
    bool get_bUseNormalizedRootMotionScale();
    void set_bUseNormalizedRootMotionScale(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xe0
#pragma pack(pop)
}
