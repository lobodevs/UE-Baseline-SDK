#include "..\FUObjectArray.hpp"
#include "AnimationDataSourceRegistry.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
void* _Script_AnimationCore::AnimationDataSourceRegistry::get_DataSources() {
    return (void*)((uintptr_t)this + 0x28);
}
_Script_CoreUObject::Class* _Script_AnimationCore::AnimationDataSourceRegistry::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AnimationCore.AnimationDataSourceRegistry");
    return result;
}
