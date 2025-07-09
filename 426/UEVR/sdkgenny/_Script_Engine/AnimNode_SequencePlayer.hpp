#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "AnimNode_AssetPlayerBase.hpp"
namespace _Script_Engine {
struct AnimSequenceBase;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct AnimNode_SequencePlayer : public AnimNode_AssetPlayerBase {
    private: char pad_38[0x48]; public:
    _Script_Engine::AnimSequenceBase*& get_Sequence();
    float& get_PlayRateBasis();
    float& get_PlayRate();
    void* get_PlayRateScaleBiasClamp();
    float& get_StartPosition();
    bool get_bLoopAnimation();
    void set_bLoopAnimation(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x80
#pragma pack(pop)
}
