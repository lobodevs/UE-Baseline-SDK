#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Interface.hpp"
#include "NiagaraParticleCallbackHandler.hpp"
#include "NiagaraSystem.hpp"
_Script_CoreUObject::Class* _Script_Niagara::NiagaraParticleCallbackHandler::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Niagara.NiagaraParticleCallbackHandler");
    return result;
}
void _Script_Niagara::NiagaraParticleCallbackHandler::ReceiveParticleData(void*& Data, _Script_Niagara::NiagaraSystem* NiagaraSystem) {
    return;
}
