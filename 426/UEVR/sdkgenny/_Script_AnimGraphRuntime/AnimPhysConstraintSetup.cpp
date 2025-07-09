#include "..\FUObjectArray.hpp"
#include "AnimPhysConstraintSetup.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_AnimGraphRuntime::AnimPhysConstraintSetup::get_LinearAxesMax() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_AnimGraphRuntime::AnimPhysConstraintSetup::get_LinearXLimitType() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_AnimGraphRuntime::AnimPhysConstraintSetup::get_AngularTargetAxis() {
    return (void*)((uintptr_t)this + 0x1e);
}
void* _Script_AnimGraphRuntime::AnimPhysConstraintSetup::get_TwistAxis() {
    return (void*)((uintptr_t)this + 0x1d);
}
void* _Script_AnimGraphRuntime::AnimPhysConstraintSetup::get_LinearZLimitType() {
    return (void*)((uintptr_t)this + 0x2);
}
void* _Script_AnimGraphRuntime::AnimPhysConstraintSetup::get_LinearYLimitType() {
    return (void*)((uintptr_t)this + 0x1);
}
void* _Script_AnimGraphRuntime::AnimPhysConstraintSetup::get_LinearAxesMin() {
    return (void*)((uintptr_t)this + 0x4);
}
void* _Script_AnimGraphRuntime::AnimPhysConstraintSetup::get_AngularConstraintType() {
    return (void*)((uintptr_t)this + 0x1c);
}
float& _Script_AnimGraphRuntime::AnimPhysConstraintSetup::get_ConeAngle() {
    return *(float*)((uintptr_t)this + 0x20);
}
void* _Script_AnimGraphRuntime::AnimPhysConstraintSetup::get_AngularLimitsMin() {
    return (void*)((uintptr_t)this + 0x24);
}
void* _Script_AnimGraphRuntime::AnimPhysConstraintSetup::get_AngularLimitsMax() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_AnimGraphRuntime::AnimPhysConstraintSetup::get_AngularTarget() {
    return (void*)((uintptr_t)this + 0x3c);
}
_Script_CoreUObject::Class* _Script_AnimGraphRuntime::AnimPhysConstraintSetup::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AnimGraphRuntime.AnimPhysConstraintSetup");
    return result;
}
