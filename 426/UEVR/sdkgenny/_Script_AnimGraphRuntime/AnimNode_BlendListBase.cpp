#include "..\FUObjectArray.hpp"
#include "AnimNode_BlendListBase.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimNode_Base.hpp"
#include "..\_Script_Engine\BlendProfile.hpp"
#include "..\_Script_Engine\CurveFloat.hpp"
void* _Script_AnimGraphRuntime::AnimNode_BlendListBase::get_BlendPose() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_AnimGraphRuntime::AnimNode_BlendListBase::get_BlendTime() {
    return (void*)((uintptr_t)this + 0x20);
}
void* _Script_AnimGraphRuntime::AnimNode_BlendListBase::get_TransitionType() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_AnimGraphRuntime::AnimNode_BlendListBase::get_BlendType() {
    return (void*)((uintptr_t)this + 0x31);
}
bool _Script_AnimGraphRuntime::AnimNode_BlendListBase::get_bResetChildOnActivation() {
    return (*(uint8_t*)((uintptr_t)this + 0x32 + 0)) & 1 != 0;
}
void _Script_AnimGraphRuntime::AnimNode_BlendListBase::set_bResetChildOnActivation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x32 + 0);
    *(uint8_t*)((uintptr_t)this + 0x32 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_Engine::BlendProfile*& _Script_AnimGraphRuntime::AnimNode_BlendListBase::get_BlendProfile() {
    return *(_Script_Engine::BlendProfile**)((uintptr_t)this + 0x40);
}
_Script_Engine::CurveFloat*& _Script_AnimGraphRuntime::AnimNode_BlendListBase::get_CustomBlendCurve() {
    return *(_Script_Engine::CurveFloat**)((uintptr_t)this + 0x38);
}
_Script_CoreUObject::Class* _Script_AnimGraphRuntime::AnimNode_BlendListBase::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AnimGraphRuntime.AnimNode_BlendListBase");
    return result;
}
