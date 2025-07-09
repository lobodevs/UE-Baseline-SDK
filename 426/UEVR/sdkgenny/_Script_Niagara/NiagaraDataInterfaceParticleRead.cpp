#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NiagaraDataInterfaceParticleRead.hpp"
#include "NiagaraDataInterfaceRWBase.hpp"
void* _Script_Niagara::NiagaraDataInterfaceParticleRead::get_EmitterName() {
    return (void*)((uintptr_t)this + 0xd8);
}
_Script_CoreUObject::Class* _Script_Niagara::NiagaraDataInterfaceParticleRead::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Niagara.NiagaraDataInterfaceParticleRead");
    return result;
}
