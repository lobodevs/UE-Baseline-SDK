#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "AnimClassData.hpp"
#include "Skeleton.hpp"
void* _Script_Engine::AnimClassData::get_LinkedAnimGraphNodeProperties() {
    return (void*)((uintptr_t)this + 0xe8);
}
void* _Script_Engine::AnimClassData::get_OrderedSavedPoseIndicesMap() {
    return (void*)((uintptr_t)this + 0x58);
}
_Script_Engine::Skeleton*& _Script_Engine::AnimClassData::get_TargetSkeleton() {
    return *(_Script_Engine::Skeleton**)((uintptr_t)this + 0x40);
}
void* _Script_Engine::AnimClassData::get_DynamicResetNodeProperties() {
    return (void*)((uintptr_t)this + 0x148);
}
void* _Script_Engine::AnimClassData::get_BakedStateMachines() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_Engine::AnimClassData::get_AnimNodeProperties() {
    return (void*)((uintptr_t)this + 0xc8);
}
void* _Script_Engine::AnimClassData::get_AnimNotifies() {
    return (void*)((uintptr_t)this + 0x48);
}
void* _Script_Engine::AnimClassData::get_AnimBlueprintFunctions() {
    return (void*)((uintptr_t)this + 0xa8);
}
void* _Script_Engine::AnimClassData::get_AnimBlueprintFunctionData() {
    return (void*)((uintptr_t)this + 0xb8);
}
void* _Script_Engine::AnimClassData::get_LinkedAnimLayerNodeProperties() {
    return (void*)((uintptr_t)this + 0x108);
}
void* _Script_Engine::AnimClassData::get_PreUpdateNodeProperties() {
    return (void*)((uintptr_t)this + 0x128);
}
void* _Script_Engine::AnimClassData::get_StateMachineNodeProperties() {
    return (void*)((uintptr_t)this + 0x168);
}
void* _Script_Engine::AnimClassData::get_InitializationNodeProperties() {
    return (void*)((uintptr_t)this + 0x188);
}
void* _Script_Engine::AnimClassData::get_GraphNameAssetPlayers() {
    return (void*)((uintptr_t)this + 0x1a8);
}
void* _Script_Engine::AnimClassData::get_SyncGroupNames() {
    return (void*)((uintptr_t)this + 0x1f8);
}
void* _Script_Engine::AnimClassData::get_EvaluateGraphExposedInputs() {
    return (void*)((uintptr_t)this + 0x208);
}
void* _Script_Engine::AnimClassData::get_GraphBlendOptions() {
    return (void*)((uintptr_t)this + 0x218);
}
void* _Script_Engine::AnimClassData::get_PropertyAccessLibrary() {
    return (void*)((uintptr_t)this + 0x268);
}
_Script_CoreUObject::Class* _Script_Engine::AnimClassData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.AnimClassData");
    return result;
}
