#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_DeveloperSettings\DeveloperSettings.hpp"
#include "AnimationSettings.hpp"
int32_t& _Script_Engine::AnimationSettings::get_CompressCommandletVersion() {
    return *(int32_t*)((uintptr_t)this + 0x38);
}
void* _Script_Engine::AnimationSettings::get_KeyEndEffectorsMatchNameArray() {
    return (void*)((uintptr_t)this + 0x40);
}
bool _Script_Engine::AnimationSettings::get_ForceRecompression() {
    return (*(uint8_t*)((uintptr_t)this + 0x50 + 0)) & 1 != 0;
}
bool _Script_Engine::AnimationSettings::get_bFirstRecompressUsingCurrentOrDefault() {
    return (*(uint8_t*)((uintptr_t)this + 0x52 + 0)) & 1 != 0;
}
void _Script_Engine::AnimationSettings::set_bForceBelowThreshold(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x51 + 0);
    *(uint8_t*)((uintptr_t)this + 0x51 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::AnimationSettings::get_bForceBelowThreshold() {
    return (*(uint8_t*)((uintptr_t)this + 0x51 + 0)) & 1 != 0;
}
void _Script_Engine::AnimationSettings::set_ForceRecompression(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x50 + 0);
    *(uint8_t*)((uintptr_t)this + 0x50 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Engine::AnimationSettings::set_bFirstRecompressUsingCurrentOrDefault(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x52 + 0);
    *(uint8_t*)((uintptr_t)this + 0x52 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::AnimationSettings::get_bRaiseMaxErrorToExisting() {
    return (*(uint8_t*)((uintptr_t)this + 0x53 + 0)) & 1 != 0;
}
void _Script_Engine::AnimationSettings::set_bRaiseMaxErrorToExisting(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x53 + 0);
    *(uint8_t*)((uintptr_t)this + 0x53 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::AnimationSettings::get_bEnablePerformanceLog() {
    return (*(uint8_t*)((uintptr_t)this + 0x54 + 0)) & 1 != 0;
}
void _Script_Engine::AnimationSettings::set_bEnablePerformanceLog(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x54 + 0);
    *(uint8_t*)((uintptr_t)this + 0x54 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::AnimationSettings::get_bStripAnimationDataOnDedicatedServer() {
    return (*(uint8_t*)((uintptr_t)this + 0x55 + 0)) & 1 != 0;
}
void _Script_Engine::AnimationSettings::set_bStripAnimationDataOnDedicatedServer(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x55 + 0);
    *(uint8_t*)((uintptr_t)this + 0x55 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::AnimationSettings::get_bTickAnimationOnSkeletalMeshInit() {
    return (*(uint8_t*)((uintptr_t)this + 0x56 + 0)) & 1 != 0;
}
void _Script_Engine::AnimationSettings::set_bTickAnimationOnSkeletalMeshInit(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x56 + 0);
    *(uint8_t*)((uintptr_t)this + 0x56 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::AnimationSettings::get_BoneCustomAttributesNames() {
    return (void*)((uintptr_t)this + 0x58);
}
void* _Script_Engine::AnimationSettings::get_BoneNamesWithCustomAttributes() {
    return (void*)((uintptr_t)this + 0x68);
}
void* _Script_Engine::AnimationSettings::get_AttributeBlendModes() {
    return (void*)((uintptr_t)this + 0x78);
}
void* _Script_Engine::AnimationSettings::get_DefaultAttributeBlendMode() {
    return (void*)((uintptr_t)this + 0xc8);
}
_Script_CoreUObject::Class* _Script_Engine::AnimationSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.AnimationSettings");
    return result;
}
