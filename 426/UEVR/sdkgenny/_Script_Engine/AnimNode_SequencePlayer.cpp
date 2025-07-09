#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "AnimNode_AssetPlayerBase.hpp"
#include "AnimNode_SequencePlayer.hpp"
#include "AnimSequenceBase.hpp"
void _Script_Engine::AnimNode_SequencePlayer::set_bLoopAnimation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x7c + 0);
    *(uint8_t*)((uintptr_t)this + 0x7c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_Engine::AnimNode_SequencePlayer::get_StartPosition() {
    return *(float*)((uintptr_t)this + 0x78);
}
_Script_Engine::AnimSequenceBase*& _Script_Engine::AnimNode_SequencePlayer::get_Sequence() {
    return *(_Script_Engine::AnimSequenceBase**)((uintptr_t)this + 0x38);
}
float& _Script_Engine::AnimNode_SequencePlayer::get_PlayRateBasis() {
    return *(float*)((uintptr_t)this + 0x40);
}
float& _Script_Engine::AnimNode_SequencePlayer::get_PlayRate() {
    return *(float*)((uintptr_t)this + 0x44);
}
void* _Script_Engine::AnimNode_SequencePlayer::get_PlayRateScaleBiasClamp() {
    return (void*)((uintptr_t)this + 0x48);
}
_Script_CoreUObject::Class* _Script_Engine::AnimNode_SequencePlayer::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.AnimNode_SequencePlayer");
    return result;
}
bool _Script_Engine::AnimNode_SequencePlayer::get_bLoopAnimation() {
    return (*(uint8_t*)((uintptr_t)this + 0x7c + 0)) & 1 != 0;
}
