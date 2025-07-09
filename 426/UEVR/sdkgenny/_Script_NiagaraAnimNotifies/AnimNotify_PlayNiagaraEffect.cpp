#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimNotify.hpp"
#include "..\_Script_Engine\FXSystemComponent.hpp"
#include "..\_Script_Niagara\NiagaraSystem.hpp"
#include "AnimNotify_PlayNiagaraEffect.hpp"
bool _Script_NiagaraAnimNotifies::AnimNotify_PlayNiagaraEffect::get_bAbsoluteScale() {
    return (*(uint8_t*)((uintptr_t)this + 0x64 + 0)) & 1 != 0;
}
_Script_Niagara::NiagaraSystem*& _Script_NiagaraAnimNotifies::AnimNotify_PlayNiagaraEffect::get_Template() {
    return *(_Script_Niagara::NiagaraSystem**)((uintptr_t)this + 0x38);
}
void _Script_NiagaraAnimNotifies::AnimNotify_PlayNiagaraEffect::set_Attached(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x80 + 0);
    *(uint8_t*)((uintptr_t)this + 0x80 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_NiagaraAnimNotifies::AnimNotify_PlayNiagaraEffect::get_LocationOffset() {
    return (void*)((uintptr_t)this + 0x40);
}
void* _Script_NiagaraAnimNotifies::AnimNotify_PlayNiagaraEffect::get_RotationOffset() {
    return (void*)((uintptr_t)this + 0x4c);
}
void* _Script_NiagaraAnimNotifies::AnimNotify_PlayNiagaraEffect::get_Scale() {
    return (void*)((uintptr_t)this + 0x58);
}
void _Script_NiagaraAnimNotifies::AnimNotify_PlayNiagaraEffect::set_bAbsoluteScale(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x64 + 0);
    *(uint8_t*)((uintptr_t)this + 0x64 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_NiagaraAnimNotifies::AnimNotify_PlayNiagaraEffect::get_Attached() {
    return (*(uint8_t*)((uintptr_t)this + 0x80 + 0)) & 1 != 0;
}
void* _Script_NiagaraAnimNotifies::AnimNotify_PlayNiagaraEffect::get_SocketName() {
    return (void*)((uintptr_t)this + 0x84);
}
_Script_CoreUObject::Class* _Script_NiagaraAnimNotifies::AnimNotify_PlayNiagaraEffect::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/NiagaraAnimNotifies.AnimNotify_PlayNiagaraEffect");
    return result;
}
_Script_Engine::FXSystemComponent* _Script_NiagaraAnimNotifies::AnimNotify_PlayNiagaraEffect::GetSpawnedEffect() {
    return;
}
