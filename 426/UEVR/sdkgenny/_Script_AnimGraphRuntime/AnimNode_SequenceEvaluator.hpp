#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\AnimNode_AssetPlayerBase.hpp"
namespace _Script_Engine {
struct AnimSequenceBase;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AnimGraphRuntime {
#pragma pack(push, 1)
struct AnimNode_SequenceEvaluator : public _Script_Engine::AnimNode_AssetPlayerBase {
    private: char pad_38[0x18]; public:
    _Script_Engine::AnimSequenceBase*& get_Sequence();
    float& get_ExplicitTime();
    bool get_bShouldLoop();
    void set_bShouldLoop(bool value);
    bool get_bTeleportToExplicitTime();
    void set_bTeleportToExplicitTime(bool value);
    void* get_ReinitializationBehavior();
    float& get_StartPosition();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x50
#pragma pack(pop)
}
