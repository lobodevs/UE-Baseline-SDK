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
struct AnimNode_AimOffsetLookAt : public AnimNode_BlendSpacePlayer {
    private: char pad_e8[0xd8]; public:
    void* get_BasePose();
    int32_t& get_LODThreshold();
    void* get_SourceSocketName();
    void* get_PivotSocketName();
    void* get_LookAtLocation();
    void* get_SocketAxis();
    float& get_Alpha();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x1c0
#pragma pack(pop)
}
