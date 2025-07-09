#include "..\FUObjectArray.hpp"
#include "AnimNode_BlendBoneByChannel.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimNode_Base.hpp"
void* _Script_AnimGraphRuntime::AnimNode_BlendBoneByChannel::get_B() {
    return (void*)((uintptr_t)this + 0x20);
}
void* _Script_AnimGraphRuntime::AnimNode_BlendBoneByChannel::get_A() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_AnimGraphRuntime::AnimNode_BlendBoneByChannel::get_BoneDefinitions() {
    return (void*)((uintptr_t)this + 0x30);
}
float& _Script_AnimGraphRuntime::AnimNode_BlendBoneByChannel::get_Alpha() {
    return *(float*)((uintptr_t)this + 0x50);
}
void* _Script_AnimGraphRuntime::AnimNode_BlendBoneByChannel::get_AlphaScaleBias() {
    return (void*)((uintptr_t)this + 0x58);
}
void* _Script_AnimGraphRuntime::AnimNode_BlendBoneByChannel::get_TransformsSpace() {
    return (void*)((uintptr_t)this + 0x60);
}
_Script_CoreUObject::Class* _Script_AnimGraphRuntime::AnimNode_BlendBoneByChannel::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AnimGraphRuntime.AnimNode_BlendBoneByChannel");
    return result;
}
