#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_AnimationSharing {
struct AnimationSharingStateProcessor;
}
namespace _Script_CoreUObject {
struct Enum;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AnimationSharing {
#pragma pack(push, 1)
struct AnimSharingInstance : public _Script_CoreUObject::Object {
    private: char pad_28[0xf0]; public:
    void* get_RegisteredActors();
    _Script_AnimationSharing::AnimationSharingStateProcessor*& get_StateProcessor();
    void* get_UsedAnimationSequences();
    _Script_CoreUObject::Enum*& get_StateEnum();
    _Script_Engine::Actor*& get_SharingActor();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x118
#pragma pack(pop)
}
