#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "AnimBoneCompressionSettings.hpp"
#include "AnimCurveCompressionSettings.hpp"
#include "AnimSequence.hpp"
#include "AnimSequenceBase.hpp"
int32_t& _Script_Engine::AnimSequence::get_RefFrameIndex() {
    return *(int32_t*)((uintptr_t)this + 0x160);
}
_Script_Engine::AnimCurveCompressionSettings*& _Script_Engine::AnimSequence::get_CurveCompressionSettings() {
    return *(_Script_Engine::AnimCurveCompressionSettings**)((uintptr_t)this + 0xd8);
}
int32_t& _Script_Engine::AnimSequence::get_NumFrames() {
    return *(int32_t*)((uintptr_t)this + 0xa8);
}
_Script_Engine::AnimBoneCompressionSettings*& _Script_Engine::AnimSequence::get_BoneCompressionSettings() {
    return *(_Script_Engine::AnimBoneCompressionSettings**)((uintptr_t)this + 0xd0);
}
void* _Script_Engine::AnimSequence::get_TrackToSkeletonMapTable() {
    return (void*)((uintptr_t)this + 0xb0);
}
void* _Script_Engine::AnimSequence::get_AdditiveAnimType() {
    return (void*)((uintptr_t)this + 0x150);
}
void* _Script_Engine::AnimSequence::get_RefPoseType() {
    return (void*)((uintptr_t)this + 0x151);
}
_Script_Engine::AnimSequence*& _Script_Engine::AnimSequence::get_RefPoseSeq() {
    return *(_Script_Engine::AnimSequence**)((uintptr_t)this + 0x158);
}
void* _Script_Engine::AnimSequence::get_RetargetSource() {
    return (void*)((uintptr_t)this + 0x164);
}
void* _Script_Engine::AnimSequence::get_Interpolation() {
    return (void*)((uintptr_t)this + 0x16c);
}
bool _Script_Engine::AnimSequence::get_bEnableRootMotion() {
    return (*(uint8_t*)((uintptr_t)this + 0x16d + 0)) & 1 != 0;
}
void _Script_Engine::AnimSequence::set_bEnableRootMotion(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x16d + 0);
    *(uint8_t*)((uintptr_t)this + 0x16d + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::AnimSequence::get_RootMotionRootLock() {
    return (void*)((uintptr_t)this + 0x16e);
}
bool _Script_Engine::AnimSequence::get_bForceRootLock() {
    return (*(uint8_t*)((uintptr_t)this + 0x16f + 0)) & 1 != 0;
}
void _Script_Engine::AnimSequence::set_bForceRootLock(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x16f + 0);
    *(uint8_t*)((uintptr_t)this + 0x16f + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::AnimSequence::get_bUseNormalizedRootMotionScale() {
    return (*(uint8_t*)((uintptr_t)this + 0x170 + 0)) & 1 != 0;
}
void _Script_Engine::AnimSequence::set_bUseNormalizedRootMotionScale(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x170 + 0);
    *(uint8_t*)((uintptr_t)this + 0x170 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::AnimSequence::get_bRootMotionSettingsCopiedFromMontage() {
    return (*(uint8_t*)((uintptr_t)this + 0x171 + 0)) & 1 != 0;
}
void _Script_Engine::AnimSequence::set_bRootMotionSettingsCopiedFromMontage(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x171 + 0);
    *(uint8_t*)((uintptr_t)this + 0x171 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::AnimSequence::get_AuthoredSyncMarkers() {
    return (void*)((uintptr_t)this + 0x178);
}
void* _Script_Engine::AnimSequence::get_BakedPerBoneCustomAttributeData() {
    return (void*)((uintptr_t)this + 0x1a0);
}
_Script_CoreUObject::Class* _Script_Engine::AnimSequence::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.AnimSequence");
    return result;
}
