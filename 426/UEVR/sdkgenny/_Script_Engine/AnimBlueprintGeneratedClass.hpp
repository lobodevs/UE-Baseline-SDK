#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "BlueprintGeneratedClass.hpp"
namespace _Script_Engine {
struct Skeleton;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct AnimBlueprintGeneratedClass : public BlueprintGeneratedClass {
    private: char pad_328[0x288]; public:
    void* get_BakedStateMachines();
    _Script_Engine::Skeleton*& get_TargetSkeleton();
    void* get_AnimNotifies();
    void* get_OrderedSavedPoseIndicesMap();
    void* get_SyncGroupNames();
    void* get_EvaluateGraphExposedInputs();
    void* get_GraphAssetPlayerInformation();
    void* get_GraphBlendOptions();
    void* get_PropertyAccessLibrary();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x5b0
#pragma pack(pop)
}
