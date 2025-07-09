#include "..\FUObjectArray.hpp"
#include "AnimNode_CopyPoseFromMesh.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimNode_Base.hpp"
void* _Script_AnimGraphRuntime::AnimNode_CopyPoseFromMesh::get_SourceMeshComponent() {
    return (void*)((uintptr_t)this + 0x10);
}
bool _Script_AnimGraphRuntime::AnimNode_CopyPoseFromMesh::get_bUseAttachedParent() {
    return (*(uint8_t*)((uintptr_t)this + 0x18 + 0)) & 1 != 0;
}
void _Script_AnimGraphRuntime::AnimNode_CopyPoseFromMesh::set_bUseAttachedParent(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x18 + 0);
    *(uint8_t*)((uintptr_t)this + 0x18 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_AnimGraphRuntime::AnimNode_CopyPoseFromMesh::get_bCopyCurves() {
    return (*(uint8_t*)((uintptr_t)this + 0x18 + 0)) & 2 != 0;
}
void _Script_AnimGraphRuntime::AnimNode_CopyPoseFromMesh::set_bCopyCurves(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x18 + 0);
    *(uint8_t*)((uintptr_t)this + 0x18 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_AnimGraphRuntime::AnimNode_CopyPoseFromMesh::get_bCopyCustomAttributes() {
    return (*(uint8_t*)((uintptr_t)this + 0x19 + 0)) & 1 != 0;
}
void _Script_AnimGraphRuntime::AnimNode_CopyPoseFromMesh::set_bCopyCustomAttributes(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x19 + 0);
    *(uint8_t*)((uintptr_t)this + 0x19 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_AnimGraphRuntime::AnimNode_CopyPoseFromMesh::get_bUseMeshPose() {
    return (*(uint8_t*)((uintptr_t)this + 0x1a + 0)) & 1 != 0;
}
void _Script_AnimGraphRuntime::AnimNode_CopyPoseFromMesh::set_bUseMeshPose(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1a + 0);
    *(uint8_t*)((uintptr_t)this + 0x1a + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_AnimGraphRuntime::AnimNode_CopyPoseFromMesh::get_RootBoneToCopy() {
    return (void*)((uintptr_t)this + 0x1c);
}
_Script_CoreUObject::Class* _Script_AnimGraphRuntime::AnimNode_CopyPoseFromMesh::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AnimGraphRuntime.AnimNode_CopyPoseFromMesh");
    return result;
}
