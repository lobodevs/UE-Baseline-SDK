#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "AnimNotifyState.hpp"
#include "AnimNotifyState_TimedParticleEffect.hpp"
#include "ParticleSystem.hpp"
_Script_CoreUObject::Class* _Script_Engine::AnimNotifyState_TimedParticleEffect::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.AnimNotifyState_TimedParticleEffect");
    return result;
}
_Script_Engine::ParticleSystem*& _Script_Engine::AnimNotifyState_TimedParticleEffect::get_PSTemplate() {
    return *(_Script_Engine::ParticleSystem**)((uintptr_t)this + 0x30);
}
void* _Script_Engine::AnimNotifyState_TimedParticleEffect::get_SocketName() {
    return (void*)((uintptr_t)this + 0x38);
}
void* _Script_Engine::AnimNotifyState_TimedParticleEffect::get_LocationOffset() {
    return (void*)((uintptr_t)this + 0x40);
}
void* _Script_Engine::AnimNotifyState_TimedParticleEffect::get_RotationOffset() {
    return (void*)((uintptr_t)this + 0x4c);
}
bool _Script_Engine::AnimNotifyState_TimedParticleEffect::get_bDestroyAtEnd() {
    return (*(uint8_t*)((uintptr_t)this + 0x58 + 0)) & 1 != 0;
}
void _Script_Engine::AnimNotifyState_TimedParticleEffect::set_bDestroyAtEnd(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x58 + 0);
    *(uint8_t*)((uintptr_t)this + 0x58 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
