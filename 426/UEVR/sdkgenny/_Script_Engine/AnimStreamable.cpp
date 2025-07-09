#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "AnimBoneCompressionSettings.hpp"
#include "AnimCurveCompressionSettings.hpp"
#include "AnimSequenceBase.hpp"
#include "AnimStreamable.hpp"
void* _Script_Engine::AnimStreamable::get_RootMotionRootLock() {
    return (void*)((uintptr_t)this + 0xd9);
}
int32_t& _Script_Engine::AnimStreamable::get_NumFrames() {
    return *(int32_t*)((uintptr_t)this + 0xa8);
}
void* _Script_Engine::AnimStreamable::get_Interpolation() {
    return (void*)((uintptr_t)this + 0xac);
}
void* _Script_Engine::AnimStreamable::get_RetargetSource() {
    return (void*)((uintptr_t)this + 0xb0);
}
_Script_Engine::AnimCurveCompressionSettings*& _Script_Engine::AnimStreamable::get_CurveCompressionSettings() {
    return *(_Script_Engine::AnimCurveCompressionSettings**)((uintptr_t)this + 0xd0);
}
_Script_Engine::AnimBoneCompressionSettings*& _Script_Engine::AnimStreamable::get_BoneCompressionSettings() {
    return *(_Script_Engine::AnimBoneCompressionSettings**)((uintptr_t)this + 0xc8);
}
bool _Script_Engine::AnimStreamable::get_bEnableRootMotion() {
    return (*(uint8_t*)((uintptr_t)this + 0xd8 + 0)) & 1 != 0;
}
void _Script_Engine::AnimStreamable::set_bEnableRootMotion(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xd8 + 0);
    *(uint8_t*)((uintptr_t)this + 0xd8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::AnimStreamable::get_bForceRootLock() {
    return (*(uint8_t*)((uintptr_t)this + 0xda + 0)) & 1 != 0;
}
void _Script_Engine::AnimStreamable::set_bForceRootLock(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xda + 0);
    *(uint8_t*)((uintptr_t)this + 0xda + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::AnimStreamable::get_bUseNormalizedRootMotionScale() {
    return (*(uint8_t*)((uintptr_t)this + 0xdb + 0)) & 1 != 0;
}
void _Script_Engine::AnimStreamable::set_bUseNormalizedRootMotionScale(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xdb + 0);
    *(uint8_t*)((uintptr_t)this + 0xdb + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_Engine::AnimStreamable::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.AnimStreamable");
    return result;
}
