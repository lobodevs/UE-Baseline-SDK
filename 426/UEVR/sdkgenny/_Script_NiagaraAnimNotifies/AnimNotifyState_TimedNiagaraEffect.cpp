#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimNotifyState.hpp"
#include "..\_Script_Niagara\NiagaraSystem.hpp"
#include "AnimNotifyState_TimedNiagaraEffect.hpp"
_Script_Niagara::NiagaraSystem*& _Script_NiagaraAnimNotifies::AnimNotifyState_TimedNiagaraEffect::get_Template() {
    return *(_Script_Niagara::NiagaraSystem**)((uintptr_t)this + 0x30);
}
_Script_CoreUObject::Class* _Script_NiagaraAnimNotifies::AnimNotifyState_TimedNiagaraEffect::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/NiagaraAnimNotifies.AnimNotifyState_TimedNiagaraEffect");
    return result;
}
void* _Script_NiagaraAnimNotifies::AnimNotifyState_TimedNiagaraEffect::get_SocketName() {
    return (void*)((uintptr_t)this + 0x38);
}
void* _Script_NiagaraAnimNotifies::AnimNotifyState_TimedNiagaraEffect::get_LocationOffset() {
    return (void*)((uintptr_t)this + 0x40);
}
void* _Script_NiagaraAnimNotifies::AnimNotifyState_TimedNiagaraEffect::get_RotationOffset() {
    return (void*)((uintptr_t)this + 0x4c);
}
bool _Script_NiagaraAnimNotifies::AnimNotifyState_TimedNiagaraEffect::get_bDestroyAtEnd() {
    return (*(uint8_t*)((uintptr_t)this + 0x58 + 0)) & 1 != 0;
}
void _Script_NiagaraAnimNotifies::AnimNotifyState_TimedNiagaraEffect::set_bDestroyAtEnd(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x58 + 0);
    *(uint8_t*)((uintptr_t)this + 0x58 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
