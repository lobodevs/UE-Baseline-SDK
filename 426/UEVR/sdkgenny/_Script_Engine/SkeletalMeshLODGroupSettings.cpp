#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "AnimSequence.hpp"
#include "SkeletalMeshLODGroupSettings.hpp"
void* _Script_Engine::SkeletalMeshLODGroupSettings::get_ScreenSize() {
    return (void*)((uintptr_t)this + 0x0);
}
float& _Script_Engine::SkeletalMeshLODGroupSettings::get_WeightOfPrioritization() {
    return *(float*)((uintptr_t)this + 0x30);
}
void* _Script_Engine::SkeletalMeshLODGroupSettings::get_BoneList() {
    return (void*)((uintptr_t)this + 0x10);
}
float& _Script_Engine::SkeletalMeshLODGroupSettings::get_LODHysteresis() {
    return *(float*)((uintptr_t)this + 0x4);
}
void* _Script_Engine::SkeletalMeshLODGroupSettings::get_BoneFilterActionOption() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_Engine::SkeletalMeshLODGroupSettings::get_BonesToPrioritize() {
    return (void*)((uintptr_t)this + 0x20);
}
_Script_Engine::AnimSequence*& _Script_Engine::SkeletalMeshLODGroupSettings::get_BakePose() {
    return *(_Script_Engine::AnimSequence**)((uintptr_t)this + 0x38);
}
void* _Script_Engine::SkeletalMeshLODGroupSettings::get_ReductionSettings() {
    return (void*)((uintptr_t)this + 0x40);
}
_Script_CoreUObject::Class* _Script_Engine::SkeletalMeshLODGroupSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.SkeletalMeshLODGroupSettings");
    return result;
}
