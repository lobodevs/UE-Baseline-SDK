#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_Engine {
struct Skeleton;
}
namespace _Script_Engine {
struct SkeletalMesh;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AnimationSharing {
#pragma pack(push, 1)
struct PerSkeletonAnimationSharingSetup {
    private: char pad_0[0x38]; public:
    _Script_Engine::Skeleton*& get_Skeleton();
    _Script_Engine::SkeletalMesh*& get_SkeletalMesh();
    void* get_BlendAnimBlueprint();
    void* get_AdditiveAnimBlueprint();
    void* get_StateProcessorClass();
    void* get_AnimationStates();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x38
#pragma pack(pop)
}
