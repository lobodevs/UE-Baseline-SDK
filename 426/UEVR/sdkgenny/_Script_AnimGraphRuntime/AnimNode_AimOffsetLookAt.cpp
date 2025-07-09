#include "..\FUObjectArray.hpp"
#include "AnimNode_AimOffsetLookAt.hpp"
#include "AnimNode_BlendSpacePlayer.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
float& _Script_AnimGraphRuntime::AnimNode_AimOffsetLookAt::get_Alpha() {
    return *(float*)((uintptr_t)this + 0x18c);
}
int32_t& _Script_AnimGraphRuntime::AnimNode_AimOffsetLookAt::get_LODThreshold() {
    return *(int32_t*)((uintptr_t)this + 0x160);
}
void* _Script_AnimGraphRuntime::AnimNode_AimOffsetLookAt::get_BasePose() {
    return (void*)((uintptr_t)this + 0x150);
}
void* _Script_AnimGraphRuntime::AnimNode_AimOffsetLookAt::get_SourceSocketName() {
    return (void*)((uintptr_t)this + 0x164);
}
void* _Script_AnimGraphRuntime::AnimNode_AimOffsetLookAt::get_PivotSocketName() {
    return (void*)((uintptr_t)this + 0x16c);
}
void* _Script_AnimGraphRuntime::AnimNode_AimOffsetLookAt::get_LookAtLocation() {
    return (void*)((uintptr_t)this + 0x174);
}
void* _Script_AnimGraphRuntime::AnimNode_AimOffsetLookAt::get_SocketAxis() {
    return (void*)((uintptr_t)this + 0x180);
}
_Script_CoreUObject::Class* _Script_AnimGraphRuntime::AnimNode_AimOffsetLookAt::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AnimGraphRuntime.AnimNode_AimOffsetLookAt");
    return result;
}
