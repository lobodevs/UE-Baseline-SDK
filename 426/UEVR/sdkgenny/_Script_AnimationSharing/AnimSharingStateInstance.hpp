#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\AnimInstance.hpp"
namespace _Script_Engine {
struct AnimSequence;
}
namespace _Script_AnimationSharing {
struct AnimSharingInstance;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AnimationSharing {
#pragma pack(push, 1)
struct AnimSharingStateInstance : public _Script_Engine::AnimInstance {
    private: char pad_2c0[0x20]; public:
    _Script_Engine::AnimSequence*& get_AnimationToPlay();
    float& get_PermutationTimeOffset();
    float& get_PlayRate();
    bool get_bStateBool();
    void set_bStateBool(bool value);
    _Script_AnimationSharing::AnimSharingInstance*& get_Instance();
    static _Script_CoreUObject::Class* static_class();
    void GetInstancedActors(void*& Actors);
}; // Size: 0x2e0
#pragma pack(pop)
}
