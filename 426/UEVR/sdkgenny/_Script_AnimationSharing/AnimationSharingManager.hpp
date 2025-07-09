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
namespace _Script_Engine {
struct Skeleton;
}
namespace _Script_AnimationSharing {
struct AnimationSharingSetup;
}
namespace _Script_AnimationSharing {
#pragma pack(push, 1)
struct AnimationSharingManager : public _Script_CoreUObject::Object {
    private: char pad_28[0x60]; public:
    void* get_Skeletons();
    void* get_PerSkeletonData();
    static _Script_CoreUObject::Class* static_class();
    void RegisterActorWithSkeletonBP(_Script_Engine::Actor* InActor, _Script_Engine::Skeleton* SharingSkeleton);
    _Script_AnimationSharing::AnimationSharingManager* GetAnimationSharingManager(_Script_CoreUObject::Object* WorldContextObject);
    bool CreateAnimationSharingManager(_Script_CoreUObject::Object* WorldContextObject, _Script_AnimationSharing::AnimationSharingSetup* Setup);
    bool AnimationSharingEnabled();
}; // Size: 0x88
#pragma pack(pop)
}
