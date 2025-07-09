#include "..\FUObjectArray.hpp"
#include "AnimNode_ModifyCurve.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimNode_Base.hpp"
void* _Script_AnimGraphRuntime::AnimNode_ModifyCurve::get_SourcePose() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_AnimGraphRuntime::AnimNode_ModifyCurve::get_CurveValues() {
    return (void*)((uintptr_t)this + 0x20);
}
_Script_CoreUObject::Class* _Script_AnimGraphRuntime::AnimNode_ModifyCurve::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AnimGraphRuntime.AnimNode_ModifyCurve");
    return result;
}
void* _Script_AnimGraphRuntime::AnimNode_ModifyCurve::get_CurveNames() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_AnimGraphRuntime::AnimNode_ModifyCurve::get_ApplyMode() {
    return (void*)((uintptr_t)this + 0x54);
}
float& _Script_AnimGraphRuntime::AnimNode_ModifyCurve::get_Alpha() {
    return *(float*)((uintptr_t)this + 0x50);
}
