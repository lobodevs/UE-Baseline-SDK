#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\SoundSubmix.hpp"
#include "NiagaraDataInterface.hpp"
#include "NiagaraDataInterfaceAudioSubmix.hpp"
_Script_Engine::SoundSubmix*& _Script_Niagara::NiagaraDataInterfaceAudioSubmix::get_Submix() {
    return *(_Script_Engine::SoundSubmix**)((uintptr_t)this + 0x38);
}
_Script_CoreUObject::Class* _Script_Niagara::NiagaraDataInterfaceAudioSubmix::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Niagara.NiagaraDataInterfaceAudioSubmix");
    return result;
}
