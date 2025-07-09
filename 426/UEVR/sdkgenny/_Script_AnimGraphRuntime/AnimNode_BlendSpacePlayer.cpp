#include "..\FUObjectArray.hpp"
#include "AnimNode_BlendSpacePlayer.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimNode_AssetPlayerBase.hpp"
#include "..\_Script_Engine\BlendSpaceBase.hpp"
float& _Script_AnimGraphRuntime::AnimNode_BlendSpacePlayer::get_X() {
    return *(float*)((uintptr_t)this + 0x38);
}
bool _Script_AnimGraphRuntime::AnimNode_BlendSpacePlayer::get_bResetPlayTimeWhenBlendSpaceChanges() {
    return (*(uint8_t*)((uintptr_t)this + 0x49 + 0)) & 1 != 0;
}
float& _Script_AnimGraphRuntime::AnimNode_BlendSpacePlayer::get_Y() {
    return *(float*)((uintptr_t)this + 0x3c);
}
bool _Script_AnimGraphRuntime::AnimNode_BlendSpacePlayer::get_bLoop() {
    return (*(uint8_t*)((uintptr_t)this + 0x48 + 0)) & 1 != 0;
}
float& _Script_AnimGraphRuntime::AnimNode_BlendSpacePlayer::get_Z() {
    return *(float*)((uintptr_t)this + 0x40);
}
float& _Script_AnimGraphRuntime::AnimNode_BlendSpacePlayer::get_PlayRate() {
    return *(float*)((uintptr_t)this + 0x44);
}
void _Script_AnimGraphRuntime::AnimNode_BlendSpacePlayer::set_bLoop(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x48 + 0);
    *(uint8_t*)((uintptr_t)this + 0x48 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_AnimGraphRuntime::AnimNode_BlendSpacePlayer::set_bResetPlayTimeWhenBlendSpaceChanges(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x49 + 0);
    *(uint8_t*)((uintptr_t)this + 0x49 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_AnimGraphRuntime::AnimNode_BlendSpacePlayer::get_StartPosition() {
    return *(float*)((uintptr_t)this + 0x4c);
}
_Script_Engine::BlendSpaceBase*& _Script_AnimGraphRuntime::AnimNode_BlendSpacePlayer::get_BlendSpace() {
    return *(_Script_Engine::BlendSpaceBase**)((uintptr_t)this + 0x50);
}
_Script_Engine::BlendSpaceBase*& _Script_AnimGraphRuntime::AnimNode_BlendSpacePlayer::get_PreviousBlendSpace() {
    return *(_Script_Engine::BlendSpaceBase**)((uintptr_t)this + 0xe0);
}
_Script_CoreUObject::Class* _Script_AnimGraphRuntime::AnimNode_BlendSpacePlayer::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AnimGraphRuntime.AnimNode_BlendSpacePlayer");
    return result;
}
