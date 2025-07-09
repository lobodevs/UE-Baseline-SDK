#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "AnimNode_BlendSpacePlayer.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AnimGraphRuntime {
#pragma pack(push, 1)
struct AnimNode_RotationOffsetBlendSpace : public AnimNode_BlendSpacePlayer {
    private: char pad_e8[0xa8]; public:
    void* get_BasePose();
    int32_t& get_LODThreshold();
    float& get_Alpha();
    void* get_AlphaScaleBias();
    void* get_AlphaBoolBlend();
    void* get_AlphaCurveName();
    void* get_AlphaScaleBiasClamp();
    void* get_AlphaInputType();
    bool get_bAlphaBoolEnabled();
    void set_bAlphaBoolEnabled(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x190
#pragma pack(pop)
}
