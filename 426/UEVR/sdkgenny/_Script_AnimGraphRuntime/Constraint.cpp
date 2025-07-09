#include "..\FUObjectArray.hpp"
#include "Constraint.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_AnimGraphRuntime::Constraint::get_TargetBone() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_AnimGraphRuntime::Constraint::get_OffsetOption() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_AnimGraphRuntime::Constraint::get_TransformType() {
    return (void*)((uintptr_t)this + 0x11);
}
void* _Script_AnimGraphRuntime::Constraint::get_PerAxis() {
    return (void*)((uintptr_t)this + 0x12);
}
_Script_CoreUObject::Class* _Script_AnimGraphRuntime::Constraint::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AnimGraphRuntime.Constraint");
    return result;
}
