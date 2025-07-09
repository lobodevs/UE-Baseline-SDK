#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "AnimBlueprintGeneratedClass.hpp"
#include "BlueprintGeneratedClass.hpp"
#include "Skeleton.hpp"
void* _Script_Engine::AnimBlueprintGeneratedClass::get_SyncGroupNames() {
    return (void*)((uintptr_t)this + 0x428);
}
void* _Script_Engine::AnimBlueprintGeneratedClass::get_BakedStateMachines() {
    return (void*)((uintptr_t)this + 0x330);
}
void* _Script_Engine::AnimBlueprintGeneratedClass::get_AnimNotifies() {
    return (void*)((uintptr_t)this + 0x348);
}
_Script_Engine::Skeleton*& _Script_Engine::AnimBlueprintGeneratedClass::get_TargetSkeleton() {
    return *(_Script_Engine::Skeleton**)((uintptr_t)this + 0x340);
}
void* _Script_Engine::AnimBlueprintGeneratedClass::get_GraphBlendOptions() {
    return (void*)((uintptr_t)this + 0x498);
}
void* _Script_Engine::AnimBlueprintGeneratedClass::get_GraphAssetPlayerInformation() {
    return (void*)((uintptr_t)this + 0x448);
}
void* _Script_Engine::AnimBlueprintGeneratedClass::get_OrderedSavedPoseIndicesMap() {
    return (void*)((uintptr_t)this + 0x358);
}
void* _Script_Engine::AnimBlueprintGeneratedClass::get_EvaluateGraphExposedInputs() {
    return (void*)((uintptr_t)this + 0x438);
}
void* _Script_Engine::AnimBlueprintGeneratedClass::get_PropertyAccessLibrary() {
    return (void*)((uintptr_t)this + 0x4e8);
}
_Script_CoreUObject::Class* _Script_Engine::AnimBlueprintGeneratedClass::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.AnimBlueprintGeneratedClass");
    return result;
}
