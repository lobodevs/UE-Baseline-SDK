#include "..\FUObjectArray.hpp"
#include "AnimNode_PoseDriver.hpp"
#include "AnimNode_PoseHandler.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_AnimGraphRuntime::AnimNode_PoseDriver::get_SourcePose() {
    return (void*)((uintptr_t)this + 0x80);
}
void* _Script_AnimGraphRuntime::AnimNode_PoseDriver::get_DriveSource() {
    return (void*)((uintptr_t)this + 0x12c);
}
void* _Script_AnimGraphRuntime::AnimNode_PoseDriver::get_SourceBones() {
    return (void*)((uintptr_t)this + 0x90);
}
void* _Script_AnimGraphRuntime::AnimNode_PoseDriver::get_OnlyDriveBones() {
    return (void*)((uintptr_t)this + 0xa0);
}
void* _Script_AnimGraphRuntime::AnimNode_PoseDriver::get_PoseTargets() {
    return (void*)((uintptr_t)this + 0xb0);
}
void* _Script_AnimGraphRuntime::AnimNode_PoseDriver::get_EvalSpaceBone() {
    return (void*)((uintptr_t)this + 0xf0);
}
void* _Script_AnimGraphRuntime::AnimNode_PoseDriver::get_RBFParams() {
    return (void*)((uintptr_t)this + 0x100);
}
void* _Script_AnimGraphRuntime::AnimNode_PoseDriver::get_DriveOutput() {
    return (void*)((uintptr_t)this + 0x12d);
}
bool _Script_AnimGraphRuntime::AnimNode_PoseDriver::get_bOnlyDriveSelectedBones() {
    return (*(uint8_t*)((uintptr_t)this + 0x12e + 0)) & 1 != 0;
}
void _Script_AnimGraphRuntime::AnimNode_PoseDriver::set_bOnlyDriveSelectedBones(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x12e + 0);
    *(uint8_t*)((uintptr_t)this + 0x12e + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
int32_t& _Script_AnimGraphRuntime::AnimNode_PoseDriver::get_LODThreshold() {
    return *(int32_t*)((uintptr_t)this + 0x130);
}
_Script_CoreUObject::Class* _Script_AnimGraphRuntime::AnimNode_PoseDriver::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AnimGraphRuntime.AnimNode_PoseDriver");
    return result;
}
