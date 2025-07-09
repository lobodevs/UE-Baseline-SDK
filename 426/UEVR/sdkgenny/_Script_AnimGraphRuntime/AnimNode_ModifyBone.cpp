#include "..\FUObjectArray.hpp"
#include "AnimNode_ModifyBone.hpp"
#include "AnimNode_SkeletalControlBase.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_AnimGraphRuntime::AnimNode_ModifyBone::get_RotationMode() {
    return (void*)((uintptr_t)this + 0xfd);
}
void* _Script_AnimGraphRuntime::AnimNode_ModifyBone::get_BoneToModify() {
    return (void*)((uintptr_t)this + 0xc8);
}
void* _Script_AnimGraphRuntime::AnimNode_ModifyBone::get_Translation() {
    return (void*)((uintptr_t)this + 0xd8);
}
void* _Script_AnimGraphRuntime::AnimNode_ModifyBone::get_Rotation() {
    return (void*)((uintptr_t)this + 0xe4);
}
void* _Script_AnimGraphRuntime::AnimNode_ModifyBone::get_ScaleMode() {
    return (void*)((uintptr_t)this + 0xfe);
}
void* _Script_AnimGraphRuntime::AnimNode_ModifyBone::get_Scale() {
    return (void*)((uintptr_t)this + 0xf0);
}
void* _Script_AnimGraphRuntime::AnimNode_ModifyBone::get_TranslationMode() {
    return (void*)((uintptr_t)this + 0xfc);
}
void* _Script_AnimGraphRuntime::AnimNode_ModifyBone::get_TranslationSpace() {
    return (void*)((uintptr_t)this + 0xff);
}
void* _Script_AnimGraphRuntime::AnimNode_ModifyBone::get_RotationSpace() {
    return (void*)((uintptr_t)this + 0x100);
}
void* _Script_AnimGraphRuntime::AnimNode_ModifyBone::get_ScaleSpace() {
    return (void*)((uintptr_t)this + 0x101);
}
_Script_CoreUObject::Class* _Script_AnimGraphRuntime::AnimNode_ModifyBone::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AnimGraphRuntime.AnimNode_ModifyBone");
    return result;
}
