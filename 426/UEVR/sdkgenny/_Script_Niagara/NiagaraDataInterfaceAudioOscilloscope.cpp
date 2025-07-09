#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\SoundSubmix.hpp"
#include "NiagaraDataInterface.hpp"
#include "NiagaraDataInterfaceAudioOscilloscope.hpp"
_Script_Engine::SoundSubmix*& _Script_Niagara::NiagaraDataInterfaceAudioOscilloscope::get_Submix() {
    return *(_Script_Engine::SoundSubmix**)((uintptr_t)this + 0x38);
}
int32_t& _Script_Niagara::NiagaraDataInterfaceAudioOscilloscope::get_Resolution() {
    return *(int32_t*)((uintptr_t)this + 0x40);
}
float& _Script_Niagara::NiagaraDataInterfaceAudioOscilloscope::get_ScopeInMilliseconds() {
    return *(float*)((uintptr_t)this + 0x44);
}
_Script_CoreUObject::Class* _Script_Niagara::NiagaraDataInterfaceAudioOscilloscope::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Niagara.NiagaraDataInterfaceAudioOscilloscope");
    return result;
}
