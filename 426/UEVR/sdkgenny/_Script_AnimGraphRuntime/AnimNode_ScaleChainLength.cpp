#include "..\FUObjectArray.hpp"
#include "AnimNode_ScaleChainLength.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimNode_Base.hpp"
float& _Script_AnimGraphRuntime::AnimNode_ScaleChainLength::get_Alpha() {
    return *(float*)((uintptr_t)this + 0x50);
}
void* _Script_AnimGraphRuntime::AnimNode_ScaleChainLength::get_InputPose() {
    return (void*)((uintptr_t)this + 0x10);
}
float& _Script_AnimGraphRuntime::AnimNode_ScaleChainLength::get_DefaultChainLength() {
    return *(float*)((uintptr_t)this + 0x20);
}
void* _Script_AnimGraphRuntime::AnimNode_ScaleChainLength::get_TargetLocation() {
    return (void*)((uintptr_t)this + 0x44);
}
void* _Script_AnimGraphRuntime::AnimNode_ScaleChainLength::get_ChainStartBone() {
    return (void*)((uintptr_t)this + 0x24);
}
void* _Script_AnimGraphRuntime::AnimNode_ScaleChainLength::get_ChainEndBone() {
    return (void*)((uintptr_t)this + 0x34);
}
void* _Script_AnimGraphRuntime::AnimNode_ScaleChainLength::get_AlphaScaleBias() {
    return (void*)((uintptr_t)this + 0x58);
}
void* _Script_AnimGraphRuntime::AnimNode_ScaleChainLength::get_ChainInitialLength() {
    return (void*)((uintptr_t)this + 0x60);
}
_Script_CoreUObject::Class* _Script_AnimGraphRuntime::AnimNode_ScaleChainLength::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AnimGraphRuntime.AnimNode_ScaleChainLength");
    return result;
}
