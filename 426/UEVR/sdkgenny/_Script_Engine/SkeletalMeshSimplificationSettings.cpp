#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_DeveloperSettings\DeveloperSettings.hpp"
#include "SkeletalMeshSimplificationSettings.hpp"
void* _Script_Engine::SkeletalMeshSimplificationSettings::get_SkeletalMeshReductionModuleName() {
    return (void*)((uintptr_t)this + 0x38);
}
_Script_CoreUObject::Class* _Script_Engine::SkeletalMeshSimplificationSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.SkeletalMeshSimplificationSettings");
    return result;
}
