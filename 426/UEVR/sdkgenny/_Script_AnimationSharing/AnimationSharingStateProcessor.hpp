#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_CoreUObject {
struct Enum;
}
namespace _Script_AnimationSharing {
#pragma pack(push, 1)
struct AnimationSharingStateProcessor : public _Script_CoreUObject::Object {
    private: char pad_28[0x28]; public:
    void* get_AnimationStateEnum();
    static _Script_CoreUObject::Class* static_class();
    void ProcessActorState(int32_t& OutState, _Script_Engine::Actor* InActor, void* CurrentState, void* OnDemandState, bool& bShouldProcess);
    _Script_CoreUObject::Enum* GetAnimationStateEnum();
}; // Size: 0x50
#pragma pack(pop)
}
