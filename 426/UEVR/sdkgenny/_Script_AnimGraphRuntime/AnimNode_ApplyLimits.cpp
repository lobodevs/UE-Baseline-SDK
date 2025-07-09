#include "..\FUObjectArray.hpp"
#include "AnimNode_ApplyLimits.hpp"
#include "AnimNode_SkeletalControlBase.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_AnimGraphRuntime::AnimNode_ApplyLimits::get_AngularRangeLimits() {
    return (void*)((uintptr_t)this + 0xc8);
}
void* _Script_AnimGraphRuntime::AnimNode_ApplyLimits::get_AngularOffsets() {
    return (void*)((uintptr_t)this + 0xd8);
}
_Script_CoreUObject::Class* _Script_AnimGraphRuntime::AnimNode_ApplyLimits::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AnimGraphRuntime.AnimNode_ApplyLimits");
    return result;
}
