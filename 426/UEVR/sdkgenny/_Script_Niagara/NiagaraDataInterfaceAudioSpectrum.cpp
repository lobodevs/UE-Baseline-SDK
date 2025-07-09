#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NiagaraDataInterfaceAudioSpectrum.hpp"
#include "NiagaraDataInterfaceAudioSubmix.hpp"
int32_t& _Script_Niagara::NiagaraDataInterfaceAudioSpectrum::get_Resolution() {
    return *(int32_t*)((uintptr_t)this + 0x40);
}
float& _Script_Niagara::NiagaraDataInterfaceAudioSpectrum::get_MinimumFrequency() {
    return *(float*)((uintptr_t)this + 0x44);
}
float& _Script_Niagara::NiagaraDataInterfaceAudioSpectrum::get_MaximumFrequency() {
    return *(float*)((uintptr_t)this + 0x48);
}
float& _Script_Niagara::NiagaraDataInterfaceAudioSpectrum::get_NoiseFloorDb() {
    return *(float*)((uintptr_t)this + 0x4c);
}
_Script_CoreUObject::Class* _Script_Niagara::NiagaraDataInterfaceAudioSpectrum::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Niagara.NiagaraDataInterfaceAudioSpectrum");
    return result;
}
