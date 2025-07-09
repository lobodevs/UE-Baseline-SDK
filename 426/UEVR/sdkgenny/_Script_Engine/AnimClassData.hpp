#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_Engine {
struct Skeleton;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct AnimClassData : public _Script_CoreUObject::Object {
    private: char pad_28[0x308]; public:
    void* get_BakedStateMachines();
    _Script_Engine::Skeleton*& get_TargetSkeleton();
    void* get_AnimNotifies();
    void* get_OrderedSavedPoseIndicesMap();
    void* get_AnimBlueprintFunctions();
    void* get_AnimBlueprintFunctionData();
    void* get_AnimNodeProperties();
    void* get_LinkedAnimGraphNodeProperties();
    void* get_LinkedAnimLayerNodeProperties();
    void* get_PreUpdateNodeProperties();
    void* get_DynamicResetNodeProperties();
    void* get_StateMachineNodeProperties();
    void* get_InitializationNodeProperties();
    void* get_GraphNameAssetPlayers();
    void* get_SyncGroupNames();
    void* get_EvaluateGraphExposedInputs();
    void* get_GraphBlendOptions();
    void* get_PropertyAccessLibrary();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x330
#pragma pack(pop)
}
