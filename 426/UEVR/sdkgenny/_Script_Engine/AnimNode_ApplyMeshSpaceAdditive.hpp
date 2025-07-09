#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "AnimNode_Base.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct AnimNode_ApplyMeshSpaceAdditive : public AnimNode_Base {
    private: char pad_10[0xc0]; public:
    void* get_Base();
    void* get_Additive();
    void* get_AlphaInputType();
    float& get_Alpha();
    bool get_bAlphaBoolEnabled();
    void set_bAlphaBoolEnabled(bool value);
    void* get_AlphaBoolBlend();
    void* get_AlphaCurveName();
    void* get_AlphaScaleBias();
    void* get_AlphaScaleBiasClamp();
    int32_t& get_LODThreshold();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xd0
#pragma pack(pop)
}
