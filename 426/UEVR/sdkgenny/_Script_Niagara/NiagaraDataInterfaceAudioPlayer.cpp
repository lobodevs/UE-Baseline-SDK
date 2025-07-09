#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\SoundAttenuation.hpp"
#include "..\_Script_Engine\SoundBase.hpp"
#include "..\_Script_Engine\SoundConcurrency.hpp"
#include "NiagaraDataInterface.hpp"
#include "NiagaraDataInterfaceAudioPlayer.hpp"
_Script_Engine::SoundBase*& _Script_Niagara::NiagaraDataInterfaceAudioPlayer::get_SoundToPlay() {
    return *(_Script_Engine::SoundBase**)((uintptr_t)this + 0x38);
}
_Script_Engine::SoundAttenuation*& _Script_Niagara::NiagaraDataInterfaceAudioPlayer::get_Attenuation() {
    return *(_Script_Engine::SoundAttenuation**)((uintptr_t)this + 0x40);
}
_Script_Engine::SoundConcurrency*& _Script_Niagara::NiagaraDataInterfaceAudioPlayer::get_Concurrency() {
    return *(_Script_Engine::SoundConcurrency**)((uintptr_t)this + 0x48);
}
void* _Script_Niagara::NiagaraDataInterfaceAudioPlayer::get_ParameterNames() {
    return (void*)((uintptr_t)this + 0x50);
}
bool _Script_Niagara::NiagaraDataInterfaceAudioPlayer::get_bLimitPlaysPerTick() {
    return (*(uint8_t*)((uintptr_t)this + 0x60 + 0)) & 1 != 0;
}
int32_t& _Script_Niagara::NiagaraDataInterfaceAudioPlayer::get_MaxPlaysPerTick() {
    return *(int32_t*)((uintptr_t)this + 0x64);
}
void _Script_Niagara::NiagaraDataInterfaceAudioPlayer::set_bLimitPlaysPerTick(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x60 + 0);
    *(uint8_t*)((uintptr_t)this + 0x60 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Niagara::NiagaraDataInterfaceAudioPlayer::get_bStopWhenComponentIsDestroyed() {
    return (*(uint8_t*)((uintptr_t)this + 0x68 + 0)) & 1 != 0;
}
void _Script_Niagara::NiagaraDataInterfaceAudioPlayer::set_bStopWhenComponentIsDestroyed(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x68 + 0);
    *(uint8_t*)((uintptr_t)this + 0x68 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_Niagara::NiagaraDataInterfaceAudioPlayer::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Niagara.NiagaraDataInterfaceAudioPlayer");
    return result;
}
